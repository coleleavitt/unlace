//! SSE/AVX intrinsic registry.
//!
//! Maps x86 SIMD instruction mnemonics to their C intrinsic names,
//! input counts, output sizes, and categories. The lifter uses this
//! to emit `CALLOTHER` with a meaningful intrinsic name instead of
//! raw opcode bytes.

use std::collections::BTreeMap;

/// Category of an SSE/AVX intrinsic.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum IntrinsicCategory {
    /// Packed integer arithmetic: PADDB, PADDW, PADDD, PADDQ, PSUBB, etc.
    SseArith,
    /// Packed bitwise logic: PAND, POR, PXOR, PANDN.
    SseLogic,
    /// Aligned/unaligned moves: MOVDQA, MOVDQU, MOVAPS, MOVUPS.
    SseMove,
    /// Shuffle and unpack: PSHUFD, PSHUFB, PUNPCKLBW, etc.
    SseShuffle,
    /// Packed comparisons: PCMPEQB, PCMPGTB, etc.
    SseCompare,
    /// Scalar/packed type conversions: CVTSI2SD, CVTSD2SI, etc.
    SseConvert,
    /// SSE4.1 blend/select: BLENDPS, PBLENDVB, etc.
    SseBlend,
    /// SSE2 pack-with-saturation: PACKSSWB, PACKUSWB, etc.
    SsePack,
    /// SSE4.1 lane insert/extract: PINSRB/W/D/Q, PEXTRB/W/D/Q.
    SseInsertExtract,
    /// SSE4.2 packed string comparison: PCMPESTRI, PCMPISTRI.
    SseStringCompare,
    /// AVX packed arithmetic: VPADDB, VPADDW, etc.
    AvxArith,
    /// AVX aligned/unaligned moves: VMOVDQA, VMOVDQU.
    AvxMove,
    /// AVX-512 (EVEX) packed arithmetic, 64-byte / ZMM output:
    /// VPADDQ_512, VPSUBQ_512, VPMULLQ_512, …
    Avx512Arith,
    /// x87 FPU instructions: FLD, FSTP, FADD, FMUL, etc.
    X87Fpu,
    /// Anything that doesn't fit the above.
    Other,
}

/// Metadata for a single SSE/AVX intrinsic.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct IntrinsicInfo {
    /// C intrinsic name (e.g. `_mm_add_epi8`).
    pub c_name: &'static str,
    /// Number of operand inputs the intrinsic consumes.
    pub input_count: usize,
    /// Size of the result in bytes.
    pub output_size: usize,
    /// High-level category.
    pub category: IntrinsicCategory,
}

/// A registry mapping upper-case x86 mnemonics to [`IntrinsicInfo`].
#[derive(Debug, Clone)]
pub struct IntrinsicRegistry {
    entries: BTreeMap<&'static str, IntrinsicInfo>,
}

impl IntrinsicRegistry {
    /// Look up an intrinsic by its mnemonic (e.g. `"PADDB"`).
    pub fn lookup(&self, mnemonic: &str) -> Option<&IntrinsicInfo> {
        self.entries.get(mnemonic)
    }

    /// Iterate over all `(mnemonic, info)` pairs in sorted order.
    pub fn iter(&self) -> impl Iterator<Item = (&&'static str, &IntrinsicInfo)> {
        self.entries.iter()
    }

    /// Number of entries in the registry.
    pub fn len(&self) -> usize {
        self.entries.len()
    }

    /// Whether the registry is empty.
    pub fn is_empty(&self) -> bool {
        self.entries.is_empty()
    }
}

/// Helper to keep the table construction concise.
const fn info(
    c_name: &'static str,
    input_count: usize,
    output_size: usize,
    category: IntrinsicCategory,
) -> IntrinsicInfo {
    IntrinsicInfo {
        c_name,
        input_count,
        output_size,
        category,
    }
}

