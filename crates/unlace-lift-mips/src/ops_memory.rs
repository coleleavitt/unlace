use capstone::arch::mips::MipsOperand;
use smallvec::smallvec;
use unlace_ir::IrOp;
use unlace_ir::{IrInsn, Varnode};

use crate::lift::LiftCtx;

pub fn lift_load(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let addr_vn = ctx.mem_addr(&ops[1]);
    match (dst, addr_vn) {
        (Some(dst), Some(addr_vn)) => {
            let loaded = ctx.alloc_unique(size);
            ctx.emit_load(loaded, addr_vn);
            if size < ctx.word_size() {
                let extended = ctx.alloc_word();
                ctx.emit(IrInsn::with_output(
                    IrOp::IntZext,
                    extended,
                    smallvec![loaded],
                    ctx.addr,
                ));
                ctx.write_to_reg(dst, extended);
            } else {
                ctx.write_to_reg(dst, loaded);
            }
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_store_conditional(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    lift_store(ctx, ops, size);
    if let Some(dst) = match ops.first() {
        Some(MipsOperand::Reg(r)) => ctx.write_reg(*r),
        _ => None,
    } {
        ctx.write_to_reg(dst, ctx.word_const(1));
    }
}

pub fn lift_prefetch(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![Varnode::constant(0x4d495053505246, 8)],
        ctx.addr,
    ));
}

pub fn lift_barrier(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![Varnode::constant(0x4d49505353594e43, 8)],
        ctx.addr,
    ));
}

pub fn lift_multi_load(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let addr_vn = ctx.mem_addr(&ops[ops.len() - 1]);
    let Some(base_addr) = addr_vn else {
        ctx.emit_unimplemented();
        return;
    };
    let mut offset = 0u64;
    for op in &ops[..ops.len() - 1] {
        if let MipsOperand::Reg(r) = op {
            if let Some(dst) = ctx.write_reg(*r) {
                let addr = add_offset(ctx, base_addr, offset);
                let loaded = ctx.alloc_unique(4);
                ctx.emit_load(loaded, addr);
                if 4 < ctx.word_size() {
                    let extended = ctx.alloc_word();
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntZext,
                        extended,
                        smallvec![loaded],
                        ctx.addr,
                    ));
                    ctx.write_to_reg(dst, extended);
                } else {
                    ctx.write_to_reg(dst, loaded);
                }
            }
            offset += 4;
        }
    }
}

pub fn lift_multi_store(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let addr_vn = ctx.mem_addr(&ops[ops.len() - 1]);
    let Some(base_addr) = addr_vn else {
        ctx.emit_unimplemented();
        return;
    };
    let mut offset = 0u64;
    for op in &ops[..ops.len() - 1] {
        if let MipsOperand::Reg(r) = op {
            if let Some(src) = ctx.read_reg(*r) {
                let addr = add_offset(ctx, base_addr, offset);
                let truncated = ctx.alloc_unique(4);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    truncated,
                    smallvec![src, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                ctx.emit_store(addr, truncated);
            }
            offset += 4;
        }
    }
}

fn add_offset(ctx: &mut LiftCtx, base: Varnode, offset: u64) -> Varnode {
    if offset == 0 {
        base
    } else {
        let addr = ctx.alloc_word();
        ctx.emit(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![base, ctx.word_const(offset)],
            ctx.addr,
        ));
        addr
    }
}

pub fn lift_store(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let src = ctx.read_operand(&ops[0]);
    let addr_vn = ctx.mem_addr(&ops[1]);
    match (src, addr_vn) {
        (Some(src), Some(addr_vn)) => {
            if size < ctx.word_size() {
                let truncated = ctx.alloc_unique(size);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    truncated,
                    smallvec![src, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                ctx.emit_store(addr_vn, truncated);
            } else {
                ctx.emit_store(addr_vn, src);
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}
