//! 64-bit demotion: narrow 8-byte values whose upper half no consumer reads.
//!
//! x86-64 writes a 32-bit result by zero-extending it into the full 64-bit
//! register, so the lifter emits `rax = INT_ZEXT(eax_result)` and every later
//! 32-bit read becomes `SUBPIECE(rax, 0)`. Left alone, those reads print as
//! `(_DWORD)v3` casts on `_QWORD` variables. Hex-Rays narrows such values
//! before building lvars (`sub_B04B0`); this pass is the same idea on SSA.
//!
//! The pass runs a demanded-bits analysis with a two-point lattice per SSA
//! value: "only the low 32 bits are demanded" or "the full value is". A value
//! is narrowed to 4 bytes when
//!
//! * its definition can produce the low half on its own: `INT_ZEXT`/`INT_SEXT`
//!   of a value of at most 4 bytes, `COPY`, modular arithmetic and bitwise ops
//!   (`INT_ADD`, `INT_SUB`, `INT_MULT`, `INT_AND`, `INT_OR`, `INT_XOR`,
//!   `INT_NEGATE`, `INT_2COMP`, `INT_LEFT` by a constant below 32), `SELECT`,
//!   or a `MULTIEQUAL` whose inputs are all narrowed, and
//! * every use reads only the low half: `SUBPIECE(v, 0)` of at most 4 bytes, a
//!   narrow read of the varnode, or an operand of another narrowed value.
//!
//! The stack pointer and values with no uses stay wide.
//!
//! Any other use demands the full width: calls, returns, loads and stores
//! (address or 8-byte value), comparisons, right shifts, division, and so on.
//! x86-64 calls and returns also read argument and return registers without
//! naming them in the IR, so a forward reaching-definitions scan pins every
//! register value that may be live in those registers at such a point.
//! The printer shares one C variable per register where SSA links are
//! incomplete, so a location whose phis miss a predecessor, or whose reads
//! (phi inputs included) can see several values, keeps every value wide.
//!
//! The rewrite gives each narrowed value a fresh SSA identity on the 4-byte
//! varnode at the same location, turns `INT_ZEXT` of a 4-byte value into
//! `COPY`, turns `SUBPIECE(v, 0)` of 4 bytes into `COPY`, and truncates
//! constant operands.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::stack::StackSpec;
use unlace_ir::{ArchId, BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError, PassPhase};

const WIDE: u8 = 8;
const NARROW: u8 = 4;

/// x86-64 registers a call may read as arguments or clobber: `rax`, `rcx`,
/// `rdx`, `rsi`, `rdi`, `r8`-`r11` (the SysV and Microsoft x64 sets combined).
const X86_64_CALL_REGS: &[u64] = &[0, 8, 16, 48, 56, 64, 72, 80, 88];
/// x86-64 return-value registers: `rax`, `rdx`.
const X86_64_RETURN_REGS: &[u64] = &[0, 16];

/// 64-bit demotion: narrows 8-byte values to 4 bytes when the upper half is
/// never demanded.
pub struct SixtyFourBitDemotePass;

impl Pass for SixtyFourBitDemotePass {
    fn name(&self) -> &str {
        "SixtyFourBitDemotePass"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::GlobalOpt
    }

    fn min_maturity(&self) -> unlace_ir::Maturity {
        unlace_ir::Maturity::PreOptimized
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // Only x86-64 has the implicit-register model below; a predicated
        // instruction also reads its output's previous value implicitly.
        if func.arch != ArchId::X86_64
            || func
                .function
                .blocks
                .values()
                .flat_map(|b| &b.insns)
                .any(|insn| insn.guard.is_some())
        {
            return Ok(false);
        }
        let graph = ValueGraph::build(func);
        let candidates = candidates(func, &graph);
        let tracked = candidates.iter().map(|sv| location(&sv.base)).collect();
        let facts = location_facts(func, &tracked);
        tracing::debug!(
            target: "unlace::demote64",
            "func={} candidates={} pinned={} unreliable={:?}",
            func.function.name,
            candidates.len(),
            facts.pinned.len(),
            facts.unreliable
        );
        let narrowed = select_narrowed(func, &graph, &facts, candidates);
        if narrowed.is_empty() {
            return Ok(false);
        }
        let renamed = rewrite(func, &graph, &narrowed);
        tracing::debug!(
            target: "unlace::demote64",
            "func={} narrowed={}",
            func.function.name,
            renamed.len()
        );
        Ok(true)
    }
}

/// Where an SSA value is defined.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
enum Site {
    Insn(BlockId, usize),
    /// `(block, phi index)` into `phi_map[block]`.
    Phi(BlockId, usize),
}

