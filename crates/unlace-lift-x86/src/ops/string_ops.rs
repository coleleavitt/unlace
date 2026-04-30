//! x86 REP-prefixed string operations → Callother IR.
//!
//! REP MOVSB/W/D/Q → `Callother(MEMCPY, dst=RDI, src=RSI, count=RCX, elem_size)`
//! REP STOSB/W/D/Q → `Callother(MEMSET, dst=RDI, val=AL/AX/EAX/RAX, count=RCX, elem_size)`
//! REPE/REPNE CMPSB → `Callother(MEMCMP, a=RSI, b=RDI, count=RCX, elem_size)`
//!
//! Convention for the Callother tag (input\[0\] in Const space):
//!   - 0x1 = memcpy
//!   - 0x2 = memset
//!   - 0x3 = memcmp
//!
//! After the Callother, the affected registers (RDI, RSI, RCX) are zeroed /
//! adjusted to reflect the post-loop state.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{RAX, RCX, RDI, RSI, ZF};

const TAG_MEMCPY: u64 = 0x1;
const TAG_MEMSET: u64 = 0x2;
const TAG_MEMCMP: u64 = 0x3;

fn element_size(mnemonic: iced_x86::Mnemonic) -> Option<u8> {
    use iced_x86::Mnemonic as M;
    match mnemonic {
        M::Movsb | M::Stosb | M::Cmpsb => Some(1),
        M::Movsw | M::Stosw | M::Cmpsw => Some(2),
        M::Movsd | M::Stosd | M::Cmpsd => Some(4),
        M::Movsq | M::Stosq | M::Cmpsq => Some(8),
        _ => None,
    }
}

fn is_movs(mnemonic: iced_x86::Mnemonic) -> bool {
    use iced_x86::Mnemonic as M;
    matches!(mnemonic, M::Movsb | M::Movsw | M::Movsd | M::Movsq)
}

fn is_stos(mnemonic: iced_x86::Mnemonic) -> bool {
    use iced_x86::Mnemonic as M;
    matches!(mnemonic, M::Stosb | M::Stosw | M::Stosd | M::Stosq)
}

fn is_cmps(mnemonic: iced_x86::Mnemonic) -> bool {
    use iced_x86::Mnemonic as M;
    matches!(mnemonic, M::Cmpsb | M::Cmpsw | M::Cmpsd | M::Cmpsq)
}

/// Lift a REP MOVS{B,W,D,Q} instruction.
///
/// Emits:
///   Callother(tag=MEMCPY, dst=RDI, src=RSI, count=RCX, elem_size)
///   RCX = 0
pub fn lift_rep_movs(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let elem = element_size(insn.mnemonic()).unwrap_or(1);
    let rdi = Varnode::reg(RDI, 8);
    let rsi = Varnode::reg(RSI, 8);
    let rcx = Varnode::reg(RCX, 8);

    let tag = Varnode::constant(TAG_MEMCPY, 8);
    let elem_vn = Varnode::constant(elem as u64, 8);

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag, rdi, rsi, rcx, elem_vn],
        ctx.addr,
    ));

    // Post-loop: RCX = 0
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rcx,
        smallvec![Varnode::constant(0, 8)],
        ctx.addr,
    ));
}

/// Lift a REP STOS{B,W,D,Q} instruction.
///
/// Emits:
///   Callother(tag=MEMSET, dst=RDI, val=AL/AX/EAX/RAX, count=RCX, elem_size)
///   RCX = 0
pub fn lift_rep_stos(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let elem = element_size(insn.mnemonic()).unwrap_or(1);
    let rdi = Varnode::reg(RDI, 8);
    let rcx = Varnode::reg(RCX, 8);
    let val = Varnode::reg(RAX, elem);

    let tag = Varnode::constant(TAG_MEMSET, 8);
    let elem_vn = Varnode::constant(elem as u64, 8);

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag, rdi, val, rcx, elem_vn],
        ctx.addr,
    ));

    // Post-loop: RCX = 0
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rcx,
        smallvec![Varnode::constant(0, 8)],
        ctx.addr,
    ));
}

/// Lift a REPE/REPNE CMPS{B,W,D,Q} instruction.
///
/// Emits:
///   result = Callother(tag=MEMCMP, a=RSI, b=RDI, count=RCX, elem_size)
///   ZF = result  (0 = equal, 1 = not equal — simplified model)
///   RCX = 0
pub fn lift_rep_cmps(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let elem = element_size(insn.mnemonic()).unwrap_or(1);
    let rdi = Varnode::reg(RDI, 8);
    let rsi = Varnode::reg(RSI, 8);
    let rcx = Varnode::reg(RCX, 8);

    let tag = Varnode::constant(TAG_MEMCMP, 8);
    let elem_vn = Varnode::constant(elem as u64, 8);

    // Callother produces a 1-byte result into a unique temp.
    let result = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        result,
        smallvec![tag, rsi, rdi, rcx, elem_vn],
        ctx.addr,
    ));

    // Write result → ZF (simplified: 1 = equal, 0 = not equal).
    let zf = Varnode::reg(ZF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        zf,
        smallvec![result],
        ctx.addr,
    ));

    // Post-loop: RCX = 0
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rcx,
        smallvec![Varnode::constant(0, 8)],
        ctx.addr,
    ));
}

/// Dispatch entry point: returns `true` if the instruction was handled as a
/// REP-prefixed string operation.
pub fn try_lift_rep_string(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) -> bool {
    let mn = insn.mnemonic();

    if insn.has_rep_prefix() && is_movs(mn) {
        lift_rep_movs(ctx, insn);
        return true;
    }

    if insn.has_rep_prefix() && is_stos(mn) {
        lift_rep_stos(ctx, insn);
        return true;
    }

    if (insn.has_repe_prefix() || insn.has_repne_prefix()) && is_cmps(mn) {
        lift_rep_cmps(ctx, insn);
        return true;
    }

    false
}
