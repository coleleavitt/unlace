use capstone::arch::arm64::{Arm64OperandType, Arm64Shift};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, compute_mem_address, operand_to_varnode};
use crate::register_file;

type Ops = [(Arm64OperandType, Arm64Shift)];

fn dst_size(ops: &Ops) -> u8 {
    match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => {
            if register_file::is_w_reg(*reg) {
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
        if register_file::is_zero_reg(*reg) {
            return;
        }
        if let Some(dst) = register_file::reg_varnode(*reg) {
            ctx.emit_copy(dst, value);
        }
    }
}

pub fn lift_mov(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let src = operand_to_varnode(ctx, &ops[1].0);
    match src {
        Some(src) => write_dst(ctx, ops, src),
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_movz(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let src = operand_to_varnode(ctx, &ops[1].0);
    match src {
        Some(src) => write_dst(ctx, ops, src),
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_movn(ctx: &mut LiftCtx, ops: &Ops) {
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

pub fn lift_movk(ctx: &mut LiftCtx, ops: &Ops) {
    // MOVK: move immediate with keep. Capstone provides the already-shifted value.
    // We model this as: dst = (dst & ~mask) | (imm << shift)
    // For MVP, just emit Copy of the immediate (capstone resolves shift for us).
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    let dst_vn = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => register_file::reg_varnode(*reg),
        _ => None,
    };
    let imm = operand_to_varnode(ctx, &ops[1].0);

    match (dst_vn, imm) {
        (Some(dst), Some(imm_vn)) => {
            let shift = match ops[1].1 {
                Arm64Shift::Lsl(value) => value as u64,
                _ => 0,
            };
            if shift == 0 {
                // Simple: mask lower 16 bits
                let mask = Varnode::constant(!0xFFFF_u64, size);
                let masked = Varnode::unique(ctx.alloc_unique(), size);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAnd,
                    masked,
                    smallvec![dst, mask],
                    ctx.addr,
                ));
                let result = Varnode::unique(ctx.alloc_unique(), size);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntOr,
                    result,
                    smallvec![masked, imm_vn],
                    ctx.addr,
                ));
                write_dst(ctx, ops, result);
            } else {
                let shifted_imm = Varnode::unique(ctx.alloc_unique(), size);
                let shift_vn = Varnode::constant(shift, 1);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntLeft,
                    shifted_imm,
                    smallvec![imm_vn, shift_vn],
                    ctx.addr,
                ));
                let mask_val = !(0xFFFF_u64 << shift);
                let mask = Varnode::constant(mask_val, size);
                let masked = Varnode::unique(ctx.alloc_unique(), size);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAnd,
                    masked,
                    smallvec![dst, mask],
                    ctx.addr,
                ));
                let result = Varnode::unique(ctx.alloc_unique(), size);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntOr,
                    result,
                    smallvec![masked, shifted_imm],
                    ctx.addr,
                ));
                write_dst(ctx, ops, result);
            }
        }
        _ => ctx.emit_unimplemented(),
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

pub fn lift_adr(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let src = operand_to_varnode(ctx, &ops[1].0);
    match src {
        Some(src) => write_dst(ctx, ops, src),
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_ldr(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let size = dst_size(ops);
    match &ops[1].0 {
        Arm64OperandType::Mem(mem) => {
            if let Some(addr) = compute_mem_address(ctx, mem) {
                let loaded = ctx.emit_load(size, addr);
                write_dst(ctx, ops, loaded);
            } else {
                ctx.emit_unimplemented();
            }
        }
        Arm64OperandType::Imm(imm) => {
            let addr = Varnode::constant(*imm as u64, 8);
            let loaded = ctx.emit_load(size, addr);
            write_dst(ctx, ops, loaded);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ldr_sized(ctx: &mut LiftCtx, ops: &Ops, load_size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let dst_sz = dst_size(ops);
    match &ops[1].0 {
        Arm64OperandType::Mem(mem) => {
            if let Some(addr) = compute_mem_address(ctx, mem) {
                let loaded = ctx.emit_load(load_size, addr);
                let extended = Varnode::unique(ctx.alloc_unique(), dst_sz);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntZext,
                    extended,
                    smallvec![loaded],
                    ctx.addr,
                ));
                write_dst(ctx, ops, extended);
            } else {
                ctx.emit_unimplemented();
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ldrsw(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    match &ops[1].0 {
        Arm64OperandType::Mem(mem) => {
            if let Some(addr) = compute_mem_address(ctx, mem) {
                let loaded = ctx.emit_load(4, addr);
                let extended = Varnode::unique(ctx.alloc_unique(), 8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntSext,
                    extended,
                    smallvec![loaded],
                    ctx.addr,
                ));
                write_dst(ctx, ops, extended);
            } else {
                ctx.emit_unimplemented();
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_ldp(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let size1 = match &ops[0].0 {
        Arm64OperandType::Reg(reg) => {
            if register_file::is_w_reg(*reg) {
                4u8
            } else {
                8u8
            }
        }
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let mem = match &ops[2].0 {
        Arm64OperandType::Mem(mem) => mem,
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let base_addr = match compute_mem_address(ctx, mem) {
        Some(a) => a,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let loaded1 = ctx.emit_load(size1, base_addr);
    write_dst(ctx, ops, loaded1);

    let offset = Varnode::constant(size1 as u64, 8);
    let addr2 = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAdd,
        addr2,
        smallvec![base_addr, offset],
        ctx.addr,
    ));
    let loaded2 = ctx.emit_load(size1, addr2);
    if let Some((Arm64OperandType::Reg(reg), _)) = ops.get(1) {
        if !register_file::is_zero_reg(*reg) {
            if let Some(dst) = register_file::reg_varnode(*reg) {
                ctx.emit_copy(dst, loaded2);
            }
        }
    }
}

pub fn lift_str(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let src = operand_to_varnode(ctx, &ops[0].0);
    match (&ops[1].0, src) {
        (Arm64OperandType::Mem(mem), Some(src)) => {
            if let Some(addr) = compute_mem_address(ctx, mem) {
                ctx.emit_store(addr, src);
            } else {
                ctx.emit_unimplemented();
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_str_sized(ctx: &mut LiftCtx, ops: &Ops, store_size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let src = operand_to_varnode(ctx, &ops[0].0);
    match (&ops[1].0, src) {
        (Arm64OperandType::Mem(mem), Some(src)) => {
            if let Some(addr) = compute_mem_address(ctx, mem) {
                let truncated = Varnode::unique(ctx.alloc_unique(), store_size);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    truncated,
                    smallvec![src, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                ctx.emit_store(addr, truncated);
            } else {
                ctx.emit_unimplemented();
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_stp(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let src1 = operand_to_varnode(ctx, &ops[0].0);
    let src2 = operand_to_varnode(ctx, &ops[1].0);
    let size = match &ops[0].0 {
        Arm64OperandType::Reg(reg) => {
            if register_file::is_w_reg(*reg) {
                4u8
            } else {
                8u8
            }
        }
        _ => 8,
    };

    let mem = match &ops[2].0 {
        Arm64OperandType::Mem(mem) => mem,
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let base_addr = match compute_mem_address(ctx, mem) {
        Some(a) => a,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };

    match (src1, src2) {
        (Some(s1), Some(s2)) => {
            ctx.emit_store(base_addr, s1);
            let offset = Varnode::constant(size as u64, 8);
            let addr2 = Varnode::unique(ctx.alloc_unique(), 8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                addr2,
                smallvec![base_addr, offset],
                ctx.addr,
            ));
            ctx.emit_store(addr2, s2);
        }
        _ => ctx.emit_unimplemented(),
    }
}
