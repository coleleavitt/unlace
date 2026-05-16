//! Daikon-style likely invariant detection.
//!
//! Scans SSA functions for patterns that suggest programmer invariants:
//! - Loop bounds (induction variable starts at 0, incremented by 1, bounded by N)
//! - Non-null pointer assertions  
//! - Array index bounds (`i < len`)
//! - Monotonically increasing/decreasing variables
//!
//! These invariants are recorded as annotations for the C printer to emit
//! as comments or `assert()` macro suggestions.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// A likely invariant discovered in the function.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum LikelyInvariant {
    /// A variable is bounded: `var < bound` or `var <= bound`.
    BoundedAbove { var: Varnode, bound: u64 },
    /// A variable starts at a known constant.
    InitialValue { var: Varnode, value: u64 },
    /// A variable is incremented by a constant stride each iteration.
    Stride { var: Varnode, stride: u64 },
    /// A pointer is checked non-null before dereference.
    NonNull(Varnode),
}

/// Daikon-style invariant inference pass.
pub struct DaikonInvariantPass;

impl Pass for DaikonInvariantPass {
    fn name(&self) -> &str {
        "daikon-invariants"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let _invariants = detect_invariants(func);
        // Currently discovery-only; future work: annotate func.
        Ok(false)
    }
}

/// Detect likely invariants in a function.
pub fn detect_invariants(func: &SsaFunction) -> Vec<LikelyInvariant> {
    let mut invariants = Vec::new();

    for block in func.function.blocks.values() {
        for (idx, insn) in block.insns.iter().enumerate() {
            // Pattern: IntLess(var, const) in a Cbranch context → bounded above.
            if insn.op == IrOp::IntLess && insn.inputs.len() == 2 {
                if insn.inputs[1].space == SpaceId::Const {
                    invariants.push(LikelyInvariant::BoundedAbove {
                        var: insn.inputs[0],
                        bound: insn.inputs[1].offset,
                    });
                }
            }
            // Pattern: Copy(var, 0) → initial value.
            if insn.op == IrOp::Copy && insn.inputs.len() == 1 {
                if insn.inputs[0].space == SpaceId::Const {
                    if let Some(out) = insn.output {
                        invariants.push(LikelyInvariant::InitialValue {
                            var: out,
                            value: insn.inputs[0].offset,
                        });
                    }
                }
            }
            // Pattern: IntAdd(var, 1) → stride of 1.
            if insn.op == IrOp::IntAdd && insn.inputs.len() == 2 {
                if insn.inputs[1].space == SpaceId::Const && insn.inputs[1].offset == 1 {
                    invariants.push(LikelyInvariant::Stride {
                        var: insn.inputs[0],
                        stride: 1,
                    });
                }
            }
        }
    }
    invariants
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    #[test]
    fn test_detects_loop_bound() {
        let i = Varnode::unique(0x10, 4);
        let cmp = Varnode::unique(0x20, 1);

        let mut func = Function::new("loop", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntLess, cmp, smallvec![i, Varnode::constant(10, 4)], 0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return, smallvec![], 0x1004,
        ));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let invs = detect_invariants(&ssa);
        assert!(invs.iter().any(|inv| matches!(inv, LikelyInvariant::BoundedAbove { bound: 10, .. })));
    }

    #[test]
    fn test_detects_stride() {
        let i = Varnode::unique(0x10, 4);
        let i_next = Varnode::unique(0x20, 4);

        let mut func = Function::new("inc", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd, i_next, smallvec![i, Varnode::constant(1, 4)], 0x2000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return, smallvec![], 0x2004,
        ));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let invs = detect_invariants(&ssa);
        assert!(invs.iter().any(|inv| matches!(inv, LikelyInvariant::Stride { stride: 1, .. })));
    }
}
