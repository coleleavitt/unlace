//! c_printer: intrinsics.

use super::*;

/// The helper Hex-Rays prints a system call of `convention` as.
pub(super) fn syscall_helper_name(convention: SyscallConvention) -> &'static str {
    match convention {
        SyscallConvention::Linux => "linux_syscall",
        SyscallConvention::LinuxEabi => "linux_eabi_syscall",
        SyscallConvention::Darwin => "mac_syscall",
    }
}

/// Resolve a CALLOTHER tag whose meaning depends on the emitting lifter.
///
/// Lifters number their tags independently, so the same value can mean
/// different instructions on different architectures. This table is
/// consulted before the shared [`callother_intrinsic_name`] table and the
/// AArch64-specific paths.
pub(super) fn arch_callother_intrinsic_name(
    arch: unlace_ir::ArchId,
    tag: u64,
) -> Option<&'static str> {
    use unlace_ir::ArchId;
    match (arch, tag) {
        (ArchId::AArch64, 0x437) => Some("__svc"), // SVC #imm other than 0 / 0x80
        _ => None,
    }
}

/// Resolve a CALLOTHER tag to its C intrinsic name.
///
/// Tags are assigned by the lifter (`unlace-lift-x86`) and encode the
/// original x86 mnemonic. This table mirrors the tag constants from
/// `ops/sse.rs::tag` and `ops/bitwise.rs::bit_tag`, mapping each to the
/// corresponding Intel intrinsic or GCC builtin.
pub(super) fn callother_intrinsic_name(tag: u64) -> Option<&'static str> {
    match tag {
        // ── String / memory builtins ────────────────────────────
        0x1 => Some("__builtin_memcpy"),
        0x2 => Some("__builtin_memset"),
        0x3 => Some("__builtin_memcmp"),

        // ── SSE/SSE2 moves (0x100..0x10F) ──────────────────────
        0x100 => Some("_mm_load_si128"),  // MOVDQA
        0x101 => Some("_mm_loadu_si128"), // MOVDQU
        0x102 => Some("_mm_load_ps"),     // MOVAPS
        0x103 => Some("_mm_loadu_ps"),    // MOVUPS
        0x104 => Some("_mm_load_sd"),     // MOVSD

        // ── SSE2 packed integer add (0x110..0x113) ─────────────
        0x110 => Some("_mm_add_epi8"),  // PADDB
        0x111 => Some("_mm_add_epi16"), // PADDW
        0x112 => Some("_mm_add_epi32"), // PADDD
        0x113 => Some("_mm_add_epi64"), // PADDQ

        // ── SSE2 packed integer sub (0x118..0x11B) ─────────────
        0x118 => Some("_mm_sub_epi8"),  // PSUBB
        0x119 => Some("_mm_sub_epi16"), // PSUBW
        0x11A => Some("_mm_sub_epi32"), // PSUBD
        0x11B => Some("_mm_sub_epi64"), // PSUBQ

        // ── SSE2 packed integer multiply (0x123, 0x127) ────────
        0x123 => Some("_mm_mullo_epi32"), // PMULLD
        0x127 => Some("_mm_mul_epu32"),   // PMULUDQ

        // ── SSE packed float arithmetic (0x130..0x136) ─────────
        0x130 => Some("_mm_add_ps"),  // ADDPS
        0x131 => Some("_mm_sub_ps"),  // SUBPS
        0x132 => Some("_mm_mul_ps"),  // MULPS
        0x133 => Some("_mm_div_ps"),  // DIVPS
        0x134 => Some("_mm_min_ps"),  // MINPS
        0x135 => Some("_mm_max_ps"),  // MAXPS
        0x136 => Some("_mm_sqrt_ps"), // SQRTPS

        // ── SSE2 shuffle/unpack (0x140..0x142) ─────────────────
        0x140 => Some("_mm_shuffle_epi32"),  // PSHUFD
        0x141 => Some("_mm_shuffle_epi8"),   // PSHUFB
        0x142 => Some("_mm_unpacklo_epi8"),  // PUNPCKLBW
        0x61D => Some("_mm_srli_epi64"),     // PSRLQ
        0x61E => Some("_mm_unpacklo_epi32"), // PUNPCKLDQ

        // ── SSE misc (0x150) ───────────────────────────────────
        0x150 => Some("_mm_movemask_epi8"), // PMOVMSKB

        // ── SSE2 pack-with-saturation (0x160..0x161) ───────────
        0x160 => Some("_mm_packs_epi16"),  // PACKSSWB
        0x161 => Some("_mm_packus_epi16"), // PACKUSWB

        // ── SSE4.1 blend/select (0x170..0x171) ─────────────────
        0x170 => Some("_mm_blend_ps"),    // BLENDPS
        0x171 => Some("_mm_blendv_epi8"), // PBLENDVB

        // ── AVX-512 EVEX packed integer ops (0x1D0..0x1D2) ─────
        0x1D0 => Some("_mm512_add_epi64"),   // VPADDQ
        0x1D1 => Some("_mm512_sub_epi64"),   // VPSUBQ
        0x1D2 => Some("_mm512_mullo_epi64"), // VPMULLQ

        // ── AVX-512 generic EVEX fallback (t306) ─────────────────
        0x1EF => Some("__builtin_ia32_avx512_evex"),

        // ── AES-NI intrinsics (0x1E0..0x1E4) ──────────────────────
        0x1E0 => Some("_mm_aesenc_si128"),          // AESENC
        0x1E1 => Some("_mm_aesenclast_si128"),      // AESENCLAST
        0x1E2 => Some("_mm_aesdec_si128"),          // AESDEC
        0x1E3 => Some("_mm_aesdeclast_si128"),      // AESDECLAST
        0x1E4 => Some("_mm_aeskeygenassist_si128"), // AESKEYGENASSIST

        // ── SHA-NI intrinsics (0x1E8..0x1EC) ───────────────────
        0x1E8 => Some("_mm_sha1rnds4_epu32"),   // SHA1RNDS4
        0x1E9 => Some("_mm_sha1nexte_epu32"),   // SHA1NEXTE
        0x1EA => Some("_mm_sha256rnds2_epu32"), // SHA256RNDS2
        0x1EB => Some("_mm_sha256msg1_epu32"),  // SHA256MSG1
        0x1EC => Some("_mm_sha256msg2_epu32"),  // SHA256MSG2

        // ── Bit-manipulation builtins (0x200..0x204) ───────────
        0x200 => Some("__builtin_ctz"),      // BSF
        0x201 => Some("__bsr"),              // BSR
        0x202 => Some("__builtin_ctz"),      // TZCNT
        0x203 => Some("__builtin_clz"),      // LZCNT
        0x204 => Some("__builtin_popcount"), // POPCNT

        // ── Trap (0x300) ───────────────────────────────────────
        0x300 => Some("__builtin_trap"), // UD2 / INT3
        0x301 => Some("__syscall"),      // SYSCALL / SYSENTER

        // ── x87 FPU stack pseudo-intrinsics (0x310..0x318) ──────
        0x310 => Some("__fld"),
        0x311 => Some("__fstp"),
        0x312 => Some("__fadd"),
        0x313 => Some("__fsub"),
        0x314 => Some("__fmul"),
        0x315 => Some("__fdiv"),
        0x316 => Some("__fcom"),
        0x317 => Some("__fxch"),
        0x318 => Some("__fst"),

        // ── x87 popping arithmetic/compare variants (0x360..0x367) ──
        // Distinct tags so the x87 TOP-tracking pass can model the
        // stack pop; rendered with their canonical `p`-suffixed names.
        0x360 => Some("__faddp"),
        0x361 => Some("__fsubp"),
        0x362 => Some("__fsubrp"),
        0x363 => Some("__fmulp"),
        0x364 => Some("__fdivp"),
        0x365 => Some("__fdivrp"),
        0x366 => Some("__fcomp"),
        0x367 => Some("__fcompp"),

        // ── Idiom-recognized intrinsics (0x320..0x328) ─────────
        0x320 => Some("__ROL__"),
        0x321 => Some("__ROR__"),
        0x322 => Some("__abs__"),
        0x323 => Some("__min__"),
        0x324 => Some("__max__"),
        0x325 => Some("__memcpy__"),
        0x326 => Some("__memset__"),
        0x327 => Some("__bitfield_get__"),
        0x328 => Some("__bitfield_set__"),

        // ── AArch64 lifter callothers (0x330..0x34B) ───────────
        0x330 => Some("__csel__"),
        0x331 => Some("__csinc__"),
        0x332 => Some("__csinv__"),
        0x333 => Some("__csneg__"),
        0x340 => Some("__ldrex__"),
        0x341 => Some("__strex__"),
        0x342 => Some("__dmb__"),
        0x343 => Some("__dsb__"),
        0x344 => Some("__isb__"),
        // t299 AArch64 atomics are handled specially by `emit_callother`
        // because C11 atomic builtins need memory-order arguments and, for
        // stores, have statement form rather than a value expression.

        // ── x86 conditional move / perf-monitor pseudo-intrinsics ──
        0x350 => Some("__cmov__"),
        0x351 => Some("__rdpmc__"),

        // ── AArch64 NEON (0x400..0x40D) ─────────────────────────
        // These are *not* resolved here because the C intrinsic name
        // depends on the lane-size operand (e.g. ADD lane=4 →
        // `vaddq_s32` vs. ADD lane=2 → `vaddq_s16`). The lifter encodes
        // lane size as `inputs[1]`; `emit_callother` peels it off and
        // routes through `aarch64_neon_intrinsic_name` before falling
        // back to this tag-only table.

        // ── AArch64 pointer-auth (t300, 0x40E..0x417) ───────────
        0x40E => Some("__pacia"),
        0x40F => Some("__pacib"),
        0x410 => Some("__pacda"),
        0x411 => Some("__pacdb"),
        0x412 => Some("__autia"),
        0x413 => Some("__autib"),
        0x414 => Some("__autda"),
        0x415 => Some("__autdb"),
        0x416 => Some("__xpaci"),
        0x417 => Some("__xpacd"),

        // ── AArch64 SVE (0x420..0x429) ──────────────────────────────
        0x420 => Some("svadd_s32"),
        0x421 => Some("svsub_s32"),
        0x422 => Some("svmul_s32"),
        0x423 => Some("svaddf_f32"),
        0x424 => Some("svsubf_f32"),
        0x425 => Some("svmulf_f32"),
        0x426 => Some("svld1_s32"),
        0x427 => Some("svst1_s32"),
        0x428 => Some("svand_pred"),
        0x429 => Some("svptrue_b32"),

        // ── Intel AMX tile intrinsics (0x500..0x508) ────────────────
        0x500 => Some("_tile_loadd"),
        0x501 => Some("_tile_stream_loadd"),
        0x502 => Some("_tile_stored"),
        0x503 => Some("_tile_release"),
        0x504 => Some("_tile_dpbssd"),
        0x505 => Some("_tile_dpbsud"),
        0x506 => Some("_tile_dpbusd"),
        0x507 => Some("_tile_dpbuud"),
        0x508 => Some("_tile_dpbf16ps"),
        _ => None,
    }
}

