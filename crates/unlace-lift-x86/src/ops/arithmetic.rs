use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{CF, OF, PF, SF, ZF};

fn emit_result_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let zero = Varnode::constant(0, op_size);
    let zf = Varnode::new(unlace_ir::SpaceId::Register, ZF, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntEqual, zf, smallvec![result, zero], ctx.addr));

    let sf = Varnode::new(unlace_ir::SpaceId::Register, SF, 1);
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
}

fn emit_add_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);

    let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntCarry, cf, smallvec![a, b], ctx.addr));

    let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntScarry, of, smallvec![a, b], ctx.addr));

    // PF: popcount of low byte mod 2, then negate
    emit_parity_flag(ctx, result, op_size);
}

fn emit_sub_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);

    let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntLess, cf, smallvec![a, b], ctx.addr));

    let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntSborrow, of, smallvec![a, b], ctx.addr));

    emit_parity_flag(ctx, result, op_size);
}

fn emit_parity_flag(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let pf = Varnode::new(unlace_ir::SpaceId::Register, PF, 1);
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
    // PF = !(popcount & 1) — even parity
    let zero = Varnode::constant(0, 1);
    ctx.emit(IrInsn::with_output(IrOp::IntEqual, pf, smallvec![low_bit, zero], ctx.addr));
}

fn emit_logical_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);

    let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(IrOp::Copy, cf, smallvec![Varnode::constant(0, 1)], ctx.addr));

    let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(IrOp::Copy, of, smallvec![Varnode::constant(0, 1)], ctx.addr));

    emit_parity_flag(ctx, result, op_size);
}

pub fn lift_add(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntAdd, result, smallvec![a, b], ctx.addr));
            emit_add_flags(ctx, a, b, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sub(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntSub, result, smallvec![a, b], ctx.addr));
            emit_sub_flags(ctx, a, b, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_cmp(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), a.size);
            ctx.emit(IrInsn::with_output(IrOp::IntSub, result, smallvec![a, b], ctx.addr));
            emit_sub_flags(ctx, a, b, result, a.size);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_test(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), a.size);
            ctx.emit(IrInsn::with_output(IrOp::IntAnd, result, smallvec![a, b], ctx.addr));
            emit_logical_flags(ctx, result, a.size);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_imul(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let op_count = insn.op_count();
    match op_count {
        1 => {
            // One-operand: RDX:RAX = RAX * src
            let src = ctx.operand_read(insn, 0);
            match src {
                Some(src) => {
                    let op_size = src.size;
                    let rax = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RAX, op_size);
                    let result = Varnode::unique(ctx.alloc_unique(), op_size);
                    ctx.emit(IrInsn::with_output(IrOp::IntMult, result, smallvec![rax, src], ctx.addr));
                    ctx.emit(IrInsn::with_output(
                        IrOp::Copy,
                        Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RAX, op_size),
                        smallvec![result],
                        ctx.addr,
                    ));
                }
                _ => ctx.emit_unimplemented(),
            }
        }
        2 => {
            let dst = ctx.operand_write(insn, 0);
            let src = ctx.operand_read(insn, 1);
            match (dst, src) {
                (Some(dst), Some(src)) => {
                    let a = ctx.operand_read(insn, 0).unwrap_or(dst);
                    let result = Varnode::unique(ctx.alloc_unique(), dst.size);
                    ctx.emit(IrInsn::with_output(IrOp::IntMult, result, smallvec![a, src], ctx.addr));
                    ctx.write_operand_insn(insn, 0, dst, result);
                }
                _ => ctx.emit_unimplemented(),
            }
        }
        3 => {
            let dst = ctx.operand_write(insn, 0);
            let a = ctx.operand_read(insn, 1);
            let b = ctx.operand_read(insn, 2);
            match (dst, a, b) {
                (Some(dst), Some(a), Some(b)) => {
                    let result = Varnode::unique(ctx.alloc_unique(), dst.size);
                    ctx.emit(IrInsn::with_output(IrOp::IntMult, result, smallvec![a, b], ctx.addr));
                    ctx.write_operand_insn(insn, 0, dst, result);
                }
                _ => ctx.emit_unimplemented(),
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_mul(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let src = ctx.operand_read(insn, 0);
    match src {
        Some(src) => {
            let op_size = src.size;
            let rax = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RAX, op_size);
            let result = Varnode::unique(ctx.alloc_unique(), op_size);
            ctx.emit(IrInsn::with_output(IrOp::IntMult, result, smallvec![rax, src], ctx.addr));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RAX, op_size),
                smallvec![result],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_div(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let src = ctx.operand_read(insn, 0);
    match src {
        Some(src) => {
            let op_size = src.size;
            let rax = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RAX, op_size);
            let rdx = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RDX, op_size);
            let quot = Varnode::unique(ctx.alloc_unique(), op_size);
            let rem = Varnode::unique(ctx.alloc_unique(), op_size);
            ctx.emit(IrInsn::with_output(IrOp::IntDiv, quot, smallvec![rax, src], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::IntRem, rem, smallvec![rax, src], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::Copy, rax, smallvec![quot], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::Copy, rdx, smallvec![rem], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_idiv(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let src = ctx.operand_read(insn, 0);
    match src {
        Some(src) => {
            let op_size = src.size;
            let rax = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RAX, op_size);
            let rdx = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RDX, op_size);
            let quot = Varnode::unique(ctx.alloc_unique(), op_size);
            let rem = Varnode::unique(ctx.alloc_unique(), op_size);
            ctx.emit(IrInsn::with_output(IrOp::IntSdiv, quot, smallvec![rax, src], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::IntSrem, rem, smallvec![rax, src], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::Copy, rax, smallvec![quot], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::Copy, rdx, smallvec![rem], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_neg(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::Int2comp, result, smallvec![src], ctx.addr));

            // CF = (src != 0)
            let zero = Varnode::constant(0, dst.size);
            let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
            ctx.emit(IrInsn::with_output(IrOp::IntNotequal, cf, smallvec![src, zero], ctx.addr));

            emit_result_flags(ctx, result, dst.size);
            emit_parity_flag(ctx, result, dst.size);

            let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
            ctx.emit(IrInsn::with_output(IrOp::IntSborrow, of, smallvec![zero, src], ctx.addr));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_inc(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let one = Varnode::constant(1, dst.size);
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntAdd, result, smallvec![src, one], ctx.addr));
            emit_result_flags(ctx, result, dst.size);
            emit_parity_flag(ctx, result, dst.size);
            let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
            ctx.emit(IrInsn::with_output(IrOp::IntScarry, of, smallvec![src, one], ctx.addr));
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_dec(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let one = Varnode::constant(1, dst.size);
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(IrOp::IntSub, result, smallvec![src, one], ctx.addr));
            emit_result_flags(ctx, result, dst.size);
            emit_parity_flag(ctx, result, dst.size);
            let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
            ctx.emit(IrInsn::with_output(IrOp::IntSborrow, of, smallvec![src, one], ctx.addr));
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}
