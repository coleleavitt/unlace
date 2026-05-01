use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{CF, OF, PF, SF, ZF};

fn emit_logical_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let zero = Varnode::constant(0, op_size);
    let zf = Varnode::new(SpaceId::Register, ZF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        zf,
        smallvec![result, zero],
        ctx.addr,
    ));

    let sf = Varnode::new(SpaceId::Register, SF, 1);
    let sign_bit = (op_size as u32) * 8 - 1;
    let shift_amt = Varnode::constant(sign_bit as u64, 1);
    let tmp_sf = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntRight,
        tmp_sf,
        smallvec![result, shift_amt],
        ctx.addr,
    ));
    let trunc_sf = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        trunc_sf,
        smallvec![tmp_sf, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        sf,
        smallvec![trunc_sf],
        ctx.addr,
    ));

    let cf = Varnode::new(SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        cf,
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));

    let of = Varnode::new(SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        of,
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));

    let pf = Varnode::new(SpaceId::Register, PF, 1);
    let low_byte = if op_size == 1 {
        result
    } else {
        let t = Varnode::unique(ctx.alloc_unique(), 1);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            t,
            smallvec![result, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        t
    };
    let popcount = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Popcount,
        popcount,
        smallvec![low_byte],
        ctx.addr,
    ));
    let one = Varnode::constant(1, 1);
    let low_bit = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        low_bit,
        smallvec![popcount, one],
        ctx.addr,
    ));
    let zero_1 = Varnode::constant(0, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        pf,
        smallvec![low_bit, zero_1],
        ctx.addr,
    ));
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntNegate,
                result,
                smallvec![src],
                ctx.addr,
            ));
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                masked,
                smallvec![b, mask],
                ctx.addr,
            ));

            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                result,
                smallvec![a, masked],
                ctx.addr,
            ));
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                masked,
                smallvec![b, mask],
                ctx.addr,
            ));

            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                result,
                smallvec![a, masked],
                ctx.addr,
            ));
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                masked,
                smallvec![b, mask],
                ctx.addr,
            ));

            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSright,
                result,
                smallvec![a, masked],
                ctx.addr,
            ));
            emit_logical_flags(ctx, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_rol(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let bits = dst.size as u64 * 8;
            let mask = Varnode::constant(bits - 1, b.size);
            let masked = Varnode::unique(ctx.alloc_unique(), b.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                masked,
                smallvec![b, mask],
                ctx.addr,
            ));

            // left = a << count
            let left = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                left,
                smallvec![a, masked],
                ctx.addr,
            ));

            // complement = bits - count
            let bits_vn = Varnode::constant(bits, b.size);
            let complement = Varnode::unique(ctx.alloc_unique(), b.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                complement,
                smallvec![bits_vn, masked],
                ctx.addr,
            ));

            // right = a >> complement
            let right = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                right,
                smallvec![a, complement],
                ctx.addr,
            ));

            // result = left | right
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                result,
                smallvec![left, right],
                ctx.addr,
            ));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ror(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let bits = dst.size as u64 * 8;
            let mask = Varnode::constant(bits - 1, b.size);
            let masked = Varnode::unique(ctx.alloc_unique(), b.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                masked,
                smallvec![b, mask],
                ctx.addr,
            ));

            // right = a >> count
            let right = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                right,
                smallvec![a, masked],
                ctx.addr,
            ));

            // complement = bits - count
            let bits_vn = Varnode::constant(bits, b.size);
            let complement = Varnode::unique(ctx.alloc_unique(), b.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                complement,
                smallvec![bits_vn, masked],
                ctx.addr,
            ));

            // left = a << complement
            let left = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                left,
                smallvec![a, complement],
                ctx.addr,
            ));

            // result = right | left
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                result,
                smallvec![right, left],
                ctx.addr,
            ));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub mod bit_tag {
    pub const BSF: u64 = 0x200;
    pub const BSR: u64 = 0x201;
    pub const TZCNT: u64 = 0x202;
    pub const LZCNT: u64 = 0x203;
    pub const POPCNT: u64 = 0x204;
    pub const TRAP: u64 = 0x300;
}