/// One read of an SSA value.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
enum Use {
    Insn {
        bid: BlockId,
        idx: usize,
        slot: usize,
    },
    /// `phi_map[bid][phi].inputs[input]`.
    Phi {
        bid: BlockId,
        phi: usize,
        input: usize,
    },
}

/// Def/use index over the SSA function.
struct ValueGraph {
    defs: BTreeMap<SsaVarnode, Site>,
    uses: BTreeMap<SsaVarnode, Vec<Use>>,
    /// Locations of non-constant inputs with no SSA binding. A later
    /// consumer resolves those by location, so values there stay wide.
    unbound_reads: BTreeSet<Location>,
}

impl ValueGraph {
    fn build(func: &SsaFunction) -> Self {
        let mut defs = BTreeMap::new();
        let mut uses: BTreeMap<SsaVarnode, Vec<Use>> = BTreeMap::new();
        let mut unbound_reads = BTreeSet::new();
        for (&bid, phis) in &func.phi_map {
            for (phi_idx, phi) in phis.iter().enumerate() {
                defs.insert(phi.output, Site::Phi(bid, phi_idx));
                for (input, (_, sv)) in phi.inputs.iter().enumerate() {
                    uses.entry(*sv).or_default().push(Use::Phi {
                        bid,
                        phi: phi_idx,
                        input,
                    });
                }
            }
        }
        for (&bid, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                    defs.insert(sv, Site::Insn(bid, idx));
                }
                for (slot, raw) in insn.inputs.iter().enumerate() {
                    if raw.space == SpaceId::Const {
                        continue;
                    }
                    match func.var_map.get(&(bid, idx, VarnodeSlot::Input(slot))) {
                        Some(&sv) => uses
                            .entry(sv)
                            .or_default()
                            .push(Use::Insn { bid, idx, slot }),
                        None => {
                            unbound_reads.insert(location(raw));
                        }
                    }
                }
            }
        }
        Self {
            defs,
            uses,
            unbound_reads,
        }
    }

    fn uses(&self, sv: SsaVarnode) -> &[Use] {
        self.uses.get(&sv).map_or(&[], Vec::as_slice)
    }
}

fn insn_at(func: &SsaFunction, bid: BlockId, idx: usize) -> &IrInsn {
    &func.function.blocks[&bid].insns[idx]
}

fn input_sv(func: &SsaFunction, bid: BlockId, idx: usize, slot: usize) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, idx, VarnodeSlot::Input(slot)))
        .copied()
}

/// Operand slots of `insn` whose low 32 bits alone determine the low 32 bits
/// of its output. Empty for ops that are not narrowable.
fn low_half_operands(insn: &IrInsn) -> &'static [usize] {
    match insn.op {
        IrOp::Copy | IrOp::IntNegate | IrOp::Int2comp if insn.inputs.len() == 1 => &[0],
        IrOp::IntAdd | IrOp::IntSub | IrOp::IntMult | IrOp::IntAnd | IrOp::IntOr | IrOp::IntXor
            if insn.inputs.len() == 2 =>
        {
            &[0, 1]
        }
        // A 64-bit shift by 32 or more leaves a zero low half, which a 32-bit
        // shift does not reproduce.
        IrOp::IntLeft
            if insn.inputs.len() == 2
                && insn.inputs[1].space == SpaceId::Const
                && insn.inputs[1].offset < 32 =>
        {
            &[0]
        }
        IrOp::Select if insn.inputs.len() == 3 => &[1, 2],
        _ => &[],
    }
}

/// `INT_ZEXT`/`INT_SEXT` from at most 4 bytes: the low half is the operand.
fn is_narrow_extension(insn: &IrInsn) -> bool {
    matches!(insn.op, IrOp::IntZext | IrOp::IntSext)
        && insn.inputs.len() == 1
        && insn.inputs[0].size <= NARROW
}

/// Whether `insn` defines `sv` in a form that has a 4-byte equivalent.
fn narrowable_def(insn: &IrInsn, sv: SsaVarnode) -> bool {
    insn.output == Some(sv.base)
        && (is_narrow_extension(insn) || !low_half_operands(insn).is_empty())
}

/// Whether input `slot` of `insn` reads only the low 4 bytes of `sv`.
fn is_low_read(insn: &IrInsn, slot: usize, sv: SsaVarnode) -> bool {
    let raw = insn.inputs[slot];
    if raw.size < sv.base.size {
        // A sub-register such as `bh` sits at a nonzero byte offset.
        return raw.offset >= sv.base.offset
            && raw.offset + u64::from(raw.size) <= sv.base.offset + u64::from(NARROW);
    }
    insn.op == IrOp::Subpiece
        && slot == 0
        && insn
            .inputs
            .get(1)
            .is_some_and(|off| off.space == SpaceId::Const && off.offset == 0)
        && insn.output.is_some_and(|out| out.size <= NARROW)
}

