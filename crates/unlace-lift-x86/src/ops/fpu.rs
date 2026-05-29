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
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

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

    // ── Pop-variant x87 tags (0x360..0x36F) ─────────────────────────────
    //
    // These distinguish the stack-*popping* x87 forms from their non-popping
    // siblings, which is information the post-lift x87 TOP-tracking pass
    // (`unlace-passes::x87_top`) needs to model the rotating register stack:
    // `FADD` and `FADDP` are otherwise lifted to identical Callother shapes,
    // yet only `FADDP` advances TOP. The base-arithmetic tags above stay
    // reserved for the non-popping forms.

    /// `FADDP` — add then pop.
    pub const FADDP: u64 = 0x360;
    /// `FSUBP` — subtract then pop.
    pub const FSUBP: u64 = 0x361;
    /// `FSUBRP` — reverse-subtract then pop (operands swapped at emit time).
    pub const FSUBRP: u64 = 0x362;
    /// `FMULP` — multiply then pop.
    pub const FMULP: u64 = 0x363;
    /// `FDIVP` — divide then pop.
    pub const FDIVP: u64 = 0x364;
    /// `FDIVRP` — reverse-divide then pop (operands swapped at emit time).
    pub const FDIVRP: u64 = 0x365;
    /// `FCOMP`/`FUCOMP`/`FCOMIP` — compare then pop once.
    pub const FCOMP: u64 = 0x366;
    /// `FCOMPP`/`FUCOMPP` — compare then pop twice.
    pub const FCOMPP: u64 = 0x367;
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
///
/// `callother_tag` distinguishes popping forms (`FADDP`/`FMULP`/… use the
/// `0x36x` pop tags) from non-popping ones (`FADD`/`FMUL`/…), so the post-lift
/// x87 TOP-tracking pass can apply the right TOP delta from the tag alone.
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

    let (a, b) = if swap_operands {
        (rhs, lhs)
    } else {
        (lhs, rhs)
    };

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

/// `FCOM/FCOMP/FCOMPP/FUCOM*` — compare ST(0) with operand.
///
/// iced always exposes `FCOM ST1` as two operands `(ST0, ST1)`; the
/// zero-operand encoding (`FCOMPP`, `FUCOMPP`) implicitly compares ST(0)
/// against ST(1). We emit the tagged Callother without an output; downstream
/// passes can still recognise the comparison via the tag.
pub fn lift_fcom(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag = Varnode::constant(callother_tag, 8);

    let (lhs, rhs) = match insn.op_count() {
        0 => (st_reg(0), st_reg(1)),
        1 => {
            let Some(rhs) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            (st_reg(0), rhs)
        }
        _ => {
            let Some(lhs) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            let Some(rhs) = read_st_or_mem(ctx, insn, 1) else {
                ctx.emit_unimplemented();
                return;
            };
            (lhs, rhs)
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
/// iced reports both operands explicitly (op0=ST0, op1=ST(i)) so we use them
/// directly. The swap is encoded as a single Callother — modelling it as two
/// sequential Copies via a temp would be misleading because the IR does not
/// model the FPU stack pointer.
pub fn lift_fxch(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag = Varnode::constant(fpu_tag::FXCH, 8);

    let (a, b) = match insn.op_count() {
        0 => (st_reg(0), st_reg(1)),
        1 => {
            let Some(other) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            (st_reg(0), other)
        }
        _ => {
            let Some(a) = read_st_or_mem(ctx, insn, 0) else {
                ctx.emit_unimplemented();
                return;
            };
            let Some(b) = read_st_or_mem(ctx, insn, 1) else {
                ctx.emit_unimplemented();
                return;
            };
            (a, b)
        }
    };

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag, a, b],
        ctx.addr,
    ));
}

// ── SSE scalar float helpers (for addsd/subsd/mulsd/divsd etc.) ─────────

/// Lift a scalar SSE binary float op (addsd, subsd, mulsd, divsd, etc.)
/// directly to a proper IR FloatOp. `float_size` is 4 for single, 8 for double.
pub fn lift_sse_scalar_binop(
    ctx: &mut LiftCtx,
    insn: &iced_x86::Instruction,
    op: IrOp,
    float_size: u8,
) {
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };

    // Use a destination varnode sized to the float width (not the full XMM width).
    let out = Varnode::new(dst.space, dst.offset, float_size);
    let a = Varnode::new(src0.space, src0.offset, float_size);
    let b = if src1.space == SpaceId::Const {
        src1
    } else {
        Varnode::new(src1.space, src1.offset, float_size)
    };

    ctx.emit(IrInsn::with_output(op, out, smallvec![a, b], ctx.addr));
}

/// Lift a scalar SSE unary float op (sqrtsd, sqrtss, etc.).
pub fn lift_sse_scalar_unop(
    ctx: &mut LiftCtx,
    insn: &iced_x86::Instruction,
    op: IrOp,
    float_size: u8,
) {
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };

    let out = Varnode::new(dst.space, dst.offset, float_size);
    let a = if src.space == SpaceId::Const {
        src
    } else {
        Varnode::new(src.space, src.offset, float_size)
    };

    ctx.emit(IrInsn::with_output(op, out, smallvec![a], ctx.addr));
}

/// Lift cvtsi2sd / cvtsi2ss (integer → float conversion).
pub fn lift_int_to_float(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, float_size: u8) {
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };

    let out = Varnode::new(dst.space, dst.offset, float_size);
    ctx.emit(IrInsn::with_output(
        IrOp::FloatInt2float,
        out,
        smallvec![src],
        ctx.addr,
    ));
}

/// Lift cvttsd2si / cvttss2si (float → integer truncation).
pub fn lift_float_to_int(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::FloatTrunc,
        dst,
        smallvec![src],
        ctx.addr,
    ));
}

/// Lift ucomisd / ucomiss / comisd / comiss (scalar float compare → flags).
pub fn lift_sse_scalar_compare(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, float_size: u8) {
    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };

    let a = Varnode::new(src0.space, src0.offset, float_size);
    let b = if src1.space == SpaceId::Const {
        src1
    } else {
        Varnode::new(src1.space, src1.offset, float_size)
    };

    // Emit FloatLess for the ZF/CF flag effects — downstream passes can
    // interpret the flags. We use a 1-byte unique output for the comparison result.
    let cmp_out = Varnode::new(SpaceId::Unique, ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::FloatLess,
        cmp_out,
        smallvec![a, b],
        ctx.addr,
    ));
}
