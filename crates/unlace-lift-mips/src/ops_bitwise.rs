use capstone::arch::mips::MipsOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

fn lift_reg3(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let a = ctx.read_operand(&ops[1]);
    let b = ctx.read_operand(&ops[2]);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let result = ctx.alloc_word();
            ctx.emit(IrInsn::with_output(
                ir_op,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

fn lift_reg_imm(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let a = ctx.read_operand(&ops[1]);
    let b = ctx.read_operand(&ops[2]);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let result = ctx.alloc_word();
            ctx.emit(IrInsn::with_output(
                ir_op,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_and(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_reg3(ctx, ops, IrOp::IntAnd);
}

pub fn lift_andi(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_reg_imm(ctx, ops, IrOp::IntAnd);
}

pub fn lift_or(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_reg3(ctx, ops, IrOp::IntOr);
}

pub fn lift_ori(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_reg_imm(ctx, ops, IrOp::IntOr);
}

pub fn lift_xor(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_reg3(ctx, ops, IrOp::IntXor);
}

pub fn lift_xori(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_reg_imm(ctx, ops, IrOp::IntXor);
}

pub fn lift_nor(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let a = ctx.read_operand(&ops[1]);
    let b = ctx.read_operand(&ops[2]);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let or_result = ctx.alloc_word();
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                or_result,
                smallvec![a, b],
                ctx.addr,
            ));
            let result = ctx.alloc_word();
            ctx.emit(IrInsn::with_output(
                IrOp::IntNegate,
                result,
                smallvec![or_result],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

fn lift_shift_imm(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let src = ctx.read_operand(&ops[1]);
    let shamt = match &ops[2] {
        MipsOperand::Imm(imm) => Some(Varnode::constant(*imm as u64, 1)),
        MipsOperand::Reg(r) => ctx.read_reg(*r),
        _ => None,
    };
    match (dst, src, shamt) {
        (Some(dst), Some(src), Some(shamt)) => {
            let result = ctx.alloc_word();
            ctx.emit(IrInsn::with_output(
                ir_op,
                result,
                smallvec![src, shamt],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

fn lift_shift_var(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    lift_shift_imm(ctx, ops, ir_op);
}

pub fn lift_sll(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_shift_imm(ctx, ops, IrOp::IntLeft);
}

pub fn lift_srl(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_shift_imm(ctx, ops, IrOp::IntRight);
}

pub fn lift_sra(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_shift_imm(ctx, ops, IrOp::IntSright);
}

pub fn lift_sllv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_shift_var(ctx, ops, IrOp::IntLeft);
}

pub fn lift_srlv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_shift_var(ctx, ops, IrOp::IntRight);
}

pub fn lift_srav(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_shift_var(ctx, ops, IrOp::IntSright);
}
