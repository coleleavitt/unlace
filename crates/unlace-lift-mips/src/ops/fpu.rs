//! MIPS FPU (Coprocessor 1) instruction lifting.
//!
//! All handlers here are WIP and not yet wired into `lift::dispatch_insn`.
//! TODO: connect MFC1/MTC1/CFC1/CTC1/LWC1/SWC1/BC1*/`add.s|sub.s|...` etc.
#![allow(dead_code)]

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{FCC0, FCSR, FPR_BASE};

pub const CALLOTHER_FPU_UNIMPL: u64 = 0x4d49_5046_5055_0001;

#[inline]
fn fpr(n: u64, size: u8) -> Varnode {
    Varnode::new(SpaceId::Register, FPR_BASE + n * 8, size)
}

#[inline]
fn fcc0() -> Varnode {
    Varnode::reg(FCC0, 1)
}

fn fpr_from_operand(ops: &[capstone::arch::mips::MipsOperand], idx: usize, size: u8) -> Varnode {
    use capstone::arch::mips::MipsOperand;
    match ops.get(idx) {
        Some(MipsOperand::Reg(reg)) => {
            let id = reg.0 as u64;
            if id >= 45 && id < 77 { fpr(id - 45, size) } else { fpr(0, size) }
        }
        _ => fpr(0, size),
    }
}

pub fn lift_fpu_load(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let dst = fpr_from_operand(ops, 0, size);
    if let Some(addr) = ops.get(1).and_then(|op| ctx.mem_addr(op)) {
        ctx.emit_load(dst, addr);
    } else {
        ctx.emit_unimplemented();
    }
}

pub fn lift_fpu_store(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let src = fpr_from_operand(ops, 0, size);
    if let Some(addr) = ops.get(1).and_then(|op| ctx.mem_addr(op)) {
        ctx.emit_store(addr, src);
    } else {
        ctx.emit_unimplemented();
    }
}

pub fn lift_mfc1(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    use capstone::arch::mips::MipsOperand;
    let dst = ops.get(0).and_then(|op| match op {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    });
    let src = fpr_from_operand(ops, 1, size);
    if let Some(d) = dst {
        ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![src], ctx.addr));
    }
}

pub fn lift_dmfc1(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand]) {
    lift_mfc1(ctx, ops, 8);
}

pub fn lift_cfc1(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand]) {
    use capstone::arch::mips::MipsOperand;
    let dst = ops.get(0).and_then(|op| match op {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    });
    if let Some(d) = dst {
        let src = Varnode::reg(FCSR, 8);
        ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![src], ctx.addr));
    } else {
        ctx.emit_unimplemented();
    }
}

pub fn lift_mtc1(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    use capstone::arch::mips::MipsOperand;
    let src = ops.get(0).and_then(|op| match op {
        MipsOperand::Reg(r) => ctx.read_reg(*r),
        _ => None,
    });
    let dst = fpr_from_operand(ops, 1, size);
    if let Some(s) = src {
        ctx.emit(IrInsn::with_output(IrOp::Copy, dst, smallvec![s], ctx.addr));
    } else {
        ctx.emit_unimplemented();
    }
}

pub fn lift_dmtc1(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand]) {
    lift_mtc1(ctx, ops, 8);
}

pub fn lift_ctc1(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand]) {
    use capstone::arch::mips::MipsOperand;
    let src = ops.get(0).and_then(|op| match op {
        MipsOperand::Reg(r) => ctx.read_reg(*r),
        _ => None,
    });
    if let Some(s) = src {
        let dst = Varnode::reg(FCSR, 4);
        ctx.emit(IrInsn::with_output(IrOp::Copy, dst, smallvec![s], ctx.addr));
    } else {
        ctx.emit_unimplemented();
    }
}

pub fn lift_bc1(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], true_sense: bool) {
    use capstone::arch::mips::MipsOperand;
    let target = ops.iter().find_map(|op| match op {
        MipsOperand::Imm(imm) => Some(Varnode::ram(*imm as u64, 8)),
        _ => None,
    });
    if let Some(tgt) = target {
        let cond = fcc0();
        if true_sense {
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![tgt, cond], ctx.addr));
        } else {
            let neg = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(IrOp::BoolNegate, neg, smallvec![cond], ctx.addr));
            ctx.emit(IrInsn::without_output(IrOp::Cbranch, smallvec![tgt, neg], ctx.addr));
        }
    } else {
        ctx.emit_unimplemented();
    }
}

pub fn lift_fp_add(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    let ft = fpr_from_operand(ops, 2, size);
    ctx.emit(IrInsn::with_output(IrOp::FloatAdd, fd, smallvec![fs, ft], ctx.addr));
}

pub fn lift_fp_sub(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    let ft = fpr_from_operand(ops, 2, size);
    ctx.emit(IrInsn::with_output(IrOp::FloatSub, fd, smallvec![fs, ft], ctx.addr));
}

pub fn lift_fp_mul(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    let ft = fpr_from_operand(ops, 2, size);
    ctx.emit(IrInsn::with_output(IrOp::FloatMult, fd, smallvec![fs, ft], ctx.addr));
}

pub fn lift_fp_div(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    let ft = fpr_from_operand(ops, 2, size);
    ctx.emit(IrInsn::with_output(IrOp::FloatDiv, fd, smallvec![fs, ft], ctx.addr));
}

pub fn lift_fp_sqrt(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    ctx.emit(IrInsn::with_output(IrOp::FloatSqrt, fd, smallvec![fs], ctx.addr));
}

pub fn lift_fp_abs(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    ctx.emit(IrInsn::with_output(IrOp::FloatAbs, fd, smallvec![fs], ctx.addr));
}

pub fn lift_fp_mov(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    ctx.emit(IrInsn::with_output(IrOp::Copy, fd, smallvec![fs], ctx.addr));
}

pub fn lift_fp_neg(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8) {
    let fd = fpr_from_operand(ops, 0, size);
    let fs = fpr_from_operand(ops, 1, size);
    ctx.emit(IrInsn::with_output(IrOp::FloatNeg, fd, smallvec![fs], ctx.addr));
}

pub fn lift_fp_compare(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], size: u8, cmp_op: IrOp) {
    let fs = fpr_from_operand(ops, 0, size);
    let ft = fpr_from_operand(ops, 1, size);
    ctx.emit(IrInsn::with_output(cmp_op, fcc0(), smallvec![fs, ft], ctx.addr));
}

pub fn lift_fp_convert(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], dst_size: u8, src_size: u8) {
    let fd = fpr_from_operand(ops, 0, dst_size);
    let fs = fpr_from_operand(ops, 1, src_size);
    ctx.emit(IrInsn::with_output(IrOp::FloatFloat2float, fd, smallvec![fs], ctx.addr));
}

pub fn lift_fp_int_to_float(ctx: &mut LiftCtx, ops: &[capstone::arch::mips::MipsOperand], dst_size: u8) {
    let fd = fpr_from_operand(ops, 0, dst_size);
    let fs = fpr_from_operand(ops, 1, 4);
    ctx.emit(IrInsn::with_output(IrOp::FloatInt2float, fd, smallvec![fs], ctx.addr));
}
