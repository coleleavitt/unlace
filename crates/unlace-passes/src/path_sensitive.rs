//! Path-sensitive type narrowing via Z3-style constraint propagation.
//!
//! After a conditional branch `if (x != NULL)`, the true-branch can assume
//! `x` is a valid pointer. This pass propagates such path conditions to
//! refine types along dominated paths without a full SMT solver — it uses
//! a lightweight abstract-interpretation style forward dataflow.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// A path condition learned from a conditional branch.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PathFact {
    /// The variable is known to be non-zero on this path.
    NonZero(SsaVarnode),
    /// The variable is known to be zero (null) on this path.
    IsZero(SsaVarnode),
    /// The variable has a known constant value on this path.
    Constant(SsaVarnode, u64),
}

/// Path-sensitive type narrowing pass.
pub struct PathSensitivePass;

impl Pass for PathSensitivePass {
    fn name(&self) -> &str {
        "path-sensitive"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let facts = collect_path_facts(func);
        let mut changed = false;

        for fact in &facts {
            match fact {
                PathFact::NonZero(sv) => {
                    // If a variable is non-zero on a dominated path and its
                    // type is Unknown, and it's pointer-sized, mark as Ptr.
                    if let Some(ty) = func.var_types.get(sv) {
                        if *ty == PrimitiveType::Unknown && sv.base.size == 8 {
                            func.var_types.insert(*sv, PrimitiveType::Ptr);
                            changed = true;
                        }
                    }
                }
                PathFact::IsZero(sv) => {
                    // Zero value hints at integer usage.
                    if let Some(ty) = func.var_types.get(sv) {
                        if *ty == PrimitiveType::Unknown {
                            func.var_types.insert(*sv, PrimitiveType::Int(sv.base.size));
                            changed = true;
                        }
                    }
                }
                PathFact::Constant(_, _) => {}
            }
        }

        Ok(changed)
    }
}

/// Collect path facts from conditional branches in the function.
pub fn collect_path_facts(func: &SsaFunction) -> Vec<PathFact> {
    let mut facts = Vec::new();

    for (&block_id, block) in &func.function.blocks {
        // Look for Cbranch with IntNotequal/IntEqual against zero.
        if let Some(last) = block.insns.last() {
            if last.op == IrOp::Cbranch && last.inputs.len() >= 2 {
                // The condition varnode is the second input to Cbranch.
                let cond_vn = last.inputs[1];
                // Find the instruction that defined the condition.
                if let Some(cond_def) = find_cond_def(func, &cond_vn) {
                    match cond_def.op {
                        IrOp::IntNotequal if cond_def.inputs.len() == 2 => {
                            let (tested, zero) = if is_zero_const(&cond_def.inputs[1]) {
                                (cond_def.inputs[0], true)
                            } else if is_zero_const(&cond_def.inputs[0]) {
                                (cond_def.inputs[1], true)
                            } else {
                                (cond_def.inputs[0], false)
                            };
                            if zero {
                                if let Some(sv) = find_ssa_varnode(func, block_id, &tested) {
                                    facts.push(PathFact::NonZero(sv));
                                }
                            }
                        }
                        IrOp::IntEqual if cond_def.inputs.len() == 2 => {
                            let (tested, zero) = if is_zero_const(&cond_def.inputs[1]) {
                                (cond_def.inputs[0], true)
                            } else if is_zero_const(&cond_def.inputs[0]) {
                                (cond_def.inputs[1], true)
                            } else {
                                (cond_def.inputs[0], false)
                            };
                            if zero {
                                if let Some(sv) = find_ssa_varnode(func, block_id, &tested) {
                                    facts.push(PathFact::IsZero(sv));
                                }
                            }
                        }
                        _ => {}
                    }
                }
            }
        }
    }

    facts
}

fn is_zero_const(v: &Varnode) -> bool {
    v.space == SpaceId::Const && v.offset == 0
}

fn find_cond_def(func: &SsaFunction, vn: &Varnode) -> Option<unlace_ir::IrInsn> {
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(out) = insn.output {
                if out == *vn {
                    return Some(insn.clone());
                }
            }
        }
    }
    None
}

fn find_ssa_varnode(func: &SsaFunction, block_id: BlockId, vn: &Varnode) -> Option<SsaVarnode> {
    // Search var_map for a matching base varnode in this block.
    for (&(bid, idx, ref slot), sv) in &func.var_map {
        if sv.base == *vn {
            return Some(*sv);
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    #[test]
    fn test_collects_non_null_fact() {
        let ptr_var = Varnode::unique(0x100, 8);
        let cond = Varnode::unique(0x200, 1);

        let mut func = Function::new("null_check", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        // cond = (ptr_var != 0)
        bb.insns.push(IrInsn::with_output(
            IrOp::IntNotequal,
            cond,
            smallvec![ptr_var, Varnode::constant(0, 8)],
            0x1000,
        ));
        // cbranch(target, cond)
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x2000, 8), cond],
            0x1004,
        ));
        func.insert_block(bb);

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2000));
        func.insert_block(bb1);

        let ssa = build_ssa(func);
        let facts = collect_path_facts(&ssa);
        assert!(!facts.is_empty());
        assert!(matches!(facts[0], PathFact::NonZero(_)));
    }
}