/// 8-byte register and temporary values whose definition has a 4-byte form.
/// The stack pointer stays wide; the printer hides its arithmetic only at full
/// width.
fn candidates(func: &SsaFunction, graph: &ValueGraph) -> BTreeSet<SsaVarnode> {
    let frame = StackSpec::for_arch(func.arch);
    graph
        .defs
        .iter()
        .filter(|&(sv, site)| {
            sv.base.size == WIDE
                && matches!(sv.base.space, SpaceId::Register | SpaceId::Unique)
                && !frame.is_some_and(|spec| spec.is_sp(&sv.base))
                // Dead values gain nothing and print as stray declarations.
                && !graph.uses(*sv).is_empty()
                && !graph.unbound_reads.contains(&location(&sv.base))
                && match *site {
                    Site::Insn(bid, idx) => narrowable_def(insn_at(func, bid, idx), *sv),
                    Site::Phi(..) => true,
                }
        })
        .map(|(sv, _)| *sv)
        .collect()
}

/// Pick the values to narrow: the greatest subset of `candidates` closed
/// under the def and use conditions in the module docs.
fn select_narrowed(
    func: &SsaFunction,
    graph: &ValueGraph,
    facts: &LocationFacts,
    candidates: BTreeSet<SsaVarnode>,
) -> BTreeSet<SsaVarnode> {
    let dead_phis = dead_phi_outputs(func, graph, &facts.pinned);
    let set = candidates
        .into_iter()
        .filter(|sv| {
            !facts.pinned.contains(sv)
                && !dead_phis.contains(sv)
                && !facts.unreliable.contains(&location(&sv.base))
        })
        .collect();
    close_narrowed(func, graph, &dead_phis, set)
}

/// Drop values from `set` until every member meets the def and use conditions.
fn close_narrowed(
    func: &SsaFunction,
    graph: &ValueGraph,
    dead_phis: &BTreeSet<SsaVarnode>,
    mut set: BTreeSet<SsaVarnode>,
) -> BTreeSet<SsaVarnode> {
    loop {
        let rejected: Vec<SsaVarnode> = set
            .iter()
            .copied()
            .filter(|&sv| {
                !operands_narrowed(func, graph, &set, sv)
                    || !graph
                        .uses(sv)
                        .iter()
                        .all(|u| use_reads_low_half(func, &set, dead_phis, sv, *u))
            })
            .collect();
        if rejected.is_empty() {
            return set;
        }
        for sv in rejected {
            set.remove(&sv);
        }
    }
}

/// Every operand a narrowed `sv` would read is a constant or also narrowed.
fn operands_narrowed(
    func: &SsaFunction,
    graph: &ValueGraph,
    set: &BTreeSet<SsaVarnode>,
    sv: SsaVarnode,
) -> bool {
    match graph.defs[&sv] {
        Site::Phi(bid, phi) => func.phi_map[&bid][phi]
            .inputs
            .iter()
            .all(|(_, input)| set.contains(input)),
        Site::Insn(bid, idx) => {
            let insn = insn_at(func, bid, idx);
            low_half_operands(insn).iter().all(|&slot| {
                insn.inputs[slot].space == SpaceId::Const
                    || input_sv(func, bid, idx, slot).is_some_and(|input| set.contains(&input))
            })
        }
    }
}

fn use_reads_low_half(
    func: &SsaFunction,
    set: &BTreeSet<SsaVarnode>,
    dead_phis: &BTreeSet<SsaVarnode>,
    sv: SsaVarnode,
    u: Use,
) -> bool {
    match u {
        Use::Phi { bid, phi, .. } => {
            let out = func.phi_map[&bid][phi].output;
            set.contains(&out) || dead_phis.contains(&out)
        }
        Use::Insn { bid, idx, slot } => {
            let insn = insn_at(func, bid, idx);
            if is_low_read(insn, slot, sv) {
                return true;
            }
            low_half_operands(insn).contains(&slot)
                && insn.inputs[slot].size == WIDE
                && func
                    .var_map
                    .get(&(bid, idx, VarnodeSlot::Output))
                    .is_some_and(|out| set.contains(out))
        }
    }
}

