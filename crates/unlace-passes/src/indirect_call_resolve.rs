//! Function-pointer resolution for indirect calls.
//!
//! For every `Callind`, attempt to recover a unique constant target
//! address by tracing the SSA chain backwards through `Copy` /
//! `Load(addr=const)` / `IntAdd(const, const)` instructions. When the chain
//! terminates at a single constant, the call site is recorded in
//! [`SsaFunction::resolved_indirect_calls`]; ambiguous (multi-source) targets
//! are left untouched so downstream passes can still treat them as opaque.
//!
//! Mirrors the role of IDA's `apply_tinfo` driver
//! (`references/ida/idalib/all/apply_tinfo.c`): once the call target is
//! known concretely, the registry-resident signature flows in to refine
//! caller-side argument and return-value types.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, TargetSet, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{DefIndex, Pass, PassError};

pub struct IndirectCallResolvePass;

impl Pass for IndirectCallResolvePass {
    fn name(&self) -> &str {
        "indirect-call-resolve"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::GlobalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let snapshot = func.resolved_indirect_calls.clone();
        let targets_snapshot = func.indirect_call_targets.clone();
        let mut found: BTreeMap<(BlockId, usize), u64> = BTreeMap::new();
        let mut targets: BTreeMap<(BlockId, usize), TargetSet> = BTreeMap::new();

        // Build the reverse Output-definition index once. The whole
        // analysis below only reads `func` — no `var_map` mutation —
        // so the index stays consistent for the lifetime of the loop.
        let defs = DefIndex::build(func);

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Callind {
                    continue;
                }
                let Some(target_vn) = insn.inputs.first() else {
                    continue;
                };

                // Direct constant target in inputs[0] — trivial single hit.
                if target_vn.space == SpaceId::Const {
                    let addr = target_vn.offset;
                    found.insert((bid, insn_idx), addr);
                    targets.insert((bid, insn_idx), resolved_target(addr));
                    continue;
                }

                let Some(&target_sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                else {
                    targets.insert((bid, insn_idx), TargetSet::Unknown);
                    continue;
                };

                // Collect every reachable constant target through Copy
                // chains, Load(const_addr), IntAdd(const, const), and phi
                // joins. The set's cardinality classifies the call:
                //   0 → `Unknown`, 1 → `Resolved`, ≥2 → `Multiple`.
                let mut visited = BTreeSet::new();
                let mut sinks: BTreeSet<u64> = BTreeSet::new();
                gather_constants(func, &defs, target_sv, &mut visited, &mut sinks);

                match sinks.len() {
                    0 => {
                        targets.insert((bid, insn_idx), TargetSet::Unknown);
                    }
                    1 => {
                        let addr = *sinks.iter().next().unwrap();
                        found.insert((bid, insn_idx), addr);
                        targets.insert((bid, insn_idx), resolved_target(addr));
                    }
                    _ => {
                        let multi: Vec<(u64, String)> =
                            sinks.into_iter().map(|a| (a, name_for(a))).collect();
                        targets.insert((bid, insn_idx), TargetSet::Multiple(multi));
                    }
                }
            }
        }

        // Semantic devirtualization entries (`VtableSlot` populated by
        // `CppMethodPass`, `ObjcSelector` populated by
        // `ObjcDispatchPass`) outrank our constant-tracing classification:
        // we only know there's a `LOAD(LOAD(this+0)+N)` chain, the
        // language-aware passes know which class/selector it dispatches
        // through. Preserve those when they're already recorded so the
        // pipeline's second run of this pass (after `CppVtablePass` +
        // `CppMethodPass` in the outer fixed point) doesn't downgrade a
        // `VtableSlot` to a generic `Unknown`/`Resolved` entry.
        for (key, prev) in &targets_snapshot {
            if matches!(
                prev,
                TargetSet::VtableSlot { .. } | TargetSet::ObjcSelector(_)
            ) {
                targets.insert(*key, prev.clone());
            }
        }

