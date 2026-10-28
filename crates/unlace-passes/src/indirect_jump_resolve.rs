//! Indexed indirect-branch (jump-table) candidate detection.
//!
//! Batch 9 — companion to [`IndirectCallResolvePass`](crate::IndirectCallResolvePass).
//! Where that pass resolves `Callind` chains to a unique constant callee,
//! this one looks at `Branchind` instructions — the IR shape an indexed
//! `switch` jump table lowers to — and recovers the table's *base address*
//! and *entry size* from the surrounding address arithmetic.
//!
//! ## Two-phase resolution
//!
//! The concrete jump-table *targets* live in the binary's read-only
//! sections, which a [`SsaFunction`]-only pass cannot see. So this pass
//! runs in **candidate** mode: for every `Branchind` whose feeding `Load`
//! address traces back to `base_const (+ idx*scale)`, it records a
//! [`JumpTableInfo`] with `num_entries == 0` and an empty `targets` vec,
//! keyed by the branch instruction's address. The CLI pipeline's
//! section-aware resolution step
//! ([`resolve_jump_table_targets`]) then decodes the table bytes and fills
//! in `num_entries` + `targets`.
//!
//! Candidates whose base never resolves to a real section are harmless:
//! `refine_switches_with_tables` gates on `validate_table_base`, so an
//! un-decoded candidate simply leaves the structurer's `HirNode::Switch`
//! untouched.
//!
//! ## Pattern matched
//!
//! ```text
//!   t_addr  = IntAdd(base_const, t_scaled)      ; table base + scaled index
//!   t_scaled = IntMult(idx, scale_const)        ; or IntLeft(idx, shift_const)
//!   t_tgt   = Load(space, t_addr)               ; read the slot
//!   Branchind(t_tgt)                            ; jump through it
//! ```
//!
//! `Copy` chains are followed transparently. The base may also appear as
//! the *second* `IntAdd` operand; both orderings are accepted.
//!
//! ## Table length
//!
//! The table bytes do not say where the table ends; the dispatch site does.
//! `bound` records how many index values the bounds check guarding the
//! dispatch block lets through (evaluated, so every flag expansion of
//! `ja`/`jbe`/`bhi` counts alike), or `mask + 1` for an index masked with
//! `2^n - 1`. Without it the section-aware step can only probe and stop at
//! the first slot that leaves the function, and adjacent tables of two
//! functions read into each other.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{JumpTableInfo, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{DefIndex, Pass, PassError};

pub struct IndirectJumpResolvePass;

impl Pass for IndirectJumpResolvePass {
    fn name(&self) -> &str {
        "indirect-jump-resolve"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::GlobalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let candidates = collect_jump_table_candidates(func);
        // Merge into any pre-existing (already section-resolved) entries
        // without clobbering them: a resolved entry — `num_entries > 0` —
        // always wins over a freshly-detected bare candidate.
        let mut merged = func.resolved_jump_tables.clone();
        for (branch_addr, cand) in candidates {
            match merged.get(&branch_addr) {
                Some(existing) if existing.num_entries > 0 => {}
                _ => {
                    merged.insert(branch_addr, cand);
                }
            }
        }
        let changed = merged != func.resolved_jump_tables;
        func.resolved_jump_tables = merged;
        Ok(changed)
    }
}