impl Default for IntrinsicRegistry {
    fn default() -> Self {
        use IntrinsicCategory::*;

        let table: &[(&str, IntrinsicInfo)] = &[
            // ── SSE/SSE2 moves ──────────────────────────────────────
            ("MOVDQA", info("_mm_load_si128", 1, 16, SseMove)),
            ("MOVDQU", info("_mm_loadu_si128", 1, 16, SseMove)),
            ("MOVAPS", info("_mm_load_ps", 1, 16, SseMove)),
            ("MOVUPS", info("_mm_loadu_ps", 1, 16, SseMove)),
            ("MOVAPD", info("_mm_load_pd", 1, 16, SseMove)),
            ("MOVUPD", info("_mm_loadu_pd", 1, 16, SseMove)),
            ("MOVD", info("_mm_cvtsi32_si128", 1, 16, SseMove)),
            ("MOVQ", info("_mm_cvtsi64_si128", 1, 16, SseMove)),
            // ── SSE2 packed integer arithmetic ──────────────────────
            ("PADDB", info("_mm_add_epi8", 2, 16, SseArith)),
            ("PADDW", info("_mm_add_epi16", 2, 16, SseArith)),
            ("PADDD", info("_mm_add_epi32", 2, 16, SseArith)),
            ("PADDQ", info("_mm_add_epi64", 2, 16, SseArith)),
            ("PSUBB", info("_mm_sub_epi8", 2, 16, SseArith)),
            ("PSUBW", info("_mm_sub_epi16", 2, 16, SseArith)),
            ("PSUBD", info("_mm_sub_epi32", 2, 16, SseArith)),
            ("PSUBQ", info("_mm_sub_epi64", 2, 16, SseArith)),
            ("PMULLW", info("_mm_mullo_epi16", 2, 16, SseArith)),
            ("PMULLD", info("_mm_mullo_epi32", 2, 16, SseArith)),
            ("PMULUDQ", info("_mm_mul_epu32", 2, 16, SseArith)),
            ("PMADDWD", info("_mm_madd_epi16", 2, 16, SseArith)),
            // ── SSE packed float arithmetic ─────────────────────────
            ("ADDPS", info("_mm_add_ps", 2, 16, SseArith)),
            ("ADDPD", info("_mm_add_pd", 2, 16, SseArith)),
            ("SUBPS", info("_mm_sub_ps", 2, 16, SseArith)),
            ("SUBPD", info("_mm_sub_pd", 2, 16, SseArith)),
            ("MULPS", info("_mm_mul_ps", 2, 16, SseArith)),
            ("MULPD", info("_mm_mul_pd", 2, 16, SseArith)),
            ("DIVPS", info("_mm_div_ps", 2, 16, SseArith)),
            ("DIVPD", info("_mm_div_pd", 2, 16, SseArith)),
            ("MINPS", info("_mm_min_ps", 2, 16, SseArith)),
            ("MAXPS", info("_mm_max_ps", 2, 16, SseArith)),
            // ── SSE scalar float arithmetic ─────────────────────────
            ("ADDSS", info("_mm_add_ss", 2, 16, SseArith)),
            ("ADDSD", info("_mm_add_sd", 2, 16, SseArith)),
            ("SUBSS", info("_mm_sub_ss", 2, 16, SseArith)),
            ("SUBSD", info("_mm_sub_sd", 2, 16, SseArith)),
            ("MULSS", info("_mm_mul_ss", 2, 16, SseArith)),
            ("MULSD", info("_mm_mul_sd", 2, 16, SseArith)),
            ("DIVSS", info("_mm_div_ss", 2, 16, SseArith)),
            ("DIVSD", info("_mm_div_sd", 2, 16, SseArith)),
            // ── SSE2 packed bitwise logic ───────────────────────────
            ("PAND", info("_mm_and_si128", 2, 16, SseLogic)),
            ("PANDN", info("_mm_andnot_si128", 2, 16, SseLogic)),
            ("POR", info("_mm_or_si128", 2, 16, SseLogic)),
            ("PXOR", info("_mm_xor_si128", 2, 16, SseLogic)),
            // ── SSE packed float logic ──────────────────────────────
            ("ANDPS", info("_mm_and_ps", 2, 16, SseLogic)),
            ("ANDNPS", info("_mm_andnot_ps", 2, 16, SseLogic)),
            ("ORPS", info("_mm_or_ps", 2, 16, SseLogic)),
            ("XORPS", info("_mm_xor_ps", 2, 16, SseLogic)),
            // ── SSE2 packed comparisons ─────────────────────────────
            ("PCMPEQB", info("_mm_cmpeq_epi8", 2, 16, SseCompare)),
            ("PCMPEQW", info("_mm_cmpeq_epi16", 2, 16, SseCompare)),
            ("PCMPEQD", info("_mm_cmpeq_epi32", 2, 16, SseCompare)),
            ("PCMPGTB", info("_mm_cmpgt_epi8", 2, 16, SseCompare)),
            ("PCMPGTW", info("_mm_cmpgt_epi16", 2, 16, SseCompare)),
            ("PCMPGTD", info("_mm_cmpgt_epi32", 2, 16, SseCompare)),
            // ── SSE2 shuffle/unpack ─────────────────────────────────
            ("PSHUFD", info("_mm_shuffle_epi32", 2, 16, SseShuffle)),
            ("PSHUFB", info("_mm_shuffle_epi8", 2, 16, SseShuffle)),
            ("PSHUFLW", info("_mm_shufflelo_epi16", 2, 16, SseShuffle)),
            ("PSHUFHW", info("_mm_shufflehi_epi16", 2, 16, SseShuffle)),
            ("PUNPCKLBW", info("_mm_unpacklo_epi8", 2, 16, SseShuffle)),
            ("PUNPCKLWD", info("_mm_unpacklo_epi16", 2, 16, SseShuffle)),
            ("PUNPCKLDQ", info("_mm_unpacklo_epi32", 2, 16, SseShuffle)),
            ("PUNPCKLQDQ", info("_mm_unpacklo_epi64", 2, 16, SseShuffle)),
            ("PUNPCKHBW", info("_mm_unpackhi_epi8", 2, 16, SseShuffle)),
            ("PUNPCKHWD", info("_mm_unpackhi_epi16", 2, 16, SseShuffle)),
            ("PUNPCKHDQ", info("_mm_unpackhi_epi32", 2, 16, SseShuffle)),
            ("PUNPCKHQDQ", info("_mm_unpackhi_epi64", 2, 16, SseShuffle)),
            ("SHUFPS", info("_mm_shuffle_ps", 3, 16, SseShuffle)),
            // ── SSSE3 packed integer ops (t174) ─────────────────────
            ("PHADDW", info("_mm_hadd_epi16", 2, 16, SseArith)),
            ("PHADDD", info("_mm_hadd_epi32", 2, 16, SseArith)),
            ("PHSUBW", info("_mm_hsub_epi16", 2, 16, SseArith)),
            ("PHSUBD", info("_mm_hsub_epi32", 2, 16, SseArith)),
            ("PALIGNR", info("_mm_alignr_epi8", 3, 16, SseShuffle)),
            ("PMADDUBSW", info("_mm_maddubs_epi16", 2, 16, SseArith)),
            ("PSIGNB", info("_mm_sign_epi8", 2, 16, SseArith)),
            ("PSIGNW", info("_mm_sign_epi16", 2, 16, SseArith)),
            ("PSIGND", info("_mm_sign_epi32", 2, 16, SseArith)),
            // ── SSE2 conversions ────────────────────────────────────
            ("CVTSI2SD", info("_mm_cvtsi32_sd", 2, 16, SseConvert)),
            ("CVTSI2SS", info("_mm_cvtsi32_ss", 2, 16, SseConvert)),
            ("CVTSD2SI", info("_mm_cvtsd_si32", 1, 4, SseConvert)),
            ("CVTSS2SI", info("_mm_cvtss_si32", 1, 4, SseConvert)),
            ("CVTSD2SS", info("_mm_cvtsd_ss", 2, 16, SseConvert)),
            ("CVTSS2SD", info("_mm_cvtss_sd", 2, 16, SseConvert)),
            ("CVTDQ2PS", info("_mm_cvtepi32_ps", 1, 16, SseConvert)),
            ("CVTPS2DQ", info("_mm_cvtps_epi32", 1, 16, SseConvert)),
            // ── SSE2 shift ──────────────────────────────────────────
            ("PSLLW", info("_mm_slli_epi16", 2, 16, SseArith)),
            ("PSLLD", info("_mm_slli_epi32", 2, 16, SseArith)),
            ("PSLLQ", info("_mm_slli_epi64", 2, 16, SseArith)),
            ("PSRLW", info("_mm_srli_epi16", 2, 16, SseArith)),
            ("PSRLD", info("_mm_srli_epi32", 2, 16, SseArith)),
            ("PSRLQ", info("_mm_srli_epi64", 2, 16, SseArith)),
            ("PSRAW", info("_mm_srai_epi16", 2, 16, SseArith)),
            ("PSRAD", info("_mm_srai_epi32", 2, 16, SseArith)),
            // ── SSE misc ────────────────────────────────────────────
            ("PMOVMSKB", info("_mm_movemask_epi8", 1, 4, Other)),
            ("MOVMSKPS", info("_mm_movemask_ps", 1, 4, Other)),
            // ── SSE float sqrt/rcp ──────────────────────────────────
            ("SQRTPS", info("_mm_sqrt_ps", 1, 16, SseArith)),
            ("SQRTPD", info("_mm_sqrt_pd", 1, 16, SseArith)),
            ("SQRTSS", info("_mm_sqrt_ss", 1, 16, SseArith)),
            ("SQRTSD", info("_mm_sqrt_sd", 2, 16, SseArith)),
            ("RCPPS", info("_mm_rcp_ps", 1, 16, SseArith)),
            ("RCPSS", info("_mm_rcp_ss", 1, 16, SseArith)),
            ("RSQRTPS", info("_mm_rsqrt_ps", 1, 16, SseArith)),
            ("RSQRTSS", info("_mm_rsqrt_ss", 1, 16, SseArith)),
            // ── SSE/SSE2 min/max packed integer ─────────────────────
            ("PMINUB", info("_mm_min_epu8", 2, 16, SseArith)),
            ("PMAXUB", info("_mm_max_epu8", 2, 16, SseArith)),
            ("PMINSW", info("_mm_min_epi16", 2, 16, SseArith)),
            ("PMAXSW", info("_mm_max_epi16", 2, 16, SseArith)),
            ("MINPD", info("_mm_min_pd", 2, 16, SseArith)),
            ("MAXPD", info("_mm_max_pd", 2, 16, SseArith)),
            // ── SSE2 pack-with-saturation ───────────────────────────
            ("PACKSSWB", info("_mm_packs_epi16", 2, 16, SsePack)),
            ("PACKSSDW", info("_mm_packs_epi32", 2, 16, SsePack)),
            ("PACKUSWB", info("_mm_packus_epi16", 2, 16, SsePack)),
            // ── SSE4.1 blend/select ─────────────────────────────────
            ("BLENDPS", info("_mm_blend_ps", 3, 16, SseBlend)),
            ("BLENDPD", info("_mm_blend_pd", 3, 16, SseBlend)),
            ("BLENDVPS", info("_mm_blendv_ps", 3, 16, SseBlend)),
            ("BLENDVPD", info("_mm_blendv_pd", 3, 16, SseBlend)),
            ("PBLENDW", info("_mm_blend_epi16", 3, 16, SseBlend)),
            ("PBLENDVB", info("_mm_blendv_epi8", 3, 16, SseBlend)),
            // ── SSE4.1 packed compare (64-bit lanes) ────────────────
            ("PCMPEQQ", info("_mm_cmpeq_epi64", 2, 16, SseCompare)),
            // ── SSE4.1 zero-extending widening converts ─────────────
            ("PMOVZXBW", info("_mm_cvtepu8_epi16", 1, 16, SseConvert)),
            ("PMOVZXBD", info("_mm_cvtepu8_epi32", 1, 16, SseConvert)),
            ("PMOVZXBQ", info("_mm_cvtepu8_epi64", 1, 16, SseConvert)),
            ("PMOVZXWD", info("_mm_cvtepu16_epi32", 1, 16, SseConvert)),
            ("PMOVZXWQ", info("_mm_cvtepu16_epi64", 1, 16, SseConvert)),
            ("PMOVZXDQ", info("_mm_cvtepu32_epi64", 1, 16, SseConvert)),
            // ── SSE4.1 sign-extending widening converts ─────────────
            ("PMOVSXBW", info("_mm_cvtepi8_epi16", 1, 16, SseConvert)),
            ("PMOVSXBD", info("_mm_cvtepi8_epi32", 1, 16, SseConvert)),
            ("PMOVSXBQ", info("_mm_cvtepi8_epi64", 1, 16, SseConvert)),
            ("PMOVSXWD", info("_mm_cvtepi16_epi32", 1, 16, SseConvert)),
            ("PMOVSXWQ", info("_mm_cvtepi16_epi64", 1, 16, SseConvert)),
            ("PMOVSXDQ", info("_mm_cvtepi32_epi64", 1, 16, SseConvert)),
            // ── SSE4.1 packed signed 32×32→64 multiply ──────────────
            ("PMULDQ", info("_mm_mul_epi32", 2, 16, SseArith)),
            // ── SSE4.1 packed 32-bit min/max ────────────────────────
            ("PMINSD", info("_mm_min_epi32", 2, 16, SseArith)),
            ("PMINUD", info("_mm_min_epu32", 2, 16, SseArith)),
            ("PMAXSD", info("_mm_max_epi32", 2, 16, SseArith)),
            ("PMAXUD", info("_mm_max_epu32", 2, 16, SseArith)),
            // ── SSE4.1 lane insert (3-operand) ──────────────────────
            ("PINSRB", info("_mm_insert_epi8", 3, 16, SseInsertExtract)),
            ("PINSRW", info("_mm_insert_epi16", 3, 16, SseInsertExtract)),
            ("PINSRD", info("_mm_insert_epi32", 3, 16, SseInsertExtract)),
            ("PINSRQ", info("_mm_insert_epi64", 3, 16, SseInsertExtract)),
            // ── SSE4.1 lane extract (3-operand) ─────────────────────
            //
            // PEXTR* writes a small GP/mem operand, so the output size
            // tracks the lane width rather than the source register.
            ("PEXTRB", info("_mm_extract_epi8", 2, 1, SseInsertExtract)),
            ("PEXTRW", info("_mm_extract_epi16", 2, 2, SseInsertExtract)),
            ("PEXTRD", info("_mm_extract_epi32", 2, 4, SseInsertExtract)),
            ("PEXTRQ", info("_mm_extract_epi64", 2, 8, SseInsertExtract)),
            // ── SSE4.2 packed string compare → ECX/flags ────────────
            //
            // PCMPESTRI/PCMPISTRI write the result index into ECX
            // implicitly; here we record the (haystack, needle, control)
            // shape so the recoverer can rebuild the intrinsic call.
            ("PCMPESTRI", info("_mm_cmpestri", 3, 4, SseStringCompare)),
            ("PCMPISTRI", info("_mm_cmpistri", 3, 4, SseStringCompare)),
            // ── AVX moves ───────────────────────────────────────────
            ("VMOVDQA", info("_mm256_load_si256", 1, 32, AvxMove)),
            ("VMOVDQU", info("_mm256_loadu_si256", 1, 32, AvxMove)),
            ("VMOVAPS", info("_mm256_load_ps", 1, 32, AvxMove)),
            ("VMOVUPS", info("_mm256_loadu_ps", 1, 32, AvxMove)),
            // ── AVX packed integer arithmetic ───────────────────────
            ("VPADDB", info("_mm256_add_epi8", 2, 32, AvxArith)),
            ("VPADDW", info("_mm256_add_epi16", 2, 32, AvxArith)),
            ("VPADDD", info("_mm256_add_epi32", 2, 32, AvxArith)),
            ("VPADDQ", info("_mm256_add_epi64", 2, 32, AvxArith)),
            ("VPSUBB", info("_mm256_sub_epi8", 2, 32, AvxArith)),
            ("VPSUBW", info("_mm256_sub_epi16", 2, 32, AvxArith)),
            ("VPSUBD", info("_mm256_sub_epi32", 2, 32, AvxArith)),
            ("VPSUBQ", info("_mm256_sub_epi64", 2, 32, AvxArith)),
            // ── AVX2 packed integer multiply / shuffle / blend ──────
            ("VPMULLD", info("_mm256_mullo_epi32", 2, 32, AvxArith)),
            ("VPSHUFB", info("_mm256_shuffle_epi8", 2, 32, AvxArith)),
            (
                "VPERMD",
                info("_mm256_permutevar8x32_epi32", 2, 32, AvxArith),
            ),
            ("VPBLENDD", info("_mm256_blend_epi32", 3, 32, AvxArith)),
            // ── AVX packed bitwise logic ────────────────────────────
            ("VPAND", info("_mm256_and_si256", 2, 32, AvxArith)),
            ("VPOR", info("_mm256_or_si256", 2, 32, AvxArith)),
            ("VPXOR", info("_mm256_xor_si256", 2, 32, AvxArith)),
            // ── AVX-512 EVEX 64-bit-lane packed ops (t205) ──────────
            //
            // 512-bit / ZMM forms. Distinct entries from the 256-bit
            // VEX forms so the recoverer can pick the correct C
            // intrinsic name from the Callother tag alone.
            ("VPADDQ_512", info("_mm512_add_epi64", 2, 64, Avx512Arith)),
            ("VPSUBQ_512", info("_mm512_sub_epi64", 2, 64, Avx512Arith)),
            (
                "VPMULLQ_512",
                info("_mm512_mullo_epi64", 2, 64, Avx512Arith),
            ),
            // ── AVX packed float arithmetic ─────────────────────────
            ("VADDPS", info("_mm256_add_ps", 2, 32, AvxArith)),
            ("VSUBPS", info("_mm256_sub_ps", 2, 32, AvxArith)),
            ("VMULPS", info("_mm256_mul_ps", 2, 32, AvxArith)),
            ("VDIVPS", info("_mm256_div_ps", 2, 32, AvxArith)),
            ("VADDPD", info("_mm256_add_pd", 2, 32, AvxArith)),
            ("VMULPD", info("_mm256_mul_pd", 2, 32, AvxArith)),
            ("VSQRTPS", info("_mm256_sqrt_ps", 1, 32, AvxArith)),
            ("VSQRTPD", info("_mm256_sqrt_pd", 1, 32, AvxArith)),
            // ── x87 FPU stack ───────────────────────────────────────
            ("FLD", info("__fld", 1, 10, X87Fpu)),
            ("FST", info("__fst", 2, 0, X87Fpu)),
            ("FSTP", info("__fstp", 2, 0, X87Fpu)),
            ("FADD", info("__fadd", 2, 10, X87Fpu)),
            ("FADDP", info("__faddp", 2, 10, X87Fpu)),
            ("FSUB", info("__fsub", 2, 10, X87Fpu)),
            ("FSUBP", info("__fsubp", 2, 10, X87Fpu)),
            ("FSUBR", info("__fsubr", 2, 10, X87Fpu)),
            ("FSUBRP", info("__fsubrp", 2, 10, X87Fpu)),
            ("FMUL", info("__fmul", 2, 10, X87Fpu)),
            ("FMULP", info("__fmulp", 2, 10, X87Fpu)),
            ("FDIV", info("__fdiv", 2, 10, X87Fpu)),
            ("FDIVP", info("__fdivp", 2, 10, X87Fpu)),
            ("FDIVR", info("__fdivr", 2, 10, X87Fpu)),
            ("FDIVRP", info("__fdivrp", 2, 10, X87Fpu)),
            ("FCOM", info("__fcom", 2, 0, X87Fpu)),
            ("FCOMP", info("__fcomp", 2, 0, X87Fpu)),
            ("FCOMPP", info("__fcompp", 2, 0, X87Fpu)),
            ("FUCOM", info("__fucom", 2, 0, X87Fpu)),
            ("FUCOMP", info("__fucomp", 2, 0, X87Fpu)),
            ("FUCOMPP", info("__fucompp", 2, 0, X87Fpu)),
            ("FXCH", info("__fxch", 2, 0, X87Fpu)),
        ];

        let mut entries = BTreeMap::new();
        for &(mnemonic, ref intrinsic) in table {
            entries.insert(mnemonic, *intrinsic);
        }

        Self { entries }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn registry() -> IntrinsicRegistry {
        IntrinsicRegistry::default()
    }

    #[test]
    fn test_lookup_paddb() {
        let reg = registry();
        let info = reg.lookup("PADDB").expect("PADDB should be in registry");
        assert_eq!(info.c_name, "_mm_add_epi8");
        assert_eq!(info.input_count, 2);
        assert_eq!(info.output_size, 16);
    }

    #[test]
    fn test_lookup_movdqa() {
        let reg = registry();
        let info = reg.lookup("MOVDQA").expect("MOVDQA should be in registry");
        assert_eq!(info.c_name, "_mm_load_si128");
        assert_eq!(info.input_count, 1);
        assert_eq!(info.output_size, 16);
    }

    #[test]
    fn test_lookup_unknown() {
        let reg = registry();
        assert!(reg.lookup("FOOBAR").is_none());
    }

    #[test]
    fn test_all_entries_have_c_name() {
        let reg = registry();
        for (mnemonic, info) in reg.iter() {
            assert!(
                !info.c_name.is_empty(),
                "entry for {mnemonic} has empty c_name"
            );
        }
    }

    #[test]
    fn test_category_classification() {
        let reg = registry();

        assert_eq!(
            reg.lookup("PADDB").unwrap().category,
            IntrinsicCategory::SseArith,
        );
        assert_eq!(
            reg.lookup("PAND").unwrap().category,
            IntrinsicCategory::SseLogic,
        );
        assert_eq!(
            reg.lookup("MOVDQA").unwrap().category,
            IntrinsicCategory::SseMove,
        );
        assert_eq!(
            reg.lookup("PSHUFD").unwrap().category,
            IntrinsicCategory::SseShuffle,
        );
        assert_eq!(
            reg.lookup("PCMPEQB").unwrap().category,
            IntrinsicCategory::SseCompare,
        );
        assert_eq!(
            reg.lookup("CVTSI2SD").unwrap().category,
            IntrinsicCategory::SseConvert,
        );
        assert_eq!(
            reg.lookup("VPADDB").unwrap().category,
            IntrinsicCategory::AvxArith,
        );
        assert_eq!(
            reg.lookup("VMOVDQA").unwrap().category,
            IntrinsicCategory::AvxMove,
        );
    }

    #[test]
    fn test_at_least_20_sse2_entries() {
        let reg = registry();
        // Count entries that are NOT AVX (no 'V' prefix categories)
        let sse_count = reg
            .iter()
            .filter(|(_, info)| {
                !matches!(
                    info.category,
                    IntrinsicCategory::AvxArith | IntrinsicCategory::AvxMove
                )
            })
            .count();
        assert!(
            sse_count >= 20,
            "expected at least 20 SSE entries, got {sse_count}"
        );
    }

    #[test]
    fn test_avx_output_size_32() {
        let reg = registry();
        for (mnemonic, info) in reg.iter() {
            if matches!(
                info.category,
                IntrinsicCategory::AvxArith | IntrinsicCategory::AvxMove
            ) {
                assert_eq!(
                    info.output_size, 32,
                    "AVX entry {mnemonic} should have 32-byte output"
                );
            }
        }
    }

    /// t205 — every AVX-512 (EVEX) entry must declare a 64-byte / ZMM
    /// output size so downstream consumers can rely on the category
    /// alone to size a Callother destination.
    #[test]
    fn test_avx512_output_size_64() {
        let reg = registry();
        let mut count = 0usize;
        for (mnemonic, info) in reg.iter() {
            if matches!(info.category, IntrinsicCategory::Avx512Arith) {
                assert_eq!(
                    info.output_size, 64,
                    "AVX-512 entry {mnemonic} should have 64-byte output"
                );
                count += 1;
            }
        }
        assert!(
            count >= 3,
            "expected at least the t205 trio (VPADDQ/VPSUBQ/VPMULLQ_512), found {count}",
        );
    }

    #[test]
    fn test_mulps() {
        let reg = registry();
        let info = reg.lookup("MULPS").expect("MULPS should be in registry");
        assert_eq!(info.c_name, "_mm_mul_ps");
        assert_eq!(info.input_count, 2);
        assert_eq!(info.output_size, 16);
        assert_eq!(info.category, IntrinsicCategory::SseArith);
    }

    #[test]
    fn test_addps() {
        let reg = registry();
        let info = reg.lookup("ADDPS").expect("ADDPS should be in registry");
        assert_eq!(info.c_name, "_mm_add_ps");
        assert_eq!(info.input_count, 2);
        assert_eq!(info.output_size, 16);
    }

    #[test]
    fn test_registry_not_empty() {
        let reg = registry();
        assert!(!reg.is_empty());
        assert!(reg.len() >= 20);
    }

    #[test]
    fn test_sorted_iteration() {
        let reg = registry();
        let mnemonics: Vec<_> = reg.iter().map(|(m, _)| *m).collect();
        let mut sorted = mnemonics.clone();
        sorted.sort();
        assert_eq!(mnemonics, sorted, "BTreeMap iteration should be sorted");
    }

    #[test]
    fn test_sse_sqrt_family_present() {
        let reg = registry();
        let sqrtps = reg.lookup("SQRTPS").expect("SQRTPS missing");
        assert_eq!(sqrtps.c_name, "_mm_sqrt_ps");
        assert_eq!(sqrtps.input_count, 1);
        assert_eq!(sqrtps.output_size, 16);
        assert_eq!(sqrtps.category, IntrinsicCategory::SseArith);

        for name in ["SQRTPD", "SQRTSS", "RCPPS", "RSQRTPS"] {
            assert!(reg.lookup(name).is_some(), "{name} should be registered");
        }
    }

    #[test]
    fn test_sse41_blend_family_present() {
        let reg = registry();
        let blendps = reg.lookup("BLENDPS").expect("BLENDPS missing");
        assert_eq!(blendps.c_name, "_mm_blend_ps");
        assert_eq!(blendps.input_count, 3);
        assert_eq!(blendps.category, IntrinsicCategory::SseBlend);

        let pblendvb = reg.lookup("PBLENDVB").expect("PBLENDVB missing");
        assert_eq!(pblendvb.c_name, "_mm_blendv_epi8");
        assert_eq!(pblendvb.input_count, 3);
        assert_eq!(pblendvb.category, IntrinsicCategory::SseBlend);
    }

    #[test]
    fn test_sse2_pack_family_present() {
        let reg = registry();
        let packsswb = reg.lookup("PACKSSWB").expect("PACKSSWB missing");
        assert_eq!(packsswb.c_name, "_mm_packs_epi16");
        assert_eq!(packsswb.category, IntrinsicCategory::SsePack);

        for (mnemonic, expected_c) in [
            ("PACKSSDW", "_mm_packs_epi32"),
            ("PACKUSWB", "_mm_packus_epi16"),
        ] {
            let info = reg
                .lookup(mnemonic)
                .unwrap_or_else(|| panic!("{mnemonic} missing"));
            assert_eq!(info.c_name, expected_c);
            assert_eq!(info.category, IntrinsicCategory::SsePack);
        }
    }

    #[test]
    fn test_x87_fpu_family_present() {
        let reg = registry();
        for (mnemonic, expected_c) in [
            ("FLD", "__fld"),
            ("FSTP", "__fstp"),
            ("FADD", "__fadd"),
            ("FSUB", "__fsub"),
            ("FMUL", "__fmul"),
            ("FDIV", "__fdiv"),
            ("FCOM", "__fcom"),
            ("FXCH", "__fxch"),
        ] {
            let info = reg
                .lookup(mnemonic)
                .unwrap_or_else(|| panic!("{mnemonic} missing"));
            assert_eq!(info.c_name, expected_c);
            assert_eq!(info.category, IntrinsicCategory::X87Fpu);
        }
    }

    #[test]
    fn test_x87_pop_variants_present() {
        let reg = registry();
        for name in [
            "FADDP", "FSUBP", "FSUBRP", "FMULP", "FDIVP", "FDIVRP", "FCOMP", "FCOMPP",
        ] {
            let info = reg.lookup(name).unwrap_or_else(|| panic!("{name} missing"));
            assert_eq!(info.category, IntrinsicCategory::X87Fpu);
        }
    }

    #[test]
    fn test_sse41_widening_converts_present() {
        // t185 — PMOVZX/PMOVSX widening converts route through
        // SseConvert and reach C intrinsics like _mm_cvtepu8_epi16.
        let reg = registry();
        for (mnemonic, expected_c) in [
            ("PMOVZXBW", "_mm_cvtepu8_epi16"),
            ("PMOVZXBD", "_mm_cvtepu8_epi32"),
            ("PMOVZXBQ", "_mm_cvtepu8_epi64"),
            ("PMOVZXWD", "_mm_cvtepu16_epi32"),
            ("PMOVZXWQ", "_mm_cvtepu16_epi64"),
            ("PMOVZXDQ", "_mm_cvtepu32_epi64"),
            ("PMOVSXBW", "_mm_cvtepi8_epi16"),
            ("PMOVSXBD", "_mm_cvtepi8_epi32"),
            ("PMOVSXBQ", "_mm_cvtepi8_epi64"),
            ("PMOVSXWD", "_mm_cvtepi16_epi32"),
            ("PMOVSXWQ", "_mm_cvtepi16_epi64"),
            ("PMOVSXDQ", "_mm_cvtepi32_epi64"),
        ] {
            let info = reg
                .lookup(mnemonic)
                .unwrap_or_else(|| panic!("{mnemonic} missing"));
            assert_eq!(info.c_name, expected_c, "{mnemonic} c_name");
            assert_eq!(info.input_count, 1, "{mnemonic} should be unary");
            assert_eq!(info.output_size, 16, "{mnemonic} writes a 128-bit XMM");
            assert_eq!(info.category, IntrinsicCategory::SseConvert);
        }
    }

    #[test]
    fn test_sse41_minmax_32_present() {
        // t185 — PMIN{S,U}D / PMAX{S,U}D are 2-operand packed-32 ops.
        let reg = registry();
        for (mnemonic, expected_c) in [
            ("PMINSD", "_mm_min_epi32"),
            ("PMINUD", "_mm_min_epu32"),
            ("PMAXSD", "_mm_max_epi32"),
            ("PMAXUD", "_mm_max_epu32"),
        ] {
            let info = reg
                .lookup(mnemonic)
                .unwrap_or_else(|| panic!("{mnemonic} missing"));
            assert_eq!(info.c_name, expected_c);
            assert_eq!(info.input_count, 2);
            assert_eq!(info.output_size, 16);
            assert_eq!(info.category, IntrinsicCategory::SseArith);
        }
    }

    #[test]
    fn test_sse41_insert_extract_present() {
        // t185 — PINSR{B,W,D,Q} write XMM (16 bytes); PEXTR{B,W,D,Q}
        // write a small GP/mem operand whose width tracks the lane.
        let reg = registry();
        for (mnemonic, expected_c, out_size) in [
            ("PINSRB", "_mm_insert_epi8", 16),
            ("PINSRW", "_mm_insert_epi16", 16),
            ("PINSRD", "_mm_insert_epi32", 16),
            ("PINSRQ", "_mm_insert_epi64", 16),
            ("PEXTRB", "_mm_extract_epi8", 1),
            ("PEXTRW", "_mm_extract_epi16", 2),
            ("PEXTRD", "_mm_extract_epi32", 4),
            ("PEXTRQ", "_mm_extract_epi64", 8),
        ] {
            let info = reg
                .lookup(mnemonic)
                .unwrap_or_else(|| panic!("{mnemonic} missing"));
            assert_eq!(info.c_name, expected_c);
            assert_eq!(info.output_size, out_size, "{mnemonic} output size");
            assert_eq!(info.category, IntrinsicCategory::SseInsertExtract);
        }
    }

    #[test]
    fn test_sse42_string_compare_present() {
        // t185 — PCMPESTRI / PCMPISTRI surface as `_mm_cmpestri` /
        // `_mm_cmpistri`; the index result is a 4-byte value (ECX).
        let reg = registry();
        for (mnemonic, expected_c) in [("PCMPESTRI", "_mm_cmpestri"), ("PCMPISTRI", "_mm_cmpistri")]
        {
            let info = reg
                .lookup(mnemonic)
                .unwrap_or_else(|| panic!("{mnemonic} missing"));
            assert_eq!(info.c_name, expected_c);
            assert_eq!(info.input_count, 3);
            assert_eq!(info.output_size, 4);
            assert_eq!(info.category, IntrinsicCategory::SseStringCompare);
        }
    }

    #[test]
    fn test_sse41_pmuldq_pcmpeqq_present() {
        // t185 — Spot-check the two stand-alone SSE4.1 entries.
        let reg = registry();
        let pmuldq = reg.lookup("PMULDQ").expect("PMULDQ missing");
        assert_eq!(pmuldq.c_name, "_mm_mul_epi32");
        assert_eq!(pmuldq.category, IntrinsicCategory::SseArith);

        let pcmpeqq = reg.lookup("PCMPEQQ").expect("PCMPEQQ missing");
        assert_eq!(pcmpeqq.c_name, "_mm_cmpeq_epi64");
        assert_eq!(pcmpeqq.category, IntrinsicCategory::SseCompare);
    }

    #[test]
    fn test_avx_float_arith_present() {
        let reg = registry();
        for (mnemonic, expected_c) in [
            ("VADDPS", "_mm256_add_ps"),
            ("VMULPS", "_mm256_mul_ps"),
            ("VSQRTPS", "_mm256_sqrt_ps"),
        ] {
            let info = reg
                .lookup(mnemonic)
                .unwrap_or_else(|| panic!("{mnemonic} missing"));
            assert_eq!(info.c_name, expected_c);
            assert_eq!(info.output_size, 32, "AVX entry should be 32 bytes");
            assert_eq!(info.category, IntrinsicCategory::AvxArith);
        }
    }
}

/// Intel TSX (Transactional Synchronization Extensions) intrinsic IDs.
///
/// TSX transactions bracket critical sections with XBEGIN/XEND. The lifter
/// emits these as Callother intrinsics so downstream passes can identify
/// transactional regions and reconstruct the fallback path.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
#[repr(u64)]
pub enum TsxIntrinsic {
    /// XBEGIN: start a transaction. On abort, execution resumes at the
    /// fallback address with EAX containing the abort status.
    Xbegin = 0x600,
    /// XEND: commit the current transaction.
    Xend = 0x601,
    /// XABORT imm8: explicitly abort with a user-specified reason code.
    Xabort = 0x602,
    /// XTEST: test whether a transaction is active (sets ZF).
    Xtest = 0x603,
}

impl TsxIntrinsic {
    pub fn from_u64(v: u64) -> Option<Self> {
        match v {
            0x600 => Some(Self::Xbegin),
            0x601 => Some(Self::Xend),
            0x602 => Some(Self::Xabort),
            0x603 => Some(Self::Xtest),
            _ => None,
        }
    }

