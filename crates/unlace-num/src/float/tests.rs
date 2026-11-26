use super::*;

#[test]
fn nan_operands_keep_their_sign_and_use_canonical_payloads() {
    let binary: [fn(&FloatFormat, u64, u64) -> u64; 4] = [
        FloatFormat::op_add,
        FloatFormat::op_sub,
        FloatFormat::op_mult,
        FloatFormat::op_div,
    ];
    let unary: [fn(&FloatFormat, u64) -> u64; 4] = [
        FloatFormat::op_sqrt,
        FloatFormat::op_ceil,
        FloatFormat::op_floor,
        FloatFormat::op_round,
    ];
    for (size, positive, negative, positive_signal, negative_signal, one) in [
        (
            4,
            0x7fc0_0000,
            0xffc0_0000,
            0x7f80_0001,
            0xff80_0001,
            0x3f80_0000,
        ),
        (
            8,
            0x7ff8_0000_0000_0000,
            0xfff8_0000_0000_0000,
            0x7ff0_0000_0000_0001,
            0xfff0_0000_0000_0001,
            0x3ff0_0000_0000_0000,
        ),
    ] {
        let format = FloatFormat::new(size);
        for operation in binary {
            for (a, b, expected) in [
                (positive, negative, positive),
                (negative, positive, negative),
                (positive_signal, negative_signal, positive),
                (negative_signal, positive_signal, negative),
                (one, positive_signal, positive),
                (one, negative_signal, negative),
                (positive_signal, one, positive),
                (negative_signal, one, negative),
            ] {
                assert_eq!(
                    operation(&format, a, b),
                    expected,
                    "size={size}, {a:#x}, {b:#x}"
                );
            }
        }
        for operation in unary {
            for (input, expected) in [
                (positive, positive),
                (negative, negative),
                (positive_signal, positive),
                (negative_signal, negative),
            ] {
                assert_eq!(
                    operation(&format, input),
                    expected,
                    "size={size}, {input:#x}"
                );
            }
        }
    }
}

// Edge tests owned by this item.  The C++ TEST(...) suites of
// testfloatemu.cc are ported by a different item; names here are
// deliberately distinct.

#[test]
#[allow(clippy::approx_constant)] // literal from unlace_goldengen.cc, not PI
fn test_edge_ldexp_frexp_roundtrip() {
    // frexp/ldexp transcriptions: exact roundtrip across the range,
    // including subnormals.
    for &v in &[
        1.0,
        0.5,
        3.14159265358979,
        1e-300,
        1e300,
        f64::MIN_POSITIVE,
        5e-324,
        f64::MAX,
        1.401298464324817e-45,
    ] {
        let (m, e) = frexp(v);
        assert!((0.5..1.0).contains(&m), "frexp({v}) mantissa {m}");
        assert_eq!(ldexp(m, e), v, "roundtrip of {v}");
    }
    // ldexp rounding into the subnormal range: 2^-1074 is the smallest
    // subnormal.  1.0*2^-1075 is an exact tie -> rounds to even (zero);
    // 1.5*2^-1075 is above the midpoint -> rounds up to 2^-1074.
    assert_eq!(ldexp(1.0, -1074), 5e-324);
    assert_eq!(ldexp(1.0, -1075), 0.0);
    assert_eq!(ldexp(1.5, -1075), 5e-324);
    assert_eq!(ldexp(1.0, 1024), f64::INFINITY);
    assert_eq!(ldexp(-1.0, 1024), f64::NEG_INFINITY);
}

#[test]
fn binary16_encodes_and_decodes() {
    let fmt2 = FloatFormat::new(2);
    assert_eq!(fmt2.get_size(), 2);
    assert_eq!(fmt2.get_host_float(0x3c00), (1.0, floatclass::normalized));
    assert_eq!(fmt2.get_host_float(0x4100), (2.5, floatclass::normalized));
    assert_eq!(fmt2.get_host_float(0xc000), (-2.0, floatclass::normalized));
    assert_eq!(
        fmt2.get_host_float(0x7bff),
        (65504.0, floatclass::normalized)
    );
    assert_eq!(fmt2.get_class(0x7c00), floatclass::infinity);
    assert_eq!(fmt2.get_class(0x7e00), floatclass::nan);
    assert_eq!(fmt2.get_class(0x0001), floatclass::denormalized);
    assert_eq!(fmt2.get_encoding(2.5), 0x4100);
    assert_eq!(fmt2.get_encoding(-0.5), 0xb800);
    assert_eq!(fmt2.op_add(0x3c00, 0x3c00), 0x4000);
    let fmt4 = FloatFormat::new(4);
    assert_eq!(fmt4.convert_encoding(0x4100, &fmt2), 0x4020_0000);
}

