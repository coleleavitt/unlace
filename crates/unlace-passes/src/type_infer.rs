//! Primitive type inference pass.

use std::collections::BTreeMap;

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

pub struct TypeInferPass;

impl Pass for TypeInferPass {
    fn name(&self) -> &str {
        "TypeInfer"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let before_len = func.var_types.len();
        let snapshot: BTreeMap<SsaVarnode, PrimitiveType> = func.var_types.clone();

        let max_iterations = 100;
        let mut changed = true;
        let mut iteration = 0;
        while changed {
            if iteration >= max_iterations {
                tracing::warn!(
                    iterations = max_iterations,
                    "TypeInferPass hit iteration limit; possible oscillation"
                );
                break;
            }
            iteration += 1;
            changed = false;
            for (&bid, block) in &func.function.blocks {
                for (insn_idx, insn) in block.insns.iter().enumerate() {
                    changed |=
                        infer_insn(&func.var_map, &mut func.var_types, bid, insn_idx, insn);
                }
            }

            for phis in func.phi_map.values() {
                for phi in phis {
                    let existing = current_type(&func.var_types, &phi.output);
                    let mut merged = existing;
                    for (_pred, input) in &phi.inputs {
                        merged = merged.join(current_type(&func.var_types, input));
                    }
                    if merged != existing {
                        changed |= set_type(&mut func.var_types, phi.output, merged);
                    }
                    for (_pred, input) in &phi.inputs {
                        if current_type(&func.var_types, input) != merged {
                            changed |= set_type(&mut func.var_types, *input, merged);
                        }
                    }
                }
            }
        }

        let types_changed = func.var_types.len() != before_len || func.var_types != snapshot;
        Ok(types_changed)
    }
}

fn current_type(
    var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
    sv: &SsaVarnode,
) -> PrimitiveType {
    var_types.get(sv).copied().unwrap_or(PrimitiveType::Unknown)
}

fn set_type(
    var_types: &mut BTreeMap<SsaVarnode, PrimitiveType>,
    sv: SsaVarnode,
    ty: PrimitiveType,
) -> bool {
    let old = var_types.get(&sv).copied().unwrap_or(PrimitiveType::Unknown);
    let joined = old.join(ty);
    if joined != old {
        var_types.insert(sv, joined);
        true
    } else if !var_types.contains_key(&sv) && ty != PrimitiveType::Unknown {
        var_types.insert(sv, ty);
        true
    } else {
        false
    }
}

type VarMap = BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>;
type TypeMap = BTreeMap<SsaVarnode, PrimitiveType>;

