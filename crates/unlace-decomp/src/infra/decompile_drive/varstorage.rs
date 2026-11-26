//! (unlace) Where each reported variable lives in the machine, and when: the
//! `storage` list of a `decompile --json --storage` variable row
//! (`docs/spec/06-variables-and-merge.md`, "Variable storage").
//!
//! A row's Varnodes are the ones its line evidence came from
//! ([`super::CodeProvenance::apply_to_variables_with_refs`]): the instances of
//! its HighVariable. Three things make a piece of storage: the row's declared
//! home (a parameter's prototype storage, a frame row's slot), the location of
//! an instance that sits in a register, on the stack or in memory, and each
//! home simplification removed while keeping the instance's value
//! ([`Funcdata::unlace_storage_sources`]: the register a stack local was
//! loaded into, the slot a register parameter was spilled to). A location
//! inside a declared home counts as that home.
//!
//! A piece holds the variable on entry to an instruction when both hold:
//! - the instance is live there: written earlier and read there or later, by
//!   its own reads (the reads of an expression it is folded into print later
//!   than the machine made them, and do not count);
//! - the piece has the value on every path there ([`Machine::kept`]). The
//!   value is followed from where it is known to be in the piece, to the next
//!   instruction that writes the piece. A write is an output of the
//!   instruction's own p-code (decoded again here, so a write whose value was
//!   folded away still counts), a surviving op's output, a removed stack
//!   home's store, or, for a register, a call whose prototype does not
//!   preserve it. An address-tied instance needs no such walk: its versions
//!   never overlap.
//!
//! An instruction is the part of one in one basic block: a conditional move is
//! two, and its write counts on the path through the block that makes it. An
//! instruction none of whose p-code survived takes the liveness the
//! instruction before it in its block left. An instruction no basic block
//! covers (padding between two) is in no range.

use std::cell::RefCell;
use std::collections::{BTreeMap, BTreeSet};
use std::ops::Range;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, spacetype};
use unlace_base::types::{int4, uintm};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;
use unlace_sleigh::translate::PcodeEmit;

use super::{VarInfo, parameter_storage, signed_space_offset};
use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::cover::{Cover, CoverBlock, CoverContext, CoverPoint};
use crate::fspec::effect_type;
use crate::funcdata::{Funcdata, FuncdataCoverCtx};
use crate::funcreport::StoragePiece;

/// Fill each row's [`VarInfo::storage`] from the Varnodes `var_refs` binds it
/// to (by creation index, one set per row). Stops early, leaving the remaining
/// rows without storage, once the function's budget is spent.
pub fn attach(
    arch: &Architecture,
    fd: &Funcdata,
    var_refs: &[BTreeSet<u64>],
    variables: &mut [VarInfo],
) {
    let wanted: BTreeSet<u64> = var_refs.iter().flatten().copied().collect();
    let mut by_ref: BTreeMap<u64, VarnodeId> = BTreeMap::new();
    if !wanted.is_empty() {
        for id in fd.vbank().iter_loc() {
            if let Some(varnode) = fd.vbank().get(id) {
                let created = varnode.get_create_index() as u64;
                if wanted.contains(&created) {
                    by_ref.insert(created, id);
                }
            }
        }
    }
    let places = Places { arch, fd };
    let reads = Reads(FuncdataCoverCtx::new(fd));
    let mut machine = None;
    for (variable, refs) in variables.iter_mut().zip(var_refs) {
        if crate::budget::deadline_passed_in("variable storage") {
            return;
        }
        let declared = places.declared(variable);
        // The extents of the instructions each piece holds the variable at.
        let mut pieces: BTreeMap<PieceKey, Vec<(u64, u64)>> = declared
            .iter()
            .map(|home| (places.key(home), Vec::new()))
            .collect();
        let piece =
            |home: &Home| places.key(declared.iter().find(|d| d.contains(home)).unwrap_or(home));
        for &id in refs.iter().filter_map(|created| by_ref.get(created)) {
            let Some(varnode) = fd.vbank().get(id) else {
                continue;
            };
            let own = places.homes(varnode.get_addr(), varnode.get_size());
            let sources = fd.unlace_storage_sources(id);
            if own.is_empty() && sources.is_empty() {
                continue;
            }
            let machine = machine.get_or_insert_with(|| Machine::of(arch, fd));
            let live = machine.live(&reads, id);
            if live.is_empty() {
                continue;
            }
            // A home holds one value of the instance: no walk from a write
            // enters the block whose MULTIEQUAL (`joined`) gives the instance
            // its next one.
            let (written, joined) = machine.written(varnode);
            // Every write of the instance's value, by the home it goes to.
            let mut writes: Vec<(Home, Vec<Start>)> = Vec::new();
            for home in own {
                if varnode.is_addr_tied() {
                    let held = live.iter().flat_map(Range::clone);
                    pieces
                        .entry(piece(&home))
                        .or_default()
                        .extend(held.map(|slot| machine.extent(slot)));
                } else {
                    writes.push((home, written.clone()));
                }
            }
            let defined = varnode
                .get_def()
                .and_then(|op| fd.obank().get(op))
                .map(|op| op.get_addr().get_offset());
            for source in sources {
                for home in places.homes(&source.address, source.size) {
                    let start = match &source.write_address {
                        Some(address) => machine.removed(&home, address.get_offset(), defined),
                        None => Some(Start::Entry),
                    };
                    let Some(start) = start else {
                        continue;
                    };
                    match writes.iter_mut().find(|(known, _)| known.same(&home)) {
                        Some((_, starts)) => starts.push(start),
                        None => writes.push((home, vec![start])),
                    }
                }
            }
            for (home, starts) in writes {
                let held = machine.kept(&home, &starts, &live, joined);
                if !held.is_empty() {
                    pieces
                        .entry(piece(&home))
                        .or_default()
                        .extend(held.iter().map(|&slot| machine.extent(slot)));
                }
            }
        }
        variable.storage = pieces
            .into_iter()
            .map(|((space, offset, size, register), extents)| StoragePiece {
                space,
                register,
                offset,
                size,
                ranges: joined_ranges(extents),
            })
            .collect();
    }
}

