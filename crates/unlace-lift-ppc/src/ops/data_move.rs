use capstone::arch::ppc::PpcOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::{LiftCtx, operand_imm, operand_mem_addr, operand_reg};
use crate::register_file::{PPC64_GPR_SIZE, lr_with_size};

fn ram_space(ctx: &LiftCtx) -> Varnode {
    Varnode::constant(SpaceId::Ram as u64, ctx.ptr_size)
}

fn copy_to_reg(ctx: &mut LiftCtx, dst: Varnode, value: Varnode) {
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        dst,
        smallvec![value],
        ctx.addr,
    ));
}

fn load_into_reg(ctx: &mut LiftCtx, ops: &[PpcOperand], load_size: u8, extension: Option<IrOp>) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let loaded = Varnode::unique(ctx.alloc_unique(), load_size);
    ctx.emit(IrInsn::with_output(
        IrOp::Load,
        loaded,
        smallvec![ram_space(ctx), mem_addr],
        ctx.addr,
    ));

    if rd.size == load_size {
        copy_to_reg(ctx, rd, loaded);
    } else if let Some(op) = extension {
        let extended = Varnode::unique(ctx.alloc_unique(), rd.size);
        ctx.emit(IrInsn::with_output(
            op,
            extended,
            smallvec![loaded],
            ctx.addr,
        ));
        copy_to_reg(ctx, rd, extended);
    } else {
        copy_to_reg(ctx, rd, loaded);
    }
}

fn store_from_reg(ctx: &mut LiftCtx, ops: &[PpcOperand], store_size: u8) {
    let rs = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    if rs.size == store_size {
        ctx.emit_store(mem_addr, rs);
    } else {
        let truncated = Varnode::unique(ctx.alloc_unique(), store_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            truncated,
            smallvec![rs, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        ctx.emit_store(mem_addr, truncated);
    }
}

pub fn lift_lwz(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    load_into_reg(ctx, ops, 4, Some(IrOp::IntZext));
}

pub fn lift_lwa(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    load_into_reg(ctx, ops, 4, Some(IrOp::IntSext));
}

pub fn lift_ld(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    if ctx.ptr_size != PPC64_GPR_SIZE {
        return ctx.emit_unimplemented();
    }
    load_into_reg(ctx, ops, 8, None);
}

pub fn lift_lbz(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    load_into_reg(ctx, ops, 1, Some(IrOp::IntZext));
}

pub fn lift_lhz(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    load_into_reg(ctx, ops, 2, Some(IrOp::IntZext));
}

pub fn lift_stw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    store_from_reg(ctx, ops, 4);
}

pub fn lift_std(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    if ctx.ptr_size != PPC64_GPR_SIZE {
        return ctx.emit_unimplemented();
    }
    store_from_reg(ctx, ops, 8);
}

pub fn lift_stb(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    store_from_reg(ctx, ops, 1);
}

pub fn lift_sth(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    store_from_reg(ctx, ops, 2);
}

pub fn lift_li(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let imm = match ops.get(1).and_then(operand_imm) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    copy_to_reg(ctx, rd, Varnode::constant(imm as u64, rd.size));
}

pub fn lift_lis(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let imm = match ops.get(1).and_then(operand_imm) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let shifted = (imm as i16 as i64) << 16;
    copy_to_reg(ctx, rd, Varnode::constant(shifted as u64, rd.size));
}

pub fn lift_mr(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let rs = match ops.get(1).and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    copy_to_reg(ctx, rd, rs);
}

pub fn lift_exts(ctx: &mut LiftCtx, ops: &[PpcOperand], source_size: u8) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let rs = match ops.get(1).and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let narrowed = if rs.size == source_size {
        rs
    } else {
        let t = Varnode::unique(ctx.alloc_unique(), source_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            t,
            smallvec![rs, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        t
    };
    if rd.size == source_size {
        copy_to_reg(ctx, rd, narrowed);
    } else {
        let extended = Varnode::unique(ctx.alloc_unique(), rd.size);
        ctx.emit(IrInsn::with_output(
            IrOp::IntSext,
            extended,
            smallvec![narrowed],
            ctx.addr,
        ));
        copy_to_reg(ctx, rd, extended);
    }
}

pub fn lift_mfspr(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let spr = match ops.get(1).and_then(|o| operand_reg(ctx, o)) {
        Some(v) => v,
        None => lr_with_size(ctx.ptr_size),
    };
    copy_to_reg(ctx, rd, spr);
}

pub fn lift_mtspr(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    if ops.len() >= 2 {
        let spr = match ops.first().and_then(|o| operand_reg(ctx, o)) {
            Some(v) => v,
            None => return ctx.emit_unimplemented(),
        };
        let rs = match ops.get(1).and_then(|o| operand_reg(ctx, o)) {
            Some(v) => v,
            None => return ctx.emit_unimplemented(),
        };
        copy_to_reg(ctx, spr, rs);
    } else {
        let rs = match ops.first().and_then(|o| operand_reg(ctx, o)) {
            Some(v) => v,
            None => return ctx.emit_unimplemented(),
        };
        copy_to_reg(ctx, lr_with_size(ctx.ptr_size), rs);
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