pub(super) const CALLOTHER_AARCH64_LDAXR: u64 = 0x345;

pub(super) const CALLOTHER_AARCH64_STLXR: u64 = 0x346;

pub(super) const CALLOTHER_AARCH64_ATOMIC_LOAD_ACQUIRE: u64 = 0x347;

pub(super) const CALLOTHER_AARCH64_ATOMIC_STORE_RELEASE: u64 = 0x348;

pub(super) const CALLOTHER_AARCH64_ATOMIC_FETCH_ADD: u64 = 0x349;

pub(super) const CALLOTHER_AARCH64_ATOMIC_EXCHANGE: u64 = 0x34A;

pub(super) const CALLOTHER_AARCH64_ATOMIC_CMPXCHG: u64 = 0x34B;

pub(super) fn aarch64_atomic_order_name(order: u64) -> &'static str {
    match order {
        0 => "memory_order_relaxed",
        1 => "memory_order_acquire",
        2 => "memory_order_release",
        3 => "memory_order_acq_rel",
        _ => "memory_order_seq_cst",
    }
}

pub(super) fn atomic_ptr_arg(
    vn: &Varnode,
    operand_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    format!(
        "(_Atomic unsigned long long *){}",
        emit_operand_resolved(vn, operand_idx, stmt_idx, ctx)
    )
}