/// `CF = (base >> bit_index) & 1`
pub fn lift_bt(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let base = ctx.operand_read(insn, 0);
    let bit_idx = ctx.operand_read(insn, 1);
    match (base, bit_idx) {
        (Some(base), Some(bit_idx)) => {
            let op_size = base.size;

            let mask = Varnode::constant(op_size as u64 * 8 - 1, bit_idx.size);
            let masked_idx = Varnode::unique(ctx.alloc_unique(), bit_idx.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                masked_idx,
                smallvec![bit_idx, mask],
                ctx.addr,
            ));

            let shifted = Varnode::unique(ctx.alloc_unique(), op_size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                shifted,
                smallvec![base, masked_idx],
                ctx.addr,
            ));

            let low = if op_size == 1 {
                shifted
            } else {
                let t = Varnode::unique(ctx.alloc_unique(), 1);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    t,
                    smallvec![shifted, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                t
            };
            let one = Varnode::constant(1, 1);
            let bit_val = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                bit_val,
                smallvec![low, one],
                ctx.addr,
            ));

            let cf = Varnode::new(SpaceId::Register, CF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                cf,
                smallvec![bit_val],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bsf(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    lift_bit_scan(ctx, insn, bit_tag::BSF);
}

pub fn lift_bsr(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    lift_bit_scan(ctx, insn, bit_tag::BSR);
}

fn lift_bit_scan(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, tag: u64) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 1);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let tag_vn = Varnode::constant(tag, 8);
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::Callother,
                result,
                smallvec![tag_vn, src],
                ctx.addr,
            ));

            let zero = Varnode::constant(0, src.size);
            let zf = Varnode::new(SpaceId::Register, ZF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                zf,
                smallvec![src, zero],
                ctx.addr,
            ));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

/// `dst = Callother(TZCNT, src)`; ZF = (result == 0), CF = (src == 0).
pub fn lift_tzcnt(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 1);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let tag_vn = Varnode::constant(bit_tag::TZCNT, 8);
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::Callother,
                result,
                smallvec![tag_vn, src],
                ctx.addr,
            ));

            let zero = Varnode::constant(0, dst.size);
            let zf = Varnode::new(SpaceId::Register, ZF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                zf,
                smallvec![result, zero],
                ctx.addr,
            ));

            let zero_src = Varnode::constant(0, src.size);
            let cf = Varnode::new(SpaceId::Register, CF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                cf,
                smallvec![src, zero_src],
                ctx.addr,
            ));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

/// `dst = Lzcount(src)`; ZF = (result == 0), CF = (src == 0).
pub fn lift_lzcnt(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 1);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::Lzcount,
                result,
                smallvec![src],
                ctx.addr,
            ));

            let zero = Varnode::constant(0, dst.size);
            let zf = Varnode::new(SpaceId::Register, ZF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                zf,
                smallvec![result, zero],
                ctx.addr,
            ));

            let zero_src = Varnode::constant(0, src.size);
            let cf = Varnode::new(SpaceId::Register, CF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                cf,
                smallvec![src, zero_src],
                ctx.addr,
            ));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

/// `dst = Popcount(src)`; clears OF/SF/CF/PF, sets ZF = (src == 0).
pub fn lift_popcnt(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 1);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::Popcount,
                result,
                smallvec![src],
                ctx.addr,
            ));

            // POPCNT clears all flags then sets ZF = (src == 0)
            let zero1 = Varnode::constant(0, 1);

            let of = Varnode::new(SpaceId::Register, OF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                of,
                smallvec![zero1],
                ctx.addr,
            ));

            let sf = Varnode::new(SpaceId::Register, SF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                sf,
                smallvec![zero1],
                ctx.addr,
            ));

            let cf = Varnode::new(SpaceId::Register, CF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                cf,
                smallvec![zero1],
                ctx.addr,
            ));

            let pf = Varnode::new(SpaceId::Register, PF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                pf,
                smallvec![zero1],
                ctx.addr,
            ));

            let zero_src = Varnode::constant(0, src.size);
            let zf = Varnode::new(SpaceId::Register, ZF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                zf,
                smallvec![src, zero_src],
                ctx.addr,
            ));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ud2(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(bit_tag::TRAP, 8);
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn],
        ctx.addr,
    ));
}