/// Extents sorted and joined where they touch.
fn joined_ranges(mut extents: Vec<(u64, u64)>) -> Vec<(u64, u64)> {
    extents.sort_unstable();
    let mut out: Vec<(u64, u64)> = Vec::new();
    for (start, end) in extents {
        match out.last_mut() {
            Some(last) if start <= last.1 => last.1 = last.1.max(end),
            _ => out.push((start, end)),
        }
    }
    out
}

/// A piece's identity, in report order: space name, offset, size, register.
type PieceKey = (String, i128, i64, Option<String>);

/// A run of bytes in a processor space or on the stack.
#[derive(Clone)]
struct Home {
    space: Rc<AddrSpace>,
    offset: u64,
    size: u64,
}

impl Home {
    fn same(&self, other: &Home) -> bool {
        self.space.get_index() == other.space.get_index()
            && (self.offset, self.size) == (other.offset, other.size)
    }

    fn contains(&self, other: &Home) -> bool {
        self.space.get_index() == other.space.get_index()
            && self.offset <= other.offset
            && u128::from(other.offset) + u128::from(other.size)
                <= u128::from(self.offset) + u128::from(self.size)
    }

    fn overlaps(&self, offset: u64, size: u64) -> bool {
        offset.wrapping_sub(self.offset) < self.size || self.offset.wrapping_sub(offset) < size
    }
}

struct Places<'a> {
    arch: &'a Architecture,
    fd: &'a Funcdata,
}

impl Places<'_> {
    /// The machine storage `size` bytes at `address` are: themselves in a
    /// processor space or on the stack, the pieces of a joined location, and
    /// nothing for a constant, a temporary or an annotation.
    fn homes(&self, address: &Address, size: int4) -> Vec<Home> {
        let (Some(space), Some(size)) = (
            address.get_space(),
            u64::try_from(size).ok().filter(|&size| size > 0),
        ) else {
            return Vec::new();
        };
        match space.get_type() {
            spacetype::IPTR_PROCESSOR | spacetype::IPTR_SPACEBASE => vec![Home {
                space: Rc::clone(space),
                offset: address.get_offset(),
                size,
            }],
            spacetype::IPTR_JOIN => {
                let Ok(record) = self.arch.manage().find_join(address.get_offset()) else {
                    return Vec::new();
                };
                (0..record.num_pieces())
                    .filter_map(|i| {
                        let piece = record.get_piece(i);
                        Some(Home {
                            space: Rc::clone(piece.space.as_ref()?),
                            offset: piece.offset,
                            size: u64::from(piece.size).max(1),
                        })
                    })
                    .collect()
            }
            _ => Vec::new(),
        }
    }

    fn key(&self, home: &Home) -> PieceKey {
        let stack = self
            .arch
            .manage()
            .get_stack_space()
            .is_some_and(|stack| stack.get_index() == home.space.get_index());
        let register =
            self.arch
                .translate()
                .get_register_name(&home.space, home.offset, home.size as int4);
        (
            home.space.get_name().to_string(),
            if stack {
                i128::from(signed_space_offset(&home.space, home.offset))
            } else {
                i128::from(home.offset)
            },
            home.size as i64,
            (!register.is_empty()).then(|| register.to_ascii_lowercase()),
        )
    }

    /// The row's declared home: a parameter's prototype storage, a frame row's
    /// slot.
    fn declared(&self, variable: &VarInfo) -> Vec<Home> {
        if variable.is_param {
            return variable
                .arg_index
                .and_then(|index| parameter_storage(self.fd, index))
                .map(|(address, size)| self.homes(&address, size as int4))
                .unwrap_or_default();
        }
        match (
            variable.stack_offset,
            self.fd.get_scope_local(),
            u64::try_from(variable.size),
        ) {
            (Some(offset), Some(scope), Ok(size)) if size > 0 => {
                let space = scope.get_space_id();
                vec![Home {
                    space: Rc::clone(space),
                    offset: space.wrap_offset(offset as u64),
                    size,
                }]
            }
            _ => Vec::new(),
        }
    }
}