/// Phi outputs no real consumer reaches: no instruction reads them, directly
/// or through other phis, and no implicit register read observes them.
fn dead_phi_outputs(
    func: &SsaFunction,
    graph: &ValueGraph,
    pinned: &BTreeSet<SsaVarnode>,
) -> BTreeSet<SsaVarnode> {
    let phi_outputs: BTreeSet<SsaVarnode> = func
        .phi_map
        .values()
        .flatten()
        .map(|phi| phi.output)
        .collect();
    let mut live: BTreeSet<SsaVarnode> = phi_outputs
        .iter()
        .copied()
        .filter(|sv| {
            pinned.contains(sv)
                || graph
                    .unbound_reads
                    .contains(&(sv.base.space, sv.base.offset))
                || graph
                    .uses(*sv)
                    .iter()
                    .any(|u| matches!(u, Use::Insn { .. }))
        })
        .collect();
    let mut work: Vec<SsaVarnode> = live.iter().copied().collect();
    while let Some(sv) = work.pop() {
        let Some(Site::Phi(bid, phi)) = graph.defs.get(&sv) else {
            continue;
        };
        for (_, input) in &func.phi_map[bid][*phi].inputs {
            if phi_outputs.contains(input) && live.insert(*input) {
                work.push(*input);
            }
        }
    }
    phi_outputs.difference(&live).copied().collect()
}

/// A storage location as the printer sees it: every SSA version of one
/// location prints as the same C variable until it is retyped.
type Location = (SpaceId, u64);

fn location(vn: &Varnode) -> Location {
    match vn.space {
        SpaceId::Register => (vn.space, vn.offset - vn.offset % 8),
        _ => (vn.space, vn.offset),
    }
}

/// Facts from a forward scan of which SSA values may occupy each location.
struct LocationFacts {
    /// Values a call, return, or tail jump may read without naming them.
    pinned: BTreeSet<SsaVarnode>,
    /// Locations whose SSA links are incomplete: a phi misses a predecessor,
    /// or a read sees several values with no phi to merge them. The printer
    /// still emits correct C for these by sharing one variable per location,
    /// so their values must keep a single width.
    unreliable: BTreeSet<Location>,
}

/// Scan the locations in `tracked`. A full-width write replaces the values a
/// location may hold; a partial write adds to them, since the rest of the old
/// value stays.
fn location_facts(func: &SsaFunction, tracked: &BTreeSet<Location>) -> LocationFacts {
    type State = BTreeMap<Location, BTreeSet<SsaVarnode>>;

    // Block successor lists are the control flow the structurer and printer
    // follow; `func.cfg` can lag behind CFG edits.
    let mut preds: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for succ in &block.successors {
            preds.entry(*succ).or_default().insert(bid);
        }
    }
    let preds_of = |bid: BlockId| preds.get(&bid).into_iter().flatten().copied();

    let entry_state = |bid: BlockId, exits: &BTreeMap<BlockId, State>| -> State {
        let mut state = State::new();
        if bid != func.function.entry {
            for pred in preds_of(bid) {
                for (loc, values) in exits.get(&pred).into_iter().flatten() {
                    state.entry(*loc).or_default().extend(values);
                }
            }
        }
        for phi in func.phi_map.get(&bid).into_iter().flatten() {
            let loc = location(&phi.output.base);
            if tracked.contains(&loc) {
                state.insert(loc, BTreeSet::from([phi.output]));
            }
        }
        state
    };
    let write = |state: &mut State, bid: BlockId, idx: usize, insn: &IrInsn| {
        if let Some(out) = insn.output
            && tracked.contains(&location(&out))
            && let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output))
        {
            let values = state.entry(location(&out)).or_default();
            if out.size >= WIDE {
                values.clear();
            }
            values.insert(sv);
        }
    };

    let mut exits: BTreeMap<BlockId, State> = BTreeMap::new();
    loop {
        let mut changed = false;
        for (&bid, block) in &func.function.blocks {
            let mut state = entry_state(bid, &exits);
            for (idx, insn) in block.insns.iter().enumerate() {
                write(&mut state, bid, idx, insn);
            }
            if exits.get(&bid) != Some(&state) {
                exits.insert(bid, state);
                changed = true;
            }
        }
        if !changed {
            break;
        }
    }

    let mut facts = LocationFacts {
        pinned: BTreeSet::new(),
        unreliable: BTreeSet::new(),
    };
    for (&bid, block) in &func.function.blocks {
        let preds: BTreeSet<BlockId> = preds_of(bid).collect();
        for phi in func.phi_map.get(&bid).into_iter().flatten() {
            let loc = location(&phi.output.base);
            let inputs: BTreeSet<BlockId> = phi.inputs.iter().map(|(pred, _)| *pred).collect();
            if !tracked.contains(&loc) {
                continue;
            }
            // Each input must be the one value its predecessor leaves there.
            let inputs_reach = phi.inputs.iter().all(|(pred, sv)| {
                exits
                    .get(pred)
                    .and_then(|state| state.get(&loc))
                    .is_some_and(|values| values.len() == 1 && values.contains(sv))
            });
            if inputs != preds || !inputs_reach {
                facts.unreliable.insert(loc);
            }
        }
        let mut state = entry_state(bid, &exits);
        for (idx, insn) in block.insns.iter().enumerate() {
            for slot in 0..insn.inputs.len() {
                if let Some(sv) = input_sv(func, bid, idx, slot)
                    && tracked.contains(&location(&sv.base))
                    && state
                        .get(&location(&sv.base))
                        .is_some_and(|values| values.len() > 1)
                {
                    facts.unreliable.insert(location(&sv.base));
                }
            }
            let read: &[u64] = match insn.op {
                IrOp::Call | IrOp::Callind | IrOp::Callother => X86_64_CALL_REGS,
                IrOp::Return => X86_64_RETURN_REGS,
                // A jump that leaves the function is a tail call.
                IrOp::Branch | IrOp::Branchind if block.successors.is_empty() => X86_64_CALL_REGS,
                _ => &[],
            };
            for &reg in read {
                facts
                    .pinned
                    .extend(state.get(&(SpaceId::Register, reg)).into_iter().flatten());
            }
            write(&mut state, bid, idx, insn);
        }
    }
    facts
}

