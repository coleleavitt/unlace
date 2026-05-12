use capstone::arch::DetailsArchInsn;
use capstone::arch::ppc::PpcOperand;
use capstone::{Capstone, Insn, InsnDetail};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_imm};
use crate::register_file::{cr, ctr_with_size, lr_with_size};

pub fn lift_b(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let target = match ops.first().and_then(operand_imm) {
        Some(t) => Varnode::constant(t as u64, ctx.ptr_size),
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Branch,
        smallvec![target],
        ctx.addr,
    ));
}

pub fn lift_bl(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    // BL target: LR = addr + 4, then call target
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), ctx.ptr_size);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        lr_with_size(ctx.ptr_size),
        smallvec![return_addr],
        ctx.addr,
    ));

    let target = match ops.first().and_then(operand_imm) {
        Some(t) => Varnode::constant(t as u64, ctx.ptr_size),
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Call,
        smallvec![target],
        ctx.addr,
    ));
}

pub fn lift_bc(ctx: &mut LiftCtx, _cs: &Capstone, _insn: &Insn<'_>, detail: &InsnDetail<'_>) {
    let arch_ops: Vec<PpcOperand> = detail
        .arch_detail()
        .ppc()
        .map(|d| d.operands().collect())
        .unwrap_or_default();

    let target = arch_ops.iter().rev().find_map(|o| {
        if let PpcOperand::Imm(v) = o {
            Some(v)
        } else {
            None
        }
    });

    let target_vn = match target {
        Some(t) => Varnode::constant(*t as u64, ctx.ptr_size),
        None => return ctx.emit_unimplemented(),
    };

    // Preserve the branch as data-dependent until BO/BI CR-bit decoding is
    // precise. A constant placeholder is folded by SCCP and erases real ifs.
    let cond = cr();
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![target_vn, cond],
        ctx.addr,
    ));
}

pub fn lift_bctr(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![ctr_with_size(ctx.ptr_size)],
        ctx.addr,
    ));
}

pub fn lift_blr(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Return,
        smallvec![lr_with_size(ctx.ptr_size)],
        ctx.addr,
    ));
}
