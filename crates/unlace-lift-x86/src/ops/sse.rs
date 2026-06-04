//! SSE2 data-movement and packed-integer arithmetic → Callother IR.
//!
//! Callother encoding: `inputs[0]` is a constant tag from [`tag`].
//! The intrinsic C name is recoverable via
//! [`IntrinsicRegistry`](crate::intrinsics::IntrinsicRegistry).

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

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
    /// Generic vector op coverage tags for instructions that are semantically
    /// opaque today but should not surface as `Unimplemented` lifter holes.
    /// Keep this range away from the curated SSE/AVX, TSX, crypto, perf, and
    /// AMX tag blocks so generic fallbacks cannot alias real intrinsics.
    pub const MOVQ: u64 = 0x600;
    pub const VMOVDQU: u64 = 0x601;
    pub const VMOVDQU64: u64 = 0x602;
    pub const VPERMB: u64 = 0x603;
    pub const VGF2P8AFFINEQB: u64 = 0x604;
    pub const XORPS: u64 = 0x605;
    pub const MOVSS: u64 = 0x606;
    pub const KMOVQ: u64 = 0x607;
    pub const VPERMI2B: u64 = 0x608;
    pub const VZEROUPPER: u64 = 0x609;
    pub const PSLLD: u64 = 0x60A;
    pub const PSRLD: u64 = 0x60B;
    pub const VMOVNTDQ: u64 = 0x60C;
    pub const VPCMPEQB: u64 = 0x60D;
    pub const PSHUFLW: u64 = 0x60E;
    pub const VMOVDQA: u64 = 0x60F;
    pub const VPMOVMSKB: u64 = 0x610;
    pub const CVTSS2SD: u64 = 0x611;
    pub const VPORQ: u64 = 0x612;
    pub const PREFETCH: u64 = 0x613;
    pub const PSRLDQ: u64 = 0x614;
    pub const MOVD: u64 = 0x615;
    pub const PREFETCHT0: u64 = 0x616;
    pub const VPBROADCASTB: u64 = 0x617;
    pub const VPTEST: u64 = 0x618;
    pub const VPCOMPRESSQ: u64 = 0x619;
    pub const KMOVW: u64 = 0x61A;
    pub const MINSD: u64 = 0x61B;
    pub const PSHUFHW: u64 = 0x61C;
    pub const PSRLQ: u64 = 0x61D;
    pub const PUNPCKLDQ: u64 = 0x61E;
    pub const VPANDQ: u64 = 0x61F;
    pub const VPCMPUQ: u64 = 0x620;
    pub const VPOPCNTB: u64 = 0x621;
    pub const KMOVB: u64 = 0x622;
    pub const CVTSD2SS: u64 = 0x623;

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
    // Reserved generic EVEX fallback tag — referenced once broad AVX-512
    // fallback lowering lands. Keep inside the EVEX block and away from
    // bitwise::TRAP (0x300).
    #[allow(dead_code)]
    pub const AVX512_EVEX: u64 = 0x1EF;
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

/// MOVDQA / MOVDQU: store form emits a real store, load/reg form emits a copy.
pub fn lift_sse_mov(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, _callother_tag: u64) {
    use iced_x86::OpKind;

    if insn.op_kind(0) == OpKind::Memory {
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(src) = ctx.operand_read(insn, 1) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit_store(dst_addr, src);
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
    // Non-store SSE moves are pure data copies — lower to Copy.
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        dst,
        smallvec![src],
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

/// SSE shuffle with an immediate selector: `dest = Callother(tag, src, imm)`.
///
/// Unlike read-modify-write packed ops, PSHUFD reads operand 1 and the imm8
/// selector; operand 0 is write-only. Keeping the immediate in the IR is
/// required for executable vector helper rendering downstream.
pub fn lift_sse_shuffle_imm(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let imm = ctx
        .operand_read(insn, 2)
        .unwrap_or_else(|| Varnode::constant(0, 1));
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

/// PXOR / XORPS / XORPD with self-XOR detection.
///
/// `pxor xmm0, xmm0` is an idiom for zeroing a register — we lower it to
/// `Copy(0)` instead of emitting a Callother.
pub fn lift_sse_xor(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, _callother_tag: u64) {
    use iced_x86::OpKind;

    // Detect self-XOR idiom: both operands are the same register.
    if insn.op_kind(0) == OpKind::Register
        && insn.op_kind(1) == OpKind::Register
        && insn.op_register(0) == insn.op_register(1)
    {
        let Some(dst) = ctx.operand_write(insn, 0) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            dst,
            smallvec![Varnode::constant(0, dst.size)],
            ctx.addr,
        ));
        return;
    }

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
    let (xor_dst, zero_ext_reg) = ctx.prepare_zero_extending_vector_output(insn, 0, dst);
    let src0 = ctx.resize_value(src0, xor_dst.size);
    let src1 = ctx.resize_value(src1, xor_dst.size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntXor,
        xor_dst,
        smallvec![src0, src1],
        ctx.addr,
    ));
    ctx.finish_zero_extending_vector_output(zero_ext_reg, xor_dst);
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
    let (call_dst, partial_gpr_dst) = ctx.prepare_partial_gpr_output(insn, 0, dst);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        call_dst,
        smallvec![tag_vn, src, imm],
        ctx.addr,
    ));
    ctx.finish_partial_gpr_output(insn, 0, partial_gpr_dst, call_dst);
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

