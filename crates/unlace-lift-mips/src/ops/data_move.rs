use capstone::arch::mips::MipsOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file;

pub fn lift_nop(ctx: &mut LiftCtx) {
    let t = ctx.alloc_unique(1);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        t,
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));
}

pub fn lift_move(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
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
            ctx.write_to_reg(dst, src);
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_lui(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let imm = ctx.read_operand(&ops[1]);
    match (dst, imm) {
        (Some(dst), Some(imm)) => {
            let shift = Varnode::constant(16, 1);
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                result,
                smallvec![imm, shift],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_mfhi(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    match dst {
        Some(dst) => {
            let hi = register_file::reg64(register_file::HI);
            ctx.write_to_reg(dst, hi);
        }
        None => {}
    }
}

pub fn lift_mflo(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    match dst {
        Some(dst) => {
            let lo = register_file::reg64(register_file::LO);
            ctx.write_to_reg(dst, lo);
        }
        None => {}
    }
}
