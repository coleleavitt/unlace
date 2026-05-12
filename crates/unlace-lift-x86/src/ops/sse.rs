//! SSE2 data-movement and packed-integer arithmetic → Callother IR.
//!
//! Callother encoding: `inputs[0]` is a constant tag from [`tag`].
//! The intrinsic C name is recoverable via
//! [`IntrinsicRegistry`](crate::intrinsics::IntrinsicRegistry).

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::iced_reg_to_varnode;

/// Constant tags for SSE Callother `inputs[0]`.
///
/// Range `0x100..0x1FF` — string ops use `0x1..0xF`.
pub mod tag {
    pub const MOVDQA: u64 = 0x100;
    pub const MOVDQU: u64 = 0x101;
    pub const MOVAPS: u64 = 0x102;
    pub const MOVUPS: u64 = 0x103;
    pub const MOVSD: u64 = 0x104;

    pub const PADDB: u64 = 0x110;
    pub const PADDW: u64 = 0x111;
    pub const PADDD: u64 = 0x112;
    pub const PADDQ: u64 = 0x113;

    pub const PSUBB: u64 = 0x118;
    pub const PSUBW: u64 = 0x119;
    pub const PSUBD: u64 = 0x11A;
    pub const PSUBQ: u64 = 0x11B;

    pub const PAND: u64 = 0x120;
    pub const POR: u64 = 0x121;
    pub const PXOR: u64 = 0x122;

    pub const PMULLD: u64 = 0x123;
    /// SSE2 unsigned 32×32→64 multiply of the low dword of each 64-bit lane.
    pub const PMULUDQ: u64 = 0x127;

    pub const PCMPEQB: u64 = 0x124;
    pub const PCMPEQW: u64 = 0x125;
    pub const PCMPEQD: u64 = 0x126;

    pub const ADDPS: u64 = 0x130;
    pub const SUBPS: u64 = 0x131;
    pub const MULPS: u64 = 0x132;
    pub const DIVPS: u64 = 0x133;
    pub const MINPS: u64 = 0x134;
    pub const MAXPS: u64 = 0x135;
    pub const SQRTPS: u64 = 0x136;

    pub const PSHUFD: u64 = 0x140;
    pub const PSHUFB: u64 = 0x141;
    pub const PUNPCKLBW: u64 = 0x142;

    // ── SSSE3 packed integer ops (t174) ─────────────────────────
    /// SSSE3 packed horizontal add, 16-bit lanes.
    pub const PHADDW: u64 = 0x180;
    /// SSSE3 packed horizontal add, 32-bit lanes.
    pub const PHADDD: u64 = 0x181;
    /// SSSE3 packed horizontal sub, 16-bit lanes.
    pub const PHSUBW: u64 = 0x182;
    /// SSSE3 packed horizontal sub, 32-bit lanes.
    pub const PHSUBD: u64 = 0x183;
    /// SSSE3 packed align right (3-operand: dst, src, imm8).
    pub const PALIGNR: u64 = 0x184;
    /// SSSE3 packed multiply-add of unsigned bytes by signed bytes,
    /// summing adjacent pairs to 16-bit lanes.
    pub const PMADDUBSW: u64 = 0x185;
    /// SSSE3 packed sign of bytes (negate / zero / keep per src2 sign).
    pub const PSIGNB: u64 = 0x186;
    /// SSSE3 packed sign of 16-bit lanes.
    pub const PSIGNW: u64 = 0x187;
    /// SSSE3 packed sign of 32-bit lanes.
    pub const PSIGND: u64 = 0x188;

    pub const PMOVMSKB: u64 = 0x150;

    pub const PACKSSWB: u64 = 0x160;
    pub const PACKUSWB: u64 = 0x161;

    pub const BLENDPS: u64 = 0x170;
    pub const PBLENDVB: u64 = 0x171;

