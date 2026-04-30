//! Expression tree building pass.
//!
//! Transforms flat SSA IR into expression trees by identifying single-use,
//! non-side-effecting instructions that can be folded inline as
//! sub-expressions of their consumer.

use std::collections::BTreeMap;
use std::collections::BTreeSet;

use unlace_ir::IrOp;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};

use crate::pass::{Pass, PassError};

const fn is_never_foldable(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Store
            | IrOp::Load
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::Return
            | IrOp::New
            | IrOp::Callother
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Multiequal
    )
}

pub struct ExpressionTreePass;

impl Pass for ExpressionTreePass {
    fn name(&self) -> &str {
        "expression-tree"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut use_counts: BTreeMap<SsaVarnode, usize> = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                for input_idx in 0..insn.inputs.len() {
                    if let Some(&sv) = func
                        .var_map
                        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
                    {
                        *use_counts.entry(sv).or_insert(0) += 1;
                    }
                }
            }
        }

        for phis in func.phi_map.values() {
            for phi in phis {
                for &(_pred, sv) in &phi.inputs {
                    *use_counts.entry(sv).or_insert(0) += 1;
                }
            }
        }

        let mut foldable = BTreeSet::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if is_never_foldable(insn.op) {
                    continue;
                }

                let output_sv = match func
                    .var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Output))
                {
                    Some(&sv) => sv,
                    None => continue,
                };

                if use_counts.get(&output_sv).copied().unwrap_or(0) == 1 {
                    foldable.insert(output_sv);
                }
            }
        }

        let changed = foldable != func.foldable_exprs;
        func.foldable_exprs = foldable;
        Ok(changed)
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{SsaVarnode, VarnodeSlot, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn test_expr_tree_simple_fold() {
        // v1 = LOAD addr     (not foldable — side-effecting)
        // v2 = v1 + 5        (single use → foldable)
        // v3 = v2 * 3        (single use → foldable)
        // RETURN v3           (consumed by return)
        //
        // After pass: v2 and v3 should be marked foldable.
        // v1 (LOAD) should NOT be foldable.
        let addr = Varnode::reg(0, 8);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(4, 4);
        let v3 = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);
        let c3 = Varnode::constant(3, 4);

        let space_id = Varnode::constant(0, 4);
        let load = IrInsn::with_output(
            IrOp::Load,
            v1,
            smallvec![space_id, addr],
            0x1000,
        );
        let add = IrInsn::with_output(
            IrOp::IntAdd,
            v2,
            smallvec![v1, c5],
            0x1004,
        );
        let mul = IrInsn::with_output(
            IrOp::IntMult,
            v3,
            smallvec![v2, c3],
            0x1008,
        );
        let ret = IrInsn::without_output(
            IrOp::Return,
            smallvec![v3],
            0x100C,
        );

        let mut ssa = make_single_block_ssa(vec![load, add, mul, ret]);

        let pass = ExpressionTreePass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "should have found foldable expressions");

        // LOAD is never foldable
        let load_sv = ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("load output");
        assert!(
            !ssa.foldable_exprs.contains(load_sv),
            "LOAD should not be foldable"
        );

        // ADD (single use by MUL) should be foldable
        let add_sv = ssa
            .var_map
            .get(&(BlockId(0), 1, VarnodeSlot::Output))
            .expect("add output");
        assert!(
            ssa.foldable_exprs.contains(add_sv),
            "single-use ADD should be foldable"
        );

        // MUL (single use by RETURN) should be foldable
        let mul_sv = ssa
            .var_map
            .get(&(BlockId(0), 2, VarnodeSlot::Output))
            .expect("mul output");
        assert!(
            ssa.foldable_exprs.contains(mul_sv),
            "single-use MUL should be foldable"
        );
    }

    #[test]
    fn test_expr_tree_multiple_uses_kept() {
        // v1 = r0 + 5        (used by both v2 and v3 → NOT foldable)
        // v2 = v1 * 3
        // v3 = v1 - 1
        let r0 = Varnode::reg(0, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(4, 4);
        let v3 = Varnode::unique(8, 4);
        let c5 = Varnode::constant(5, 4);
        let c3 = Varnode::constant(3, 4);
        let c1 = Varnode::constant(1, 4);

        let insn1 = IrInsn::with_output(IrOp::IntAdd, v1, smallvec![r0, c5], 0x1000);
        let insn2 = IrInsn::with_output(IrOp::IntMult, v2, smallvec![v1, c3], 0x1004);
        let insn3 = IrInsn::with_output(IrOp::IntSub, v3, smallvec![v1, c1], 0x1008);

        let mut ssa = make_single_block_ssa(vec![insn1, insn2, insn3]);

        let pass = ExpressionTreePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let v1_sv = ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("v1 output");
        assert!(
            !ssa.foldable_exprs.contains(v1_sv),
            "multi-use v1 should NOT be foldable"
        );
    }

    #[test]
    fn test_expr_tree_side_effect_kept() {
        // v1 = CALL target    (never foldable even if single-use)
        // v2 = v1 + 1
        let target = Varnode::constant(0x2000, 8);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(4, 4);
        let c1 = Varnode::constant(1, 4);

        let call = IrInsn::with_output(IrOp::Call, v1, smallvec![target], 0x1000);
        let add = IrInsn::with_output(IrOp::IntAdd, v2, smallvec![v1, c1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![call, add]);

        let pass = ExpressionTreePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let call_sv = ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("call output");
        assert!(
            !ssa.foldable_exprs.contains(call_sv),
            "CALL should never be foldable"
        );
    }
}
