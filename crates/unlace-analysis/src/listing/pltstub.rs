//! (unlace) `pltstub` — a PLT stub that builds its slot's address in a register
//! references the slot, not the partial sums on the way to it.
//!
//! GNU ld's A32 PLT entry adds the PC and two (three with `--long-plt`) rotated
//! immediates into `ip`, then jumps through the slot that sum names:
//!
//! ```text
//! 0x10310  add ip,pc,#0,12      ; ip = 0x10318          (adr r12,0x10318)
//! 0x10314  add ip,ip,#18,20     ; ip += 0x12000
//! 0x10318  ldr pc,[ip,#0xcf4]!  ; jump through the slot 0x2300c
//! ```
//!
//! Each step lifts to a constant the generic operand rule files when it lands in
//! a mapped section: the PC value (`0x10318`) and, once the GOT is far enough
//! from the stub, the immediate itself (`0x12000`). Neither is a reference; the
//! one address the stub uses is the slot.
//!
//! # The rule
//!
//! A chain is a straight run that starts with an instruction setting one
//! register to a constant, adds constants to that register in one or more
//! further instructions, and ends in an instruction that loads through the
//! register plus a constant and jumps to what it loaded (`BRANCHIND`). Its
//! instructions file no constant [`XrefKind::Data`] row; the last one files the
//! slot as a [`XrefKind::Read`]. The values are only `COPY`/`INT_ADD`/`INT_SUB`
//! of constants, so no other instruction shape matches, and a run that leaves
//! the shape at any step keeps the rows the generic rule gives it.
//!
//! Chains run only inside the image's linker stub sections (`.plt`, `.iplt` for
//! the IFUNC stubs of a static image, and the other names of
//! [`STUB_SECTIONS`]), where the linker puts its stubs; an image without section headers follows none, since
//! nothing says where its stubs are. Code elsewhere built the same way (a
//! hand-written `adr; add; ldr pc` veneer) keeps its rows.
//!
//! The chain is followed in the walk's own order: each instruction is the one
//! the walk decoded, in the mode it chose, and a chain waits for the walk to
//! decode the instruction at its fall-through. The constant rows of a chain
//! still open are held back, and filed as they were when it breaks or when the
//! body drains with it open.

use std::collections::HashMap;
use std::rc::Rc;

use object::{Object, ObjectSection};
use unlace_base::space::{AddrSpace, spacetype};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use super::xrefs::{FullOp, XrefKind, in_range};
use crate::analyzers::entry::fdeinterior::STUB_SECTIONS;

/// The most constant adds a chain may take before its load: one in the
/// standard entry, two with `--long-plt`.
const MAX_ADDS: usize = 2;

/// A constant row held back: `(from, to, instruction text)`.
pub(super) type Held = (u64, u64, String);

/// A chain the walk is following.
struct Chain {
    /// The register the chain builds the address in, and its value.
    reg: VarnodeData,
    value: u64,
    /// The constant adds taken so far.
    adds: usize,
    held: Vec<Held>,
}

/// The chains one body's walk has open, keyed by the VMA of the instruction
/// each expects next.
pub(super) struct PltStubs<'a> {
    data_space: Option<&'a Rc<AddrSpace>>,
    /// The mapped ranges a slot must lie in.
    mapped: &'a [(u64, u64)],
    /// The stub section ranges, sorted: the only place a chain runs.
    plt: Vec<(u64, u64)>,
    open: HashMap<u64, Chain>,
}

impl<'a> PltStubs<'a> {
    pub(super) fn new(
        data_space: Option<&'a Rc<AddrSpace>>,
        mapped: &'a [(u64, u64)],
        mut plt: Vec<(u64, u64)>,
    ) -> Self {
        plt.sort_unstable();
        PltStubs {
            data_space,
            mapped,
            plt,
            open: HashMap::new(),
        }
    }

    /// The matcher for `file`, or `None` when it has no stub section: without
    /// section headers the stubs' extent is unknown, so no chain is followed
    /// and every row stays as the constant scan files it.
    pub(super) fn for_file(
        file: &object::File,
        data_space: Option<&'a Rc<AddrSpace>>,
        mapped: &'a [(u64, u64)],
    ) -> Option<Self> {
        let plt: Vec<(u64, u64)> = file
            .sections()
            .filter(|s| s.name().is_ok_and(|name| STUB_SECTIONS.contains(&name)) && s.size() > 0)
            .map(|s| (s.address(), s.address() + s.size()))
            .collect();
        (!plt.is_empty()).then(|| Self::new(data_space, mapped, plt))
    }

