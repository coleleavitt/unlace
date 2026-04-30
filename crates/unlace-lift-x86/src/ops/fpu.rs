//! x87 FPU floating-point operations → Callother IR.
//!
//! x87 is a stack-based FPU with eight registers `ST(0)..ST(7)`. The full stack
//! model (push/pop, top-of-stack pointer in C1/C0/C2/C3 control word, tag word)
//! is far too complex to model directly in the IR at this stage. Instead we
//! emit each FPU instruction as a [`Callother`](unlace_ir::IrOp::Callother)
//! with a tag drawn from [`fpu_tag`] and let downstream consumers render
//! something user-friendly such as `__fld(addr)` or `__fadd(st0, st1)`.
//!
//! Tag range: `0x310..0x320` — `0x300` is taken by `bit_tag::TRAP` and
//! `0x301..0x30F` is reserved for future trap/CPUID-style intrinsics.
//!
//! ST(i) registers reach this module via [`crate::register_file::st_reg`].

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::st_reg;

/// Constant tags for x87 FPU Callother `inputs[0]`.
///
/// Values chosen to sit above `bit_tag::TRAP` (`0x300`) and well below the
/// vector register base (`0x400`).
pub mod fpu_tag {
    /// `FLD m32fp/m64fp/m80fp/ST(i)` — push float onto FPU stack.
    pub const FLD: u64 = 0x310;
    /// `FSTP m/ST(i)` — store ST(0) and pop.
    pub const FSTP: u64 = 0x311;
    /// `FADD/FADDP` — addition.
    pub const FADD: u64 = 0x312;
    /// `FSUB/FSUBP/FSUBR/FSUBRP` — subtraction (reverse forms set `inputs[0]`
    /// to `FSUB` but swap operand order at emit time).
    pub const FSUB: u64 = 0x313;
    /// `FMUL/FMULP` — multiplication.
    pub const FMUL: u64 = 0x314;
    /// `FDIV/FDIVP/FDIVR/FDIVRP` — division (reverse forms swap operand order).
    pub const FDIV: u64 = 0x315;
    /// `FCOM/FCOMP/FCOMPP/FUCOM*` — compare ST(0) with operand.
    pub const FCOM: u64 = 0x316;
    /// `FXCH` — exchange ST(0) with ST(i).
    pub const FXCH: u64 = 0x317;
    /// `FST` — store ST(0) to memory/ST(i) without pop.
    pub const FST: u64 = 0x318;
}

/// Read an x87 source operand. Returns either the memory load varnode or the
/// ST(i) register varnode. Falls back to `Unimplemented` semantics by way of
/// `None` when the operand kind is unexpected.
fn read_st_or_mem(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, idx: u32) -> Option<Varnode> {
    use iced_x86::OpKind;
    use iced_x86::Register as R;

    match insn.op_kind(idx) {
        OpKind::Register => {
            let reg = insn.op_register(idx);
            if (R::ST0..=R::ST7).contains(&reg) {
                let i = (reg as u32 - R::ST0 as u32) as u64;
                Some(st_reg(i))
            } else {
                None
            }
        }
        OpKind::Memory => ctx.operand_read(insn, idx),
        _ => None,
    }
}

/// Write destination for an x87 operation. For memory operands we return the
/// computed memory address (so the caller can `Store`); for register operands
/// we return the ST(i) varnode.
enum FpuDst {
    /// Register destination — emit a `Copy`/`Callother` with this as output.
    Register(Varnode),
    /// Memory destination — emit a `Store` to this address.
    Memory(Varnode),
}

fn write_st_or_mem(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, idx: u32) -> Option<FpuDst> {
    use iced_x86::OpKind;
    use iced_x86::Register as R;

    match insn.op_kind(idx) {
        OpKind::Register => {
            let reg = insn.op_register(idx);
            if (R::ST0..=R::ST7).contains(&reg) {
                let i = (reg as u32 - R::ST0 as u32) as u64;
                Some(FpuDst::Register(st_reg(i)))
            } else {
                None
            }
        }
        OpKind::Memory => ctx.memory_address(insn).map(FpuDst::Memory),
        _ => None,
    }
}

/// `FLD src` → `ST(0) = Callother(FLD, src)`.
///
/// Operand 0 is the source (memory or ST(i)). Result lands in ST(0). When the
/// source kind is unrecognised we fall back to `Unimplemented`.
pub fn lift_fld(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag = Varnode::constant(fpu_tag::FLD, 8);
    let Some(src) = read_st_or_mem(ctx, insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let dst = st_reg(0);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag, src],
        ctx.addr,
    ));
}

