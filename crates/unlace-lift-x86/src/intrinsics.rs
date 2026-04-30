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
    /// AVX packed arithmetic: VPADDB, VPADDW, etc.
    AvxArith,
    /// AVX aligned/unaligned moves: VMOVDQA, VMOVDQU.
    AvxMove,
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
    IntrinsicInfo { c_name, input_count, output_size, category }
}

impl Default for IntrinsicRegistry {
    fn default() -> Self {
        use IntrinsicCategory::*;

        let table: &[(&str, IntrinsicInfo)] = &[
            // ── SSE/SSE2 moves ──────────────────────────────────────
            ("MOVDQA",   info("_mm_load_si128",    1, 16, SseMove)),
            ("MOVDQU",   info("_mm_loadu_si128",   1, 16, SseMove)),
            ("MOVAPS",   info("_mm_load_ps",       1, 16, SseMove)),
            ("MOVUPS",   info("_mm_loadu_ps",      1, 16, SseMove)),
            ("MOVAPD",   info("_mm_load_pd",       1, 16, SseMove)),
            ("MOVUPD",   info("_mm_loadu_pd",      1, 16, SseMove)),
            ("MOVD",     info("_mm_cvtsi32_si128", 1, 16, SseMove)),
            ("MOVQ",     info("_mm_cvtsi64_si128", 1, 16, SseMove)),
            // ── SSE2 packed integer arithmetic ──────────────────────
            ("PADDB",    info("_mm_add_epi8",      2, 16, SseArith)),
            ("PADDW",    info("_mm_add_epi16",     2, 16, SseArith)),
            ("PADDD",    info("_mm_add_epi32",     2, 16, SseArith)),
            ("PADDQ",    info("_mm_add_epi64",     2, 16, SseArith)),
            ("PSUBB",    info("_mm_sub_epi8",      2, 16, SseArith)),
            ("PSUBW",    info("_mm_sub_epi16",     2, 16, SseArith)),
            ("PSUBD",    info("_mm_sub_epi32",     2, 16, SseArith)),
            ("PSUBQ",    info("_mm_sub_epi64",     2, 16, SseArith)),
            ("PMULLW",   info("_mm_mullo_epi16",   2, 16, SseArith)),
            ("PMULLD",   info("_mm_mullo_epi32",   2, 16, SseArith)),
            ("PMADDWD",  info("_mm_madd_epi16",    2, 16, SseArith)),
            // ── SSE packed float arithmetic ─────────────────────────
            ("ADDPS",    info("_mm_add_ps",        2, 16, SseArith)),
            ("ADDPD",    info("_mm_add_pd",        2, 16, SseArith)),
            ("SUBPS",    info("_mm_sub_ps",        2, 16, SseArith)),
            ("SUBPD",    info("_mm_sub_pd",        2, 16, SseArith)),
            ("MULPS",    info("_mm_mul_ps",        2, 16, SseArith)),
            ("MULPD",    info("_mm_mul_pd",        2, 16, SseArith)),
            ("DIVPS",    info("_mm_div_ps",        2, 16, SseArith)),
            ("DIVPD",    info("_mm_div_pd",        2, 16, SseArith)),
            ("MINPS",    info("_mm_min_ps",        2, 16, SseArith)),
            ("MAXPS",    info("_mm_max_ps",        2, 16, SseArith)),
            // ── SSE scalar float arithmetic ─────────────────────────
            ("ADDSS",    info("_mm_add_ss",        2, 16, SseArith)),
            ("ADDSD",    info("_mm_add_sd",        2, 16, SseArith)),
            ("SUBSS",    info("_mm_sub_ss",        2, 16, SseArith)),
            ("SUBSD",    info("_mm_sub_sd",        2, 16, SseArith)),
            ("MULSS",    info("_mm_mul_ss",        2, 16, SseArith)),
            ("MULSD",    info("_mm_mul_sd",        2, 16, SseArith)),
            ("DIVSS",    info("_mm_div_ss",        2, 16, SseArith)),
            ("DIVSD",    info("_mm_div_sd",        2, 16, SseArith)),
            // ── SSE2 packed bitwise logic ───────────────────────────
            ("PAND",     info("_mm_and_si128",     2, 16, SseLogic)),
            ("PANDN",    info("_mm_andnot_si128",  2, 16, SseLogic)),
            ("POR",      info("_mm_or_si128",      2, 16, SseLogic)),
            ("PXOR",     info("_mm_xor_si128",     2, 16, SseLogic)),
            // ── SSE packed float logic ──────────────────────────────
            ("ANDPS",    info("_mm_and_ps",        2, 16, SseLogic)),
            ("ANDNPS",   info("_mm_andnot_ps",     2, 16, SseLogic)),
            ("ORPS",     info("_mm_or_ps",         2, 16, SseLogic)),
            ("XORPS",    info("_mm_xor_ps",        2, 16, SseLogic)),
            // ── SSE2 packed comparisons ─────────────────────────────
            ("PCMPEQB",  info("_mm_cmpeq_epi8",   2, 16, SseCompare)),
            ("PCMPEQW",  info("_mm_cmpeq_epi16",  2, 16, SseCompare)),
            ("PCMPEQD",  info("_mm_cmpeq_epi32",  2, 16, SseCompare)),
            ("PCMPGTB",  info("_mm_cmpgt_epi8",   2, 16, SseCompare)),
            ("PCMPGTW",  info("_mm_cmpgt_epi16",  2, 16, SseCompare)),
            ("PCMPGTD",  info("_mm_cmpgt_epi32",  2, 16, SseCompare)),
            // ── SSE2 shuffle/unpack ─────────────────────────────────
            ("PSHUFD",   info("_mm_shuffle_epi32", 2, 16, SseShuffle)),
            ("PSHUFB",   info("_mm_shuffle_epi8",  2, 16, SseShuffle)),
            ("PSHUFLW",  info("_mm_shufflelo_epi16", 2, 16, SseShuffle)),
            ("PSHUFHW",  info("_mm_shufflehi_epi16", 2, 16, SseShuffle)),
            ("PUNPCKLBW", info("_mm_unpacklo_epi8",  2, 16, SseShuffle)),
            ("PUNPCKLWD", info("_mm_unpacklo_epi16", 2, 16, SseShuffle)),
            ("PUNPCKLDQ", info("_mm_unpacklo_epi32", 2, 16, SseShuffle)),
            ("PUNPCKLQDQ", info("_mm_unpacklo_epi64", 2, 16, SseShuffle)),
            ("PUNPCKHBW", info("_mm_unpackhi_epi8",  2, 16, SseShuffle)),
            ("PUNPCKHWD", info("_mm_unpackhi_epi16", 2, 16, SseShuffle)),
            ("PUNPCKHDQ", info("_mm_unpackhi_epi32", 2, 16, SseShuffle)),
            ("PUNPCKHQDQ", info("_mm_unpackhi_epi64", 2, 16, SseShuffle)),
            ("SHUFPS",   info("_mm_shuffle_ps",    3, 16, SseShuffle)),
            // ── SSE2 conversions ────────────────────────────────────
            ("CVTSI2SD", info("_mm_cvtsi32_sd",    2, 16, SseConvert)),
            ("CVTSI2SS", info("_mm_cvtsi32_ss",    2, 16, SseConvert)),
            ("CVTSD2SI", info("_mm_cvtsd_si32",    1, 4,  SseConvert)),
            ("CVTSS2SI", info("_mm_cvtss_si32",    1, 4,  SseConvert)),
            ("CVTSD2SS", info("_mm_cvtsd_ss",      2, 16, SseConvert)),
            ("CVTSS2SD", info("_mm_cvtss_sd",      2, 16, SseConvert)),
            ("CVTDQ2PS", info("_mm_cvtepi32_ps",   1, 16, SseConvert)),
            ("CVTPS2DQ", info("_mm_cvtps_epi32",   1, 16, SseConvert)),
            // ── SSE2 shift ──────────────────────────────────────────
            ("PSLLW",    info("_mm_slli_epi16",    2, 16, SseArith)),
            ("PSLLD",    info("_mm_slli_epi32",    2, 16, SseArith)),
            ("PSLLQ",    info("_mm_slli_epi64",    2, 16, SseArith)),
            ("PSRLW",    info("_mm_srli_epi16",    2, 16, SseArith)),
            ("PSRLD",    info("_mm_srli_epi32",    2, 16, SseArith)),
            ("PSRLQ",    info("_mm_srli_epi64",    2, 16, SseArith)),
            ("PSRAW",    info("_mm_srai_epi16",    2, 16, SseArith)),
            ("PSRAD",    info("_mm_srai_epi32",    2, 16, SseArith)),
            // ── SSE misc ────────────────────────────────────────────
            ("PMOVMSKB", info("_mm_movemask_epi8", 1, 4,  Other)),
            ("MOVMSKPS", info("_mm_movemask_ps",   1, 4,  Other)),
            // ── AVX moves ───────────────────────────────────────────
            ("VMOVDQA",  info("_mm256_load_si256",  1, 32, AvxMove)),
            ("VMOVDQU",  info("_mm256_loadu_si256", 1, 32, AvxMove)),
            ("VMOVAPS",  info("_mm256_load_ps",     1, 32, AvxMove)),
            ("VMOVUPS",  info("_mm256_loadu_ps",    1, 32, AvxMove)),
            // ── AVX packed integer arithmetic ───────────────────────
            ("VPADDB",   info("_mm256_add_epi8",   2, 32, AvxArith)),
            ("VPADDW",   info("_mm256_add_epi16",  2, 32, AvxArith)),
            ("VPADDD",   info("_mm256_add_epi32",  2, 32, AvxArith)),
            ("VPADDQ",   info("_mm256_add_epi64",  2, 32, AvxArith)),
            ("VPSUBB",   info("_mm256_sub_epi8",   2, 32, AvxArith)),
            ("VPSUBW",   info("_mm256_sub_epi16",  2, 32, AvxArith)),
            ("VPSUBD",   info("_mm256_sub_epi32",  2, 32, AvxArith)),
            ("VPSUBQ",   info("_mm256_sub_epi64",  2, 32, AvxArith)),
            // ── AVX packed bitwise logic ────────────────────────────
            ("VPAND",    info("_mm256_and_si256",    2, 32, AvxArith)),
            ("VPOR",     info("_mm256_or_si256",     2, 32, AvxArith)),
            ("VPXOR",    info("_mm256_xor_si256",    2, 32, AvxArith)),
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
}
