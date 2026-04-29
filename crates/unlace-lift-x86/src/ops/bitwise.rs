use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{CF, OF, PF, SF, ZF};

fn emit_logical_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let zero = Varnode::constant(0, op_size);
    let zf = Varnode::new(SpaceId::Register, ZF, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntEqual, zf, smallvec![result, zero], ctx.addr));

    let sf = Varnode::new(SpaceId::Register, SF, 1);
    let sign_bit = (op_size as u32) * 8 - 1;
    let shift_amt = Varnode::constant(sign_bit as u64, 1);
    let tmp_sf = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(IrOp::IntRight, tmp_sf, smallvec![result, shift_amt], ctx.addr));
    let trunc_sf = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece, trunc_sf,
        smallvec![tmp_sf, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(IrOp::Copy, sf, smallvec![trunc_sf], ctx.addr));

    let cf = Varnode::new(SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(IrOp::Copy, cf, smallvec![Varnode::constant(0, 1)], ctx.addr));

    let of = Varnode::new(SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(IrOp::Copy, of, smallvec![Varnode::constant(0, 1)], ctx.addr));

    let pf = Varnode::new(SpaceId::Register, PF, 1);
    let low_byte = if op_size == 1 {
        result
    } else {
        let t = Varnode::unique(ctx.alloc_unique(), 1);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece, t,
            smallvec![result, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        t
    };
    let popcount = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(IrOp::Popcount, popcount, smallvec![low_byte], ctx.addr));
    let one = Varnode::constant(1, 1);
    let low_bit = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(IrOp::IntAnd, low_bit, smallvec![popcount, one], ctx.addr));
    let zero_1 = Varnode::constant(0, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntEqual, pf, smallvec![low_bit, zero_1], ctx.addr));
}

fn lift_binop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, op: IrOp) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(op, result, smallvec![a, b], ctx.addr));
            emit_logical_flags(ctx, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_and(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    lift_binop(ctx, insn, IrOp::IntAnd);
}

pub fn lift_or(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    lift_binop(ctx, insn, IrOp::IntOr);
}

pub fn lift_xor(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    lift_binop(ctx, insn, IrOp::IntXor);
}

pub fn lift_not(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntNegate, result, smallvec![src], ctx.addr));
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_shl(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            // x86 masks the shift count: count & (op_size*8 - 1)
            let mask = Varnode::constant(dst.size as u64 * 8 - 1, b.size);
            let masked = Varnode::unique(ctx.alloc_unique(), b.size);
            ctx.emit(IrInsn::with_output(IrOp::IntAnd, masked, smallvec![b, mask], ctx.addr));

            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntLeft, result, smallvec![a, masked], ctx.addr));
            emit_logical_flags(ctx, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_shr(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let mask = Varnode::constant(dst.size as u64 * 8 - 1, b.size);
            let masked = Varnode::unique(ctx.alloc_unique(), b.size);
            ctx.emit(IrInsn::with_output(IrOp::IntAnd, masked, smallvec![b, mask], ctx.addr));

            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntRight, result, smallvec![a, masked], ctx.addr));
            emit_logical_flags(ctx, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sar(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let mask = Varnode::constant(dst.size as u64 * 8 - 1, b.size);
            let masked = Varnode::unique(ctx.alloc_unique(), b.size);
            ctx.emit(IrInsn::with_output(IrOp::IntAnd, masked, smallvec![b, mask], ctx.addr));

            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntSright, result, smallvec![a, masked], ctx.addr));
            emit_logical_flags(ctx, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}
