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

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

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
        let mut found: BTreeMap<(BlockId, usize), u64> = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Callind {
                    continue;
                }
                let Some(target_vn) = insn.inputs.first() else {
                    continue;
                };

                if target_vn.space == SpaceId::Const {
                    found.insert((bid, insn_idx), target_vn.offset);
                    continue;
                }

                let Some(&target_sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                else {
                    continue;
                };

                let mut visited = BTreeSet::new();
                if let Some(addr) = trace_constant(func, target_sv, &mut visited) {
                    found.insert((bid, insn_idx), addr);
                }
            }
        }

        let changed = found != snapshot;
        func.resolved_indirect_calls = found;
        Ok(changed)
    }
}

/// Walk backwards through `Copy` chains and `Load(const_address)`
/// indirections, looking for a single concrete address.
///
/// Returns `Some(addr)` only when a *unique* constant is reached; cycles,
/// phi joins, or multi-source aliasing yield `None` — preserving the
/// "singleton-only" rule.
fn trace_constant(
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
            let inp = insn.inputs.first()?;
            if inp.space == SpaceId::Const {
                return Some(inp.offset);
            }
            let next = func
                .var_map
                .get(&(def_loc.0, def_loc.1, VarnodeSlot::Input(0)))?;
            trace_constant(func, *next, visited)
        }

        IrOp::Load => {
            let addr = insn.inputs.get(1)?;
            if addr.space == SpaceId::Const {
                return Some(addr.offset);
            }
            None
        }

        IrOp::IntAdd => match (insn.inputs.first(), insn.inputs.get(1)) {
            (Some(a), Some(b)) if a.space == SpaceId::Const && b.space == SpaceId::Const => {
                Some(a.offset.wrapping_add(b.offset))
            }
            _ => None,
        },

        _ => None,
    }
}

/// Locate the `(BlockId, insn_index)` whose output is `sv`, by linear
/// scan through `var_map`. Phi-defined values are intentionally not
/// returned (they imply a multi-source join).
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
}