/// [`FuncdataCoverCtx`] without the walk into implied outputs.
struct Reads<'a>(FuncdataCoverCtx<'a>);

impl CoverContext for Reads<'_> {
    fn size_in(&self, bl: int4) -> int4 {
        self.0.size_in(bl)
    }
    fn get_in(&self, bl: int4, j: int4) -> int4 {
        self.0.get_in(bl, j)
    }
    fn def_point(&self, vn: VarnodeId) -> (Option<(int4, CoverPoint)>, bool) {
        self.0.def_point(vn)
    }
    fn descend(&self, vn: VarnodeId) -> Vec<OpId> {
        self.0.descend(vn)
    }
    fn ref_point(&self, op: OpId, vn: VarnodeId) -> (int4, CoverPoint, bool, Vec<int4>) {
        self.0.ref_point(op, vn)
    }
    fn out_implied(&self, _op: OpId) -> Option<VarnodeId> {
        None
    }
}

/// One instruction of a basic block: its byte extent, the cover positions of
/// its first and last surviving op, and what its own p-code writes.
struct Slot {
    block: int4,
    start: u64,
    end: u64,
    ops: Option<(uintm, uintm)>,
    written: Written,
}

/// What an instruction's own p-code writes, whether or not the decompiler kept
/// an op for it. A write is a move when it puts another location's value
/// there unchanged: a copy, a load, an extension or a truncation of one.
#[derive(Default)]
struct Written {
    /// Each register or memory location written, as `(space index, offset,
    /// size)`, and whether the write is a move.
    direct: Vec<(int4, u64, u64, bool)>,
    /// A store through a pointer was made (every stack write is one), and one
    /// of them stored a moved value.
    stores: bool,
    stores_move: bool,
    /// The temporaries that hold a moved value.
    moved: BTreeSet<u64>,
}

impl Written {
    /// Whether `value` is a location's own value, not one this instruction
    /// computed.
    fn is_moved(&self, value: &VarnodeData) -> bool {
        match value.space.as_ref().map(|space| space.get_type()) {
            Some(spacetype::IPTR_INTERNAL) => self.moved.contains(&value.offset),
            Some(spacetype::IPTR_PROCESSOR) => {
                let space = value.space.as_ref().map(|space| space.get_index());
                let size = u64::from(value.size);
                !self.direct.iter().any(|&(at, offset, written, moved)| {
                    !moved
                        && Some(at) == space
                        && (offset.wrapping_sub(value.offset) < size
                            || value.offset.wrapping_sub(offset) < written)
                })
            }
            _ => false,
        }
    }

    /// Whether the instruction can have written `home`.
    fn reaches(&self, home: &Home) -> bool {
        if home.space.get_type() == spacetype::IPTR_SPACEBASE {
            return self.stores;
        }
        self.last(home).is_some()
    }

    /// Whether the instruction's write of `home` is a move.
    fn moves(&self, home: &Home) -> bool {
        if home.space.get_type() == spacetype::IPTR_SPACEBASE {
            return self.stores_move;
        }
        self.last(home).is_some_and(|moved| moved)
    }

    /// The last write that overlaps a register or memory `home`: is it a move?
    fn last(&self, home: &Home) -> Option<bool> {
        let space = home.space.get_index();
        self.direct
            .iter()
            .rev()
            .find(|&&(at, offset, size, _)| at == space && home.overlaps(offset, size))
            .map(|&(.., moved)| moved)
    }
}