pub(super) fn emit_aarch64_atomic_callother(
    tag: u64,
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    match tag {
        CALLOTHER_AARCH64_LDAXR => {
            let addr = insn.inputs.get(1)?;
            Some(format!(
                "atomic_load_explicit({}, memory_order_acquire)",
                atomic_ptr_arg(addr, 1, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_STLXR => {
            let value = insn.inputs.get(1)?;
            let addr = insn.inputs.get(2)?;
            Some(format!(
                "({{ atomic_store_explicit({}, {}, memory_order_release); 0; }})",
                atomic_ptr_arg(addr, 2, stmt_idx, ctx),
                emit_operand_resolved(value, 1, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_LOAD_ACQUIRE => {
            let addr = insn.inputs.get(2)?;
            Some(format!(
                "atomic_load_explicit({}, memory_order_acquire)",
                atomic_ptr_arg(addr, 2, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_STORE_RELEASE => {
            let value = insn.inputs.get(2)?;
            let addr = insn.inputs.get(3)?;
            Some(format!(
                "atomic_store_explicit({}, {}, memory_order_release)",
                atomic_ptr_arg(addr, 3, stmt_idx, ctx),
                emit_operand_resolved(value, 2, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_FETCH_ADD | CALLOTHER_AARCH64_ATOMIC_EXCHANGE => {
            let order = insn.inputs.get(1)?.offset;
            let value = insn.inputs.get(2)?;
            let addr = insn.inputs.get(3)?;
            let name = if tag == CALLOTHER_AARCH64_ATOMIC_FETCH_ADD {
                "atomic_fetch_add_explicit"
            } else {
                "atomic_exchange_explicit"
            };
            Some(format!(
                "{}({}, {}, {})",
                name,
                atomic_ptr_arg(addr, 3, stmt_idx, ctx),
                emit_operand_resolved(value, 2, stmt_idx, ctx),
                aarch64_atomic_order_name(order)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_CMPXCHG => {
            let order = insn.inputs.get(1)?.offset;
            let expected = insn.inputs.get(2)?;
            let desired = insn.inputs.get(3)?;
            let addr = insn.inputs.get(4)?;
            Some(format!(
                "atomic_compare_exchange_strong_explicit({}, &{}, {}, {}, memory_order_relaxed)",
                atomic_ptr_arg(addr, 4, stmt_idx, ctx),
                emit_operand_resolved(expected, 2, stmt_idx, ctx),
                emit_operand_resolved(desired, 3, stmt_idx, ctx),
                aarch64_atomic_order_name(order)
            ))
        }
        _ => None,
    }
}

// ── AArch64 NEON Callother tags (mirror of `unlace-lift-arm`) ──────────
// Duplicated here as private consts to keep the output crate from taking
// a cross-arch lifter dependency just for these eight u64s.
pub(super) const CALLOTHER_AARCH64_LD1: u64 = 0x400;

pub(super) const CALLOTHER_AARCH64_LD2: u64 = 0x401;

pub(super) const CALLOTHER_AARCH64_LD3: u64 = 0x402;

pub(super) const CALLOTHER_AARCH64_LD4: u64 = 0x403;

pub(super) const CALLOTHER_AARCH64_ST1: u64 = 0x404;

pub(super) const CALLOTHER_AARCH64_ST2: u64 = 0x405;

pub(super) const CALLOTHER_AARCH64_ST3: u64 = 0x406;

pub(super) const CALLOTHER_AARCH64_ST4: u64 = 0x407;

pub(super) const CALLOTHER_NEON_ADD: u64 = 0x408;

pub(super) const CALLOTHER_NEON_SUB: u64 = 0x409;

pub(super) const CALLOTHER_NEON_MUL: u64 = 0x40A;

pub(super) const CALLOTHER_NEON_FADD: u64 = 0x40B;

pub(super) const CALLOTHER_NEON_FSUB: u64 = 0x40C;

pub(super) const CALLOTHER_NEON_FMUL: u64 = 0x40D;

// ── AArch64 SVE Callother tags (mirror of `unlace-lift-arm`) ───────────
#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_ADD: u64 = 0x420;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_SUB: u64 = 0x421;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_MUL: u64 = 0x422;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_FADD: u64 = 0x423;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_FSUB: u64 = 0x424;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_FMUL: u64 = 0x425;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_LD1: u64 = 0x426;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_ST1: u64 = 0x427;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_AND_PRED: u64 = 0x428;

#[allow(dead_code)]
pub(super) const CALLOTHER_SVE_PTRUE: u64 = 0x429;

/// Map an AArch64 NEON `Callother` `(tag, lane_size, signed)` triple to
/// its Apple/ARM C intrinsic name (e.g. `vaddq_s32`).
///
/// `lane_size` is the byte width of one element (1=B, 2=H, 4=S, 8=D)
/// as encoded by `aarch64_vas_lane_size` in the lifter. `signed=true`
/// selects the `s<bits>` element suffix, `false` selects `u<bits>`.
/// Float ops ignore `signed` and always render as `f<bits>`.
///
/// Returns `""` when the `(tag, lane)` combination isn't representable
/// as a NEON intrinsic — callers treat the empty string as "fall
/// through to the generic Callother fallback comment".
///
/// **Vector-width caveat**: we currently always emit the `q` suffix
/// (128-bit), matching the spec's worked examples. The lifter doesn't
/// yet propagate whether the source VAS was a 64-bit or 128-bit form
/// (e.g. `2S` vs `4S`), so a future task — once op_info carries the
/// concrete VAS — will demote 64-bit ops to the non-`q` mnemonic
/// (`vadd_s32` vs `vaddq_s32`).
///
/// **Signedness caveat**: the prompt specifies "treat all int ops as
/// signed" for now; the `signed` parameter is plumbed through so a
/// future inference pass can wire it without churning this signature.
pub fn aarch64_neon_intrinsic_name(tag: u64, lane_size: u8, signed: bool) -> &'static str {
    // Float ops: lane=4 → f32, lane=8 → f64. Anything else is unmapped.
    match (tag, lane_size) {
        (CALLOTHER_NEON_FADD, 4) => return "vaddq_f32",
        (CALLOTHER_NEON_FADD, 8) => return "vaddq_f64",
        (CALLOTHER_NEON_FSUB, 4) => return "vsubq_f32",
        (CALLOTHER_NEON_FSUB, 8) => return "vsubq_f64",
        (CALLOTHER_NEON_FMUL, 4) => return "vmulq_f32",
        (CALLOTHER_NEON_FMUL, 8) => return "vmulq_f64",
        _ => {}
    }

    // Integer arith: ADD/SUB/MUL × {1,2,4,8} × {signed,unsigned}.
    // The element-bit suffix is lane*8; the s/u prefix comes from
    // `signed`.
    let bits = match lane_size {
        1 => 8u8,
        2 => 16,
        4 => 32,
        8 => 64,
        _ => return "",
    };
    let int_op = match tag {
        CALLOTHER_NEON_ADD => Some("add"),
        CALLOTHER_NEON_SUB => Some("sub"),
        CALLOTHER_NEON_MUL => Some("mul"),
        _ => None,
    };
    if let Some(op) = int_op {
        return match (op, bits, signed) {
            // ADD ─────────────────
            ("add", 8, true) => "vaddq_s8",
            ("add", 16, true) => "vaddq_s16",
            ("add", 32, true) => "vaddq_s32",
            ("add", 64, true) => "vaddq_s64",
            ("add", 8, false) => "vaddq_u8",
            ("add", 16, false) => "vaddq_u16",
            ("add", 32, false) => "vaddq_u32",
            ("add", 64, false) => "vaddq_u64",
            // SUB ─────────────────
            ("sub", 8, true) => "vsubq_s8",
            ("sub", 16, true) => "vsubq_s16",
            ("sub", 32, true) => "vsubq_s32",
            ("sub", 64, true) => "vsubq_s64",
            ("sub", 8, false) => "vsubq_u8",
            ("sub", 16, false) => "vsubq_u16",
            ("sub", 32, false) => "vsubq_u32",
            ("sub", 64, false) => "vsubq_u64",
            // MUL ─────────────────
            ("mul", 8, true) => "vmulq_s8",
            ("mul", 16, true) => "vmulq_s16",
            ("mul", 32, true) => "vmulq_s32",
            // `vmulq_s64` doesn't exist in the NEON intrinsic set
            // (no MUL.2D); leave unmapped.
            ("mul", 8, false) => "vmulq_u8",
            ("mul", 16, false) => "vmulq_u16",
            ("mul", 32, false) => "vmulq_u32",
            _ => "",
        };
    }

    // LDn/STn: element type is u8/u16/u32/u64 per the spec's
    // `vld1q_u8` example. The `n` in LDn/STn picks the intrinsic
    // family (vld1q / vld2q / …); lane_size picks the element bit
    // width. We honour `signed` so a later inference pass can route
    // to `vld1q_s*`, but default callers pass `signed=true` only for
    // arith — load/store typically pass `false`.
    let elt_suffix = match (signed, bits) {
        (false, 8) => "u8",
        (false, 16) => "u16",
        (false, 32) => "u32",
        (false, 64) => "u64",
        (true, 8) => "s8",
        (true, 16) => "s16",
        (true, 32) => "s32",
        (true, 64) => "s64",
        _ => return "",
    };
    match tag {
        CALLOTHER_AARCH64_LD1 => match elt_suffix {
            "u8" => "vld1q_u8",
            "u16" => "vld1q_u16",
            "u32" => "vld1q_u32",
            "u64" => "vld1q_u64",
            "s8" => "vld1q_s8",
            "s16" => "vld1q_s16",
            "s32" => "vld1q_s32",
            "s64" => "vld1q_s64",
            _ => "",
        },
        CALLOTHER_AARCH64_LD2 => match elt_suffix {
            "u8" => "vld2q_u8",
            "u16" => "vld2q_u16",
            "u32" => "vld2q_u32",
            "s8" => "vld2q_s8",
            "s16" => "vld2q_s16",
            "s32" => "vld2q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_LD3 => match elt_suffix {
            "u8" => "vld3q_u8",
            "u16" => "vld3q_u16",
            "u32" => "vld3q_u32",
            "s8" => "vld3q_s8",
            "s16" => "vld3q_s16",
            "s32" => "vld3q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_LD4 => match elt_suffix {
            "u8" => "vld4q_u8",
            "u16" => "vld4q_u16",
            "u32" => "vld4q_u32",
            "s8" => "vld4q_s8",
            "s16" => "vld4q_s16",
            "s32" => "vld4q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_ST1 => match elt_suffix {
            "u8" => "vst1q_u8",
            "u16" => "vst1q_u16",
            "u32" => "vst1q_u32",
            "u64" => "vst1q_u64",
            "s8" => "vst1q_s8",
            "s16" => "vst1q_s16",
            "s32" => "vst1q_s32",
            "s64" => "vst1q_s64",
            _ => "",
        },
        CALLOTHER_AARCH64_ST2 => match elt_suffix {
            "u8" => "vst2q_u8",
            "u16" => "vst2q_u16",
            "u32" => "vst2q_u32",
            "s8" => "vst2q_s8",
            "s16" => "vst2q_s16",
            "s32" => "vst2q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_ST3 => match elt_suffix {
            "u8" => "vst3q_u8",
            "u16" => "vst3q_u16",
            "u32" => "vst3q_u32",
            "s8" => "vst3q_s8",
            "s16" => "vst3q_s16",
            "s32" => "vst3q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_ST4 => match elt_suffix {
            "u8" => "vst4q_u8",
            "u16" => "vst4q_u16",
            "u32" => "vst4q_u32",
            "s8" => "vst4q_s8",
            "s16" => "vst4q_s16",
            "s32" => "vst4q_s32",
            _ => "",
        },
        _ => "",
    }
}

/// `true` if `tag` falls in the AArch64 NEON Callother range
/// `(0x400..=0x40D)` — used by `emit_callother` to route through the
/// lane-aware [`aarch64_neon_intrinsic_name`] helper instead of the
/// tag-only [`callother_intrinsic_name`] table.
pub(super) fn is_aarch64_neon_tag(tag: u64) -> bool {
    (CALLOTHER_AARCH64_LD1..=CALLOTHER_NEON_FMUL).contains(&tag)
}

pub(super) fn is_csel_callother(insn: &IrInsn) -> bool {
    insn.op == IrOp::Callother
        && insn.inputs.len() >= 4
        && insn
            .inputs
            .first()
            .is_some_and(|vn| vn.space == SpaceId::Const && matches!(vn.offset, 0x330..=0x333))
}

/// AArch64 conditional-select tag: the value taken when the predicate is
/// *false* is a per-variant transform of the second source register.
///   * CSEL  (0x330): `Rm`        — identity
///   * CSINC (0x331): `Rm + 1`
///   * CSINV (0x332): `~Rm`
///   * CSNEG (0x333): `-Rm`
///
/// Given the already-rendered false-operand text, return the C expression
/// for the false branch. The result is wrapped so it composes correctly as
/// a ternary alternative (e.g. `(a4 + 1)`); the caller may add outer parens.
pub(super) fn csel_false_value_expr(tag: u64, false_operand: &str) -> String {
    match tag {
        0x331 => format!("{false_operand} + 1"), // CSINC
        0x332 => format!("~{false_operand}"),    // CSINV
        0x333 => format!("-{false_operand}"),    // CSNEG
        _ => false_operand.to_string(),          // CSEL (0x330) / fallback
    }
}

/// Tag (0x330..=0x333) of a CSEL-family callother, or `None`.
pub(super) fn csel_callother_tag(insn: &IrInsn) -> Option<u64> {
    if !is_csel_callother(insn) {
        return None;
    }
    insn.inputs.first().map(|vn| vn.offset)
}

pub(super) fn is_cmov_callother(insn: &IrInsn) -> bool {
    insn.op == IrOp::Callother
        && insn.inputs.len() >= 4
        && insn
            .inputs
            .first()
            .is_some_and(|vn| vn.space != SpaceId::Const || vn.offset == 0x350)
}

pub(super) fn emit_callother(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if insn.inputs.is_empty() {
        return "/* CALLOTHER (no tag) */ 0".to_string();
    }

    if let Some(helper) = unlace_ir::eh::EhHelper::of(insn) {
        return format!("{}()", helper.c_name());
    }

    if let Some(convention) = SyscallConvention::of(insn) {
        let args: Vec<String> = insn.inputs[NUMBER_INPUT..]
            .iter()
            .enumerate()
            .map(|(i, vn)| emit_operand_resolved(vn, NUMBER_INPUT + i, stmt_idx, ctx))
            .collect();
        return format!("{}({})", syscall_helper_name(convention), args.join(", "));
    }

    let tag_vn = &insn.inputs[0];
    if is_cmov_callother(insn) {
        let cond = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
        let src = emit_operand_resolved(&insn.inputs[2], 2, stmt_idx, ctx);
        let dst = emit_operand_resolved(&insn.inputs[3], 3, stmt_idx, ctx);
        return format!("if ({}) {{ {} = {}; }}", cond, dst, src);
    }

    // CSEL family as a value expression (e.g. inlined into a consumer):
    // render the C ternary `cond ? Rn : f(Rm)` rather than a raw
    // `__csinv__(...)` intrinsic call. Mirrors the assignment-statement
    // path's per-variant false-value transform.
    if let Some(tag) = csel_callother_tag(insn) {
        let cond = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
        let true_val = emit_operand_resolved(&insn.inputs[2], 2, stmt_idx, ctx);
        let false_operand = emit_operand_resolved(&insn.inputs[3], 3, stmt_idx, ctx);
        let false_val = csel_false_value_expr(tag, &false_operand);
        return format!("({cond} ? {true_val} : {false_val})");
    }

    if tag_vn.space != SpaceId::Const {
        return "/* CALLOTHER (dynamic tag) */ 0".to_string();
    }

    let tag = tag_vn.offset;

    if let Some(name) = ctx
        .arch
        .and_then(|arch| arch_callother_intrinsic_name(arch, tag))
    {
        let args: Vec<String> = insn.inputs[1..]
            .iter()
            .enumerate()
            .map(|(i, vn)| emit_operand_resolved(vn, i + 1, stmt_idx, ctx))
            .collect();
        return format!("{}({})", name, args.join(", "));
    }

    if let Some(expr) = emit_aarch64_atomic_callother(tag, insn, stmt_idx, ctx) {
        return expr;
    }

    // AArch64 NEON intrinsics carry their lane size as a constant in
    // `inputs[1]` — peel it off and route through the lane-aware
    // registry. Per the t200 spec, integer arith ops are treated as
    // signed (full signedness inference is a future task); LDn/STn
    // default to unsigned (matching the `vld1q_u8` example).
    if is_aarch64_neon_tag(tag) && insn.inputs.len() >= 2 {
        let lane_vn = &insn.inputs[1];
        if lane_vn.space == SpaceId::Const {
            let lane = lane_vn.offset as u8;
            let signed_default = matches!(
                tag,
                CALLOTHER_NEON_ADD | CALLOTHER_NEON_SUB | CALLOTHER_NEON_MUL
            );
            let name = aarch64_neon_intrinsic_name(tag, lane, signed_default);
            if !name.is_empty() {
                // Skip the lane constant from the rendered arg list —
                // it's baked into the intrinsic name.
                let args: Vec<String> = insn.inputs[2..]
                    .iter()
                    .enumerate()
                    .map(|(i, vn)| emit_operand_resolved(vn, i + 2, stmt_idx, ctx))
                    .collect();
                return format!("{}({})", name, args.join(", "));
            }
        }
    }

    match callother_intrinsic_name(tag) {
        Some(name) => {
            let args: Vec<String> = insn.inputs[1..]
                .iter()
                .enumerate()
                .map(|(i, vn)| emit_operand_resolved(vn, i + 1, stmt_idx, ctx))
                .collect();
            format!("{}({})", name, args.join(", "))
        }
        None => format!("/* CALLOTHER tag={} */ 0", tag),
    }
}
