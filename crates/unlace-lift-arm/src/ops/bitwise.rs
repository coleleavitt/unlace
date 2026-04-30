use capstone::arch::arm64::{Arm64OperandType, Arm64Shift};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{operand_to_varnode, LiftCtx};

type Ops = [(Arm64OperandType, Arm64Shift)];

fn dst_size(ops: &Ops) -> u8 {
    match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => {
            if crate::register_file::is_w_reg(*reg) { 4 } else { 8 }
        }
        _ => 8,
    }
}

fn write_dst(ctx: &mut LiftCtx, ops: &Ops, value: Varnode) {
    if let Some((Arm64OperandType::Reg(reg), _)) = ops.first() {
        if crate::register_file::is_zero_reg(*reg) {
            return;
        }
        if let Some(dst) = crate::register_file::reg_varnode(*reg) {
            ctx.emit_copy(dst, value);
        }
    }
}

pub fn lift_and(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(IrOp::IntAnd, result, smallvec![a, b], ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_orr(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(IrOp::IntOr, result, smallvec![a, b], ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_eor(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(IrOp::IntXor, result, smallvec![a, b], ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_lsl(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(IrOp::IntLeft, result, smallvec![a, b], ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_lsr(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(IrOp::IntRight, result, smallvec![a, b], ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_asr(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(IrOp::IntSright, result, smallvec![a, b], ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_mvn(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let src = operand_to_varnode(ctx, &ops[1].0);
    match src {
        Some(src) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(IrOp::IntNegate, result, smallvec![src], ctx.addr));
            write_dst(ctx, ops, result);
        }
        None => ctx.emit_unimplemented(),
    }
}