#[test]
fn test_edge_both_zeros() {
    let fmt4 = FloatFormat::new(4);
    let fmt8 = FloatFormat::new(8);
    assert_eq!(fmt4.get_encoding(0.0), 0x0000_0000);
    assert_eq!(fmt4.get_encoding(-0.0), 0x8000_0000);
    assert_eq!(fmt8.get_encoding(-0.0), 0x8000_0000_0000_0000);
    assert_eq!(fmt4.get_class(0x8000_0000), floatclass::zero);
    let (v, tp) = fmt4.get_host_float(0x8000_0000);
    assert_eq!(tp, floatclass::zero);
    assert!(v == 0.0 && v.is_sign_negative());
    // -0 + +0 == +0 ; -0 + -0 == -0 (IEEE round-to-nearest)
    assert_eq!(fmt4.op_add(0x8000_0000, 0x0000_0000), 0x0000_0000);
    assert_eq!(fmt4.op_add(0x8000_0000, 0x8000_0000), 0x8000_0000);
    // 0 == -0 compares equal
    assert_eq!(fmt4.op_equal(0x0, 0x8000_0000), 1);
    assert_eq!(fmt4.op_less(0x8000_0000, 0x0), 0);
}

#[test]
fn test_edge_subnormal_encode_decode() {
    let fmt4 = FloatFormat::new(4);
    // Smallest and largest f32 subnormals roundtrip through the host.
    for enc in [0x1u64, 0x7f_ffffu64, 0x2u64, 0x40_0000u64] {
        let (host, tp) = fmt4.get_host_float(enc);
        assert_eq!(tp, floatclass::denormalized, "enc {enc:#x}");
        assert_eq!(fmt4.get_encoding(host), enc, "enc {enc:#x}");
    }
    // f64 subnormals
    let fmt8 = FloatFormat::new(8);
    for enc in [0x1u64, 0xf_ffff_ffff_ffffu64] {
        let (host, tp) = fmt8.get_host_float(enc);
        assert_eq!(tp, floatclass::denormalized, "enc {enc:#x}");
        assert_eq!(fmt8.get_encoding(host), enc, "enc {enc:#x}");
    }
    // A double too small for float collapses to (signed) zero.
    assert_eq!(fmt4.get_encoding(5e-324), 0x0);
    assert_eq!(fmt4.get_encoding(-5e-324), 0x8000_0000);
    // float2float 8->4 of a value inside f32's subnormal range.
    let sub32 = fmt8.get_encoding(f64::from(f32::from_bits(0x0040_0000)));
    assert_eq!(fmt8.op_float2float(sub32, &fmt4), 0x0040_0000);
}

#[test]
fn test_edge_inf_nan_arithmetic() {
    let fmt4 = FloatFormat::new(4);
    const PINF: u64 = 0x7f80_0000;
    const NINF: u64 = 0xff80_0000;
    const QNAN: u64 = 0x7fc0_0000;
    const NQNAN: u64 = 0xffc0_0000;
    // inf + inf = inf ; inf + -inf = NaN (x86 default QNaN, negative)
    assert_eq!(fmt4.op_add(PINF, PINF), PINF);
    assert_eq!(fmt4.op_add(PINF, NINF), NQNAN);
    assert_eq!(fmt4.op_sub(PINF, PINF), NQNAN);
    // 0 * inf, 0/0, inf/inf are NaN
    assert_eq!(fmt4.op_mult(0x0, PINF), NQNAN);
    assert_eq!(fmt4.op_div(0x0, 0x0), NQNAN);
    assert_eq!(fmt4.op_div(PINF, PINF), NQNAN);
    // 1/0 = inf, -1/0 = -inf
    let one = fmt4.get_encoding(1.0);
    let neg_one = fmt4.get_encoding(-1.0);
    assert_eq!(fmt4.op_div(one, 0x0), PINF);
    assert_eq!(fmt4.op_div(neg_one, 0x0), NINF);
    // sqrt(-1) is the negative default QNaN; sqrt(-0) is -0.
    assert_eq!(fmt4.op_sqrt(neg_one), NQNAN);
    assert_eq!(fmt4.op_sqrt(0x8000_0000), 0x8000_0000);
    // NaN propagation preserves the input sign and canonicalizes the payload.
    assert_eq!(fmt4.op_add(QNAN, one), QNAN);
    assert_eq!(fmt4.op_nan(QNAN), 1);
    assert_eq!(fmt4.op_nan(PINF), 0);
    // NaN compares: == false, != true, < false, <= false
    assert_eq!(fmt4.op_equal(QNAN, QNAN), 0);
    assert_eq!(fmt4.op_not_equal(QNAN, QNAN), 1);
    assert_eq!(fmt4.op_less(QNAN, one), 0);
    assert_eq!(fmt4.op_less_equal(QNAN, QNAN), 0);
}

