use capstone::arch::mips::MipsOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp};

use crate::lift::LiftCtx;

pub fn lift_add(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
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
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, Some(a), Some(b)) => {
            let _result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                _result,
                smallvec![a, b],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_addi(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
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
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, Some(a), Some(b)) => {
            let _result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                _result,
                smallvec![a, b],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sub(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
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
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
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

pub fn lift_mult(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let a = ctx.read_operand(&ops[0]);
    let b = ctx.read_operand(&ops[1]);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntMult,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            let lo = crate::register_file::reg64(crate::register_file::LO);
            ctx.write_to_reg(lo, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_div(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let a = ctx.read_operand(&ops[0]);
    let b = ctx.read_operand(&ops[1]);
    match (a, b) {
        (Some(a), Some(b)) => {
            let quot = ctx.alloc_unique(8);
            let rem = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSdiv,
                quot,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::IntSrem,
                rem,
                smallvec![a, b],
                ctx.addr,
            ));
            let lo = crate::register_file::reg64(crate::register_file::LO);
            let hi = crate::register_file::reg64(crate::register_file::HI);
            ctx.write_to_reg(lo, quot);
            ctx.write_to_reg(hi, rem);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_slt(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
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
            let cmp = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSless,
                cmp,
                smallvec![a, b],
                ctx.addr,
            ));
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntZext,
                result,
                smallvec![cmp],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sltu(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
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
            let cmp = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLess,
                cmp,
                smallvec![a, b],
                ctx.addr,
            ));
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntZext,
                result,
                smallvec![cmp],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_negu(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let src = ctx.read_operand(&ops[1]);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::Int2comp,
                result,
                smallvec![src],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}
