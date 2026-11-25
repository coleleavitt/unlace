use super::*;

#[test]
fn names() {
    assert_eq!(
        fused_name("add", false, 4, 16).map(|x| x.0).as_deref(),
        Some("vaddq_s32")
    );
    assert_eq!(
        fused_name("add", true, 4, 8).map(|x| x.0).as_deref(),
        Some("vadd_f32")
    );
    assert_eq!(
        fused_name("eor", false, 8, 16).map(|x| x.0).as_deref(),
        Some("veorq_u64")
    );
    assert_eq!(fused_name("div", false, 4, 16), None);
    assert_eq!(
        userop_name("NEON_smax", &[16, 16, 1], &[None, None, Some(4)], 16),
        Some(("vmaxq_s32".into(), vec![0, 1], Some((Elem::S, 4))))
    );
    assert_eq!(
        userop_name("NEON_urshr", &[8, 1, 1], &[None, Some(3), Some(2)], 8)
            .map(|x| x.0)
            .as_deref(),
        Some("vrshr_n_u16")
    );
    assert_eq!(
        userop_name("NEON_aese", &[16, 16], &[None, None], 16)
            .map(|x| x.0)
            .as_deref(),
        Some("vaeseq_u8")
    );
    assert_eq!(
        userop_name("a64_TBL", &[16, 16, 16], &[Some(0), None, None], 16).map(|x| (x.0, x.1)),
        Some(("vqtbl1q_u8".into(), vec![1, 2]))
    );
    assert_eq!(userop_name("NEON_sqadd", &[4, 4], &[None, None], 4), None);
    assert_eq!(
        vector_type_name(16, Elem::S, 4).as_deref(),
        Some("int32x4_t")
    );
    assert_eq!(
        vector_type_name(8, Elem::U, 1).as_deref(),
        Some("uint8x8_t")
    );
    assert_eq!(decode_kind(kind_code(Elem::F, 8)), Some((Elem::F, 8)));
    assert_eq!(userop_kind("vaddq_s32"), Some(kind_code(Elem::S, 4)));
    assert_eq!(userop_kind("NEON_umax"), Some(variable_kind_code(Elem::U)));
    assert_eq!(userop_kind("NEON_aese"), Some(kind_code(Elem::U, 1)));
    assert_eq!(userop_kind("_mm_add_ps"), None);
    assert_eq!(
        lane_getter("int32x4_t", 4, 4),
        Some(("vgetq_lane_s32".into(), 1))
    );
    assert_eq!(
        lane_getter("uint8x8_t", 3, 1),
        Some(("vget_lane_u8".into(), 3))
    );
    assert_eq!(lane_getter("int32x4_t", 4, 8), None);
    assert_eq!(
        userop_name(
            "NEON_rshrn2",
            &[16, 16, 1, 1],
            &[None, None, Some(8), Some(2)],
            16
        )
        .map(|x| (x.0, x.1)),
        Some(("vrshrn_high_n_s16".into(), vec![0, 1, 2]))
    );
    assert_eq!(
        userop_name("NEON_umull", &[8, 8, 1], &[None, None, Some(4)], 16).map(|x| (x.0, x.1)),
        Some(("vmull_u32".into(), vec![0, 1]))
    );
    assert_eq!(
        userop_name(
            "NEON_raddhn",
            &[8, 16, 16, 1],
            &[None, None, None, Some(8)],
            8
        )
        .map(|x| (x.0, x.1)),
        Some(("vraddhn_s64".into(), vec![1, 2]))
    );
}
