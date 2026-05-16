//! Tail call detection: rewrite unconditional branches at function boundaries
//! into tail call annotations so the C printer can emit `return callee()`.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrOp, SpaceId};

use crate::pass::{Pass, PassError};

pub struct TailCallDetectPass;

impl Pass for TailCallDetectPass {
    fn name(&self) -> &str {
        "tail-call-detect"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::GlobalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let func_start = func.function.addr;
        let func_end = max_insn_addr(&func.function);

        let mut changed = false;

        let candidates: Vec<_> = func
            .function
            .blocks
            .iter()
            .filter_map(|(&bid, block)| {
                let last = block.insns.last()?;
                if last.op != IrOp::Branch {
                    return None;
                }
                let target_vn = last.inputs.first()?;
                if target_vn.space != SpaceId::Const {
                    return None;
                }
                let target = target_vn.offset;
                if target >= func_start && target <= func_end {
                    return None;
                }
                Some((bid, target))
            })
            .collect();

        for (bid, target) in candidates {
            func.tail_call_map.insert(bid, target);
            changed = true;
        }

        Ok(changed)
    }
}

fn max_insn_addr(func: &unlace_ir::Function) -> u64 {
    func.blocks
        .values()
        .flat_map(|b| b.insns.iter())
        .map(|insn| insn.addr)
        .max()
        .unwrap_or(func.addr)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::pass::Pass;

    fn make_func_with_branch(branch_target: u64, func_addr: u64) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), func_addr);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(8, 8), Varnode::constant(1, 8)],
            func_addr,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(branch_target, 8)],
            func_addr + 0x10,
        ));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            func_addr + 0x20,
        ));

        func.insert_block(bb0);
        func.insert_block(bb1);
        build_ssa(func)
    }

    #[test]
    fn test_tail_call_detected() {
        let func_addr = 0x1000;
        let external_target = 0x5000;
        let mut ssa = make_func_with_branch(external_target, func_addr);

        let pass = TailCallDetectPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "should detect tail call");
        assert_eq!(
            ssa.tail_call_map.get(&BlockId(0)).copied(),
            Some(external_target),
            "block 0 should be marked as tail call to 0x5000",
        );
    }

    #[test]
    fn test_normal_branch_not_tail_call() {
        let func_addr = 0x1000;
        let internal_target = 0x1010;
        let mut ssa = make_func_with_branch(internal_target, func_addr);

        let pass = TailCallDetectPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "intra-function branch should not be a tail call");
        assert!(
            ssa.tail_call_map.is_empty(),
            "tail_call_map should be empty for internal branches",
        );
    }

    #[test]
    fn test_cbranch_not_detected() {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x5000, 8), Varnode::constant(1, 1)],
            0x1000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        let mut ssa = build_ssa(func);

        let pass = TailCallDetectPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "CBRANCH should not be detected as tail call");
    }

    #[test]
    fn test_return_not_detected() {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1000,
        ));
        func.insert_block(bb0);
        let mut ssa = build_ssa(func);

        let pass = TailCallDetectPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
        assert!(ssa.tail_call_map.is_empty());
    }
}