/// Scan every `Branchind` in `func` and recover the jump-table base /
/// entry-size for those that match the indexed-load pattern. Returns a map
/// keyed by branch-instruction address; each value is an *unresolved*
/// [`JumpTableInfo`] (`num_entries == 0`, `targets` empty).
pub fn collect_jump_table_candidates(func: &SsaFunction) -> BTreeMap<u64, JumpTableInfo> {
    let mut out: BTreeMap<u64, JumpTableInfo> = BTreeMap::new();

    // Reverse Output-definition index, built once for the whole scan.
    // This function and everything it calls only reads `func`; the
    // pass's `run` mutates only `resolved_jump_tables` afterwards.
    let defs = DefIndex::build(func);

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Branchind {
                continue;
            }
            // The branch target SSA value.
            let Some(&target_sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(0))) else {
                continue;
            };

            // Chase through Copy chains to find the producing operation.
            let (prod_loc, prod_op) = match chase_copies_to_producer(func, &defs, target_sv) {
                Some(v) => v,
                None => continue,
            };

            // --- Pattern 1: Branchind ← Load (absolute jump table) ---
            if prod_op == IrOp::Load
                && let Some(mut cand) = extract_load_candidate(func, &defs, prod_loc)
            {
                cand.bound = table_bound(func, &defs, bid, prod_loc);
                out.insert(insn.addr, cand);
                continue;
            }

            // --- Pattern 2: Branchind ← IntAdd(base, Load) (RIP-relative) ---
            // GCC PIC: target = table_base + sign_extend(table[idx])
            if prod_op == IrOp::IntAdd {
                for slot in [VarnodeSlot::Input(0), VarnodeSlot::Input(1)] {
                    let Some(&operand_sv) = func.var_map.get(&(prod_loc.0, prod_loc.1, slot))
                    else {
                        continue;
                    };
                    let Some((inner_loc, inner_op)) =
                        chase_copies_to_producer(func, &defs, operand_sv)
                    else {
                        continue;
                    };
                    if inner_op != IrOp::Load {
                        continue;
                    }
                    if let Some(mut cand) = extract_load_candidate(func, &defs, inner_loc) {
                        cand.bound = table_bound(func, &defs, bid, inner_loc);
                        out.insert(insn.addr, cand);
                        break;
                    }
                }
            }
        }
    }

    out
}

/// Chase through value-transparent instructions via var_map, returning the
/// first non-transparent producer's location and opcode.
fn chase_copies_to_producer(
    func: &SsaFunction,
    defs: &DefIndex,
    start: SsaVarnode,
) -> Option<((BlockId, usize), IrOp)> {
    let mut cur_sv = start;
    for _ in 0..16 {
        let def_loc = defs.lookup(cur_sv)?;
        let di = func
            .function
            .blocks
            .get(&def_loc.0)
            .and_then(|b| b.insns.get(def_loc.1))?;
        if !matches!(
            di.op,
            IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece | IrOp::Cast
        ) {
            return Some((def_loc, di.op));
        }
        let next = func
            .var_map
            .get(&(def_loc.0, def_loc.1, VarnodeSlot::Input(0)))?;
        cur_sv = *next;
    }
    None
}

/// Given a Load instruction location, extract the jump-table candidate
/// (base address + entry size). Returns None if the Load's address
/// can't be traced to a constant base.
fn extract_load_candidate(
    func: &SsaFunction,
    defs: &DefIndex,
    load_loc: (BlockId, usize),
) -> Option<JumpTableInfo> {
    let load_insn = func
        .function
        .blocks
        .get(&load_loc.0)
        .and_then(|b| b.insns.get(load_loc.1))?;

    let entry_size = load_insn.output.as_ref().map(|o| o.size).unwrap_or(0);
    if !matches!(entry_size, 1 | 2 | 4 | 8) {
        return None;
    }

    // First try a constant address in the raw instruction inputs
    // (skip placeholder values where offset < 0x1000).
    if let Some(addr_vn) = load_insn.inputs.get(1)
        && addr_vn.space == SpaceId::Const
        && addr_vn.offset >= 0x1000
    {
        return Some(unresolved(addr_vn.offset, entry_size));
    }

    // Follow the SSA var_map for the Load's address input.
    let addr_sv = func
        .var_map
        .get(&(load_loc.0, load_loc.1, VarnodeSlot::Input(1)))?;

    let mut visited = BTreeSet::new();
    trace_table_base(func, defs, *addr_sv, &mut visited).map(|base| unresolved(base, entry_size))
}

/// Build an unresolved candidate — base + entry size known, targets pending
/// the section-aware decode step.
fn unresolved(base: u64, entry_size: u8) -> JumpTableInfo {
    JumpTableInfo {
        base,
        entry_size,
        num_entries: 0,
        bound: None,
        endian_little: true,
        targets: Vec::new(),
        target_blocks: Vec::new(),
    }
}

/// Largest table the bound search accepts. A guard that admits more indices
/// than this is not treated as a table bound.
const MAX_TABLE_ENTRIES: u32 = 4096;