    // ── SSE4.1 / SSE4.2 packed ops (t185) ───────────────────────
    //
    // Fresh tag range 0x190..0x1BF, chosen to leave room above the
    // existing SSE/SSSE3 block (which stops at PBLENDVB=0x171 with
    // SSSE3 living at 0x180..0x188).
    //
    /// SSE4.1 packed compare-equal, 64-bit lanes.
    pub const PCMPEQQ: u64 = 0x190;
    /// SSE4.1 zero-extending widening converts (PMOVZXBW/BD/BQ/WD/WQ/DQ).
    pub const PMOVZXBW: u64 = 0x191;
    pub const PMOVZXBD: u64 = 0x192;
    pub const PMOVZXBQ: u64 = 0x193;
    pub const PMOVZXWD: u64 = 0x194;
    pub const PMOVZXWQ: u64 = 0x195;
    pub const PMOVZXDQ: u64 = 0x196;
    /// SSE4.1 sign-extending widening converts (PMOVSXBW/BD/BQ/WD/WQ/DQ).
    pub const PMOVSXBW: u64 = 0x197;
    pub const PMOVSXBD: u64 = 0x198;
    pub const PMOVSXBQ: u64 = 0x199;
    pub const PMOVSXWD: u64 = 0x19A;
    pub const PMOVSXWQ: u64 = 0x19B;
    pub const PMOVSXDQ: u64 = 0x19C;
    /// SSE4.1 signed 32×32→64 multiply of the low dword of each 64-bit lane.
    pub const PMULDQ: u64 = 0x19D;
    /// SSE4.1 packed 32-bit min/max.
    pub const PMINSD: u64 = 0x19E;
    pub const PMINUD: u64 = 0x19F;
    pub const PMAXSD: u64 = 0x1A0;
    pub const PMAXUD: u64 = 0x1A1;
    /// SSE4.1 lane insert (3-operand: dst, src, imm8).
    pub const PINSRB: u64 = 0x1A2;
    pub const PINSRW: u64 = 0x1A3;
    pub const PINSRD: u64 = 0x1A4;
    pub const PINSRQ: u64 = 0x1A5;
    /// SSE4.1 lane extract (3-operand: dst, xmm, imm8).
    pub const PEXTRB: u64 = 0x1A6;
    pub const PEXTRW: u64 = 0x1A7;
    pub const PEXTRD: u64 = 0x1A8;
    pub const PEXTRQ: u64 = 0x1A9;
    /// SSE4.2 packed string compare → ECX/flags (3-operand: xmm1, xmm2, imm8).
    pub const PCMPESTRI: u64 = 0x1AA;
    pub const PCMPISTRI: u64 = 0x1AB;

    // ── AVX/AVX2 packed integer ops (t192) ──────────────────────
    //
    // Fresh tag range 0x1C0..0x1DF — the SSE block ends at 0x1AB
    // (PCMPISTRI), leaving 0x1AC..0x1BF reserved for future SSE4
    // additions. Every AVX entry writes a 32-byte YMM destination,
    // distinguishing it at the IR level from the 16-byte SSE forms.
    /// VPADDD — packed add, 32-bit lanes (256-bit).
    pub const VPADDD: u64 = 0x1C0;
    /// VPSUBD — packed sub, 32-bit lanes (256-bit).
    pub const VPSUBD: u64 = 0x1C1;
    /// VPMULLD — packed signed 32×32→low-32 multiply (256-bit).
    pub const VPMULLD: u64 = 0x1C2;
    /// VPSHUFB — per-lane byte shuffle (256-bit, in-lane).
    pub const VPSHUFB: u64 = 0x1C3;
    /// VPBLENDD — packed 32-bit lane blend by imm8 mask (3-operand).
    pub const VPBLENDD: u64 = 0x1C4;
    /// VPERMD — cross-lane 32-bit dword permute (256-bit).
    pub const VPERMD: u64 = 0x1C5;
    /// VPAND — packed bitwise AND (256-bit).
    pub const VPAND: u64 = 0x1C6;
    /// VPOR — packed bitwise OR (256-bit).
    pub const VPOR: u64 = 0x1C7;
    /// VPXOR — packed bitwise XOR (256-bit).
    pub const VPXOR: u64 = 0x1C8;

