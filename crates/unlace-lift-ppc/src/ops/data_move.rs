use capstone::arch::ppc::PpcOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::{operand_imm, operand_mem_addr, operand_reg, LiftCtx};
use crate::register_file::lr;

pub fn lift_lwz(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
    let loaded = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(IrOp::Load, loaded, smallvec![ram_space, mem_addr], ctx.addr));
    let extended = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(IrOp::IntZext, extended, smallvec![loaded], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![extended], ctx.addr));
}

pub fn lift_ld(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
    let loaded = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(IrOp::Load, loaded, smallvec![ram_space, mem_addr], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![loaded], ctx.addr));
}

pub fn lift_stw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rs = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let truncated = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        truncated,
        smallvec![rs, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit_store(mem_addr, truncated);
}

pub fn lift_std(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rs = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit_store(mem_addr, rs);
}

pub fn lift_li(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let imm = match ops.get(1).and_then(|o| operand_imm(o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let imm_vn = Varnode::constant(imm as u64, 8);
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![imm_vn], ctx.addr));
}

pub fn lift_lis(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let imm = match ops.get(1).and_then(|o| operand_imm(o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    // LIS rD, imm  →  rD = imm << 16
    let shifted = (imm as i16 as i64) << 16;
    let imm_vn = Varnode::constant(shifted as u64, 8);
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![imm_vn], ctx.addr));
}

pub fn lift_mr(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let rs = match ops.get(1).and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![rs], ctx.addr));
}

pub fn lift_mfspr(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    // mfspr rD, SPR has 2 operands; mflr/mfctr aliases have 1 (source SPR is implicit).
    let spr = match ops.get(1).and_then(operand_reg) {
        Some(v) => v,
        None => lr(),
    };
    ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![spr], ctx.addr));
}

pub fn lift_mtspr(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    // mtspr SPR, rS has 2 operands; mtlr/mtctr aliases have 1 (dest SPR is implicit).
    if ops.len() >= 2 {
        let spr = match ops.first().and_then(operand_reg) {
            Some(v) => v,
            None => return ctx.emit_unimplemented(),
        };
        let rs = match ops.get(1).and_then(operand_reg) {
            Some(v) => v,
            None => return ctx.emit_unimplemented(),
        };
        ctx.emit(IrInsn::with_output(IrOp::Copy, spr, smallvec![rs], ctx.addr));
    } else {
        let rs = match ops.first().and_then(operand_reg) {
            Some(v) => v,
            None => return ctx.emit_unimplemented(),
        };
        ctx.emit(IrInsn::with_output(IrOp::Copy, lr(), smallvec![rs], ctx.addr));
    }
}

pub fn lift_nop(ctx: &mut LiftCtx) {
    let uid = ctx.alloc_unique();
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        Varnode::unique(uid, 1),
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));
}
