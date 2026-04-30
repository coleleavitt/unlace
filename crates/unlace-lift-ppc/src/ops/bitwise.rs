use capstone::arch::ppc::PpcOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{operand_imm, operand_reg, LiftCtx};

fn lift_reg_binop(ctx: &mut LiftCtx, ops: &[PpcOperand], ir_op: IrOp) {
    let (rd, ra, rb) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
        ops.get(2).and_then(operand_reg),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(ir_op, result, smallvec![ra, rb], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![result], ctx.addr));
}

fn lift_imm_binop(ctx: &mut LiftCtx, ops: &[PpcOperand], ir_op: IrOp) {
    let (rd, ra) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
    ) {
        (Some(d), Some(a)) => (d, a),
        _ => return ctx.emit_unimplemented(),
    };
    let imm = match ops.get(2).and_then(|o| operand_imm(o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let imm_vn = Varnode::constant(imm as u64, 8);
    let result = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(ir_op, result, smallvec![ra, imm_vn], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![result], ctx.addr));
}

pub fn lift_and(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntAnd);
}

pub fn lift_andi(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_imm_binop(ctx, ops, IrOp::IntAnd);
}

pub fn lift_or(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntOr);
}

pub fn lift_ori(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_imm_binop(ctx, ops, IrOp::IntOr);
}

pub fn lift_xor(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntXor);
}

pub fn lift_xori(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_imm_binop(ctx, ops, IrOp::IntXor);
}

pub fn lift_slw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntLeft);
}

pub fn lift_srw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntRight);
}

pub fn lift_sraw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let (rd, ra) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
    ) {
        (Some(d), Some(a)) => (d, a),
        _ => return ctx.emit_unimplemented(),
    };

    let shift = ops
        .get(2)
        .and_then(|o| operand_reg(o).map(ShiftSource::Reg).or_else(|| operand_imm(o).map(ShiftSource::Imm)));

    let shift_vn = match shift {
        Some(ShiftSource::Reg(v)) => v,
        Some(ShiftSource::Imm(i)) => Varnode::constant(i as u64, 8),
        None => return ctx.emit_unimplemented(),
    };

    let result = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(IrOp::IntSright, result, smallvec![ra, shift_vn], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![result], ctx.addr));
}

enum ShiftSource {
    Reg(Varnode),
    Imm(i64),
}
