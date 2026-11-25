use super::*;

#[test]
#[allow(clippy::approx_constant)] // literal from unlace_goldengen.cc, not PI
fn test_cfmt_default_basic() {
    // The dec-row forms of tests/golden/vectors/float.csv.
    assert_eq!(ostream_default(0.0), "0");
    assert_eq!(ostream_default(-0.0), "-0");
    assert_eq!(ostream_default(1.0), "1");
    assert_eq!(ostream_default(-1.0), "-1");
    assert_eq!(ostream_default(0.5), "0.5");
    assert_eq!(ostream_default(3.14159265358979), "3.14159");
    assert_eq!(ostream_default(1e-10), "1e-10");
    assert_eq!(ostream_default(1e10), "1e+10");
}

#[test]
fn test_cfmt_default_boundaries_of_scientific() {
    // %g switches to scientific when X < -4 or X >= P (P == 6).
    assert_eq!(ostream_default(0.0001), "0.0001"); // X == -4: fixed
    assert_eq!(ostream_default(0.00001), "1e-05"); // X == -5: scientific
    assert_eq!(ostream_default(100000.0), "100000"); // X == 5: fixed
    assert_eq!(ostream_default(1000000.0), "1e+06"); // X == 6: scientific
    // Rounding can bump the exponent across the boundary.
    assert_eq!(ostream_default(999999.9), "1e+06");
    assert_eq!(ostream_default(0.000099999999), "0.0001");
}

#[test]
fn test_cfmt_default_subnormals_and_extremes() {
    assert_eq!(ostream_default(f64::MIN_POSITIVE), "2.22507e-308");
    assert_eq!(ostream_default(5e-324), "4.94066e-324"); // smallest subnormal
    assert_eq!(ostream_default(f64::MAX), "1.79769e+308");
    assert_eq!(ostream_default(1.401298464324817e-45), "1.4013e-45");
}

#[test]
fn test_cfmt_special_values() {
    assert_eq!(ostream_default(f64::INFINITY), "inf");
    assert_eq!(ostream_default(f64::NEG_INFINITY), "-inf");
    assert_eq!(ostream_default(f64::NAN), "nan");
    assert_eq!(ostream_default(-f64::NAN), "-nan");
    assert_eq!(ostream_scientific(f64::INFINITY, 14), "inf");
    assert_eq!(ostream_scientific(-f64::NAN, 14), "-nan");
    assert_eq!(ostream_general(f64::NEG_INFINITY, 17), "-inf");
}

#[test]
fn test_cfmt_general_precision_sweep() {
    // The printDecimal precision ladder (float.cc) for f32 third = 1/3.
    let third32 = f64::from(1.0f32 / 3.0f32);
    assert_eq!(ostream_general(third32, 6), "0.333333");
    assert_eq!(ostream_general(third32, 8), "0.33333334");
    // f64 sixth at max double precision.
    assert_eq!(ostream_general(1.0 / 6.0, 17), "0.16666666666666666");
    assert_eq!(ostream_general(f64::MAX, 15), "1.79769313486232e+308");
    assert_eq!(ostream_general(0.1, 15), "0.1");
    assert_eq!(ostream_general(0.25, 6), "0.25");
    // Precision 0 is taken as 1.
    assert_eq!(ostream_general(1234.0, 0), "1e+03");
}

#[test]
fn test_cfmt_scientific_keeps_trailing_zeros() {
    // ios::scientific does NOT trim (testfloatemu's forcesci case).
    assert_eq!(ostream_scientific(0.123, 14), "1.23000000000000e-01");
    assert_eq!(ostream_scientific(1.0, 5), "1.00000e+00");
    assert_eq!(ostream_scientific(-0.0, 2), "-0.00e+00");
    assert_eq!(ostream_scientific(1e100, 0), "1e+100");
}

#[test]
fn test_cfmt_ties_round_to_even() {
    // glibc (and Rust) round the exact decimal expansion to nearest,
    // ties to even.
    assert_eq!(ostream_general(2.5, 1), "2");
    assert_eq!(ostream_general(3.5, 1), "4");
    assert_eq!(ostream_general(0.125, 2), "0.12");
    assert_eq!(ostream_scientific(0.125, 1), "1.2e-01");
}
