use capstone::arch::ppc::PpcOperand;
use capstone::arch::DetailsArchInsn;
use capstone::{Capstone, Insn, InsnDetail};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{operand_imm, LiftCtx};
use crate::register_file::{ctr, lr};

pub fn lift_b(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let target = match ops.first().and_then(|o| operand_imm(o)) {
        Some(t) => Varnode::constant(t as u64, 8),
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit(IrInsn::without_output(IrOp::Branch, smallvec![target], ctx.addr));
}

pub fn lift_bl(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    // BL target: LR = addr + 4, then call target
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), 8);
    ctx.emit(IrInsn::with_output(IrOp::Copy, lr(), smallvec![return_addr], ctx.addr));

    let target = match ops.first().and_then(|o| operand_imm(o)) {
        Some(t) => Varnode::constant(t as u64, 8),
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit(IrInsn::without_output(IrOp::Call, smallvec![target], ctx.addr));
}

pub fn lift_bc(ctx: &mut LiftCtx, _cs: &Capstone, _insn: &Insn<'_>, detail: &InsnDetail<'_>) {
    let arch_ops: Vec<PpcOperand> = detail
        .arch_detail()
        .ppc()
        .map(|d| d.operands().collect())
        .unwrap_or_default();

    let target = arch_ops
        .iter()
        .rev()
        .find_map(|o| {
            if let PpcOperand::Imm(v) = o { Some(v) } else { None }
        });

    let target_vn = match target {
        Some(t) => Varnode::constant(*t as u64, 8),
        None => return ctx.emit_unimplemented(),
    };

    // Simplified: emit Cbranch with a placeholder condition (CR bit 0).
    // Full CR field decoding is deferred to a later pass.
    let cond = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        cond,
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![target_vn, cond],
        ctx.addr,
    ));
}

pub fn lift_bctr(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![ctr()],
        ctx.addr,
    ));
}

pub fn lift_blr(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Return,
        smallvec![lr()],
        ctx.addr,
    ));
}
