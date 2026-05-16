//! 64-bit demotion pass (Wave 29 combiner skeleton).
//!
//! When the upper 32 bits of a 64-bit arithmetic operation are provably
//! unused/dead, this pass narrows the IR op to 32-bit. Models IDA's
//! `sub_14A660` inner combiner behaviour and the `sub_B04B0` 64→32
//! demotion logic.
//!
//! Currently a skeleton — returns `Ok(false)` without modifying IR.
//! Implementation will walk uses of 8-byte INT_ADD/SUB/AND/OR/XOR outputs
//! and check if any consumer reads bytes 4..7 (via SUBPIECE or full-width).

use unlace_ir::ssa::SsaFunction;

use crate::pass::{Pass, PassError, PassPhase};

/// 64-bit demotion: narrows 8-byte ops to 4-byte when upper half is dead.
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

    fn run(&self, _func: &mut SsaFunction) -> Result<bool, PassError> {
        // Skeleton: no-op until the demotion logic is implemented.
        // TODO: For each 8-byte INT_ADD/INT_SUB/INT_AND/INT_OR/INT_XOR:
        //   1. Walk all uses of the output varnode.
        //   2. Check if any use reads bytes 4..7.
        //   3. If not, replace with 4-byte version + ZEXT at use sites.
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
        assert!(!SixtyFourBitDemotePass.run(&mut ssa).unwrap());
    }
}