#[test]
fn test_edge_trunc_x86_cast_semantics() {
    let fmt8 = FloatFormat::new(8);
    let fmt4 = FloatFormat::new(4);
    // NaN / inf / out-of-range all produce 0x8000000000000000 (cvttsd2si)
    assert_eq!(
        fmt8.op_trunc(0x7ff8_0000_0000_0000, 8),
        0x8000_0000_0000_0000
    );
    assert_eq!(
        fmt8.op_trunc(0x7ff0_0000_0000_0000, 8),
        0x8000_0000_0000_0000
    );
    assert_eq!(
        fmt8.op_trunc(0xfff0_0000_0000_0000, 8),
        0x8000_0000_0000_0000
    );
    assert_eq!(
        fmt8.op_trunc(fmt8.get_encoding(1e300), 8),
        0x8000_0000_0000_0000
    );
    assert_eq!(fmt4.op_trunc(0x7f7f_ffff, 8), 0x8000_0000_0000_0000); // 3.4e38
    // ... and the same bit pattern masked for smaller outputs.
    assert_eq!(fmt8.op_trunc(0x7ff8_0000_0000_0000, 4), 0x0);
    assert_eq!(fmt8.op_trunc(0xfff0_0000_0000_0000, 1), 0x0);
    // In-range truncation goes toward zero; negatives wrap into the mask.
    assert_eq!(fmt8.op_trunc(fmt8.get_encoding(-1.0), 2), 0xffff);
    assert_eq!(fmt8.op_trunc(fmt8.get_encoding(-2.7), 8), (-2i64) as u64);
    assert_eq!(fmt8.op_trunc(fmt8.get_encoding(2.7), 1), 0x2);
    // -2^63 is exactly representable and in range.
    assert_eq!(
        fmt8.op_trunc(fmt8.get_encoding(-9.223372036854776e18), 8),
        0x8000_0000_0000_0000
    );
}

#[test]
fn test_edge_int2float_sign_extension() {
    let fmt4 = FloatFormat::new(4);
    // 0xff as a 1-byte signed integer is -1 ...
    assert_eq!(fmt4.op_int2float(0xff, 1), fmt4.get_encoding(-1.0));
    // ... but as a 2-byte signed integer it is 255.
    assert_eq!(fmt4.op_int2float(0xff, 2), fmt4.get_encoding(255.0));
    // i64 min
    let fmt8 = FloatFormat::new(8);
    assert_eq!(
        fmt8.op_int2float(0x8000_0000_0000_0000, 8),
        fmt8.get_encoding(-9.223372036854776e18)
    );
}

#[test]
fn test_edge_print_decimal_roundtrip() {
    // Shortest-roundtrip selection (testfloatemu-style values, distinct
    // assertion set -- that suite is ported by another item).
    let ff4 = FloatFormat::new(4);
    assert_eq!(ff4.print_decimal(f64::from(0.25f32), false), "0.25");
    assert_eq!(
        ff4.print_decimal(f64::from(1.0f32 / 3.0f32), false),
        "0.33333334"
    );
    let ff8 = FloatFormat::new(8);
    assert_eq!(ff8.print_decimal(0.1, false), "0.1");
    assert_eq!(ff8.print_decimal(1.0 / 6.0, false), "0.16666666666666666");
    assert_eq!(ff8.print_decimal(0.123, true), "1.23000000000000e-01");
    // Non-finite values format as glibc text in every iteration.
    assert_eq!(ff8.print_decimal(f64::INFINITY, false), "inf");
    assert_eq!(ff8.print_decimal(f64::NAN, false), "nan");
}

#[test]
fn test_edge_get_class_table() {
    let fmt4 = FloatFormat::new(4);
    assert_eq!(fmt4.get_class(0x0), floatclass::zero);
    assert_eq!(fmt4.get_class(0x8000_0000), floatclass::zero);
    assert_eq!(fmt4.get_class(0x1), floatclass::denormalized);
    assert_eq!(fmt4.get_class(0x0080_0000), floatclass::normalized);
    assert_eq!(fmt4.get_class(0x7f80_0000), floatclass::infinity);
    assert_eq!(fmt4.get_class(0x7fc0_0000), floatclass::nan);
    assert_eq!(fmt4.get_class(0xff80_0001), floatclass::nan); // signaling-bit pattern
    assert_eq!(fmt4.get_exponent(0x3f80_0000), 0);
}

#[test]
fn print_decimal_double_max_takes_the_round_trip_digits() {
    let fmt8 = FloatFormat::new(8);
    assert_eq!(
        fmt8.print_decimal(f64::MAX, false),
        "1.7976931348623157e+308"
    );
}