fn infer_insn(
    var_map: &VarMap,
    var_types: &mut TypeMap,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> bool {
    let mut changed = false;

    let output_sv = var_map
        .get(&(bid, insn_idx, VarnodeSlot::Output))
        .copied();

    let input_sv = |idx: usize| -> Option<SsaVarnode> {
        var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(idx)))
            .copied()
    };

    match insn.op {
        // Integer arithmetic: inputs + output -> Int(size)
        IrOp::IntAdd
        | IrOp::IntSub
        | IrOp::IntMult
        | IrOp::IntNegate
        | IrOp::Int2comp
        | IrOp::IntAnd
        | IrOp::IntOr
        | IrOp::IntXor
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Unsigned-flavored integer ops
        IrOp::IntDiv | IrOp::IntRem | IrOp::IntZext => {
            if let Some(out) = output_sv {
                changed |=
                    set_type(var_types, out, PrimitiveType::UnsignedInt(out.base.size));
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |=
                        set_type(var_types, sv, PrimitiveType::UnsignedInt(sv.base.size));
                }
            }
        }

        // Signed-flavored integer ops
        IrOp::IntSdiv | IrOp::IntSrem | IrOp::IntSext => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Integer comparisons: inputs -> Int(size), output -> Bool
        IrOp::IntEqual | IrOp::IntNotequal | IrOp::IntLess | IrOp::IntLessequal => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Signed comparisons: inputs -> Int(size), output -> Bool
        IrOp::IntSless | IrOp::IntSlessequal => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Carry/overflow flags: inputs -> Int, output -> Bool
        IrOp::IntCarry | IrOp::IntScarry | IrOp::IntSborrow => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Boolean ops: inputs + output -> Bool
        IrOp::BoolNegate | IrOp::BoolAnd | IrOp::BoolOr | IrOp::BoolXor => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Bool);
                }
            }
        }

        // Float arithmetic: inputs + output -> Float or Double based on size
        IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatNeg
        | IrOp::FloatAbs
        | IrOp::FloatSqrt
        | IrOp::FloatCeil
        | IrOp::FloatFloor
        | IrOp::FloatRound
        | IrOp::FloatTrunc => {
            if let Some(out) = output_sv {
                let ft = float_type_for_size(out.base.size);
                changed |= set_type(var_types, out, ft);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    let ft = float_type_for_size(sv.base.size);
                    changed |= set_type(var_types, sv, ft);
                }
            }
        }

        // Float comparisons: inputs -> Float/Double, output -> Bool
        IrOp::FloatEqual | IrOp::FloatNotequal | IrOp::FloatLess | IrOp::FloatLessequal => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    let ft = float_type_for_size(sv.base.size);
                    changed |= set_type(var_types, sv, ft);
                }
            }
        }

        // FLOAT_NAN: input -> Float/Double, output -> Bool
        IrOp::FloatNan => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            if let Some(sv) = input_sv(0) {
                let ft = float_type_for_size(sv.base.size);
                changed |= set_type(var_types, sv, ft);
            }
        }

        // FLOAT_INT2FLOAT: input -> Int, output -> Float/Double
        IrOp::FloatInt2float => {
            if let Some(out) = output_sv {
                let ft = float_type_for_size(out.base.size);
                changed |= set_type(var_types, out, ft);
            }
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
            }
        }

        // FLOAT_FLOAT2FLOAT: input -> Float/Double, output -> Float/Double
        IrOp::FloatFloat2float => {
            if let Some(out) = output_sv {
                let ft = float_type_for_size(out.base.size);
                changed |= set_type(var_types, out, ft);
            }
            if let Some(sv) = input_sv(0) {
                let ft = float_type_for_size(sv.base.size);
                changed |= set_type(var_types, sv, ft);
            }
        }

        // FLOAT_FLOAT2INT: input -> Float/Double, output -> Int
        IrOp::FloatFloat2int => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
            }
            if let Some(sv) = input_sv(0) {
                let ft = float_type_for_size(sv.base.size);
                changed |= set_type(var_types, sv, ft);
            }
        }

        // LOAD: input1 (address) -> Ptr, output -> Int(size)
        IrOp::Load => {
            if let Some(sv) = input_sv(1) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
            }
        }

        // STORE: input1 (address) -> Ptr
        IrOp::Store => {
            if let Some(sv) = input_sv(1) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
        }

        // CBRANCH: input1 (condition) -> Bool
        IrOp::Cbranch => {
            if let Some(sv) = input_sv(1) {
                changed |= set_type(var_types, sv, PrimitiveType::Bool);
            }
        }

        // CALL/CALLIND: input0 (target) -> Ptr
        IrOp::Call | IrOp::Callind => {
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
        }

        // COPY: propagate type bidirectionally
        IrOp::Copy => {
            let in_ty = input_sv(0).map(|sv| current_type(var_types, &sv));
            let out_ty = output_sv.map(|sv| current_type(var_types, &sv));
            if let (Some(inp), Some(out), Some(it), Some(ot)) =
                (input_sv(0), output_sv, in_ty, out_ty)
            {
                let joined = it.join(ot);
                if joined != PrimitiveType::Unknown {
                    changed |= set_type(var_types, inp, joined);
                    changed |= set_type(var_types, out, joined);
                }
            }
        }

        // PTRADD/PTRSUB: input0 -> Ptr, output -> Ptr
        IrOp::Ptradd | IrOp::Ptrsub => {
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Ptr);
            }
        }

        // BRANCHIND/RETURN: input0 -> Ptr (indirect target / return address)
        IrOp::Branchind | IrOp::Return => {
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
        }

        _ => {}
    }

    changed
}