    // ── AVX-512 EVEX packed integer ops (t205) ──────────────────
    //
    // Tag range 0x1D0..0x1EF — strictly above the AVX/AVX2 block
    // (0x1C0..0x1C8) so the recoverer can tell at-a-glance whether a
    // Callother carries a 256-bit (YMM) or 512-bit (ZMM) destination.
    // Every EVEX entry writes a 64-byte ZMM register; the legacy SSE
    // (16-byte) and VEX-AVX (32-byte) forms keep their existing tags.
    /// VPADDQ (EVEX/ZMM form) — packed add, 64-bit lanes (512-bit).
    pub const VPADDQ_512: u64 = 0x1D0;
    /// VPSUBQ (EVEX/ZMM form) — packed sub, 64-bit lanes (512-bit).
    pub const VPSUBQ_512: u64 = 0x1D1;
    /// VPMULLQ (EVEX/ZMM form) — packed signed 64×64→low-64 multiply (512-bit).
    pub const VPMULLQ_512: u64 = 0x1D2;

    // ── t306: generic AVX-512 EVEX fallback ─────────────────────
    // Covers the broad AVX-512 EVEX surface that does not yet have a
    // mnemonic-specific semantic tag. The instruction mnemonic is carried
    // as an immediate operand so downstream passes can still recover the
    // exact operation while preserving def-use for ZMM/YMM/XMM/K/GP args.
    pub const AVX512_EVEX: u64 = 0x1F0;
}

/// Operand-index flavor for generic EVEX Callother lowering.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EvexOperandRole {
    /// Operand is read.
    Read,
    /// Operand is written.
    Write,
    /// Operand is both read and written (merge-masked destinations).
    ReadWrite,
}

fn reg_operand_varnode(insn: &iced_x86::Instruction, idx: u32) -> Option<Varnode> {
    use iced_x86::OpKind;

    if insn.op_kind(idx) != OpKind::Register {
        return None;
    }
    let (offset, size) = iced_reg_to_varnode(insn.op_register(idx))?;
    Some(Varnode::new(SpaceId::Register, offset, size))
}

fn mask_varnode(insn: &iced_x86::Instruction) -> Option<Varnode> {
    use iced_x86::Register;

    let mask = insn.op_mask();
    if mask == Register::None {
        return None;
    }
    let (offset, size) = iced_reg_to_varnode(mask)?;
    Some(Varnode::new(SpaceId::Register, offset, size))
}