impl PcodeEmit for Written {
    fn dump(
        &mut self,
        _addr: &Address,
        opc: OpCode,
        out: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        let zero = |value: &VarnodeData| {
            value.offset == 0
                && value
                    .space
                    .as_ref()
                    .is_some_and(|space| space.get_type() == spacetype::IPTR_CONSTANT)
        };
        let moved = match (opc, vars) {
            (OpCode::CPUI_LOAD, _) => true,
            (
                OpCode::CPUI_COPY
                | OpCode::CPUI_INT_ZEXT
                | OpCode::CPUI_INT_SEXT
                | OpCode::CPUI_SUBPIECE,
                [value, ..],
            ) => self.is_moved(value),
            (OpCode::CPUI_INT_OR | OpCode::CPUI_INT_XOR | OpCode::CPUI_INT_ADD, [a, b]) => {
                (zero(a) && self.is_moved(b)) || (zero(b) && self.is_moved(a))
            }
            (OpCode::CPUI_INT_SUB, [value, by]) => zero(by) && self.is_moved(value),
            (OpCode::CPUI_STORE, [_, _, value]) => {
                self.stores = true;
                self.stores_move |= self.is_moved(value);
                false
            }
            _ => false,
        };
        let Some(out) = out else {
            return;
        };
        match out.space.as_ref().map(|space| (space.get_type(), space)) {
            Some((spacetype::IPTR_INTERNAL, _)) if moved => {
                self.moved.insert(out.offset);
            }
            Some((spacetype::IPTR_INTERNAL, _)) => {
                self.moved.remove(&out.offset);
            }
            Some((spacetype::IPTR_PROCESSOR, space)) => {
                let write = (space.get_index(), out.offset, u64::from(out.size), moved);
                self.direct.push(write);
            }
            _ => {}
        }
    }
}

/// Where a value is known to sit in a home.
#[derive(Clone, Copy, PartialEq, Eq)]
enum Start {
    /// From the function's entry.
    Entry,
    /// From the top of a basic block (the value a MULTIEQUAL joins).
    Block(int4),
    /// On entry to the instruction of this slot, which leaves the home alone.
    At(usize),
    /// From the end of the instruction of this slot, which puts it there.
    After(usize),
}

/// Slots as sorted, disjoint index runs.
type Runs = Vec<Range<usize>>;

fn in_runs(runs: &Runs, slot: usize) -> bool {
    let at = runs.partition_point(|run| run.end <= slot);
    runs.get(at).is_some_and(|run| run.start <= slot)
}

/// The function as the machine runs it: every instruction of every basic block
/// in execution order, and every write to a register, stack or memory home.
struct Machine<'a> {
    fd: &'a Funcdata,
    slots: Vec<Slot>,
    /// Each basic block's slots, by block index.
    blocks: BTreeMap<int4, Range<usize>>,
    /// Each basic block's successors and predecessors, by block index.
    next: BTreeMap<int4, Vec<int4>>,
    prior: BTreeMap<int4, Vec<int4>>,
    /// The slots of the instruction that starts at an address.
    at: BTreeMap<u64, Vec<usize>>,
    /// Every write, by `(space index, offset)`: its size and slot.
    writes: BTreeMap<(int4, u64), Vec<(u64, usize)>>,
    /// The widest write to each space.
    widest: BTreeMap<int4, u64>,
    /// The call specifications of each slot that calls.
    calls: BTreeMap<usize, Vec<int4>>,
    /// The data space, whose homes a call's prototype says nothing about.
    memory: Option<int4>,
    kills: RefCell<BTreeMap<(int4, u64, u64), Rc<BTreeSet<usize>>>>,
}