/// Rewrite the selected values to 4 bytes. Returns the old-to-new SSA map.
fn rewrite(
    func: &mut SsaFunction,
    graph: &ValueGraph,
    narrowed: &BTreeSet<SsaVarnode>,
) -> BTreeMap<SsaVarnode, SsaVarnode> {
    let renamed = fresh_identities(func, narrowed);

    for (&old, &new) in &renamed {
        match graph.defs[&old] {
            Site::Phi(bid, phi) => {
                let phi = &mut func.phi_map.get_mut(&bid).expect("indexed phi block")[phi];
                phi.output = new;
                for (_, input) in &mut phi.inputs {
                    *input = renamed[input];
                }
            }
            Site::Insn(bid, idx) => narrow_def(func, &renamed, bid, idx, new),
        }
    }

    // Low-half reads, including the operand of a narrowed extension.
    for (&old, &new) in &renamed {
        for &u in graph.uses(old) {
            let Use::Insn { bid, idx, slot } = u else {
                continue;
            };
            // `narrow_def` already rebound the operands of narrowed defs.
            if input_sv(func, bid, idx, slot) != Some(new) {
                narrow_read(func, bid, idx, slot, new);
            }
        }
    }

    // Dead phis that read a narrowed value would now mix widths.
    for phis in func.phi_map.values_mut() {
        phis.retain(|phi| {
            !phi.inputs
                .iter()
                .any(|(_, input)| renamed.contains_key(input))
        });
    }

    func.foldable_exprs = std::mem::take(&mut func.foldable_exprs)
        .into_iter()
        .map(|sv| renamed.get(&sv).copied().unwrap_or(sv))
        .collect();
    for old in renamed.keys() {
        func.var_types.remove(old);
        func.composite_var_types.remove(old);
    }
    renamed
}

/// A fresh SSA version on the 4-byte varnode for each narrowed value.
fn fresh_identities(
    func: &SsaFunction,
    narrowed: &BTreeSet<SsaVarnode>,
) -> BTreeMap<SsaVarnode, SsaVarnode> {
    let mut next_version: BTreeMap<Varnode, u32> = BTreeMap::new();
    let all_svs =
        func.var_map
            .values()
            .chain(func.phi_map.values().flatten().flat_map(|phi| {
                std::iter::once(&phi.output).chain(phi.inputs.iter().map(|(_, sv)| sv))
            }));
    for sv in all_svs {
        let next = next_version.entry(sv.base).or_default();
        *next = (*next).max(sv.version + 1);
    }
    narrowed
        .iter()
        .map(|&old| {
            let base = Varnode::new(old.base.space, old.base.offset, NARROW);
            let next = next_version.entry(base).or_default();
            let new = SsaVarnode {
                base,
                version: *next,
            };
            *next += 1;
            (old, new)
        })
        .collect()
}

