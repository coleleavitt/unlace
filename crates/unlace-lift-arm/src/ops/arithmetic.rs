use capstone::arch::arm64::{Arm64OperandType, Arm64Shift};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_to_varnode};
use crate::register_file::{CF, NF, VF, ZF, is_zero_reg};

type Ops = [(Arm64OperandType, Arm64Shift)];

fn emit_result_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let zero = Varnode::constant(0, op_size);
    let zf = Varnode::reg(ZF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        zf,
        smallvec![result, zero],
        ctx.addr,
    ));

    let nf = Varnode::reg(NF, 1);
    let sign_bit = (op_size as u32) * 8 - 1;
    let shift_amt = Varnode::constant(sign_bit as u64, 1);
    let tmp = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntRight,
        tmp,
        smallvec![result, shift_amt],
        ctx.addr,
    ));
    let trunc = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        trunc,
        smallvec![tmp, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        nf,
        smallvec![trunc],
        ctx.addr,
    ));
}

fn emit_add_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);
    let cf = Varnode::reg(CF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntCarry,
        cf,
        smallvec![a, b],
        ctx.addr,
    ));
    let vf = Varnode::reg(VF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntScarry,
        vf,
        smallvec![a, b],
        ctx.addr,
    ));
}

fn emit_sub_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);
    // ARM: C flag is inverted for sub (C = NOT borrow)
    let borrow = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntLess,
        borrow,
        smallvec![a, b],
        ctx.addr,
    ));
    let cf = Varnode::reg(CF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::BoolNegate,
        cf,
        smallvec![borrow],
        ctx.addr,
    ));
    let vf = Varnode::reg(VF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSborrow,
        vf,
        smallvec![a, b],
        ctx.addr,
    ));
}

fn dst_size(ops: &Ops) -> u8 {
    match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => {
            if crate::register_file::is_w_reg(*reg) {
                4
            } else {
                8
            }
        }
        _ => 8,
    }
}

fn write_dst(ctx: &mut LiftCtx, ops: &Ops, value: Varnode) {
    if let Some((Arm64OperandType::Reg(reg), _)) = ops.first() {
        if is_zero_reg(*reg) {
            return; // writes to XZR/WZR are discarded
        }
        if let Some(dst) = crate::register_file::reg_varnode(*reg) {
            ctx.emit_copy(dst, value);
        }
    }
}

pub fn lift_add(ctx: &mut LiftCtx, ops: &Ops) {
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sub(ctx: &mut LiftCtx, ops: &Ops) {
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_cmp(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => {
            if crate::register_file::is_w_reg(*reg) {
                4
            } else {
                8
            }
        }
        _ => 8,
    };
    let a = operand_to_varnode(ctx, &ops[0].0);
    let b = operand_to_varnode(ctx, &ops[1].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            emit_sub_flags(ctx, a, b, result, size);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_cmn(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => {
            if crate::register_file::is_w_reg(*reg) {
                4
            } else {
                8
            }
        }
        _ => 8,
    };
    let a = operand_to_varnode(ctx, &ops[0].0);
    let b = operand_to_varnode(ctx, &ops[1].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            emit_add_flags(ctx, a, b, result, size);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_tst(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => {
            if crate::register_file::is_w_reg(*reg) {
                4
            } else {
                8
            }
        }
        _ => 8,
    };
    let a = operand_to_varnode(ctx, &ops[0].0);
    let b = operand_to_varnode(ctx, &ops[1].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            emit_result_flags(ctx, result, size);
            // TST clears C and V
            let cf = Varnode::reg(CF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                cf,
                smallvec![Varnode::constant(0, 1)],
                ctx.addr,
            ));
            let vf = Varnode::reg(VF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                vf,
                smallvec![Varnode::constant(0, 1)],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_neg(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let src = operand_to_varnode(ctx, &ops[1].0);
    match src {
        Some(src) => {
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::Int2comp,
                result,
                smallvec![src],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

fn lift_binop(ctx: &mut LiftCtx, ops: &Ops, op: IrOp) {
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
            ctx.emit(IrInsn::with_output(op, result, smallvec![a, b], ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_mul(ctx: &mut LiftCtx, ops: &Ops) {
    lift_binop(ctx, ops, IrOp::IntMult);
}

/// UMULH/SMULH Xd, Xn, Xm — Xd = (Xn * Xm) >> 64. Emit a single
/// `Callother(<MULT_HIGH tag>, Xn, Xm) -> Xd` so a later pass can recognize
/// the high-half multiply (e.g. for divisor-by-constant magic numbers).
pub fn lift_mul_high(ctx: &mut LiftCtx, ops: &Ops, signed: bool) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let tag = if signed {
                crate::lift::CALLOTHER_INT_SMULT_HIGH
            } else {
                crate::lift::CALLOTHER_INT_MULT_HIGH
            };
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::Callother,
                result,
                smallvec![Varnode::constant(tag, 8), a, b],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sdiv(ctx: &mut LiftCtx, ops: &Ops) {
    lift_binop(ctx, ops, IrOp::IntSdiv);
}

pub fn lift_udiv(ctx: &mut LiftCtx, ops: &Ops) {
    lift_binop(ctx, ops, IrOp::IntDiv);
}

pub fn lift_madd(ctx: &mut LiftCtx, ops: &Ops) {
    lift_mul_acc(ctx, ops, IrOp::IntAdd);
}

pub fn lift_msub(ctx: &mut LiftCtx, ops: &Ops) {
    lift_mul_acc(ctx, ops, IrOp::IntSub);
}

fn lift_mul_acc(ctx: &mut LiftCtx, ops: &Ops, acc_op: IrOp) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    let acc = operand_to_varnode(ctx, &ops[3].0);
    match (a, b, acc) {
        (Some(a), Some(b), Some(acc)) => {
            let product = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntMult,
                product,
                smallvec![a, b],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), size);
            let inputs = if acc_op == IrOp::IntSub {
                smallvec![acc, product]
            } else {
                smallvec![product, acc]
            };
            ctx.emit(IrInsn::with_output(acc_op, result, inputs, ctx.addr));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}
