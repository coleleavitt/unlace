use capstone::arch::ppc::PpcOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_imm, operand_reg};

fn copy_result(
    ctx: &mut LiftCtx,
    dst: Varnode,
    op: IrOp,
    inputs: smallvec::SmallVec<[Varnode; 3]>,
) {
    let result = Varnode::unique(ctx.alloc_unique(), dst.size);
    ctx.emit(IrInsn::with_output(op, result, inputs, ctx.addr));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        dst,
        smallvec![result],
        ctx.addr,
    ));
}

fn lift_reg_binop(ctx: &mut LiftCtx, ops: &[PpcOperand], op: IrOp, reverse: bool) {
    let (rd, ra, rb) = match (
        ops.first().and_then(|o| operand_reg(ctx, o)),
        ops.get(1).and_then(|o| operand_reg(ctx, o)),
        ops.get(2).and_then(|o| operand_reg(ctx, o)),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let inputs = if reverse {
        smallvec![rb, ra]
    } else {
        smallvec![ra, rb]
    };
    copy_result(ctx, rd, op, inputs);
}

fn lift_imm_binop(ctx: &mut LiftCtx, ops: &[PpcOperand], op: IrOp) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let ra = match ops.get(1).and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let imm = match ops.get(2).and_then(operand_imm) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    copy_result(
        ctx,
        rd,
        op,
        smallvec![ra, Varnode::constant(imm as u64, rd.size)],
    );
}

/// ADD rD, rA, rB  →  rD = rA + rB
pub fn lift_add(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntAdd, false);
}

/// ADDI rD, rA, imm  →  rD = rA + sext(imm)
pub fn lift_addi(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let ra = ops.get(1).and_then(|o| operand_reg(ctx, o));
    let imm = ops
        .get(1)
        .and_then(operand_imm)
        .or_else(|| ops.get(2).and_then(operand_imm));

    match (ra, imm) {
        (Some(ra_vn), Some(imm_val)) => copy_result(
            ctx,
            rd,
            IrOp::IntAdd,
            smallvec![ra_vn, Varnode::constant(imm_val as u64, rd.size)],
        ),
        (None, Some(imm_val)) => ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            rd,
            smallvec![Varnode::constant(imm_val as u64, rd.size)],
            ctx.addr,
        )),
        _ => ctx.emit_unimplemented(),
    }
}

/// ADDIS rD, rA, imm  →  rD = rA + (imm << 16)
pub fn lift_addis(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let ra = ops.get(1).and_then(|o| operand_reg(ctx, o));
    let imm = ops
        .get(1)
        .and_then(operand_imm)
        .or_else(|| ops.get(2).and_then(operand_imm));

    match (ra, imm) {
        (Some(ra_vn), Some(imm_val)) => {
            let shifted = (imm_val as i16 as i64) << 16;
            copy_result(
                ctx,
                rd,
                IrOp::IntAdd,
                smallvec![ra_vn, Varnode::constant(shifted as u64, rd.size)],
            );
        }
        (None, Some(imm_val)) => {
            let shifted = (imm_val as i16 as i64) << 16;
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rd,
                smallvec![Varnode::constant(shifted as u64, rd.size)],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

/// SUBF rD, rA, rB  →  rD = rB - rA  (note operand order)
pub fn lift_subf(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntSub, true);
}

/// SUB rD, rA, rB  →  rD = rA - rB  (simplified mnemonic for SUBF with swapped args)
pub fn lift_sub(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntSub, false);
}

pub fn lift_mullw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntMult, false);
}

pub fn lift_mulli(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_imm_binop(ctx, ops, IrOp::IntMult);
}

pub fn lift_divw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntSdiv, false);
}

pub fn lift_divwu(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_reg_binop(ctx, ops, IrOp::IntDiv, false);
}