        let changed = found != snapshot || targets != targets_snapshot;
        func.resolved_indirect_calls = found;
        func.indirect_call_targets = targets;
        Ok(changed)
    }
}

/// Build a `TargetSet::Resolved` for a single concrete target address.
/// Name is the canonical `sub_<addr>` placeholder; the C printer already
/// understands this fallback and replaces it with the real symbol name
/// when a global resolver is wired in.
fn resolved_target(addr: u64) -> TargetSet {
    TargetSet::Resolved {
        addr,
        name: name_for(addr),
    }
}

fn name_for(addr: u64) -> String {
    format!("sub_{:x}", addr)
}

/// Phi-aware constant collector for backwards SSA traversal.
///
/// Accumulates every constant address reachable through `Copy` / `Load`
/// chains, `IntAdd(const, const)`, and phi inputs. Cycles are broken via
/// the shared `visited` set; the caller decides whether to map the
/// resulting set to `Resolved` (singleton), `Multiple`, or `Unknown`
/// (empty).
///
/// `defs` is the per-pass reverse Output-definition index built by the
/// caller (see [`crate::pass::DefIndex`]); each `find_def` lookup is
/// `O(log n)` instead of the previous `O(|var_map|)` linear scan.
fn gather_constants(
    func: &SsaFunction,
    defs: &DefIndex,
    sv: SsaVarnode,
    visited: &mut BTreeSet<SsaVarnode>,
    sinks: &mut BTreeSet<u64>,
) {
    if !visited.insert(sv) {
        return;
    }

    // Phi-defined value: recurse into every incoming SSA varnode.
    for phis in func.phi_map.values() {
        for phi in phis {
            if phi.output == sv {
                for (_, inp) in &phi.inputs {
                    gather_constants(func, defs, *inp, visited, sinks);
                }
                return;
            }
        }
    }

    let Some(def_loc) = defs.lookup(sv) else {
        return;
    };
    let Some(block) = func.function.blocks.get(&def_loc.0) else {
        return;
    };
    let Some(insn) = block.insns.get(def_loc.1) else {
        return;
    };

    match insn.op {
        IrOp::Copy => {
            if let Some(inp) = insn.inputs.first() {
                if inp.space == SpaceId::Const {
                    sinks.insert(inp.offset);
                    return;
                }
            }
            if let Some(next) = func
                .var_map
                .get(&(def_loc.0, def_loc.1, VarnodeSlot::Input(0)))
                .copied()
            {
                gather_constants(func, defs, next, visited, sinks);
            }
        }
        IrOp::Load => {
            if let Some(addr) = insn.inputs.get(1) {
                if addr.space == SpaceId::Const {
                    sinks.insert(addr.offset);
                }
            }
        }
        IrOp::IntAdd => {
            if let (Some(a), Some(b)) = (insn.inputs.first(), insn.inputs.get(1)) {
                if a.space == SpaceId::Const && b.space == SpaceId::Const {
                    sinks.insert(a.offset.wrapping_add(b.offset));
                }
            }
        }
        _ => {}
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    /// `CALLIND(target)` where target was loaded from a constant address →
    /// the load address is the resolved target.
    #[test]
    fn t82_singleton_load_through_const_address() {
        let mut func = Function::new("vfn", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));

        let target = Varnode::unique(0, 8);
        let space_ram = Varnode::constant(1, 8);
        let vtable_slot = Varnode::constant(0xCAFE_BABE, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            target,
            smallvec![space_ram, vtable_slot],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![target],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        IndirectCallResolvePass.run(&mut ssa).unwrap();

        let resolved = &ssa.resolved_indirect_calls;
        assert_eq!(resolved.len(), 1);
        let (&(bid, _idx), &addr) = resolved.iter().next().unwrap();
        assert_eq!(bid, BlockId(0));
        assert_eq!(addr, 0xCAFE_BABE);
    }

    /// `CALLIND(const_addr)` directly — the inputs[0] is itself a
    /// `SpaceId::Const`. Should resolve trivially.
    #[test]
    fn t82_constant_target_is_trivially_resolved() {
        let mut func = Function::new("direct", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![Varnode::constant(0xDEAD_BEEF, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        IndirectCallResolvePass.run(&mut ssa).unwrap();

        assert_eq!(ssa.resolved_indirect_calls.len(), 1);
        assert_eq!(
            *ssa.resolved_indirect_calls.values().next().unwrap(),
            0xDEAD_BEEF
        );
    }

    /// `CALLIND(rdi)` where RDI is a parameter (no defining instruction in
    /// the block) → target is unknowable; pass must leave the entry empty.
    #[test]
    fn t82_unknown_target_leaves_entry_empty() {
        let mut func = Function::new("unk", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(56, 8);
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![rdi],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        IndirectCallResolvePass.run(&mut ssa).unwrap();
        assert!(ssa.resolved_indirect_calls.is_empty());
    }

    /// Chained `Copy` from a constant pointer ⇒ should still resolve.
    #[test]
    fn t82_copy_chain_to_constant() {
        let mut func = Function::new("chain", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            u0,
            smallvec![Varnode::constant(0xFEED_FACE, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::with_output(IrOp::Copy, u1, smallvec![u0], 0x1004));
        bb.insns
            .push(IrInsn::without_output(IrOp::Callind, smallvec![u1], 0x1008));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x100c,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        IndirectCallResolvePass.run(&mut ssa).unwrap();

        assert_eq!(ssa.resolved_indirect_calls.len(), 1);
        assert_eq!(
            *ssa.resolved_indirect_calls.values().next().unwrap(),
            0xFEED_FACE
        );
    }

    // ------------------------------------------------------------------
    // TargetSet wiring (Batch 8 slice 1)
    // ------------------------------------------------------------------

    /// Direct constant `CALLIND(0xDEAD_BEEF)` populates
    /// `TargetSet::Resolved` with the canonical `sub_<addr>` name.
    #[test]
    fn target_set_resolved_for_direct_constant() {
        let mut func = Function::new("direct", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![Varnode::constant(0xDEAD_BEEF, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        IndirectCallResolvePass.run(&mut ssa).unwrap();

        assert_eq!(ssa.indirect_call_targets.len(), 1);
        let ts = ssa.indirect_call_targets.values().next().unwrap();
        match ts {
            TargetSet::Resolved { addr, name } => {
                assert_eq!(*addr, 0xDEAD_BEEF);
                assert_eq!(name, "sub_deadbeef");
            }
            other => panic!("expected Resolved, got {other:?}"),
        }
    }

    /// `Copy` chain to a constant ⇒ `Resolved` populated alongside
    /// `resolved_indirect_calls`.
    #[test]
    fn target_set_resolved_for_copy_chain() {
        let mut func = Function::new("chain", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            u0,
            smallvec![Varnode::constant(0xFEED_FACE, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::with_output(IrOp::Copy, u1, smallvec![u0], 0x1004));
        bb.insns
            .push(IrInsn::without_output(IrOp::Callind, smallvec![u1], 0x1008));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x100c,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        IndirectCallResolvePass.run(&mut ssa).unwrap();

        let ts = ssa.indirect_call_targets.values().next().unwrap();
        match ts {
            TargetSet::Resolved { addr, name } => {
                assert_eq!(*addr, 0xFEED_FACE);
                assert_eq!(name, "sub_feedface");
            }
            other => panic!("expected Resolved, got {other:?}"),
        }
    }

    /// Opaque parameter target ⇒ `Unknown` populated, singleton map
    /// stays empty.
    #[test]
    fn target_set_unknown_for_opaque_parameter() {
        let mut func = Function::new("unk", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(56, 8);
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![rdi],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        IndirectCallResolvePass.run(&mut ssa).unwrap();

        assert!(ssa.resolved_indirect_calls.is_empty());
        assert_eq!(ssa.indirect_call_targets.len(), 1);
        assert!(matches!(
            ssa.indirect_call_targets.values().next().unwrap(),
            TargetSet::Unknown
        ));
    }
}
