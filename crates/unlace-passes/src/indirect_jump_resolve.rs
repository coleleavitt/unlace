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

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{JumpTableInfo, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

pub struct IndirectJumpResolvePass;

impl Pass for IndirectJumpResolvePass {
    fn name(&self) -> &str {
        "indirect-jump-resolve"
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

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Branchind {
                continue;
            }
            // The branch target SSA value.
            let Some(&target_sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(0)))
            else {
                continue;
            };

            // Chase through Copy chains to find the producing operation.
            let (prod_loc, prod_op) = match chase_copies_to_producer(func, target_sv) {
                Some(v) => v,
                None => continue,
            };

            // --- Pattern 1: Branchind ← Load (absolute jump table) ---
            if prod_op == IrOp::Load {
                if let Some(cand) = extract_load_candidate(func, prod_loc) {
                    out.insert(insn.addr, cand);
                    continue;
                }
            }

            // --- Pattern 2: Branchind ← IntAdd(base, Load) (RIP-relative) ---
            // GCC PIC: target = table_base + sign_extend(table[idx])
            if prod_op == IrOp::IntAdd {
                for slot in [VarnodeSlot::Input(0), VarnodeSlot::Input(1)] {
                    let Some(&operand_sv) =
                        func.var_map.get(&(prod_loc.0, prod_loc.1, slot))
                    else {
                        continue;
                    };
                    let Some((inner_loc, inner_op)) =
                        chase_copies_to_producer(func, operand_sv)
                    else {
                        continue;
                    };
                    if inner_op != IrOp::Load {
                        continue;
                    }
                    if let Some(cand) = extract_load_candidate(func, inner_loc) {
                        out.insert(insn.addr, cand);
                        break;
                    }
                }
            }
        }
    }

    out
}

/// Chase through Copy instructions via var_map, returning the first
/// non-Copy producer's location and opcode.
fn chase_copies_to_producer(
    func: &SsaFunction,
    start: SsaVarnode,
) -> Option<((BlockId, usize), IrOp)> {
    let mut cur_sv = start;
    for _ in 0..16 {
        let def_loc = find_def(func, cur_sv)?;
        let di = func
            .function
            .blocks
            .get(&def_loc.0)
            .and_then(|b| b.insns.get(def_loc.1))?;
        if di.op != IrOp::Copy {
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
    load_loc: (BlockId, usize),
) -> Option<JumpTableInfo> {
    let load_insn = func
        .function
        .blocks
        .get(&load_loc.0)
        .and_then(|b| b.insns.get(load_loc.1))?;

    let entry_size = load_insn.output.as_ref().map(|o| o.size as u8).unwrap_or(0);
    if !matches!(entry_size, 1 | 2 | 4 | 8) {
        return None;
    }

    // First try a constant address in the raw instruction inputs
    // (skip placeholder values where offset < 0x1000).
    if let Some(addr_vn) = load_insn.inputs.get(1) {
        if addr_vn.space == SpaceId::Const && addr_vn.offset >= 0x1000 {
            return Some(unresolved(addr_vn.offset, entry_size));
        }
    }

    // Follow the SSA var_map for the Load's address input.
    let addr_sv = func
        .var_map
        .get(&(load_loc.0, load_loc.1, VarnodeSlot::Input(1)))?;

    let mut visited = BTreeSet::new();
    trace_table_base(func, *addr_sv, &mut visited).map(|base| unresolved(base, entry_size))
}

/// Build an unresolved candidate — base + entry size known, targets pending
/// the section-aware decode step.
fn unresolved(base: u64, entry_size: u8) -> JumpTableInfo {
    JumpTableInfo {
        base,
        entry_size,
        num_entries: 0,
        endian_little: true,
        targets: Vec::new(),
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
    sv: SsaVarnode,
    visited: &mut BTreeSet<SsaVarnode>,
) -> Option<u64> {
    if !visited.insert(sv) {
        return None;
    }

    let def_loc = find_def(func, sv)?;
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
            trace_table_base(func, *next, visited)
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
                    if let Some(base) = trace_table_base(func, *next, &mut sub) {
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

/// Locate the `(BlockId, insn_index)` whose `Output` slot is `sv`.
/// Phi-defined values are intentionally skipped (multi-source join).
fn find_def(func: &SsaFunction, sv: SsaVarnode) -> Option<(BlockId, usize)> {
    func.var_map.iter().find_map(|((bid, idx, slot), other)| {
        if *other == sv && matches!(slot, VarnodeSlot::Output) {
            Some((*bid, *idx))
        } else {
            None
        }
    })
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
                endian_little: true,
                targets: vec![0x1100, 0x1200, 0x1300],
            },
        );
        let changed = IndirectJumpResolvePass.run(&mut ssa).unwrap();
        assert!(!changed);
        let cand = ssa.resolved_jump_tables.get(&0x100c).unwrap();
        assert_eq!(cand.num_entries, 3);
        assert_eq!(cand.targets, vec![0x1100, 0x1200, 0x1300]);
    }
}