/// Entry count proven at the dispatch site of the table read by the `Load`
/// at `load_loc` (see [`JumpTableInfo::bound`]).
fn table_bound(
    func: &SsaFunction,
    defs: &DefIndex,
    dispatch: BlockId,
    load_loc: (BlockId, usize),
) -> Option<u32> {
    let addr = input_sv(func, load_loc, 1)?;
    let index = table_index(func, defs, addr)?;
    let root = peel_width_casts(func, defs, index);
    guard_bound(func, defs, dispatch, root).or_else(|| mask_bound(func, defs, root))
}

/// The SSA value at `slot` of the instruction at `loc`, if it is not a
/// constant.
fn input_sv(func: &SsaFunction, loc: (BlockId, usize), slot: usize) -> Option<SsaVarnode> {
    func.var_map
        .get(&(loc.0, loc.1, VarnodeSlot::Input(slot)))
        .copied()
}

fn def_insn<'f>(
    func: &'f SsaFunction,
    defs: &DefIndex,
    sv: SsaVarnode,
) -> Option<((BlockId, usize), &'f IrInsn)> {
    let loc = defs.lookup(sv)?;
    let insn = func.function.blocks.get(&loc.0)?.insns.get(loc.1)?;
    Some((loc, insn))
}

/// The unscaled index of a `base + index * scale` table address.
fn table_index(func: &SsaFunction, defs: &DefIndex, addr: SsaVarnode) -> Option<SsaVarnode> {
    let (loc, insn) = def_insn(func, defs, addr)?;
    match insn.op {
        IrOp::Copy => table_index(func, defs, input_sv(func, loc, 0)?),
        IrOp::IntAdd => (0..2).find_map(|slot| {
            let (scaled_loc, scaled) = def_insn(func, defs, input_sv(func, loc, slot)?)?;
            let scale = scaled.inputs.get(1)?;
            (matches!(scaled.op, IrOp::IntMult | IrOp::IntLeft) && scale.space == SpaceId::Const)
                .then(|| input_sv(func, scaled_loc, 0))
                .flatten()
        }),
        _ => None,
    }
}

/// Follow `index` through copies, extensions and low-part truncations to
/// the value the bounds check compares.
fn peel_width_casts(func: &SsaFunction, defs: &DefIndex, mut index: SsaVarnode) -> SsaVarnode {
    for _ in 0..16 {
        let Some((loc, insn)) = def_insn(func, defs, index) else {
            break;
        };
        let low_part = insn.op != IrOp::Subpiece
            || insn
                .inputs
                .get(1)
                .is_some_and(|offset| offset.space == SpaceId::Const && offset.offset == 0);
        if !matches!(
            insn.op,
            IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece | IrOp::Cast
        ) || !low_part
        {
            break;
        }
        let Some(next) = input_sv(func, loc, 0) else {
            break;
        };
        index = next;
    }
    index
}

/// The number of leading index values `0, 1, ...` for which the conditional
/// branch guarding `dispatch` takes its edge toward `dispatch`.
///
/// The guard condition is evaluated for each index value instead of being
/// matched against compare shapes, so the flag expansions of `ja`, `jae`,
/// `jbe`, `bhi`, `bltu` and their folded forms all count alike. Plain
/// single-successor blocks between the guard and the dispatch are crossed.
fn guard_bound(
    func: &SsaFunction,
    defs: &DefIndex,
    dispatch: BlockId,
    root: SsaVarnode,
) -> Option<u32> {
    let mut target = dispatch;
    for _ in 0..4 {
        let mut preds = func
            .function
            .blocks
            .iter()
            .filter(|(_, block)| block.successors.contains(&target));
        let (&pred, block) = preds.next()?;
        if preds.next().is_some() {
            return None;
        }
        let last_idx = block.insns.len().checked_sub(1)?;
        if block.insns[last_idx].op != IrOp::Cbranch {
            if block.successors.len() != 1 {
                return None;
            }
            target = pred;
            continue;
        }
        let in_range_when = match block.successors.as_slice() {
            [taken, fall] if *taken == target && *fall != target => true,
            [taken, fall] if *fall == target && *taken != target => false,
            _ => return None,
        };
        let cond = input_sv(func, (pred, last_idx), 1)?;
        let mut count = 0;
        while count < MAX_TABLE_ENTRIES {
            let taken = eval_with(func, defs, cond, root, u64::from(count), 32)? & 1 != 0;
            if taken != in_range_when {
                break;
            }
            count += 1;
        }
        return (count > 0 && count < MAX_TABLE_ENTRIES).then_some(count);
    }
    None
}