    /// Take the instruction at `vma` (`len` bytes, lifted to `ops`, rendered
    /// `text`) as the walk decodes it: continue the chain that expects it, or
    /// start one. A chain's constant rows leave `drefs` while it is open, and
    /// the load that ends it gets its slot as a `Read`. Returns the rows of
    /// the chains this instruction broke, to file as they were.
    pub(super) fn step(
        &mut self,
        vma: u64,
        len: u32,
        ops: &[FullOp],
        drefs: &mut Vec<(u64, XrefKind)>,
        text: &str,
    ) -> Vec<Held> {
        if !in_range(&self.plt, vma) {
            return self
                .open
                .remove(&vma)
                .map(|chain| chain.held)
                .unwrap_or_default();
        }
        let next = vma.wrapping_add(u64::from(len));
        let mut released = Vec::new();
        if let Some(mut chain) = self.open.remove(&vma) {
            let mut values = Values::holding(self.data_space, &chain);
            if chain.adds > 0
                && let Some(slot) = values
                    .load_jump(ops)
                    .filter(|&slot| in_range(self.mapped, slot))
                {
                    drefs.retain(|&(_, kind)| kind != XrefKind::Data);
                    if !drefs.contains(&(slot, XrefKind::Read)) {
                        drefs.push((slot, XrefKind::Read));
                    }
                    return released;
                }
            if chain.adds < MAX_ADDS
                && let Some(value) = values.add_to(ops, &chain.reg) {
                    chain.value = value;
                    chain.adds += 1;
                    hold(&mut chain.held, vma, drefs, text);
                    released.extend(
                        self.open
                            .insert(next, chain)
                            .into_iter()
                            .flat_map(|c| c.held),
                    );
                    return released;
                }
            released = chain.held;
        }
        if let Some((reg, value)) = Values::new(self.data_space).single_write(ops) {
            let mut chain = Chain {
                reg,
                value,
                adds: 0,
                held: Vec::new(),
            };
            hold(&mut chain.held, vma, drefs, text);
            released.extend(
                self.open
                    .insert(next, chain)
                    .into_iter()
                    .flat_map(|c| c.held),
            );
        }
        released
    }

    /// The rows of every chain still open when the body drains, to file as
    /// they were.
    pub(super) fn drain(&mut self) -> Vec<Held> {
        let mut open: Vec<(u64, Chain)> = self.open.drain().collect();
        open.sort_unstable_by_key(|&(at, _)| at);
        open.into_iter().flat_map(|(_, chain)| chain.held).collect()
    }
}

/// Move the constant rows of the instruction at `vma` out of `drefs`.
fn hold(held: &mut Vec<Held>, vma: u64, drefs: &mut Vec<(u64, XrefKind)>, text: &str) {
    drefs.retain(|&(to, kind)| {
        if kind == XrefKind::Data {
            held.push((vma, to, text.to_string()));
        }
        kind != XrefKind::Data
    });
}

/// Constant values of registers and temporaries in one instruction.
struct Values<'a> {
    data_space: Option<&'a Rc<AddrSpace>>,
    known: HashMap<(usize, u64, u32), u64>,
}

impl<'a> Values<'a> {
    fn new(data_space: Option<&'a Rc<AddrSpace>>) -> Self {
        Values {
            data_space,
            known: HashMap::new(),
        }
    }

    /// The values at the start of an instruction a chain reaches: only its
    /// register's.
    fn holding(data_space: Option<&'a Rc<AddrSpace>>, chain: &Chain) -> Self {
        let mut values = Self::new(data_space);
        if let Some(key) = Self::key(&chain.reg) {
            values.known.insert(key, chain.value);
        }
        values
    }

    fn key(vn: &VarnodeData) -> Option<(usize, u64, u32)> {
        let space = vn.space.as_ref()?;
        Some((Rc::as_ptr(space) as usize, vn.offset, vn.size))
    }

    fn is_register(&self, vn: &VarnodeData) -> bool {
        let Some(space) = &vn.space else { return false };
        space.get_type() == spacetype::IPTR_PROCESSOR
            && !self.data_space.is_some_and(|data| Rc::ptr_eq(space, data))
    }

    fn value(&self, vn: &VarnodeData) -> Option<u64> {
        let space = vn.space.as_ref()?;
        if space.get_type() == spacetype::IPTR_CONSTANT {
            return Some(vn.offset);
        }
        self.known.get(&Self::key(vn)?).copied()
    }

    /// Evaluate one arithmetic op, recording its output.
    fn eval(&mut self, op: &FullOp) -> Option<()> {
        let out = op.out.as_ref()?;
        let mask = if out.size >= 8 {
            u64::MAX
        } else {
            (1u64 << (out.size * 8)) - 1
        };
        let value = match (op.opcode, op.ins.as_slice()) {
            (OpCode::CPUI_COPY, [a]) => self.value(a)?,
            (OpCode::CPUI_INT_ADD, [a, b]) => self.value(a)?.wrapping_add(self.value(b)?),
            (OpCode::CPUI_INT_SUB, [a, b]) => self.value(a)?.wrapping_sub(self.value(b)?),
            _ => return None,
        };
        let key = Self::key(out)?;
        self.known.insert(key, value & mask);
        Some(())
    }

    /// The one register an instruction of only constant arithmetic writes, and
    /// its value, or `None` for any other instruction.
    fn single_write(&mut self, ops: &[FullOp]) -> Option<(VarnodeData, u64)> {
        let mut written = None;
        for op in ops {
            self.eval(op)?;
            let out = op.out.as_ref()?;
            if self.is_register(out) {
                if written.as_ref().is_some_and(|w: &VarnodeData| w != out) {
                    return None;
                }
                written = Some(out.clone());
            }
        }
        let reg = written?;
        let value = self.value(&reg)?;
        Some((reg, value))
    }