pub fn lift_vector_generic(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    use iced_x86::OpKind;

    if is_vector_move_tag(callother_tag) && insn.op_count() >= 2 {
        if insn.op_kind(0) == OpKind::Memory {
            let Some(dst_addr) = ctx.memory_address(insn) else {
                ctx.emit_unimplemented();
                return;
            };
            let Some(src) = ctx.operand_read(insn, 1) else {
                ctx.emit_unimplemented();
                return;
            };
            let store_size = insn.memory_size().size() as u8;
            let src = if store_size == 0 {
                src
            } else {
                ctx.resize_value(src, store_size)
            };
            ctx.emit_store(dst_addr, src);
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
        let (copy_dst, zero_ext_reg) = ctx.prepare_zero_extending_vector_output(insn, 0, dst);
        let (copy_dst, partial_gpr_dst) = ctx.prepare_partial_gpr_output(insn, 0, copy_dst);
        let src = ctx.resize_value(src, copy_dst.size);
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            copy_dst,
            smallvec![src],
            ctx.addr,
        ));
        ctx.finish_zero_extending_vector_output(zero_ext_reg, copy_dst);
        ctx.finish_partial_gpr_output(insn, 0, partial_gpr_dst, copy_dst);
        return;
    }

    let tag_vn = Varnode::constant(callother_tag, 8);
    let mut inputs = smallvec![tag_vn];

    if insn.op_kind(0) == OpKind::Memory {
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        inputs.push(dst_addr);
        for idx in 1..insn.op_count() {
            if let Some(src) = ctx.operand_read(insn, idx) {
                inputs.push(src);
            }
        }
        ctx.emit(IrInsn::without_output(IrOp::Callother, inputs, ctx.addr));
        return;
    }

    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    for idx in 1..insn.op_count() {
        if let Some(src) = ctx.operand_read(insn, idx) {
            inputs.push(src);
        }
    }
    let (call_dst, zero_ext_reg) = ctx.prepare_zero_extending_vector_output(insn, 0, dst);
    let (call_dst, partial_gpr_dst) = ctx.prepare_partial_gpr_output(insn, 0, call_dst);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        call_dst,
        inputs,
        ctx.addr,
    ));
    ctx.finish_zero_extending_vector_output(zero_ext_reg, call_dst);
    ctx.finish_partial_gpr_output(insn, 0, partial_gpr_dst, call_dst);
}

fn is_vector_move_tag(callother_tag: u64) -> bool {
    matches!(
        callother_tag,
        tag::MOVD
            | tag::MOVQ
            | tag::KMOVB
            | tag::KMOVQ
            | tag::KMOVW
            | tag::VMOVDQU
            | tag::VMOVDQU64
            | tag::VMOVNTDQ
            | tag::VMOVDQA
    )
}

pub fn lift_tag_only(ctx: &mut LiftCtx, callother_tag: u64) {
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![Varnode::constant(callother_tag, 8)],
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
/// iced's instruction-info layer marks VEX XMM/YMM writes as writes to
/// the full ZMM parent. We preserve the intrinsic's narrow output in a
/// temp, then emit an explicit zero-extension to the ZMM parent so SSA
/// cannot keep stale upper lanes alive.
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
    let (call_dst, zero_ext_reg) = ctx.prepare_zero_extending_vector_output(insn, 0, dst);

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        call_dst,
        smallvec![tag_vn, src0, src1],
        ctx.addr,
    ));
    ctx.finish_zero_extending_vector_output(zero_ext_reg, call_dst);
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
    let (call_dst, zero_ext_reg) = ctx.prepare_zero_extending_vector_output(insn, 0, dst);

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        call_dst,
        smallvec![tag_vn, src0, src1, mask],
        ctx.addr,
    ));
    ctx.finish_zero_extending_vector_output(zero_ext_reg, call_dst);
}

/// MOVSD/MOVSS: scalar move in the low lane of an XMM register.
///
/// Legacy SSE register-to-register scalar moves preserve the destination's
/// upper lanes; memory loads zero the upper lanes; stores write only the
/// scalar lane.
pub fn lift_sse_mov_scalar(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    use iced_x86::OpKind;

    let lane_size = match callother_tag {
        tag::MOVSS => 4,
        _ => 8,
    };

    if insn.op_kind(0) == OpKind::Memory {
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(src) = ctx.operand_read(insn, 1) else {
            ctx.emit_unimplemented();
            return;
        };
        let src = ctx.resize_value(src, lane_size);
        ctx.emit_store(dst_addr, src);
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

    if insn.op_kind(1) == OpKind::Register {
        let Some(old_dst) = ctx.operand_read(insn, 0) else {
            ctx.emit_unimplemented();
            return;
        };
        let low = ctx.resize_value(src, lane_size);
        let high_size = dst.size.saturating_sub(lane_size);
        if high_size == 0 {
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                dst,
                smallvec![low],
                ctx.addr,
            ));
            return;
        }

        let high = Varnode::unique(ctx.alloc_unique(), high_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            high,
            smallvec![old_dst, Varnode::constant(lane_size as u64, 1)],
            ctx.addr,
        ));
        let pieced = Varnode::unique(ctx.alloc_unique(), dst.size);
        ctx.emit(IrInsn::with_output(
            IrOp::Piece,
            pieced,
            smallvec![high, low],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            dst,
            smallvec![pieced],
            ctx.addr,
        ));
        return;
    }

    let src = ctx.resize_value(src, dst.size);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        dst,
        smallvec![src],
        ctx.addr,
    ));
}