/// `index & (2^n - 1)` admits exactly `2^n` entries.
fn mask_bound(func: &SsaFunction, defs: &DefIndex, root: SsaVarnode) -> Option<u32> {
    let (_, insn) = def_insn(func, defs, root)?;
    if insn.op != IrOp::IntAnd {
        return None;
    }
    let mask = insn
        .inputs
        .iter()
        .find(|vn| vn.space == SpaceId::Const)?
        .offset;
    let count = mask.checked_add(1)?;
    (count.is_power_of_two() && count <= u64::from(MAX_TABLE_ENTRIES)).then_some(count as u32)
}

/// Evaluate `sv` with `root` bound to `value`. `None` when the value
/// depends on anything other than `root` and constants.
fn eval_with(
    func: &SsaFunction,
    defs: &DefIndex,
    sv: SsaVarnode,
    root: SsaVarnode,
    value: u64,
    depth: u32,
) -> Option<u64> {
    if sv == root {
        return Some(value & size_mask(sv.base.size));
    }
    let depth = depth.checked_sub(1)?;
    let (loc, insn) = def_insn(func, defs, sv)?;
    let out_size = insn.output?.size;
    let mut args = smallvec::SmallVec::<[Varnode; 3]>::new();
    for (slot, raw) in insn.inputs.iter().enumerate() {
        let arg = if raw.space == SpaceId::Const {
            raw.offset
        } else {
            eval_with(func, defs, input_sv(func, loc, slot)?, root, value, depth)?
        };
        args.push(Varnode::constant(arg, raw.size));
    }
    let first = args.first().map(|vn| vn.offset & size_mask(vn.size));
    match insn.op {
        IrOp::Copy | IrOp::Cast => first.map(|v| v & size_mask(out_size)),
        IrOp::Subpiece => {
            let shift = args.get(1)?.offset.checked_mul(8)?;
            Some(first?.checked_shr(u32::try_from(shift).ok()?).unwrap_or(0) & size_mask(out_size))
        }
        IrOp::Popcount => first.map(|v| u64::from(v.count_ones())),
        op => crate::const_fold::evaluate(op, &args, out_size),
    }
}

fn size_mask(size: u8) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (u32::from(size) * 8)) - 1
    }
}

