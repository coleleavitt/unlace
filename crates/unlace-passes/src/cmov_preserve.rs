//! CMOVcc preservation pass (Wave 29 combiner skeleton).
//!
//! Ensures that conditional-move instructions (which the lifter emits as
//! single-insn if-blocks `if (cond) { dst = src }`) survive copy
//! propagation and SCCP intact, so they can later be printed as ternary
//! expressions `cond ? a : b`.
//!
//! Currently a skeleton — returns `Ok(false)` without modifying IR.
//! Implementation will detect single-COPY if-blocks and mark their
//! outputs so downstream passes preserve the ternary structure.

use unlace_ir::ssa::SsaFunction;

use crate::pass::{Pass, PassError, PassPhase};

/// CMOVcc preservation: prevents SCCP/copy-prop from shattering ternary
/// candidates into multi-block patterns that degrade to gotos.
pub struct CmovPreservePass;

impl Pass for CmovPreservePass {
    fn name(&self) -> &str {
        "CmovPreservePass"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::PreOpt
    }

    fn min_maturity(&self) -> unlace_ir::Maturity {
        unlace_ir::Maturity::Generated
    }

    fn run(&self, _func: &mut SsaFunction) -> Result<bool, PassError> {
        // Skeleton: no-op until CMOVcc detection is implemented.
        // TODO: Detect single-insn if-blocks matching the pattern:
        //   block_cond: CBRANCH(cond, true_blk, false_blk)
        //   true_blk: [single COPY/INT_ZEXT/INT_SEXT] → falls to join
        //   false_blk: [empty or single COPY] → falls to join
        // Mark the COPY target as "cmov_preserved" in SsaFunction metadata.
        Ok(false)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    #[test]
    fn skeleton_returns_false() {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec::smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        assert!(!CmovPreservePass.run(&mut ssa).unwrap());
    }
}