/// Generic AVX-512 EVEX lifter.
///
/// AVX-512 has a very large EVEX-encoded instruction surface. Instead of
/// letting unsupported EVEX instructions collapse to `Unimplemented`, this
/// fallback emits a well-formed Callother with:
///
/// ```text
/// dst = Callother(AVX512_EVEX, mnemonic_id, flags, src...)
/// ```
///
/// where `mnemonic_id` is iced-x86's stable enum discriminant for the exact
/// mnemonic and `flags` records broadcast / opmask / zeroing / SAE metadata.
/// The explicit operands are then copied through as source varnodes according
/// to `roles`, and an opmask register is appended when present. This preserves
/// instruction length, exact mnemonic identity, vector/mask def-use, and the
/// 64-byte ZMM destination sizing needed by SSA and the printer.
pub fn lift_avx512_evex(
    ctx: &mut LiftCtx,
    insn: &iced_x86::Instruction,
    roles: &[EvexOperandRole],
) {
    const FLAG_BROADCAST: u64 = 1 << 0;
    const FLAG_ZEROING: u64 = 1 << 1;
    const FLAG_HAS_MASK: u64 = 1 << 2;
    const FLAG_SAE: u64 = 1 << 3;
    const FLAG_ROUND_SHIFT: u64 = 8;

    let mut flags = 0u64;
    if insn.is_broadcast() {
        flags |= FLAG_BROADCAST;
    }
    if insn.zeroing_masking() {
        flags |= FLAG_ZEROING;
    }
    if insn.has_op_mask() {
        flags |= FLAG_HAS_MASK;
    }
    if insn.suppress_all_exceptions() {
        flags |= FLAG_SAE;
    }
    flags |= (insn.rounding_control() as u64) << FLAG_ROUND_SHIFT;

    let tag_vn = Varnode::constant(tag::AVX512_EVEX, 8);
    let mnemonic_vn = Varnode::constant(insn.mnemonic() as u64, 4);
    let flags_vn = Varnode::constant(flags, 8);

    let mut inputs = smallvec![tag_vn, mnemonic_vn, flags_vn];
    let mut output = None;

    let count = insn.op_count() as usize;
    for idx in 0..count {
        let role = roles.get(idx).copied().unwrap_or(EvexOperandRole::Read);
        match role {
            EvexOperandRole::Read => {
                let Some(src) = ctx.operand_read(insn, idx as u32) else {
                    ctx.emit_unimplemented();
                    return;
                };
                inputs.push(src);
            }
            EvexOperandRole::Write => {
                if output.is_some() {
                    // Secondary explicit write (eg. two-register intersections)
                    // is represented as an address-like operand so the exact
                    // side-effect is still visible to downstream consumers.
                    let Some(dst) = reg_operand_varnode(insn, idx as u32)
                        .or_else(|| ctx.operand_write(insn, idx as u32))
                    else {
                        ctx.emit_unimplemented();
                        return;
                    };
                    inputs.push(dst);
                } else {
                    let Some(dst) = ctx.operand_write(insn, idx as u32) else {
                        ctx.emit_unimplemented();
                        return;
                    };
                    output = Some(dst);
                }
            }
            EvexOperandRole::ReadWrite => {
                let Some(src) = ctx.operand_read(insn, idx as u32) else {
                    ctx.emit_unimplemented();
                    return;
                };
                inputs.push(src);
                if output.is_none() {
                    let Some(dst) = ctx.operand_write(insn, idx as u32) else {
                        ctx.emit_unimplemented();
                        return;
                    };
                    output = Some(dst);
                }
            }
        }
    }

    if let Some(mask) = mask_varnode(insn) {
        inputs.push(mask);
    }

    if let Some(dst) = output {
        ctx.emit(IrInsn::with_output(IrOp::Callother, dst, inputs, ctx.addr));
    } else {
        ctx.emit(IrInsn::without_output(IrOp::Callother, inputs, ctx.addr));
    }
}

/// Returns `true` iff operand 0 of `insn` is a ZMM register \u2014 the
/// signal that an instruction is in its 512-bit EVEX form rather than
/// the otherwise-identical VEX/256-bit form.
///
/// Used to pick the AVX-512 Callother tag for instructions whose iced
/// mnemonic is shared across widths (`Vpaddq`, `Vpsubq`).
pub fn is_zmm_dst(insn: &iced_x86::Instruction) -> bool {
    use iced_x86::Register as R;
    let dst = insn.op_register(0);
    (R::ZMM0..=R::ZMM31).contains(&dst)
}

/// MOVDQA / MOVDQU: store form emits without output, load/reg form with output.
pub fn lift_sse_mov(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    use iced_x86::OpKind;

    let tag_vn = Varnode::constant(callother_tag, 8);

    if insn.op_kind(0) == OpKind::Memory {
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(src) = ctx.operand_read(insn, 1) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag_vn, dst_addr, src],
            ctx.addr,
        ));
        return;
    }

    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src],
        ctx.addr,
    ));
}

/// Two-operand packed SSE: `dest = Callother(tag, src0, src1)`.
pub fn lift_sse_binop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1],
        ctx.addr,
    ));
}

/// Single-source packed SSE (e.g. SQRTPS, PMOVMSKB): `dst = Callother(tag, src)`.
///
/// The destination is operand 0 (which may be a GP register for movemask) and
/// the only input is operand 1.
pub fn lift_sse_unop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src],
        ctx.addr,
    ));
}

/// Three-operand SSE4.1 blend (BLENDPS, PBLENDVB): `dst = Callother(tag, a, b, mask)`.
///
/// BLENDPS uses an immediate mask in operand 2; BLENDVPS/PBLENDVB use the
/// implicit XMM0 register as the mask. Both reach the IR as
/// `(tag, src0, src1, mask)`.
pub fn lift_sse_blend(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let mask = ctx
        .operand_read(insn, 2)
        .unwrap_or_else(|| Varnode::constant(0, 1));
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1, mask],
        ctx.addr,
    ));
}