    pub fn mnemonic(self) -> &'static str {
        match self {
            Self::Xbegin => "xbegin",
            Self::Xend => "xend",
            Self::Xabort => "xabort",
            Self::Xtest => "xtest",
        }
    }
}

pub const CALLOTHER_TSX_XBEGIN: u64 = TsxIntrinsic::Xbegin as u64;
pub const CALLOTHER_TSX_XEND: u64 = TsxIntrinsic::Xend as u64;
pub const CALLOTHER_TSX_XABORT: u64 = TsxIntrinsic::Xabort as u64;
pub const CALLOTHER_TSX_XTEST: u64 = TsxIntrinsic::Xtest as u64;


#[cfg(test)]
mod tsx_tests {
    use super::*;

    #[test]
    fn tsx_intrinsic_roundtrip() {
        for id in [0x600u64, 0x601, 0x602, 0x603] {
            let intr = TsxIntrinsic::from_u64(id).unwrap();
            assert!(!intr.mnemonic().is_empty());
        }
    }

    #[test]
    fn tsx_xbegin_mnemonic() {
        assert_eq!(TsxIntrinsic::Xbegin.mnemonic(), "xbegin");
    }

    #[test]
    fn tsx_unknown_returns_none() {
        assert!(TsxIntrinsic::from_u64(0x999).is_none());
/// Intel CET (Control-flow Enforcement Technology) intrinsic IDs.
///
/// CET provides two mechanisms: Indirect Branch Tracking (IBT) via ENDBR32/64
/// landing pads, and Shadow Stack (SS) for return address protection.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
#[repr(u64)]
pub enum CetIntrinsic {
    /// ENDBR64: valid 64-bit indirect branch target marker.
    Endbr64 = 0x610,
    /// ENDBR32: valid 32-bit indirect branch target marker.
    Endbr32 = 0x611,
    /// RDSSPQ: read shadow stack pointer.
    Rdsspq = 0x620,
    /// INCSSPQ: increment shadow stack pointer (pop entries).
    Incsspq = 0x621,
    /// SAVEPREVSSP: save previous shadow stack pointer.
    Saveprevssp = 0x622,
    /// RSTORSSP: restore shadow stack pointer.
    Rstorssp = 0x623,
    /// WRSSD/WRSSQ: write to shadow stack.
    Wrss = 0x624,
    /// WRUSSD/WRUSSQ: write to user shadow stack.
    Wruss = 0x625,
    /// SETSSBSY: set shadow stack busy flag.
    Setssbsy = 0x626,
    /// CLRSSBSY: clear shadow stack busy flag.
    Clrssbsy = 0x627,
}

impl CetIntrinsic {
    pub fn from_u64(v: u64) -> Option<Self> {
        match v {
            0x610 => Some(Self::Endbr64),
            0x611 => Some(Self::Endbr32),
            0x620 => Some(Self::Rdsspq),
            0x621 => Some(Self::Incsspq),
            0x622 => Some(Self::Saveprevssp),
            0x623 => Some(Self::Rstorssp),
            0x624 => Some(Self::Wrss),
            0x625 => Some(Self::Wruss),
            0x626 => Some(Self::Setssbsy),
            0x627 => Some(Self::Clrssbsy),
            _ => None,
        }
    }

    pub fn mnemonic(self) -> &'static str {
        match self {
            Self::Endbr64 => "endbr64",
            Self::Endbr32 => "endbr32",
            Self::Rdsspq => "rdsspq",
            Self::Incsspq => "incsspq",
            Self::Saveprevssp => "saveprevssp",
            Self::Rstorssp => "rstorssp",
            Self::Wrss => "wrss",
            Self::Wruss => "wruss",
            Self::Setssbsy => "setssbsy",
            Self::Clrssbsy => "clrssbsy",
        }
    }
}

pub const CALLOTHER_CET_ENDBR64: u64 = CetIntrinsic::Endbr64 as u64;
pub const CALLOTHER_CET_ENDBR32: u64 = CetIntrinsic::Endbr32 as u64;


#[cfg(test)]
mod cet_tests {
    use super::*;

    #[test]
    fn cet_endbr_mnemonics() {
        assert_eq!(CetIntrinsic::Endbr64.mnemonic(), "endbr64");
        assert_eq!(CetIntrinsic::Endbr32.mnemonic(), "endbr32");
    }

    #[test]
    fn cet_shadow_stack_ops() {
        assert_eq!(CetIntrinsic::Rdsspq.mnemonic(), "rdsspq");
        assert_eq!(CetIntrinsic::Incsspq.mnemonic(), "incsspq");
    }

    #[test]
    fn cet_roundtrip() {
        for id in [0x610u64, 0x611, 0x620, 0x621, 0x622, 0x623, 0x624, 0x625, 0x626, 0x627] {
            assert!(CetIntrinsic::from_u64(id).is_some());
        }
    }
}