/// Rewrite the defining instruction of a narrowed value.
fn narrow_def(
    func: &mut SsaFunction,
    renamed: &BTreeMap<SsaVarnode, SsaVarnode>,
    bid: BlockId,
    idx: usize,
    new: SsaVarnode,
) {
    let insn = &func.function.blocks[&bid].insns[idx];
    let operands = low_half_operands(insn);
    let mut inputs = insn.inputs.clone();
    let mut op = insn.op;
    let mut bindings = Vec::new();
    if is_narrow_extension(insn) {
        if inputs[0].size == NARROW {
            op = IrOp::Copy;
        }
    } else {
        for &slot in operands {
            if inputs[slot].space == SpaceId::Const {
                inputs[slot] = Varnode::constant(inputs[slot].offset & 0xffff_ffff, NARROW);
            } else if let Some(old) = input_sv(func, bid, idx, slot) {
                let narrowed = renamed[&old];
                inputs[slot] = narrowed.base;
                bindings.push((slot, narrowed));
            }
        }
    }
    let insn = &mut func
        .function
        .blocks
        .get_mut(&bid)
        .expect("indexed block")
        .insns[idx];
    insn.op = op;
    insn.inputs = inputs;
    insn.output = Some(new.base);
    func.var_map.insert((bid, idx, VarnodeSlot::Output), new);
    for (slot, sv) in bindings {
        func.var_map
            .insert((bid, idx, VarnodeSlot::Input(slot)), sv);
    }
}