/// SSE4.1 lane extract (PEXTRB/W/D/Q): `dst = Callother(tag, xmm, imm)`.
///
/// Shape: op0 is a write-only small GP (or mem) operand, op1 is the
/// source XMM, op2 is the imm8 lane selector. Unlike the insert and
/// blend forms, op0 must *not* be read first — it's pure destination.
pub fn lift_sse_extract(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    use iced_x86::OpKind;

    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let imm = ctx
        .operand_read(insn, 2)
        .unwrap_or_else(|| Varnode::constant(0, 1));

    if insn.op_kind(0) == OpKind::Memory {
        // PEXTRB/W/D/Q to memory: emit a Callother into a fresh temp
        // varnode sized to the lane, then store at the destination
        // address.
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag_vn, dst_addr, src, imm],
            ctx.addr,
        ));
        return;
    }

    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src, imm],
        ctx.addr,
    ));
}

/// SSE4.2 packed string compare (PCMPESTRI / PCMPISTRI):
/// `Callother(tag, xmm1, xmm2, imm)` *without* an IR output.
///
/// PCMPESTRI/PCMPISTRI write their index into ECX implicitly and set
/// flags; we record only the explicit operand shape here. The recoverer
/// reads ECX and the flags through later uses to reconstruct the
/// intrinsic call site.
pub fn lift_sse_string_compare(
    ctx: &mut LiftCtx,
    insn: &iced_x86::Instruction,
    callother_tag: u64,
) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let imm = ctx
        .operand_read(insn, 2)
        .unwrap_or_else(|| Varnode::constant(0, 1));

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn, src0, src1, imm],
        ctx.addr,
    ));
}

/// Three-operand AVX/AVX2 packed binop with VEX layout:
/// `dst = Callother(tag, src1, src2)` where op0 is a write-only YMM
/// destination, op1/op2 are the two source YMM registers.
///
/// Unlike the legacy SSE form (`lift_sse_binop`) which reads op0 as
/// src0, VEX-encoded AVX2 ops are non-destructive: op0 is purely the
/// destination, leaving op1 and op2 untouched on the source side. The
/// register-file layout already places YMM0..YMM15 at the same base
/// offsets as XMM0..XMM15 with `size=32`, so a 32-byte write naturally
/// clobbers the matching XMM alias — the SSA dataflow will see a fresh
/// YMM definition that subsumes any pre-existing XMM value at the same
/// base offset.
pub fn lift_avx_binop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 2) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1],
        ctx.addr,
    ));
}

/// Four-operand AVX2 blend (VPBLENDD): VEX layout with an immediate
/// mask. Lowered as `dst = Callother(tag, src1, src2, imm8)`.
///
/// Mirrors `lift_avx_binop` but pulls a third source from op3 (the
/// imm8 mask). Falls back to a zero-mask constant when iced can't
/// decode the operand kind, so a malformed encoding still produces a
/// well-formed Callother.
pub fn lift_avx_blend(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 2) else {
        ctx.emit_unimplemented();
        return;
    };
    let mask = ctx
        .operand_read(insn, 3)
        .unwrap_or_else(|| Varnode::constant(0, 1));
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1, mask],
        ctx.addr,
    ));
}

/// MOVSD (scalar double): 8-byte move in the low half of an XMM register.
///
/// Unlike the 16-byte MOVDQA/MOVUPS family, MOVSD operates on only 8 bytes.
/// We emit a Callother with `tag::MOVSD` so the semantics are recoverable.
pub fn lift_sse_mov_scalar(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    use iced_x86::OpKind;

    let tag_vn = Varnode::constant(callother_tag, 8);

    if insn.op_kind(0) == OpKind::Memory {
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(src) = ctx.operand_read(insn, 1) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag_vn, dst_addr, src],
            ctx.addr,
        ));
        return;
    }

    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src],
        ctx.addr,
    ));
}
