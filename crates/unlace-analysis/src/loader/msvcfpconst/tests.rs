use super::*;

/// Round-trip the decoded bytes back to the number they encode.
fn value_of(c: &FpConst) -> f64 {
    if c.size == 4 {
        f32::from_le_bytes(c.bytes[..4].try_into().unwrap()) as f64
    } else {
        f64::from_le_bytes(c.bytes[..8].try_into().unwrap())
    }
}

/// The real constants out of a Command & Conquer `bounce.obj`. These are not
/// synthetic: each is a recognisable literal from the original source, which
/// is what makes them a sound oracle for the decoder.
///
/// The expected values are **exact** — each was re-derived with rational
/// arithmetic and is the `f64` the datum denotes to the last bit, so the
/// comparison is `==` rather than a tolerance. Two are not the round numbers
/// they look like: `3fe08000000200000000` is 2^-31 + 2^-61, not 2^-31, and
/// `3fef8000800000000000` is 2^-16 + 2^-32, not 2^-16 (both are the leading
/// terms of a reciprocal the compiler folded).
#[test]
fn decodes_the_constants_from_a_real_msvc_object() {
    let cases: &[(&str, f64)] = &[
        ("__real@8@3fff8000000000000000", 1.0),
        ("__real@8@4000a000000000000000", 2.5),
        ("__real@8@4000c000000000000000", 3.0),
        ("__real@8@00000000000000000000", 0.0),
        ("__real@8@3ffec90fdaa22168c000", std::f64::consts::FRAC_PI_4),
        ("__real@8@4001c90fdaa22168c000", std::f64::consts::TAU),
        // 2^-31 + 2^-61: the scale turning a 31-bit random integer into [0,1).
        ("__real@8@3fe08000000200000000", 4.656612877414201e-10),
        ("__real@8@bff39d495182a9930800", -0.0003),
        ("__real@8@bff2d1b71758e2196800", -0.0002),
    ];
    for (name, want) in cases {
        let c = decode(name).unwrap_or_else(|| panic!("{name} must decode"));
        assert_eq!(c.size, 8, "{name}");
        assert_eq!(value_of(&c), *want, "{name}");
    }
}

/// The `@4@` form stores a 4-byte `float`, so the datum must be narrowed --
/// storing 8 bytes would overwrite the neighbouring slot and read back as a
/// wildly different number.
#[test]
fn the_size_field_selects_the_storage_width() {
    // 2^-16 + 2^-32, spelled as an 80-bit datum but stored as a float. Both
    // terms survive the narrowing (17 significand bits, `float` has 24), so
    // this is exact too.
    let c = decode("__real@4@3fef8000800000000000").expect("must decode");
    assert_eq!(c.size, 4);
    assert_eq!(c.bytes.len(), 4);
    assert_eq!(value_of(&c), 1.5259021893143654e-05);

    let c = decode("__real@4@40069600000000000000").expect("must decode");
    assert_eq!(c.size, 4);
    assert_eq!(value_of(&c), 150.0);

    let c = decode("__real@8@40069600000000000000").expect("must decode");
    assert_eq!(c.size, 8);
    assert_eq!(c.bytes.len(), 8);
    assert_eq!(value_of(&c), 150.0);
}

/// Sign is carried by the top bit of the exponent field.
#[test]
fn negative_constants_decode() {
    let c = decode("__real@8@bff39d495182a9930800").expect("must decode");
    assert_eq!(value_of(&c), -0.0003);
}

/// The bare-bits spellings: 16 hex digits are `double` bits, 8 are `float`
/// bits. The 8-hex form is what MSVC has emitted for a `float` literal since
/// VS2005, so refusing it drops every float constant in a modern object.
#[test]
fn the_bare_ieee_forms_decode() {
    let c = decode("__real@3ff0000000000000").expect("must decode");
    assert_eq!(c.size, 8);
    assert_eq!(value_of(&c), 1.0);

    let c = decode("__real@3f800000").expect("must decode");
    assert_eq!(c.size, 4);
    assert_eq!(c.bytes, vec![0x00, 0x00, 0x80, 0x3f]);
    assert_eq!(value_of(&c), 1.0);

    let c = decode("__real@bf000000").expect("must decode");
    assert_eq!(c.size, 4);
    assert_eq!(value_of(&c), -0.5);
}

/// The x87 encoding classes that have no faithful `f64` image are refused,
/// not approximated: an Inf/NaN exponent used to scale silently to `+inf`,
/// and a denormal used to decode two times too large.
#[test]
fn unrepresentable_x87_encodings_are_refused() {
    for name in [
        "__real@8@7fff8000000000000000", // +inf
        "__real@8@ffff8000000000000000", // -inf
        "__real@8@7fffc000000000000000", // quiet NaN
        "__real@8@00000000000000000001", // denormal (true scale 2^(-16382-63))
        "__real@8@00008000000000000000", // pseudo-denormal
        "__real@8@40060000000000000000", // unnormal: integer bit clear
        "__real@8@7ffe8000000000000000", // 2^16383 -- overflows f64
        "__real@4@414b8000000000000000", // 2^332 -- fine as f64, inf as f32
        "__real@4@3f378000000000000000", // 2^-200 -- fine as f64, flushes to 0 as f32
    ] {
        assert!(decode(name).is_none(), "{name} must NOT decode");
    }
    // A signed zero is a zero in both encodings, and stays decodable.
    assert_eq!(
        value_of(&decode("__real@8@80000000000000000000").unwrap()),
        0.0
    );
}

/// Anything that is not this mangling must be refused rather than guessed --
/// a wrong constant is worse than an opaque address. `__xmm@` in particular
/// is a real MSVC symbol with a different payload.
#[test]
fn non_fp_constant_symbols_are_refused() {
    for name in [
        "__ftol",
        "main",
        "__real",
        "__real@",
        "__real@8@",                      // no payload
        "__real@8@3fff80000000000000",    // 18 digits, not 20
        "__real@8@zzzzzzzzzzzzzzzzzzzz",  // not hex
        "__real@16@3fff8000000000000000", // no 16-byte float storage
        "__real@08@3fff8000000000000000", // the width is spelled `8`, exactly
        "__xmm@00000000000000000000000000000000",
        "__real@3ff00000000000",  // 14 digits: neither 8 nor 16
        "__real@3ff000000000000", // 15 digits
        "__real@3f80000",         // 7 digits
        "__real@3f8000000",       // 9 digits
    ] {
        assert!(decode(name).is_none(), "{name} must NOT decode");
    }
}