/// Rewrite a low-half read of a narrowed value.
fn narrow_read(func: &mut SsaFunction, bid: BlockId, idx: usize, slot: usize, new: SsaVarnode) {
    let insn = &mut func
        .function
        .blocks
        .get_mut(&bid)
        .expect("indexed block")
        .insns[idx];
    let raw = insn.inputs[slot];
    if raw.size < WIDE {
        insn.inputs[slot] = Varnode::new(new.base.space, raw.offset, raw.size);
    } else if insn.output.is_some_and(|out| out.size == NARROW) {
        // `SUBPIECE(v, 0)` of the whole narrowed value.
        insn.op = IrOp::Copy;
        insn.inputs = smallvec::smallvec![new.base];
    } else {
        insn.inputs[slot] = new.base;
    }
    func.var_map
        .insert((bid, idx, VarnodeSlot::Input(slot)), new);
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::verify::verify_ssa_function;
    use unlace_ir::{BasicBlock, Function};

    use super::*;

    const RBX: u64 = 24;
    const RSP: u64 = 32;

    fn rbx() -> Varnode {
        Varnode::reg(RBX, 8)
    }

    fn ssa_of(blocks: Vec<BasicBlock>) -> SsaFunction {
        let mut func = Function::new("demote", BlockId(0), 0x1000);
        for block in blocks {
            func.insert_block(block);
        }
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;
        ssa
    }

    fn insn(op: IrOp, out: Varnode, inputs: &[Varnode]) -> IrInsn {
        IrInsn::with_output(op, out, inputs.to_vec(), 0x1000)
    }

    fn stmt(op: IrOp, inputs: &[Varnode]) -> IrInsn {
        IrInsn::without_output(op, inputs.to_vec(), 0x1000)
    }

    fn load32() -> IrInsn {
        insn(
            IrOp::Load,
            Varnode::unique(0x100, 4),
            &[Varnode::constant(1, 8), Varnode::reg(RSP, 8)],
        )
    }

    /// `ebx = load; ebx += 1; *(u32 *)rsp = ebx` with the 32-bit results
    /// zero-extended into `rbx` and read back through `SUBPIECE`.
    fn straight_line(consumer: IrInsn) -> SsaFunction {
        let low = Varnode::unique(0x200, 4);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = vec![
            load32(),
            insn(IrOp::IntZext, rbx(), &[Varnode::unique(0x100, 4)]),
            insn(
                IrOp::IntAdd,
                rbx(),
                &[rbx(), Varnode::constant(u64::MAX, 8)],
            ),
            insn(IrOp::Subpiece, low, &[rbx(), Varnode::constant(0, 4)]),
            stmt(
                IrOp::Store,
                &[Varnode::constant(1, 8), Varnode::reg(RSP, 8), low],
            ),
            consumer,
            stmt(IrOp::Return, &[Varnode::constant(0, 8)]),
        ];
        ssa_of(vec![b0])
    }

    fn op_at(ssa: &SsaFunction, idx: usize) -> &IrInsn {
        &ssa.function.blocks[&BlockId(0)].insns[idx]
    }

    #[test]
    fn narrows_zext_chain_read_through_subpiece() {
        let nop = stmt(
            IrOp::Store,
            &[
                Varnode::constant(1, 8),
                Varnode::reg(RSP, 8),
                Varnode::unique(0x200, 4),
            ],
        );
        let mut ssa = straight_line(nop);
        assert!(SixtyFourBitDemotePass.run(&mut ssa).unwrap());
        verify_ssa_function(&ssa).unwrap();

        let ebx = Varnode::reg(RBX, 4);
        assert_eq!(op_at(&ssa, 1).op, IrOp::Copy);
        assert_eq!(op_at(&ssa, 1).output, Some(ebx));
        assert_eq!(op_at(&ssa, 2).op, IrOp::IntAdd);
        assert_eq!(
            op_at(&ssa, 2).inputs.as_slice(),
            &[ebx, Varnode::constant(0xffff_ffff, 4)]
        );
        assert_eq!(op_at(&ssa, 3).op, IrOp::Copy);
        assert_eq!(op_at(&ssa, 3).inputs.as_slice(), &[ebx]);

        let add_out = ssa.var_map[&(BlockId(0), 2, VarnodeSlot::Output)];
        let copy_in = ssa.var_map[&(BlockId(0), 3, VarnodeSlot::Input(0))];
        assert_eq!(add_out, copy_in);
        assert_eq!(add_out.base, ebx);
        // Idempotent: nothing wide is left to narrow.
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    #[test]
    fn full_width_store_keeps_value_wide() {
        let store = stmt(
            IrOp::Store,
            &[Varnode::constant(1, 8), Varnode::reg(RSP, 8), rbx()],
        );
        let mut ssa = straight_line(store);
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
        assert_eq!(op_at(&ssa, 1).op, IrOp::IntZext);
    }

    #[test]
    fn comparison_demands_full_width() {
        let cmp = insn(
            IrOp::IntSless,
            Varnode::reg(0x300, 1),
            &[rbx(), Varnode::constant(0, 8)],
        );
        let mut ssa = straight_line(cmp);
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    #[test]
    fn right_shift_demands_upper_half() {
        let shr = insn(
            IrOp::IntRight,
            Varnode::unique(0x300, 8),
            &[rbx(), Varnode::constant(32, 8)],
        );
        let mut ssa = straight_line(shr);
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    #[test]
    fn values_reaching_a_call_in_argument_registers_stay_wide() {
        let rdi = Varnode::reg(56, 8);
        let low = Varnode::unique(0x200, 4);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = vec![
            load32(),
            insn(IrOp::IntZext, rdi, &[Varnode::unique(0x100, 4)]),
            insn(IrOp::Subpiece, low, &[rdi, Varnode::constant(0, 4)]),
            stmt(
                IrOp::Store,
                &[Varnode::constant(1, 8), Varnode::reg(RSP, 8), low],
            ),
            stmt(IrOp::Call, &[Varnode::constant(0x2000, 8)]),
            stmt(IrOp::Return, &[Varnode::constant(0, 8)]),
        ];
        let mut ssa = ssa_of(vec![b0]);
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    #[test]
    fn return_register_stays_wide() {
        let rax = Varnode::reg(0, 8);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = vec![
            load32(),
            insn(IrOp::IntZext, rax, &[Varnode::unique(0x100, 4)]),
            stmt(IrOp::Return, &[Varnode::constant(0, 8)]),
        ];
        let mut ssa = ssa_of(vec![b0]);
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    #[test]
    fn other_architectures_are_untouched() {
        let nop = stmt(
            IrOp::Store,
            &[
                Varnode::constant(1, 8),
                Varnode::reg(RSP, 8),
                Varnode::unique(0x200, 4),
            ],
        );
        let mut ssa = straight_line(nop);
        ssa.arch = ArchId::AArch64;
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    #[test]
    fn sub_register_read_keeps_its_byte_offset() {
        // `bh` reads byte 1 of `rbx`.
        let bh = Varnode::reg(RBX + 1, 1);
        let store = stmt(
            IrOp::Store,
            &[Varnode::constant(1, 8), Varnode::reg(RSP, 8), bh],
        );
        let mut ssa = straight_line(store);
        assert!(SixtyFourBitDemotePass.run(&mut ssa).unwrap());
        verify_ssa_function(&ssa).unwrap();
        assert_eq!(op_at(&ssa, 5).inputs[2], bh);
    }

    #[test]
    fn stack_pointer_stays_wide() {
        let rsp = Varnode::reg(RSP, 8);
        let esp = Varnode::reg(RSP, 4);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = vec![
            insn(IrOp::IntSub, rsp, &[rsp, Varnode::constant(8, 8)]),
            stmt(
                IrOp::Store,
                &[Varnode::constant(1, 8), Varnode::reg(RBX, 8), esp],
            ),
            stmt(IrOp::Return, &[Varnode::constant(0, 8)]),
        ];
        let mut ssa = ssa_of(vec![b0]);
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    #[test]
    fn dead_value_stays_wide() {
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = vec![
            load32(),
            insn(IrOp::IntZext, rbx(), &[Varnode::unique(0x100, 4)]),
            stmt(IrOp::Return, &[Varnode::constant(0, 8)]),
        ];
        let mut ssa = ssa_of(vec![b0]);
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    /// A join block that merges two `rbx` values without a phi feeds a loop
    /// phi. The printer shares one variable per location there, so `rbx`
    /// must keep one width.
    #[test]
    fn phi_input_from_unmerged_join_keeps_location_wide() {
        let second = Varnode::unique(0x180, 4);
        let low = Varnode::unique(0x200, 4);
        let cond = Varnode::unique(0x300, 1);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = vec![
            load32(),
            insn(IrOp::IntZext, rbx(), &[Varnode::unique(0x100, 4)]),
            stmt(IrOp::Cbranch, &[Varnode::constant(0, 8), cond]),
        ];
        b0.successors = smallvec![BlockId(1), BlockId(2)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns = vec![
            insn(
                IrOp::Load,
                second,
                &[Varnode::constant(1, 8), Varnode::reg(RSP, 8)],
            ),
            insn(IrOp::IntZext, rbx(), &[second]),
            stmt(IrOp::Branch, &[]),
        ];
        b1.successors = smallvec![BlockId(2)];
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns = vec![stmt(IrOp::Branch, &[])];
        b2.successors = smallvec![BlockId(3)];
        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns = vec![
            insn(IrOp::IntAdd, rbx(), &[rbx(), Varnode::constant(1, 8)]),
            insn(IrOp::Subpiece, low, &[rbx(), Varnode::constant(0, 4)]),
            insn(IrOp::IntNotequal, cond, &[low, Varnode::constant(10, 4)]),
            stmt(IrOp::Cbranch, &[Varnode::constant(0, 8), cond]),
        ];
        b3.successors = smallvec![BlockId(3), BlockId(4)];
        let mut b4 = BasicBlock::new(BlockId(4));
        b4.insns = vec![
            stmt(
                IrOp::Store,
                &[Varnode::constant(1, 8), Varnode::reg(RSP, 8), low],
            ),
            stmt(IrOp::Return, &[Varnode::constant(0, 8)]),
        ];
        let mut ssa = ssa_of(vec![b0, b1, b2, b3, b4]);

        // Drop the join phi and let the loop phi read the first value.
        let is_rbx = |phi: &unlace_ir::ssa::PhiNode| phi.output.base == rbx();
        let first = ssa.var_map[&(BlockId(0), 1, VarnodeSlot::Output)];
        let join = ssa.phi_map.get_mut(&BlockId(2)).expect("join phis");
        let merged = join.iter().find(|phi| is_rbx(phi)).expect("rbx phi").output;
        join.retain(|phi| !is_rbx(phi));
        for phi in ssa.phi_map.get_mut(&BlockId(3)).expect("loop phis") {
            for (_, input) in &mut phi.inputs {
                if *input == merged {
                    *input = first;
                }
            }
        }
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }

    /// `ebx = load; do { ebx += 1 } while ((u32)ebx != 10); *(u32 *)rsp = ebx`
    #[test]
    fn narrows_loop_carried_phi() {
        let low = Varnode::unique(0x200, 4);
        let cond = Varnode::unique(0x300, 1);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = vec![
            load32(),
            insn(IrOp::IntZext, rbx(), &[Varnode::unique(0x100, 4)]),
            stmt(IrOp::Branch, &[]),
        ];
        b0.successors = smallvec![BlockId(1)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns = vec![
            insn(IrOp::IntAdd, rbx(), &[rbx(), Varnode::constant(1, 8)]),
            insn(IrOp::Subpiece, low, &[rbx(), Varnode::constant(0, 4)]),
            insn(IrOp::IntNotequal, cond, &[low, Varnode::constant(10, 4)]),
            stmt(IrOp::Cbranch, &[Varnode::constant(0, 8), cond]),
        ];
        b1.successors = smallvec![BlockId(1), BlockId(2)];
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns = vec![
            insn(IrOp::Subpiece, low, &[rbx(), Varnode::constant(0, 4)]),
            stmt(
                IrOp::Store,
                &[Varnode::constant(1, 8), Varnode::reg(RSP, 8), low],
            ),
            stmt(IrOp::Return, &[Varnode::constant(0, 8)]),
        ];
        let mut ssa = ssa_of(vec![b0, b1, b2]);
        assert!(SixtyFourBitDemotePass.run(&mut ssa).unwrap());
        verify_ssa_function(&ssa).unwrap();

        let phi = ssa.phi_map[&BlockId(1)]
            .iter()
            .find(|phi| phi.output.base.offset == RBX)
            .expect("rbx phi");
        assert_eq!(phi.output.base.size, 4);
        assert!(phi.inputs.iter().all(|(_, sv)| sv.base.size == 4));
        assert_eq!(ssa.function.blocks[&BlockId(2)].insns[0].op, IrOp::Copy);
    }
}