/// Walk backwards from a Load-address SSA value, peeling `Copy` chains and
/// the `base + idx*scale` address arithmetic, looking for the single
/// constant that is the table base.
///
/// Returns `Some(base)` only when exactly one constant base is reachable;
/// cycles, phi joins, and ambiguous multi-const arithmetic yield `None`.
fn trace_table_base(
    func: &SsaFunction,
    defs: &DefIndex,
    sv: SsaVarnode,
    visited: &mut BTreeSet<SsaVarnode>,
) -> Option<u64> {
    if !visited.insert(sv) {
        return None;
    }

    let def_loc = defs.lookup(sv)?;
    let block = func.function.blocks.get(&def_loc.0)?;
    let insn = block.insns.get(def_loc.1)?;

    match insn.op {
        IrOp::Copy => {
            // Check the raw input for a real constant (plausible address,
            // not a zero-offset placeholder that SLEIGH uses for computed values).
            let inp = insn.inputs.first()?;
            if inp.space == SpaceId::Const && inp.offset >= 0x1000 {
                return Some(inp.offset);
            }
            // Otherwise follow via SSA var_map
            let next = func
                .var_map
                .get(&(def_loc.0, def_loc.1, VarnodeSlot::Input(0)))?;
            trace_table_base(func, defs, *next, visited)
        }

        // base + scaled_index — the base may be either operand.
        IrOp::IntAdd => {
            let a = insn.inputs.first()?;
            let b = insn.inputs.get(1)?;
            // Direct const + const → fold (at least one must be plausible).
            if a.space == SpaceId::Const
                && b.space == SpaceId::Const
                && (a.offset >= 0x1000 || b.offset >= 0x1000)
            {
                return Some(a.offset.wrapping_add(b.offset));
            }
            // One operand is a plausible constant (≥ 0x1000) → that's the base.
            if a.space == SpaceId::Const && a.offset >= 0x1000 {
                return Some(a.offset);
            }
            if b.space == SpaceId::Const && b.offset >= 0x1000 {
                return Some(b.offset);
            }
            // Both operands are reg/unique or small consts → recurse via
            // var_map; accept iff exactly one side reaches a plausible base.
            let mut found = None;
            for slot in [VarnodeSlot::Input(0), VarnodeSlot::Input(1)] {
                if let Some(next) = func.var_map.get(&(def_loc.0, def_loc.1, slot)) {
                    let mut sub = visited.clone();
                    if let Some(base) = trace_table_base(func, defs, *next, &mut sub) {
                        if found.is_some() {
                            return None; // ambiguous
                        }
                        found = Some(base);
                    }
                }
            }
            found
        }

        // scale only — a multiply/shift produces `idx * scale_factor`
        // which is NOT a table base. Return None so the parent IntAdd
        // picks the correct (non-scaled) operand as the base.
        IrOp::IntMult | IrOp::IntLeft => None,

        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    /// `LEA base; LOAD slot; BRANCHIND` — base + idx*scale reaches a
    /// constant; the candidate records that base.
    #[test]
    fn detects_indexed_branchind_candidate() {
        let mut func = Function::new("dispatch", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));

        let idx = Varnode::reg(56, 8); // rdi — the switch index (a param)
        let scaled = Varnode::unique(0, 8);
        let addr = Varnode::unique(8, 8);
        let slot = Varnode::unique(16, 8);

        // scaled = idx * 8
        bb.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![idx, Varnode::constant(8, 8)],
            0x1000,
        ));
        // addr = 0x4000 + scaled
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![Varnode::constant(0x4000, 8), scaled],
            0x1004,
        ));
        // slot = LOAD(ram, addr)
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            slot,
            smallvec![Varnode::constant(1, 8), addr],
            0x1008,
        ));
        // BRANCHIND(slot)
        bb.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![slot],
            0x100c,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let changed = IndirectJumpResolvePass.run(&mut ssa).unwrap();
        assert!(changed);
        assert_eq!(ssa.resolved_jump_tables.len(), 1);
        let cand = ssa.resolved_jump_tables.get(&0x100c).unwrap();
        assert_eq!(cand.base, 0x4000);
        assert_eq!(cand.entry_size, 8);
        assert_eq!(cand.num_entries, 0); // unresolved until section decode
        assert!(cand.targets.is_empty());
    }

    /// `cmp edi, 5; ja default` before `jmp [rdi*8 + table]`: the guard's
    /// flag expansion admits indices 0..=5, so the table has six entries.
    #[test]
    fn guard_bounds_table_length() {
        let mut func = Function::new("dispatch", BlockId(0), 0x1000);
        let rdi = Varnode::reg(56, 8);
        let low = Varnode::unique(0, 4);
        let cf = Varnode::unique(1, 1);
        let zf = Varnode::unique(2, 1);
        let ncf = Varnode::unique(3, 1);
        let nzf = Varnode::unique(4, 1);
        let ja = Varnode::unique(5, 1);

        let mut guard = BasicBlock::new(BlockId(0));
        guard.insns = vec![
            IrInsn::with_output(
                IrOp::Subpiece,
                low,
                smallvec![rdi, Varnode::constant(0, 1)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::IntLess,
                cf,
                smallvec![low, Varnode::constant(5, 4)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::IntEqual,
                zf,
                smallvec![low, Varnode::constant(5, 4)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::BoolNegate, ncf, smallvec![cf], 0x1003),
            IrInsn::with_output(IrOp::BoolNegate, nzf, smallvec![zf], 0x1003),
            IrInsn::with_output(IrOp::BoolAnd, ja, smallvec![ncf, nzf], 0x1003),
            IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(0x1020, 8), ja],
                0x1003,
            ),
        ];
        guard.successors = smallvec![BlockId(2), BlockId(1)];

        let idx32 = Varnode::unique(6, 4);
        let scaled = Varnode::unique(7, 8);
        let addr = Varnode::unique(8, 8);
        let slot = Varnode::unique(9, 8);
        let mut dispatch = BasicBlock::new(BlockId(1));
        dispatch.insns = vec![
            IrInsn::with_output(
                IrOp::Subpiece,
                idx32,
                smallvec![rdi, Varnode::constant(0, 1)],
                0x1009,
            ),
            IrInsn::with_output(IrOp::IntZext, rdi, smallvec![idx32], 0x1009),
            IrInsn::with_output(
                IrOp::IntMult,
                scaled,
                smallvec![rdi, Varnode::constant(8, 8)],
                0x100b,
            ),
            IrInsn::with_output(
                IrOp::IntAdd,
                addr,
                smallvec![scaled, Varnode::constant(0x4000, 8)],
                0x100b,
            ),
            IrInsn::with_output(
                IrOp::Load,
                slot,
                smallvec![Varnode::constant(1, 8), addr],
                0x100b,
            ),
            IrInsn::without_output(IrOp::Branchind, smallvec![slot], 0x100b),
        ];

        let mut default = BasicBlock::new(BlockId(2));
        default.insns = vec![IrInsn::without_output(IrOp::Return, smallvec![], 0x1020)];

        func.insert_block(guard);
        func.insert_block(dispatch);
        func.insert_block(default);
        let ssa = build_ssa(func);

        let tables = collect_jump_table_candidates(&ssa);
        assert_eq!(tables.get(&0x100b).and_then(|table| table.bound), Some(6));
    }

    /// `jmp [(rdi & 3)*8 + table]` with no guard admits four indices.
    #[test]
    fn index_mask_bounds_table_length() {
        let mut func = Function::new("dispatch", BlockId(0), 0x1000);
        let masked = Varnode::unique(0, 8);
        let scaled = Varnode::unique(1, 8);
        let addr = Varnode::unique(2, 8);
        let slot = Varnode::unique(3, 8);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = vec![
            IrInsn::with_output(
                IrOp::IntAnd,
                masked,
                smallvec![Varnode::reg(56, 8), Varnode::constant(3, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::IntMult,
                scaled,
                smallvec![masked, Varnode::constant(8, 8)],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::IntAdd,
                addr,
                smallvec![scaled, Varnode::constant(0x4000, 8)],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::Load,
                slot,
                smallvec![Varnode::constant(1, 8), addr],
                0x1004,
            ),
            IrInsn::without_output(IrOp::Branchind, smallvec![slot], 0x1004),
        ];
        func.insert_block(bb);
        let ssa = build_ssa(func);

        let tables = collect_jump_table_candidates(&ssa);
        assert_eq!(tables.get(&0x1004).and_then(|table| table.bound), Some(4));
    }

    /// A `Branchind` whose target is a bare register (no feeding Load) is
    /// not a table dispatch — no candidate recorded.
    #[test]
    fn no_candidate_for_register_branchind() {
        let mut func = Function::new("tailcall", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![Varnode::reg(0, 8)],
            0x1000,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let changed = IndirectJumpResolvePass.run(&mut ssa).unwrap();
        assert!(!changed);
        assert!(ssa.resolved_jump_tables.is_empty());
    }

    /// An already section-resolved entry (`num_entries > 0`) is preserved
    /// when the pass re-runs and only finds a bare candidate.
    #[test]
    fn resolved_entry_survives_rerun() {
        let mut func = Function::new("dispatch", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let scaled = Varnode::unique(0, 8);
        let addr = Varnode::unique(8, 8);
        let slot = Varnode::unique(16, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![Varnode::reg(56, 8), Varnode::constant(4, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![Varnode::constant(0x4000, 8), scaled],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            slot,
            smallvec![Varnode::constant(1, 8), addr],
            0x1008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![slot],
            0x100c,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        // Pre-seed a fully-resolved entry for the same branch.
        ssa.resolved_jump_tables.insert(
            0x100c,
            JumpTableInfo {
                base: 0x4000,
                entry_size: 4,
                num_entries: 3,
                bound: None,
                endian_little: true,
                targets: vec![0x1100, 0x1200, 0x1300],
                target_blocks: Vec::new(),
            },
        );
        let changed = IndirectJumpResolvePass.run(&mut ssa).unwrap();
        assert!(!changed);
        let cand = ssa.resolved_jump_tables.get(&0x100c).unwrap();
        assert_eq!(cand.num_entries, 3);
        assert_eq!(cand.targets, vec![0x1100, 0x1200, 0x1300]);
    }
}
