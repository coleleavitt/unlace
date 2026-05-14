use capstone::arch::ppc::PpcOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_reg};
use crate::register_file::cr;

/// CMPW: signed 32-bit compare → set CR field.
/// Emits IntSless(a, b) → CR (simplified: full CR field encoding deferred).
pub fn lift_cmpw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let (ra, rb) = match extract_cmp_operands(ctx, ops) {
        Some(pair) => pair,
        None => return ctx.emit_unimplemented(),
    };
    let cr_vn = cr();
    let result = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSless,
        result,
        smallvec![ra, rb],
        ctx.addr,
    ));
    let eq_result = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        eq_result,
        smallvec![ra, rb],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        cr_vn,
        smallvec![eq_result],
        ctx.addr,
    ));
}

/// CMPLW: unsigned 32-bit compare.
pub fn lift_cmplw(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let (ra, rb) = match extract_cmp_operands(ctx, ops) {
        Some(pair) => pair,
        None => return ctx.emit_unimplemented(),
    };
    let cr_vn = cr();
    let result = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntLess,
        result,
        smallvec![ra, rb],
        ctx.addr,
    ));
    let eq_result = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        eq_result,
        smallvec![ra, rb],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        cr_vn,
        smallvec![Varnode::constant(0, 4)],
        ctx.addr,
    ));
}

fn extract_cmp_operands(ctx: &LiftCtx, ops: &[PpcOperand]) -> Option<(Varnode, Varnode)> {
    // Capstone may emit: cmpw crX, rA, rB  (3 ops with CRX first)
    //                 or: cmpw rA, rB       (2 ops, CR0 implied)
    if ops.len() >= 3 {
        let ra = operand_reg(ctx, &ops[1])?;
        let rb = operand_reg(ctx, &ops[2])?;
        Some((ra, rb))
    } else if ops.len() == 2 {
        let ra = operand_reg(ctx, &ops[0])?;
        let rb = operand_reg(ctx, &ops[1])?;
        Some((ra, rb))
    } else {
        None
    }
}
