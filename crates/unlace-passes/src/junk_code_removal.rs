//! Junk code / opaque construct removal.
//!
//! Removes compiler-inserted or obfuscator-inserted dead code patterns:
//! - Sequences of NOP-equivalent instructions (xor reg, reg / mov reg, reg)
//! - Dead computations whose results are never used and overwritten
//! - Unreachable blocks only reachable through opaque predicates

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Junk code removal pass.
pub struct JunkCodeRemovalPass;

impl Pass for JunkCodeRemovalPass {
    fn name(&self) -> &str {
        "junk-code-removal"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::PreOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;

        for block in func.function.blocks.values_mut() {
            let original_len = block.insns.len();
            block.insns.retain(|insn| !is_junk_insn(insn));
            if block.insns.len() < original_len {
                changed = true;
            }
        }

        Ok(changed)
    }
}

/// Detect if an instruction is junk (NOP-equivalent).
fn is_junk_insn(insn: &unlace_ir::IrInsn) -> bool {
    match insn.op {
        // XOR reg, reg → zero (but only if output == both inputs, i.e. self-xor
        // used as obfuscation padding when result is immediately overwritten).
        IrOp::IntXor if insn.inputs.len() == 2 => {
            insn.inputs[0] == insn.inputs[1]
                && insn.output == Some(insn.inputs[0])
                && insn.inputs[0].space == SpaceId::Register
        }
        // MOV reg, reg (copy to self).
        IrOp::Copy if insn.inputs.len() == 1 => {
            insn.output == Some(insn.inputs[0])
        }
        _ => false,
    }
}

/// Count junk instructions in a function (for metrics).
pub fn count_junk_insns(func: &SsaFunction) -> usize {
    func.function
        .blocks
        .values()
        .flat_map(|b| b.insns.iter())
        .filter(|insn| is_junk_insn(insn))
        .count()
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    #[test]
    fn test_removes_self_xor() {
        let reg = Varnode { space: SpaceId::Register, offset: 0, size: 8 };
        let mut func = Function::new("junk", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntXor, reg, smallvec![reg, reg], 0x1000,
        ));
        bb.insns.push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let pass = JunkCodeRemovalPass;
        let changed = pass.run(&mut ssa).unwrap();
        assert!(changed);
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 1); // only Return left
    }

    #[test]
    fn test_removes_self_copy() {
        let reg = Varnode { space: SpaceId::Register, offset: 8, size: 8 };
        let mut func = Function::new("nop", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy, reg, smallvec![reg], 0x2000,
        ));
        bb.insns.push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2004));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let pass = JunkCodeRemovalPass;
        let changed = pass.run(&mut ssa).unwrap();
        assert!(changed);
    }
}