impl<'a> Machine<'a> {
    fn of(arch: &Architecture, fd: &'a Funcdata) -> Self {
        let mut machine = Machine {
            fd,
            slots: Vec::new(),
            blocks: BTreeMap::new(),
            next: BTreeMap::new(),
            prior: BTreeMap::new(),
            at: BTreeMap::new(),
            writes: BTreeMap::new(),
            widest: BTreeMap::new(),
            calls: BTreeMap::new(),
            memory: arch
                .manage()
                .get_default_data_space()
                .map(|space| space.get_index()),
            kills: RefCell::default(),
        };
        let graph = fd.bblocks_ref();
        for i in 0..fd.bblocks_get_size() {
            let bl = fd.bblocks_get_block(i);
            let index = fd.block_index_pub(bl);
            // A MULTIEQUAL is no instruction's op: its value is there at the
            // top of the block. An INDIRECT is its call's or store's.
            let mut ops: BTreeMap<u64, (uintm, uintm)> = BTreeMap::new();
            for op in fd.bb_ops_iter(bl) {
                let Some(op) = fd
                    .obank()
                    .get(op)
                    .filter(|op| op.code() != OpCode::CPUI_MULTIEQUAL)
                else {
                    continue;
                };
                let order = op.get_seq_num().get_order();
                ops.entry(op.get_addr().get_offset())
                    .and_modify(|(first, last)| {
                        *first = (*first).min(order);
                        *last = (*last).max(order);
                    })
                    .or_insert((order, order));
            }
            // Each range of the block as instructions, with what they write. An
            // instruction's ops are those at any address inside it: the ops of
            // a delay slot carry the address of the instruction in the slot.
            let runs: Vec<Vec<Slot>> = fd
                .bb_ranges(bl)
                .map(|range| {
                    decode(arch, range.get_space(), range.get_first(), |at| {
                        at <= range.get_last()
                    })
                    .into_iter()
                    .map(|(start, end, written)| Slot {
                        block: index,
                        start,
                        end,
                        ops: ops
                            .range(start..end)
                            .map(|(_, &ops)| ops)
                            .reduce(|a, b| (a.0.min(b.0), a.1.max(b.1))),
                        written,
                    })
                    .collect()
                })
                .collect();
            // A block spliced from several ranges runs them in op order. A range
            // none of whose p-code survived goes before the one after it in
            // address order: the two are split by an instruction without p-code.
            let mut order: Vec<uintm> = runs
                .iter()
                .map(|run| {
                    run.iter()
                        .find_map(|slot| slot.ops)
                        .map_or(uintm::MAX, |ops| ops.0)
                })
                .collect();
            for i in (1..order.len()).rev() {
                order[i - 1] = order[i - 1].min(order[i]);
            }
            let mut runs: Vec<(uintm, Vec<Slot>)> = order.into_iter().zip(runs).collect();
            runs.sort_by_key(|(order, run)| (*order, run.first().map(|slot| slot.start)));
            let mut runs: Vec<Vec<Slot>> = runs.into_iter().map(|(_, run)| run).collect();
            // Instructions without p-code between the function's entry and its
            // first op (an `endbr64`) run before the entry block's first one.
            let entry = fd.get_address();
            if index == 0
                && let Some(first) = runs.first().and_then(|run| run.first())
                && let Some(space) = entry.get_space()
                && entry.get_offset() < first.start
            {
                let stop = first.start;
                let lead = decode(arch, space, entry.get_offset(), |at| at < stop);
                if lead.last().is_some_and(|&(_, end, _)| end == stop) {
                    let lead = lead.into_iter().map(|(start, end, written)| Slot {
                        block: index,
                        start,
                        end,
                        ops: None,
                        written,
                    });
                    runs.insert(0, lead.collect());
                }
            }
            let first = machine.slots.len();
            for slot in runs.into_iter().flatten() {
                let at = machine.slots.len();
                machine.at.entry(slot.start).or_default().push(at);
                for &(space, offset, size, _) in &slot.written.direct {
                    machine.write(space, offset, size, at);
                }
                machine.slots.push(slot);
            }
            machine.blocks.insert(index, first..machine.slots.len());
            let block = graph.block(bl);
            machine.next.insert(
                index,
                (0..block.size_out())
                    .map(|j| fd.block_index_pub(block.get_out(j)))
                    .collect(),
            );
            machine.prior.insert(
                index,
                (0..block.size_in())
                    .map(|j| fd.block_index_pub(block.get_in(j)))
                    .collect(),
            );
        }
        machine.index_writes(arch);
        machine
    }

    fn write(&mut self, space: int4, offset: u64, size: u64, slot: usize) {
        self.writes
            .entry((space, offset))
            .or_default()
            .push((size, slot));
        let widest = self.widest.entry(space).or_default();
        *widest = (*widest).max(size);
    }

