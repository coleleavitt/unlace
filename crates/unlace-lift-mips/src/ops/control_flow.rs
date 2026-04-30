use capstone::arch::mips::MipsOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{self, RA};

pub fn lift_beq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let a = ctx.read_operand(&ops[0]);
    let b = ctx.read_operand(&ops[1]);
    let target = ctx.read_operand(&ops[2]);
    match (a, b, target) {
        (Some(a), Some(b), Some(target)) => {
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::IntEqual, cond, smallvec![a, b], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bne(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let a = ctx.read_operand(&ops[0]);
    let b = ctx.read_operand(&ops[1]);
    let target = ctx.read_operand(&ops[2]);
    match (a, b, target) {
        (Some(a), Some(b), Some(target)) => {
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::IntNotequal, cond, smallvec![a, b], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bgez(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let rs = ctx.read_operand(&ops[0]);
    let target = ctx.read_operand(&ops[1]);
    match (rs, target) {
        (Some(rs), Some(target)) => {
            let zero = Varnode::constant(0, 8);
            let sless = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::IntSless, sless, smallvec![rs, zero], ctx.addr));
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::BoolNegate, cond, smallvec![sless], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bltz(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let rs = ctx.read_operand(&ops[0]);
    let target = ctx.read_operand(&ops[1]);
    match (rs, target) {
        (Some(rs), Some(target)) => {
            let zero = Varnode::constant(0, 8);
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::IntSless, cond, smallvec![rs, zero], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bgtz(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let rs = ctx.read_operand(&ops[0]);
    let target = ctx.read_operand(&ops[1]);
    match (rs, target) {
        (Some(rs), Some(target)) => {
            let zero = Varnode::constant(0, 8);
            let sleq = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::IntSlessequal, sleq, smallvec![rs, zero], ctx.addr));
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::BoolNegate, cond, smallvec![sleq], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_blez(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let rs = ctx.read_operand(&ops[0]);
    let target = ctx.read_operand(&ops[1]);
    match (rs, target) {
        (Some(rs), Some(target)) => {
            let zero = Varnode::constant(0, 8);
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSlessequal,
                cond,
                smallvec![rs, zero],
                ctx.addr,
            ));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_beqz(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let rs = ctx.read_operand(&ops[0]);
    let target = ctx.read_operand(&ops[1]);
    match (rs, target) {
        (Some(rs), Some(target)) => {
            let zero = Varnode::constant(0, 8);
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::IntEqual, cond, smallvec![rs, zero], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bnez(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let rs = ctx.read_operand(&ops[0]);
    let target = ctx.read_operand(&ops[1]);
    match (rs, target) {
        (Some(rs), Some(target)) => {
            let zero = Varnode::constant(0, 8);
            let cond = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::IntNotequal, cond, smallvec![rs, zero], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_b(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_j(ctx, ops);
}

pub fn lift_bal(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_jal(ctx, ops);
}

pub fn lift_bgezal(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(8), 8);
    let ra = register_file::reg64(RA);
    ctx.write_to_reg(ra, return_addr);

    lift_bgez(ctx, ops);
}

pub fn lift_bltzal(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(8), 8);
    let ra = register_file::reg64(RA);
    ctx.write_to_reg(ra, return_addr);

    lift_bltz(ctx, ops);
}

pub fn lift_j(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let target = ctx.read_operand(&ops[0]);
    match target {
        Some(target) => {
            ctx.emit(IrInsn::without_output(IrOp::Branch, smallvec![target], ctx.addr));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_jal(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(8), 8);
    let ra = register_file::reg64(RA);
    ctx.write_to_reg(ra, return_addr);

    let target = ctx.read_operand(&ops[0]);
    match target {
        Some(target) => {
            ctx.emit(IrInsn::without_output(IrOp::Call, smallvec![target], ctx.addr));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_jr(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let target = ctx.read_operand(&ops[0]);
    match target {
        Some(target) => {
            if let MipsOperand::Reg(reg) = &ops[0] {
                if register_file::capstone_reg_to_offset(*reg) == Some(RA) {
                    ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![target], ctx.addr));
                    return;
                }
            }
            ctx.emit(IrInsn::without_output(IrOp::Branchind, smallvec![target], ctx.addr));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_jalr(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }

    let return_addr = Varnode::constant(ctx.addr.wrapping_add(8), 8);

    let (dst_reg, target_idx) = if ops.len() >= 2 {
        (
            match &ops[0] {
                MipsOperand::Reg(r) => ctx.write_reg(*r),
                _ => None,
            },
            1,
        )
    } else {
        (Some(register_file::reg64(RA)), 0)
    };

    if let Some(dst) = dst_reg {
        ctx.write_to_reg(dst, return_addr);
    }

    let target = ctx.read_operand(&ops[target_idx]);
    match target {
        Some(target) => {
            ctx.emit(IrInsn::without_output(IrOp::Callind, smallvec![target], ctx.addr));
        }
        None => ctx.emit_unimplemented(),
    }
}