/// `FST dst` (no pop) → emit `Callother(FST, dst, ST(0))`.
///
/// For memory destinations we emit a `Store`; for register destinations we
/// emit a `Copy`. ST(0) is always the source.
pub fn lift_fst(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag = Varnode::constant(fpu_tag::FST, 8);
    let src = st_reg(0);

    match write_st_or_mem(ctx, insn, 0) {
        Some(FpuDst::Memory(addr)) => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, addr, src],
                ctx.addr,
            ));
        }
        Some(FpuDst::Register(dst)) => {
            ctx.emit(IrInsn::with_output(
                IrOp::Callother,
                dst,
                smallvec![tag, src],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

/// `FSTP dst` (with pop) → same as FST but tagged FSTP so consumers can model
/// the implicit ST(0)→pop. The IR does not yet model the FPU stack pointer;
/// the tag preserves the semantic distinction.
pub fn lift_fstp(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag = Varnode::constant(fpu_tag::FSTP, 8);
    let src = st_reg(0);

    match write_st_or_mem(ctx, insn, 0) {
        Some(FpuDst::Memory(addr)) => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, addr, src],
                ctx.addr,
            ));
        }
        Some(FpuDst::Register(dst)) => {
            ctx.emit(IrInsn::with_output(
                IrOp::Callother,
                dst,
                smallvec![tag, src],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

/// Lift an x87 binary operation (`FADD`, `FSUB`, `FMUL`, `FDIV` and pop/reverse
/// variants) into a Callother.
///
/// Forms accepted by iced for these mnemonics:
/// * Zero-operand `FADDP`/`FSUBP`/...: implicit `ST(1) = ST(1) op ST(0)` then
///   pop. We emit `ST(1) = Callother(tag, ST(1), ST(0))`.
/// * One-operand `FADD m`: `ST(0) = ST(0) op m`.
/// * Two-operand `FADD ST(0), ST(i)` / `FADD ST(i), ST(0)`: regular form.
///
/// `swap_operands` is `true` for the *reverse* variants (`FSUBR`, `FSUBRP`,
/// `FDIVR`, `FDIVRP`) so callers can use a single tag (`FSUB`/`FDIV`) and let
/// the operand order encode the direction.
pub fn lift_fpu_binop(
    ctx: &mut LiftCtx,
    insn: &iced_x86::Instruction,
    callother_tag: u64,
    swap_operands: bool,
) {
    let tag = Varnode::constant(callother_tag, 8);

    let (dst, lhs, rhs) = match insn.op_count() {
        0 => {
            // Implicit FADDP/FSUBP/etc.: dst = ST(1), lhs = ST(1), rhs = ST(0).
            (FpuDst::Register(st_reg(1)), st_reg(1), st_reg(0))
        }
        1 => {
            // `FADD m32fp` form: dst = ST(0), lhs = ST(0), rhs = memory.
            let Some(rhs) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            (FpuDst::Register(st_reg(0)), st_reg(0), rhs)
        }
        _ => {
            // Two-operand: dst = op0, lhs = op0, rhs = op1.
            let Some(dst) = write_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            let Some(lhs) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            let Some(rhs) = read_st_or_mem(ctx, insn, 1) else {
                ctx.emit_unimplemented();
                return;
            };
            (dst, lhs, rhs)
        }
    };

    let (a, b) = if swap_operands { (rhs, lhs) } else { (lhs, rhs) };

    match dst {
        FpuDst::Register(dst_vn) => {
            ctx.emit(IrInsn::with_output(
                IrOp::Callother,
                dst_vn,
                smallvec![tag, a, b],
                ctx.addr,
            ));
        }
        FpuDst::Memory(addr) => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, addr, a, b],
                ctx.addr,
            ));
        }
    }
}

/// `FCOM/FCOMP/FCOMPP/FUCOM*` — compare ST(0) with operand and update FPU
/// status flags (modelled implicitly via the Callother output).
///
/// We emit the tagged Callother but do not yet propagate to the host's CF/PF/ZF
/// (`FCOMI` would do that). Variants with implicit operands (`FCOMPP`,
/// `FCOMP` zero-arg) compare against ST(1).
pub fn lift_fcom(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag = Varnode::constant(fpu_tag::FCOM, 8);
    let lhs = st_reg(0);

    let rhs = match insn.op_count() {
        0 => st_reg(1),
        _ => {
            let Some(r) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            r
        }
    };

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag, lhs, rhs],
        ctx.addr,
    ));
}

/// `FXCH ST(i)` — swap ST(0) with ST(i).
///
/// With no explicit operand iced reports a single ST(1) operand; we just pass
/// it through. The swap is encoded as a single Callother — modelling it as two
/// sequential Copies via a temp would be misleading because the IR does not
/// know about the FPU register naming aliasing.
pub fn lift_fxch(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag = Varnode::constant(fpu_tag::FXCH, 8);

    let other = match insn.op_count() {
        0 => st_reg(1),
        _ => {
            let Some(r) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            r
        }
    };

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag, st_reg(0), other],
        ctx.addr,
    ));
}
