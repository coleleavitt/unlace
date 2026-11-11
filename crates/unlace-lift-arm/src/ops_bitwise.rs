use capstone::arch::arm64::{Arm64OperandType, Arm64Shift};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_to_varnode};
use crate::ops::arithmetic::{emit_pack_nzcv, emit_result_flags};
use crate::register_file::{CF, VF};

type Ops = [(Arm64OperandType, Arm64Shift)];

fn dst_size(ops: &Ops) -> u8 {
    match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => crate::register_file::reg_varnode(*reg)
            .map(|vn| vn.size)
            .unwrap_or(8),
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

fn coerce_to_size(ctx: &mut LiftCtx, value: Varnode, size: u8) -> Varnode {
    if value.size == size {
        value
    } else if value.size < size {
        let extended = Varnode::unique(ctx.alloc_unique(), size);
        ctx.emit(IrInsn::with_output(
            IrOp::IntZext,
            extended,
            smallvec![value],
            ctx.addr,
        ));
        extended
    } else {
        let piece = Varnode::unique(ctx.alloc_unique(), size);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            piece,
            smallvec![value, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        piece
    }
}

fn emit_logical_flags(ctx: &mut LiftCtx, result: Varnode, size: u8) {
    emit_result_flags(ctx, result, size);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        Varnode::reg(CF, 1),
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        Varnode::reg(VF, 1),
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));
    emit_pack_nzcv(ctx);
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ands(ctx: &mut LiftCtx, ops: &Ops) {
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
                IrOp::IntAnd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
            emit_logical_flags(ctx, result, size);
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntXor,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bic(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let inverted = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntNegate,
                inverted,
                smallvec![b],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![a, inverted],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bics(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let a = operand_to_varnode(ctx, &ops[1].0);
    let b = operand_to_varnode(ctx, &ops[2].0);
    match (a, b) {
        (Some(a), Some(b)) => {
            let inverted = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntNegate,
                inverted,
                smallvec![b],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![a, inverted],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
            emit_logical_flags(ctx, result, size);
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ror(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let Some(src) = operand_to_varnode(ctx, &ops[1].0) else {
        ctx.emit_unimplemented();
        return;
    };
    let shift = match &ops[2].0 {
        Arm64OperandType::Imm(v) | Arm64OperandType::Cimm(v) => *v as u64,
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let rotated = emit_ror(ctx, src, shift % (u64::from(size) * 8), size);
    write_dst(ctx, ops, rotated);
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntSright,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
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
            ctx.emit(IrInsn::with_output(
                IrOp::IntNegate,
                result,
                smallvec![src],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        None => ctx.emit_unimplemented(),
    }
}

fn imm(op: &Arm64OperandType) -> Option<u64> {
    match op {
        Arm64OperandType::Imm(v) | Arm64OperandType::Cimm(v) => Some(*v as u64),
        _ => None,
    }
}

fn low_mask(width: u64) -> u64 {
    if width >= 64 {
        u64::MAX
    } else {
        (1_u64 << width) - 1
    }
}

fn emit_ror(ctx: &mut LiftCtx, src: Varnode, shift: u64, size: u8) -> Varnode {
    let bits = u64::from(size) * 8;
    if shift == 0 {
        return src;
    }

    let right = Varnode::unique(ctx.alloc_unique(), size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntRight,
        right,
        smallvec![src, Varnode::constant(shift, 1)],
        ctx.addr,
    ));
    let left = Varnode::unique(ctx.alloc_unique(), size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntLeft,
        left,
        smallvec![src, Varnode::constant(bits - shift, 1)],
        ctx.addr,
    ));
    let rotated = Varnode::unique(ctx.alloc_unique(), size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        rotated,
        smallvec![right, left],
        ctx.addr,
    ));
    rotated
}

pub fn lift_ubfm(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let bits = u64::from(size) * 8;
    let src = operand_to_varnode(ctx, &ops[1].0);
    let immr = imm(&ops[2].0);
    let imms = imm(&ops[3].0);
    match (src, immr, imms) {
        (Some(src), Some(immr), Some(imms)) if immr < bits && imms < bits => {
            let width = if imms >= immr {
                imms - immr + 1
            } else {
                imms + 1
            };
            let value = if immr == 0 {
                src
            } else if imms < immr {
                emit_ror(ctx, src, immr, size)
            } else {
                let shifted = Varnode::unique(ctx.alloc_unique(), size);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntRight,
                    shifted,
                    smallvec![src, Varnode::constant(immr, 1)],
                    ctx.addr,
                ));
                shifted
            };
            let mask = Varnode::constant(low_mask(width), size);
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![value, mask],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ubfx(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let bits = u64::from(size) * 8;
    let src = operand_to_varnode(ctx, &ops[1].0);
    let lsb = imm(&ops[2].0);
    let width = imm(&ops[3].0);
    match (src, lsb, width) {
        (Some(src), Some(lsb), Some(width)) if lsb < bits && width > 0 && width <= bits => {
            let shifted = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                shifted,
                smallvec![src, Varnode::constant(lsb, 1)],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![shifted, Varnode::constant(low_mask(width), size)],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sbfm(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let bits = u64::from(size) * 8;
    let src = operand_to_varnode(ctx, &ops[1].0);
    let immr = imm(&ops[2].0);
    let imms = imm(&ops[3].0);
    match (src, immr, imms) {
        (Some(src), Some(immr), Some(imms)) if immr < bits && imms < bits => {
            let width = if imms >= immr {
                imms - immr + 1
            } else {
                imms + 1
            };
            if imms < immr {
                let rotated = emit_ror(ctx, src, immr, size);
                emit_signed_extract(ctx, ops, rotated, 0, width, size);
            } else {
                emit_signed_extract(ctx, ops, src, immr, width, size);
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sbfx(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let bits = u64::from(size) * 8;
    let src = operand_to_varnode(ctx, &ops[1].0);
    let lsb = imm(&ops[2].0);
    let width = imm(&ops[3].0);
    match (src, lsb, width) {
        (Some(src), Some(lsb), Some(width)) if lsb < bits && width > 0 && width <= bits => {
            emit_signed_extract(ctx, ops, src, lsb, width, size);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sxt(ctx: &mut LiftCtx, ops: &Ops, src_size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let src = operand_to_varnode(ctx, &ops[1].0);
    match src {
        Some(src) => {
            let piece = Varnode::unique(ctx.alloc_unique(), src_size);
            ctx.emit(IrInsn::with_output(
                IrOp::Subpiece,
                piece,
                smallvec![src, Varnode::constant(0, 1)],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSext,
                result,
                smallvec![piece],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        None => ctx.emit_unimplemented(),
    }
}

fn emit_signed_extract(ctx: &mut LiftCtx, ops: &Ops, src: Varnode, lsb: u64, width: u64, size: u8) {
    let shifted = Varnode::unique(ctx.alloc_unique(), size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSright,
        shifted,
        smallvec![src, Varnode::constant(lsb, 1)],
        ctx.addr,
    ));
    let extract_size = width.div_ceil(8).clamp(1, u64::from(size)) as u8;
    let piece = Varnode::unique(ctx.alloc_unique(), extract_size);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        piece,
        smallvec![shifted, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    let result = Varnode::unique(ctx.alloc_unique(), size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSext,
        result,
        smallvec![piece],
        ctx.addr,
    ));
    write_dst(ctx, ops, result);
}

pub fn lift_extr(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let bits = u64::from(size) * 8;
    let rn = operand_to_varnode(ctx, &ops[1].0);
    let rm = operand_to_varnode(ctx, &ops[2].0);
    let lsb = imm(&ops[3].0);
    match (rn, rm, lsb) {
        (Some(rn), Some(rm), Some(lsb)) if lsb < bits => {
            let right = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                right,
                smallvec![rm, Varnode::constant(lsb, 1)],
                ctx.addr,
            ));
            let left = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                left,
                smallvec![rn, Varnode::constant(bits - lsb, 1)],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                result,
                smallvec![right, left],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bfxil(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let bits = u64::from(size) * 8;
    let Some((Arm64OperandType::Reg(dst_reg), _)) = ops.first() else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(old_dst) = crate::register_file::reg_varnode(*dst_reg) else {
        ctx.emit_unimplemented();
        return;
    };
    let src = operand_to_varnode(ctx, &ops[1].0).map(|src| coerce_to_size(ctx, src, size));
    let lsb = imm(&ops[2].0);
    let width = imm(&ops[3].0);
    match (src, lsb, width) {
        (Some(src), Some(lsb), Some(width))
            if width > 0 && lsb < bits && lsb.saturating_add(width) <= bits =>
        {
            let extract_mask = Varnode::constant(low_mask(width), size);
            let extracted = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                extracted,
                smallvec![src, extract_mask],
                ctx.addr,
            ));

            let inserted = if lsb == 0 {
                extracted
            } else {
                let shifted = Varnode::unique(ctx.alloc_unique(), size);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntLeft,
                    shifted,
                    smallvec![extracted, Varnode::constant(lsb, 1)],
                    ctx.addr,
                ));
                shifted
            };

            let field_mask = low_mask(width) << lsb;
            let kept_mask = Varnode::constant(!field_mask & low_mask(bits), size);
            let kept = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                kept,
                smallvec![old_dst, kept_mask],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                result,
                smallvec![kept, inserted],
                ctx.addr,
            ));
            write_dst(ctx, ops, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}