    /// The writes the instructions' own p-code does not show. A surviving op's
    /// output is one (a stack location is written through a pointer and named
    /// only by heritage; an injected body writes registers no instruction
    /// does), and so is a stack or memory home simplification removed, at an
    /// instruction that can have written it.
    fn index_writes(&mut self, arch: &Architecture) {
        let fd = self.fd;
        let places = Places { arch, fd };
        for i in 0..fd.num_calls() {
            let Some(op) = fd.obank().get(fd.get_call_specs(i).get_op()) else {
                continue;
            };
            for slot in self.slots_at(op.get_addr().get_offset()).to_vec() {
                self.calls.entry(slot).or_default().push(i);
            }
        }
        let mut found: Vec<(Home, usize)> = Vec::new();
        for (_, id) in fd.obank().iter_all() {
            let Some(op) = fd.obank().get(id) else {
                continue;
            };
            let Some(block) = op.get_parent().map(|parent| fd.block_index_pub(parent)) else {
                continue;
            };
            if op.code() == OpCode::CPUI_MULTIEQUAL {
                continue;
            }
            if let Some(out) = op.get_out().and_then(|out| fd.vbank().get(out)) {
                for home in places.homes(out.get_addr(), out.get_size()) {
                    let slots = self.slots_at(op.get_addr().get_offset()).iter();
                    found.extend(
                        slots
                            .filter(|&&slot| self.slots[slot].block == block)
                            .map(|&slot| (home.clone(), slot)),
                    );
                }
            }
        }
        for id in fd.vbank().iter_loc() {
            for source in fd.unlace_storage_sources(id) {
                let Some(at) = &source.write_address else {
                    continue;
                };
                for home in places.homes(&source.address, source.size) {
                    if home.space.get_type() == spacetype::IPTR_PROCESSOR
                        && Some(home.space.get_index()) != self.memory
                    {
                        continue;
                    }
                    let slots = self.slots_at(at.get_offset()).iter();
                    found.extend(
                        slots
                            .filter(|&&slot| self.wrote(slot, &home))
                            .map(|&slot| (home.clone(), slot)),
                    );
                }
            }
        }
        for (home, slot) in found {
            self.write(home.space.get_index(), home.offset, home.size, slot);
        }
    }

    /// Whether the instruction of `slot` can have written `home` itself: a
    /// call's own store is its return address.
    fn wrote(&self, slot: usize, home: &Home) -> bool {
        !self.calls.contains_key(&slot) && self.slots[slot].written.reaches(home)
    }

    /// The slots of the instruction `address` lies in.
    fn slots_at(&self, address: u64) -> &[usize] {
        self.at
            .range(..=address)
            .next_back()
            .map(|(_, slots)| slots.as_slice())
            .filter(|slots| {
                slots
                    .first()
                    .is_some_and(|&slot| address < self.slots[slot].end)
            })
            .unwrap_or_default()
    }

    fn extent(&self, slot: usize) -> (u64, u64) {
        (self.slots[slot].start, self.slots[slot].end)
    }

    /// The slots of the instructions `vn` is live on entry to.
    fn live(&self, reads: &Reads, vn: VarnodeId) -> Runs {
        let mut cover = Cover::new();
        cover.rebuild(reads, vn);
        let (def, _) = reads.def_point(vn);
        let mut out: Runs = Vec::new();
        for (bl, block) in cover.iter() {
            let Some(slots) = self.blocks.get(&bl) else {
                continue;
            };
            let defined = def
                .filter(|(at, _)| *at == bl)
                .map(|(_, point)| point.get_uindex());
            let entering =
                |first: uintm| holds(block, first) && defined.is_none_or(|def| def < first);
            let mut left = None;
            for i in slots.clone() {
                let live = match self.slots[i].ops {
                    Some((first, last)) => {
                        left = Some(
                            holds(block, last)
                                && block.get_stop().map(CoverPoint::get_uindex) != Some(last),
                        );
                        entering(first)
                    }
                    None => left.unwrap_or_else(|| {
                        match self.slots[i..slots.end].iter().find_map(|slot| slot.ops) {
                            Some((first, _)) => entering(first),
                            None => holds(block, 1),
                        }
                    }),
                };
                if live {
                    match out.last_mut() {
                        Some(run) if run.end == i => run.end = i + 1,
                        _ => out.push(i..i + 1),
                    }
                }
            }
        }
        out.sort_unstable_by_key(|run| run.start);
        out
    }

    /// Where `varnode`'s own location gets its value, and the block whose
    /// MULTIEQUAL defines it when one does.
    fn written(&self, varnode: &crate::varnode::Varnode) -> (Vec<Start>, Option<int4>) {
        let Some(op) = varnode.get_def().and_then(|op| self.fd.obank().get(op)) else {
            return (vec![Start::Entry], None);
        };
        let block = op
            .get_parent()
            .map(|parent| self.fd.block_index_pub(parent));
        match (op.code(), block) {
            (OpCode::CPUI_MULTIEQUAL, Some(block)) => (vec![Start::Block(block)], Some(block)),
            _ => {
                let slots = self.slots_at(op.get_addr().get_offset()).iter();
                let starts = slots
                    .filter(|&&slot| Some(self.slots[slot].block) == block)
                    .map(|&slot| Start::After(slot));
                (starts.collect(), None)
            }
        }
    }