fn float_type_for_size(size: u8) -> PrimitiveType {
    match size {
        4 => PrimitiveType::Float,
        _ => PrimitiveType::Double,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn run_type_infer(func: Function) -> SsaFunction {
        let mut ssa = build_ssa(func);
        let pass = TypeInferPass;
        pass.run(&mut ssa).expect("TypeInferPass should not error");
        ssa
    }

    fn lookup_output_type(
        ssa: &SsaFunction,
        bid: BlockId,
        insn_idx: usize,
    ) -> Option<PrimitiveType> {
        let sv = ssa.var_map.get(&(bid, insn_idx, VarnodeSlot::Output))?;
        ssa.var_types.get(sv).copied()
    }

    fn lookup_input_type(
        ssa: &SsaFunction,
        bid: BlockId,
        insn_idx: usize,
        input_idx: usize,
    ) -> Option<PrimitiveType> {
        let sv = ssa
            .var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))?;
        ssa.var_types.get(sv).copied()
    }

    #[test]
    fn test_int_add_typed_int() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("int_add_test", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Int(8)));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Int(8)));
    }

    #[test]
    fn test_load_addr_typed_ptr() {
        let v_addr = Varnode::reg(0, 8);
        let v_out = Varnode::reg(8, 4);
        let space_ram = Varnode::constant(1, 8);

        let mut func = Function::new("load_test", BlockId(0), 0x2000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v_out,
            smallvec![space_ram, v_addr],
            0x2000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let addr_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(addr_ty, Some(PrimitiveType::Ptr));

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Int(4)));
    }

    #[test]
    fn test_cbranch_cond_bool() {
        let v_cond = Varnode::reg(0, 1);
        let target = Varnode::constant(0x3010, 8);

        let mut func = Function::new("cbranch_test", BlockId(0), 0x3000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target, v_cond],
            0x3000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = run_type_infer(func);

        let cond_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(cond_ty, Some(PrimitiveType::Bool));
    }

    #[test]
    fn test_float_add() {
        let r0 = Varnode::reg(0, 4);
        let r4 = Varnode::reg(4, 4);
        let r8 = Varnode::reg(8, 4);

        let mut func = Function::new("float_add_test", BlockId(0), 0x4000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::FloatAdd,
            r0,
            smallvec![r4, r8],
            0x4000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x4008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Float));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Float));

        let in1_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(in1_ty, Some(PrimitiveType::Float));
    }

    #[test]
    fn test_float_double_size() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let r16 = Varnode::reg(16, 8);

        let mut func = Function::new("float_double_test", BlockId(0), 0x5000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::FloatAdd,
            r0,
            smallvec![r8, r16],
            0x5000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x5008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Double));
    }

    #[test]
    fn test_bool_ops() {
        let r0 = Varnode::reg(0, 1);
        let r1 = Varnode::reg(1, 1);
        let r2 = Varnode::reg(2, 1);

        let mut func = Function::new("bool_test", BlockId(0), 0x6000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::BoolAnd,
            r0,
            smallvec![r1, r2],
            0x6000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x6008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Bool));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Bool));
    }

    #[test]
    fn test_comparison_output_bool() {
        let r0 = Varnode::reg(0, 1);
        let r8 = Varnode::reg(8, 4);
        let r12 = Varnode::reg(12, 4);

        let mut func = Function::new("cmp_test", BlockId(0), 0x7000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntSless,
            r0,
            smallvec![r8, r12],
            0x7000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x7008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Bool));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Int(4)));
    }

    #[test]
    fn test_store_addr_ptr() {
        let v_addr = Varnode::reg(0, 8);
        let v_val = Varnode::reg(8, 4);
        let space_ram = Varnode::constant(1, 8);

        let mut func = Function::new("store_test", BlockId(0), 0x8000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, v_addr, v_val],
            0x8000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x8008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let addr_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(addr_ty, Some(PrimitiveType::Ptr));
    }

    #[test]
    fn test_call_const_target_no_crash() {
        let target = Varnode::constant(0x1234, 8);

        let mut func = Function::new("call_test", BlockId(0), 0x9000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![target],
            0x9000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x9008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        assert!(
            ssa.var_types.is_empty()
                || ssa
                    .var_types
                    .values()
                    .all(|t| *t != PrimitiveType::Unknown)
        );
    }

    #[test]
    fn test_callind_target_ptr() {
        let v_target = Varnode::reg(0, 8);

        let mut func = Function::new("callind_test", BlockId(0), 0xa000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![v_target],
            0xa000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xa008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let target_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(target_ty, Some(PrimitiveType::Ptr));
    }

    #[test]
    fn test_lattice_join() {
        assert_eq!(
            PrimitiveType::Unknown.join(PrimitiveType::Int(4)),
            PrimitiveType::Int(4)
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::Unknown),
            PrimitiveType::Int(4)
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::Int(4)),
            PrimitiveType::Int(4)
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::Float),
            PrimitiveType::Unknown
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::UnsignedInt(4)),
            PrimitiveType::Int(4)
        );
    }
}
