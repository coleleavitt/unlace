//! x86 performance-monitoring counter instruction lifting → Callother IR
//! (t312).
//!
//! `RDPMC` reads the performance-monitoring counter selected by `ECX` into
//! `EDX:EAX`.  The value is implementation-defined and privilege/configuration
//! sensitive, so the lifter preserves the instruction as an annotated
//! `Callother` rather than pretending it is ordinary arithmetic.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{RAX, RCX};

/// Constant tags carried as `inputs[0]` of PMC-related Callother ops.
pub mod tag {
    /// RDPMC — read performance-monitor counter (`ECX` selects counter).
    pub const RDPMC: u64 = 0x1F0;
}

/// RDPMC — `EDX:EAX ← PMC[ECX]`.
///
/// The 64-bit counter result is represented as one RAX-family 8-byte output,
/// matching the project's existing convention for implicit `EDX:EAX` pairs.
/// `ECX` remains an explicit input so downstream analysis and output can show
/// which counter selector was used.
pub fn lift_rdpmc(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::RDPMC, 8);
    let ecx = Varnode::new(SpaceId::Register, RCX, 4);
    let rax = Varnode::new(SpaceId::Register, RAX, 8);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        rax,
        smallvec![tag_vn, ecx],
        ctx.addr,
    ));
}
