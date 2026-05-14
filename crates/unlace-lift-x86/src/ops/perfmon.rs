//! x86 performance-monitor counter instructions.
//!
//! `RDPMC` reads a hardware performance-monitor counter selected by ECX
//! and returns the 64-bit value split across EDX:EAX. We model this as a
//! side-effecting `Callother(RDPMC, ecx)` plus explicit register writes so
//! later stages can preserve both the architectural dataflow and a readable
//! intrinsic-style name.

//! TODO(t312): PMC dispatch staging — `lift_rdpmc` exists in both
//! `perfctr` and `perfmon` (different output shapes); resolve before wiring.
#![allow(dead_code)]

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{RAX, RCX, RDX};

/// Callother tag for the x86 `RDPMC` instruction.
///
/// Chosen from the currently-unused x86 special-instruction range next to
/// trap / pseudo-intrinsic tags so the output layer can render it as a named
/// helper rather than a raw `CALLOTHER` comment.
pub const RDPMC_CALLOTHER_TAG: u64 = 0x351;

/// Lift `RDPMC` as:
///
/// ```text
/// tmp64 = Callother(RDPMC, ECX)
/// EAX = SUBPIECE(tmp64, 0)
/// EDX = SUBPIECE(tmp64, 4)
/// ```
///
/// This keeps the counter-select register (`ECX`) explicit and preserves the
/// split-result architectural convention visible to downstream SSA / printers.
pub fn lift_rdpmc(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let ecx = Varnode::new(unlace_ir::SpaceId::Register, RCX, 4);
    let eax = Varnode::new(unlace_ir::SpaceId::Register, RAX, 4);
    let edx = Varnode::new(unlace_ir::SpaceId::Register, RDX, 4);

    let result64 = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        result64,
        smallvec![Varnode::constant(RDPMC_CALLOTHER_TAG, 8), ecx],
        ctx.addr,
    ));

    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        eax,
        smallvec![result64, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        edx,
        smallvec![result64, Varnode::constant(4, 1)],
        ctx.addr,
    ));
}
