use super::*;
#[test]
fn vnni_ifma_popcnt_names() {
    assert_eq!(
        intrinsic("vpopcntb_avx512", 64),
        Some(("_mm512_popcnt_epi8".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpopcntq_avx512", 16),
        Some(("_mm_popcnt_epi64".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpdpbusd_avx512", 32),
        Some(("_mm256_dpbusd_epi32".into(), vec![0, 1, 2]))
    );
    assert_eq!(
        intrinsic("vpdpwssds_avx512", 64),
        Some(("_mm512_dpwssds_epi32".into(), vec![0, 1, 2]))
    );
    assert_eq!(
        intrinsic("vpmadd52huq_avxifma", 32),
        Some(("_mm256_madd52hi_epu64".into(), vec![0, 1, 2]))
    );
    assert_eq!(
        intrinsic("vpmadd52luq_avx512_mask", 64),
        Some(("_mm512_mask_madd52lo_epu64".into(), vec![0, 1, 2, 3, 4]))
    );
}

#[test]
fn element_pair_conversions() {
    assert_eq!(
        intrinsic("vpmovsxbw_avx2", 32),
        Some(("_mm256_cvtepi8_epi16".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpmovzxdq_avx2", 32),
        Some(("_mm256_cvtepu32_epi64".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpmovsxbd_avx", 16),
        Some(("_mm_cvtepi8_epi32".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpmovzxwd_avx512f", 64),
        Some(("_mm512_cvtepu16_epi32".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpmovdb_avx512f", 16),
        Some(("_mm512_cvtepi32_epi8".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpmovusdw_avx512f", 32),
        Some(("_mm512_cvtusepi32_epi16".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpmovswb_avx512bw", 32),
        Some(("_mm512_cvtsepi16_epi8".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpmovwb_avx512bw_mask", 32),
        Some(("_mm512_mask_cvtepi16_epi8".into(), vec![0, 1, 2]))
    );
    assert_eq!(
        intrinsic_sized("vpmovdb_avx512vl", 16, 16),
        Some(("_mm_cvtepi32_epi8".into(), vec![0]))
    );
    assert_eq!(
        intrinsic_sized("vpmovdb_avx512vl", 16, 32),
        Some(("_mm256_cvtepi32_epi8".into(), vec![0]))
    );
    assert_eq!(
        intrinsic_sized("vpmovwb_avx512vl_mask", 16, 32),
        Some(("_mm256_mask_cvtepi16_epi8".into(), vec![0, 1, 2]))
    );
    assert_eq!(intrinsic_sized("vpmovdb_avx512vl", 16, 64), None);
    assert_eq!(intrinsic("vpmovwb_avx512f", 16), None);
    assert_eq!(intrinsic("vpmovsxbw_avx2", 8), None);
}

#[test]
fn names_and_orders() {
    assert_eq!(
        intrinsic("vpaddd_avx2", 32),
        Some(("_mm256_add_epi32".into(), vec![0, 1]))
    );
    assert_eq!(
        intrinsic("vpmaxub_avx2", 32),
        Some(("_mm256_max_epu8".into(), vec![0, 1]))
    );
    assert_eq!(
        intrinsic("vpshufb_avx2", 32),
        Some(("_mm256_shuffle_epi8".into(), vec![0, 1]))
    );
    assert_eq!(
        intrinsic("vaddps_avx512f", 64),
        Some(("_mm512_add_ps".into(), vec![0, 1]))
    );
    assert_eq!(
        intrinsic("vpand_avx2", 32),
        Some(("_mm256_and_si256".into(), vec![0, 1]))
    );
    assert_eq!(
        intrinsic("vfmadd132ps_fma", 32),
        Some(("_mm256_fmadd_ps".into(), vec![0, 2, 1]))
    );
    assert_eq!(
        intrinsic("vfmadd213ps_fma", 16),
        Some(("_mm_fmadd_ps".into(), vec![1, 0, 2]))
    );
    assert_eq!(
        intrinsic("vfnmsub231sd_fma", 16),
        Some(("_mm_fnmsub_sd".into(), vec![1, 2, 0]))
    );
    assert_eq!(intrinsic("vpaddd_avx2", 8), None);
    assert_eq!(intrinsic("cpuid", 16), None);
    assert_eq!(intrinsic("vzeroupper_avx", 16), None);
    assert_eq!(
        intrinsic("vaddps_avx512f_mask", 64),
        Some(("_mm512_mask_add_ps".into(), vec![0, 1, 2, 3]))
    );
    assert_eq!(
        intrinsic("vaddps_avx512f_maskz", 64),
        Some(("_mm512_maskz_add_ps".into(), vec![0, 1, 2]))
    );
    assert_eq!(
        vector_type_name(32, element_kind("_mm256_add_epi32")).as_deref(),
        Some("__m256i")
    );
    assert_eq!(
        vector_type_name(64, element_kind("_mm512_add_ps")).as_deref(),
        Some("__m512")
    );
    assert_eq!(
        vector_type_name(16, element_kind("_mm_fmadd_sd")).as_deref(),
        Some("__m128d")
    );
    assert_eq!(
        intrinsic("vpternlogd_avx512f", 64),
        Some(("_mm512_ternarylogic_epi32".into(), vec![0, 1, 2, 3]))
    );
    assert_eq!(
        intrinsic("vpternlogq_avx512vl_mask", 32),
        Some((
            "_mm256_mask_ternarylogic_epi64".into(),
            vec![0, 1, 2, 3, 4, 5]
        ))
    );
    assert_eq!(
        intrinsic("vplzcntq_avx512cd", 64),
        Some(("_mm512_lzcnt_epi64".into(), vec![0]))
    );
    assert_eq!(
        intrinsic("vpconflictd_avx512vl", 16),
        Some(("_mm_conflict_epi32".into(), vec![0]))
    );
}
