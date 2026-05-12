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
            let result = ctx.alloc_unique(8);
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
            let result = ctx.alloc_unique(8);
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
            let or_result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                or_result,
                smallvec![a, b],
                ctx.addr,
            ));
            let result = ctx.alloc_unique(8);
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
            let result = ctx.alloc_unique(8);
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

pub fn lift_rotr(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    // Model rotate-right as (x >> n) | (x << (word_bits - n)).
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let src = ctx.read_operand(&ops[1]);
    let shamt = ctx.read_operand(&ops[2]);
    match (dst, src, shamt) {
        (Some(dst), Some(src), Some(shamt)) => {
            let right = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                right,
                smallvec![src, shamt],
                ctx.addr,
            ));
            let inv = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                inv,
                smallvec![Varnode::constant(64, 8), shamt],
                ctx.addr,
            ));
            let left = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                left,
                smallvec![src, inv],
                ctx.addr,
            ));
            let result = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                result,
                smallvec![right, left],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_rotrv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_rotr(ctx, ops);
}

pub fn lift_count(ctx: &mut LiftCtx, ops: &[MipsOperand], ones: bool) {
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
            let input = if ones {
                let negated = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntNegate,
                    negated,
                    smallvec![src],
                    ctx.addr,
                ));
                negated
            } else {
                src
            };
            let count = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::Lzcount,
                count,
                smallvec![input],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, count);
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sign_extend_byte(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_sign_extend_low(ctx, ops, 1);
}

pub fn lift_sign_extend_half(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_sign_extend_low(ctx, ops, 2);
}

fn lift_sign_extend_low(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
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
            let low = ctx.alloc_unique(size);
            ctx.emit(IrInsn::with_output(
                IrOp::Subpiece,
                low,
                smallvec![src, Varnode::constant(0, 1)],
                ctx.addr,
            ));
            let extended = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSext,
                extended,
                smallvec![low],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, extended);
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_wsbh(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    // Word Swap Bytes Within Halfwords is endian-specific byte shuffling; keep a
    // side-effect-free CALLOTHER marker rather than dropping the Loongson/MIPS32r2
    // operation entirely.
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
                IrOp::Callother,
                result,
                smallvec![Varnode::constant(0x4d49505357534248, 8), src],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, result);
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
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
