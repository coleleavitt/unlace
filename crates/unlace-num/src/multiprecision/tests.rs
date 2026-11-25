use super::*;

// Edge tests owned by this item.  The C++ TEST(...) suite of
// testmultiprec.cc is ported by a different item; names here are
// deliberately distinct.

/// Reference 128-bit arithmetic via Rust's native u128.
fn to_u128(w: &[u64; 2]) -> u128 {
    (u128::from(w[1]) << 64) | u128::from(w[0])
}
fn from_u128(v: u128) -> [u64; 2] {
    [v as u64, (v >> 64) as u64]
}

#[test]
fn test_edge_add_sub_carry_chains() {
    let mut out = [0u64; 2];
    // Carry across the word boundary.
    add128(&[u64::MAX, 0], &[1, 0], &mut out);
    assert_eq!(out, [0, 1]);
    // Full wraparound: max + 1 == 0.
    add128(&[u64::MAX, u64::MAX], &[1, 0], &mut out);
    assert_eq!(out, [0, 0]);
    // Borrow across the word boundary.
    subtract128(&[0, 1], &[1, 0], &mut out);
    assert_eq!(out, [u64::MAX, 0]);
    // Borrow wraps below zero: 0 - 1 == max.
    subtract128(&[0, 0], &[1, 0], &mut out);
    assert_eq!(out, [u64::MAX, u64::MAX]);
}

#[test]
fn test_edge_leftshift_boundaries() {
    let v = [0x8000_0000_0000_0001u64, 0x1];
    let mut out = [0u64; 2];
    leftshift128(&v, &mut out, 0);
    assert_eq!(out, v);
    leftshift128(&v, &mut out, 1);
    assert_eq!(out, from_u128(to_u128(&v) << 1));
    leftshift128(&v, &mut out, 63);
    assert_eq!(out, from_u128(to_u128(&v) << 63));
    leftshift128(&v, &mut out, 64);
    assert_eq!(out, from_u128(to_u128(&v) << 64));
    leftshift128(&v, &mut out, 65);
    assert_eq!(out, from_u128(to_u128(&v) << 65));
    leftshift128(&v, &mut out, 127);
    assert_eq!(out, [0, 0x8000_0000_0000_0000]);
}

#[test]
fn test_edge_compare_word_order() {
    // High word dominates.
    assert!(uless128(&[u64::MAX, 0], &[0, 1]));
    assert!(!uless128(&[0, 1], &[u64::MAX, 0]));
    // Equal values.
    let a = [0xdead_beefu64, 0x1234_5678u64];
    assert!(!uless128(&a, &a));
    assert!(ulessequal128(&a, &a));
    // Low word decides when high words match.
    assert!(uless128(&[1, 5], &[2, 5]));
    assert!(ulessequal128(&[1, 5], &[2, 5]));
    assert!(!ulessequal128(&[3, 5], &[2, 5]));
}

#[test]
fn test_edge_udiv_paths_against_u128() {
    // Narrow and wide inputs, smaller numerators and quotient boundaries.
    let cases: [([u64; 2], [u64; 2]); 9] = [
        ([12345, 0], [7, 0]),                 // fast path
        ([0x1234_5678_9abc_def0, 5], [3, 0]), // n == 1
        ([7, 0], [0, 1]),                     // quotient 0
        ([u64::MAX, u64::MAX], [0, 1]),       // power-of-two high word
        (
            [0x89a7_32a9_fb15_7c4d, 0x4ead_a203_9e48_443e],
            [0xbabf_3b71, 1],
        ), // n == 3
        ([u64::MAX, u64::MAX], [u64::MAX, 0x7fff_ffff_ffff_ffff]), // m == n+? close magnitudes
        ([0, 0x8000_0000_0000_0000], [1, 0x4000_0000_0000_0000]), // add-back prone shape
        ([u64::MAX, u64::MAX], [2, u64::MAX >> 1]), // qhat correction loop
        (
            [0xf7df_0315_d584_ad8d, 0xb9d5_5c0d_1d5c_fbbd],
            [0x8aa7_97db_ccee_6e96, 0x64_6be9],
        ),
    ];
    for (numer, denom) in cases {
        let mut q = [0u64; 2];
        let mut r = [0u64; 2];
        udiv128(&numer, &denom, &mut q, &mut r).unwrap();
        let nn = to_u128(&numer);
        let dd = to_u128(&denom);
        assert_eq!(to_u128(&q), nn / dd, "quotient of {nn:#x} / {dd:#x}");
        assert_eq!(to_u128(&r), nn % dd, "remainder of {nn:#x} % {dd:#x}");
    }
}

#[test]
fn test_edge_udiv_divide_by_zero_error() {
    // The multi-digit path reports the C++ LowlevelError("divide by 0").
    let mut q = [0u64; 2];
    let mut r = [0u64; 2];
    let err = udiv128(&[0, 1], &[0, 0], &mut q, &mut r).unwrap_err();
    assert_eq!(err, UnlaceError::lowlevel("divide by 0"));
    assert!(err.is_lowlevel());
}

#[test]
fn test_edge_set_u128() {
    let mut res = [0xffu64, 0xffu64];
    set_u128(&mut res, 0xdead_beef_dead_beef);
    assert_eq!(res, [0xdead_beef_dead_beef, 0]);
}

#[test]
fn test_edge_count_leading_zeros() {
    use unlace_base::address::count_leading_zeros;

    assert_eq!(count_leading_zeros(0), 64);
    assert_eq!(count_leading_zeros(1), 63);
    assert_eq!(count_leading_zeros(u64::MAX), 0);
    assert_eq!(count_leading_zeros(0x8000_0000_0000_0000), 0);
    assert_eq!(count_leading_zeros(0x1_0000_0000), 31);
    assert_eq!(count_leading_zeros(0xffff_ffff), 32);
    for bit in 0..64u32 {
        assert_eq!(count_leading_zeros(1u64 << bit), 63 - bit as i32);
    }
}