    /// Where the value of a removed home is known to sit in it. Its record has
    /// only an address: of the op that defined the Varnode that was there.
    /// - The instruction there writes the home: the value is in it afterwards
    ///   if the write is a move, or if the instruction is the one that
    ///   computes the instance (at `defined`). A record of an equal value some
    ///   other computation left there is not followed.
    /// - It is a call that does not preserve the home: the value is the call's
    ///   result, there afterwards.
    /// - Otherwise the op was a marker or a copy the decompiler made, and the
    ///   home holds the value on entry.
    ///
    /// An instruction in several blocks (a conditional move) leaves this open.
    fn removed(&self, home: &Home, address: u64, defined: Option<u64>) -> Option<Start> {
        let &[slot] = self.slots_at(address) else {
            return None;
        };
        if self.wrote(slot, home) {
            let own = defined.is_some_and(|defined| self.slots_at(defined) == [slot]);
            let moved = self.slots[slot].written.moves(home);
            return (own || moved).then_some(Start::After(slot));
        }
        Some(if self.kills(home).contains(&slot) {
            Start::After(slot)
        } else {
            Start::At(slot)
        })
    }

    /// The slots of `live` on entry to which `home` holds the value, whatever
    /// path led to them. `starts` say where it is known to:
    /// - from there it is followed forward until `home` is written again,
    ///   without entering the block `barrier` from another one, and a slot
    ///   reached that way stays only if no other path reaches it without the
    ///   value;
    /// - from a slot `home` is known to hold it on entry to ([`Start::At`]), it
    ///   is followed backward as well, through the instructions that leave
    ///   `home` alone, up to the top of `barrier`.
    fn kept(
        &self,
        home: &Home,
        starts: &[Start],
        live: &Runs,
        barrier: Option<int4>,
    ) -> BTreeSet<usize> {
        let kills = self.kills(home);
        let mut tops = Vec::new();
        let mut known = Vec::new();
        let mut entered = Vec::new();
        let mut gens = BTreeSet::new();
        for start in starts {
            match *start {
                Start::Entry => self.first(0, None, &mut entered),
                Start::Block(block) => self.first(block, None, &mut tops),
                Start::At(slot) => known.push(slot),
                Start::After(slot) => {
                    gens.insert(slot);
                }
            }
        }
        // Slots the value is in `home` on entry to, without question.
        let mut given: BTreeSet<usize> = tops.into_iter().collect();
        let mut before = Vec::new();
        while let Some(slot) = known.pop() {
            if !in_runs(live, slot) || !given.insert(slot) {
                continue;
            }
            let block = self.slots[slot].block;
            if Some(block) == barrier && self.blocks.get(&block).map(|s| s.start) == Some(slot) {
                continue;
            }
            before.clear();
            self.before(slot, &mut before);
            known.extend(before.iter().filter(|prior| !kills.contains(prior)));
        }
        let mut work: Vec<usize> = given.iter().chain(&entered).copied().collect();
        for &slot in &gens {
            self.after(slot, barrier, &mut work);
        }
        let mut out = BTreeSet::new();
        while let Some(slot) = work.pop() {
            if in_runs(live, slot)
                && out.insert(slot)
                && (gens.contains(&slot) || !kills.contains(&slot))
            {
                self.after(slot, barrier, &mut work);
            }
        }
        // Drop what another path reaches without the value: a slot stays only
        // while every instruction before it either puts the value in `home` or
        // had it on entry and left it alone.
        let mut work: Vec<usize> = out.iter().copied().collect();
        while let Some(slot) = work.pop() {
            if !out.contains(&slot) || given.contains(&slot) {
                continue;
            }
            before.clear();
            self.before(slot, &mut before);
            let kept = (entered.contains(&slot) || !before.is_empty())
                && before.iter().all(|prior| {
                    gens.contains(prior) || (out.contains(prior) && !kills.contains(prior))
                });
            if !kept {
                out.remove(&slot);
                self.after(slot, None, &mut work);
            }
        }
        out
    }