    /// Evaluate an instruction that neither touches memory nor branches and
    /// adds a constant to `reg`, returning the sum. A value derived from `reg`
    /// is `reg` itself, a `COPY` of a derived value, or an `INT_ADD`/`INT_SUB`
    /// of exactly one derived value and one constant (the derived value first
    /// for `INT_SUB`); a constant is a value the instruction computes from
    /// constants alone. Every write of `reg` must be derived, and the last one
    /// must have taken at least one constant step, so `mov ip,#K`,
    /// `mov ip,ip` and `add ip,ip,ip` are no add. `add ip,ip,#N` also computes
    /// flag temporaries, which are not followed.
    fn add_to(&mut self, ops: &[FullOp], reg: &VarnodeData) -> Option<u64> {
        let reg_key = Self::key(reg)?;
        let mut derived: HashMap<(usize, u64, u32), bool> = HashMap::from([(reg_key, false)]);
        let mut wrote = false;
        for op in ops {
            if is_memory_or_flow(op.opcode) {
                return None;
            }
            let step = match (op.opcode, op.ins.as_slice()) {
                (OpCode::CPUI_COPY, [a]) => Self::derived(&derived, a),
                (OpCode::CPUI_INT_ADD, [a, b]) => {
                    match (Self::derived(&derived, a), Self::derived(&derived, b)) {
                        (Some(_), Some(_)) | (None, None) => None,
                        (Some(_), None) => self.constant(&derived, b).then_some(true),
                        (None, Some(_)) => self.constant(&derived, a).then_some(true),
                    }
                }
                (OpCode::CPUI_INT_SUB, [a, b]) => Self::derived(&derived, a)
                    .filter(|_| self.constant(&derived, b))
                    .map(|_| true),
                _ => None,
            };
            let evaluated = self.eval(op).is_some();
            let Some(out) = op.out.as_ref().and_then(Self::key) else {
                continue;
            };
            match step {
                Some(added) => derived.insert(out, added),
                None => derived.remove(&out),
            };
            if out == reg_key {
                if !evaluated || step.is_none() {
                    return None;
                }
                wrote = step == Some(true);
            }
        }
        if wrote { self.value(reg) } else { None }
    }

    /// Whether `vn` is derived from the chain register, and if so whether a
    /// constant step was taken on the way.
    fn derived(derived: &HashMap<(usize, u64, u32), bool>, vn: &VarnodeData) -> Option<bool> {
        Self::key(vn).and_then(|key| derived.get(&key).copied())
    }

    /// Whether `vn` is a constant: a constant-space value, or a value this
    /// instruction computed from constants alone.
    fn constant(&self, derived: &HashMap<(usize, u64, u32), bool>, vn: &VarnodeData) -> bool {
        Self::derived(derived, vn).is_none() && self.value(vn).is_some()
    }

    /// The slot whose word an instruction loads from a known address and then
    /// jumps to (`BRANCHIND`), or `None`. A value computed from a loaded word
    /// (`ldr pc` clears the Thumb bit first) stands for that word's slot, so
    /// `ldm ip,{r0,pc}` names `pc`'s word, not `r0`'s. Every op's output loses
    /// the value it held before, so a reloaded register names no address.
    fn load_jump(&mut self, ops: &[FullOp]) -> Option<u64> {
        if ops.last()?.opcode != OpCode::CPUI_BRANCHIND {
            return None;
        }
        let mut loaded: HashMap<(usize, u64, u32), u64> = HashMap::new();
        for op in ops {
            let from = |vn: &VarnodeData| Self::key(vn).and_then(|key| loaded.get(&key).copied());
            let slot = match op.opcode {
                OpCode::CPUI_BRANCHIND => return from(op.ins.first()?),
                OpCode::CPUI_LOAD => op.ins.get(1).and_then(|at| self.value(at)),
                _ => op.ins.iter().find_map(from),
            };
            let Some(out) = op.out.as_ref().and_then(Self::key) else {
                continue;
            };
            match slot {
                Some(slot) => {
                    loaded.insert(out, slot);
                    self.known.remove(&out);
                }
                None => {
                    loaded.remove(&out);
                    if self.eval(op).is_none() {
                        self.known.remove(&out);
                    }
                }
            }
        }
        None
    }
}

fn is_memory_or_flow(opcode: OpCode) -> bool {
    matches!(
        opcode,
        OpCode::CPUI_LOAD
            | OpCode::CPUI_STORE
            | OpCode::CPUI_BRANCH
            | OpCode::CPUI_CBRANCH
            | OpCode::CPUI_BRANCHIND
            | OpCode::CPUI_CALL
            | OpCode::CPUI_CALLIND
            | OpCode::CPUI_CALLOTHER
            | OpCode::CPUI_RETURN
    )
}

#[cfg(test)]
mod tests;