    /// The slots whose instruction writes `home`.
    fn kills(&self, home: &Home) -> Rc<BTreeSet<usize>> {
        let space = home.space.get_index();
        let key = (space, home.offset, home.size);
        if let Some(known) = self.kills.borrow().get(&key) {
            return Rc::clone(known);
        }
        let reach = self
            .widest
            .get(&space)
            .map_or(0, |widest| widest.saturating_sub(1));
        let from = (space, home.offset.saturating_sub(reach));
        let to = (space, home.offset.saturating_add(home.size - 1));
        let mut kills: BTreeSet<usize> = self
            .writes
            .range(from..=to)
            .flat_map(|(&(_, offset), writes)| {
                writes
                    .iter()
                    .filter(move |&&(size, _)| home.overlaps(offset, size))
                    .map(|&(_, slot)| slot)
            })
            .collect();
        if home.space.get_type() == spacetype::IPTR_PROCESSOR && Some(space) != self.memory {
            let address = Address::new(Rc::clone(&home.space), home.offset);
            let clobbers = |call: &int4| {
                self.fd
                    .get_call_specs(*call)
                    .has_effect_translate(&address, home.size as int4)
                    != effect_type::UNAFFECTED
            };
            kills.extend(
                self.calls
                    .iter()
                    .filter(|(_, calls)| calls.iter().any(clobbers))
                    .map(|(&slot, _)| slot),
            );
        }
        let kills = Rc::new(kills);
        self.kills.borrow_mut().insert(key, Rc::clone(&kills));
        kills
    }

    /// Push the slots control reaches at the top of `block`, through blocks
    /// without instructions but not into `barrier`.
    fn first(&self, block: int4, barrier: Option<int4>, out: &mut Vec<usize>) {
        if let Some(slots) = self.blocks.get(&block).filter(|slots| !slots.is_empty()) {
            out.push(slots.start);
            return;
        }
        let mut seen = BTreeSet::from([block]);
        let mut work: Vec<int4> = self.next.get(&block).cloned().unwrap_or_default();
        while let Some(block) = work.pop() {
            if Some(block) == barrier || !seen.insert(block) {
                continue;
            }
            match self.blocks.get(&block) {
                Some(slots) if !slots.is_empty() => out.push(slots.start),
                _ => work.extend(self.next.get(&block).into_iter().flatten()),
            }
        }
    }

    /// Push the slots control reaches from the end of `slot`, not entering
    /// `barrier`.
    fn after(&self, slot: usize, barrier: Option<int4>, out: &mut Vec<usize>) {
        let block = self.slots[slot].block;
        if self
            .blocks
            .get(&block)
            .is_some_and(|slots| slot + 1 < slots.end)
        {
            out.push(slot + 1);
            return;
        }
        for &next in self.next.get(&block).into_iter().flatten() {
            if Some(next) != barrier {
                self.first(next, barrier, out);
            }
        }
    }

    /// Push the slots control can come from on entry to `slot`: none at the
    /// function's entry.
    fn before(&self, slot: usize, out: &mut Vec<usize>) {
        let block = self.slots[slot].block;
        if self
            .blocks
            .get(&block)
            .is_some_and(|slots| slots.start < slot)
        {
            out.push(slot - 1);
            return;
        }
        let mut seen = BTreeSet::new();
        let mut work: Vec<int4> = self.prior.get(&block).cloned().unwrap_or_default();
        while let Some(block) = work.pop() {
            if !seen.insert(block) {
                continue;
            }
            match self.blocks.get(&block) {
                Some(slots) if !slots.is_empty() => out.push(slots.end - 1),
                _ => work.extend(self.prior.get(&block).into_iter().flatten()),
            }
        }
    }
}

/// The instructions from `at` while `more(at)`: each one's extent and what its
/// p-code writes. Stops at the first address that does not decode.
fn decode(
    arch: &Architecture,
    space: &Rc<AddrSpace>,
    mut at: u64,
    more: impl Fn(u64) -> bool,
) -> Vec<(u64, u64, Written)> {
    let mut out = Vec::new();
    while more(at) {
        let address = Address::new(Rc::clone(space), at);
        let mut written = Written::default();
        let Some(end) = arch
            .translate()
            .one_instruction(&mut written, &address)
            .or_else(|_| arch.translate().instruction_length(&address))
            .ok()
            .and_then(|length| at.checked_add(u64::try_from(length).ok()?))
            .filter(|&end| end > at)
        else {
            break;
        };
        out.push((at, end, written));
        at = end;
    }
    out
}

fn holds(block: &CoverBlock, order: uintm) -> bool {
    block.contain(Some(CoverPoint::Op {
        uindex: order,
        multiequal: false,
    }))
}
