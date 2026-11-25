use super::*;

fn options(head: u8, flags: u32, tail: &[u8]) -> Option<Options> {
    let mut bytes = flags.to_le_bytes().to_vec();
    bytes.extend_from_slice(tail);
    let mut bytes = bytes.as_slice();
    Options::decode(head, |n| {
        let value = bytes.get(..n)?.to_vec();
        bytes = &bytes[n..];
        Some(value)
    })
}

#[test]
fn full_integer_traits_keep_width_signedness_and_alias_conflicts() {
    let symbol = |kind, ty| {
        let imp = if matches!(kind, "Display" | "LowerExp" | "UpperExp") {
            "imp::"
        } else {
            ""
        };
        format!("core::fmt::num::{imp}<impl core::fmt::{kind} for {ty}>::fmt")
    };
    for kind in [
        "Display", "Debug", "LowerHex", "UpperHex", "Octal", "Binary", "LowerExp", "UpperExp",
    ] {
        for ty in ["u8", "u16", "u32", "u64", "i8", "i16", "i32", "i64"] {
            assert_eq!(classify(&symbol(kind, ty)).unwrap().primitive, ty);
        }
        for ty in ["u128", "i128", "f32", "f64", "&u32", "bool", "char"] {
            assert!(classify(&symbol(kind, ty)).is_none());
        }
    }
    assert_eq!(
        formatter_symbols([
            (1, Some(symbol("LowerHex", "usize"))),
            (1, Some(symbol("LowerHex", "u64"))),
            (2, Some(symbol("Display", "u32"))),
            (2, Some(symbol("Debug", "u32"))),
            (3, Some(symbol("Octal", "i16"))),
            (3, Some(symbol("Octal", "u16"))),
            (4, Some(symbol("Binary", "u64"))),
            (4, None),
            (4, Some(symbol("Binary", "u64"))),
            (5, None),
            (5, Some(symbol("Display", "i32"))),
            (5, Some(symbol("Display", "i32"))),
        ]),
        BTreeMap::from([(
            1,
            Formatter {
                primitive: "u64",
                kind: Trait::LowerHex
            }
        )])
    );
    for name in [
        "fmt",
        "core::fmt::num::u32::fmt",
        "core::fmt::num::imp::<impl core::fmt::Debug for u32>::fmt",
        "<T as core::fmt::Debug>::fmt",
    ] {
        assert!(classify(name).is_none());
    }
}

#[test]
fn static_fields_render_exact_specs_and_zero_defaults() {
    assert_eq!(
        options(0xc3, 0x6900_0020, &[8, 0])
            .unwrap()
            .render(Trait::LowerHex)
            .as_deref(),
        Some("08x")
    );
    assert_eq!(
        options(0xc3, 0x28a0_0020, &[7, 0])
            .unwrap()
            .render(Trait::Display)
            .as_deref(),
        Some(">+#7")
    );
    assert_eq!(
        options(0xc7, 0x5801_f980, &[10, 0, 3, 0])
            .unwrap()
            .render(Trait::Display)
            .as_deref(),
        Some("🦀^10.3")
    );
    assert_eq!(
        options(0xc1, 0x7280_0020, &[])
            .unwrap()
            .render(Trait::Debug)
            .as_deref(),
        Some("#.0x?")
    );
    assert_eq!(
        options(0xc1, 0x6900_0020, &[])
            .unwrap()
            .render(Trait::Display)
            .as_deref(),
        Some("00")
    );
    assert_eq!(
        options(0xc1, 0x6280_0020, &[])
            .unwrap()
            .render(Trait::Display),
        None
    );
    for (kind, spec) in [
        (Trait::Display, ""),
        (Trait::Debug, "?"),
        (Trait::LowerHex, "x"),
        (Trait::UpperHex, "X"),
        (Trait::Octal, "o"),
        (Trait::Binary, "b"),
        (Trait::LowerExp, "e"),
        (Trait::UpperExp, "E"),
    ] {
        assert_eq!(Options::default().render(kind).as_deref(), Some(spec));
    }
}

#[test]
fn invalid_or_dynamic_fields_are_refused() {
    for (head, flags, tail) in [
        (0xc1, 0x8000_0020, &[][..]),
        (0xc1, 0x6000_d800, &[][..]),
        (0xc1, 0x6011_0000, &[][..]),
        (0xc1, 0x6000_007b, &[][..]),
        (0xc1, 0x0000_007d, &[][..]),
        (0xc1, 0x6000_002e, &[][..]),
        (0xc1, 0x6060_0020, &[][..]),
        (0xc1, 0x6600_0020, &[][..]),
        (0xc3, DEFAULT_FLAGS, &[8, 0][..]),
        (0xc5, DEFAULT_FLAGS, &[3, 0][..]),
        (0xc3, DEFAULT_FLAGS | WIDTH, &[8][..]),
        (0xc5, DEFAULT_FLAGS | PRECISION, &[3][..]),
        (0xc1, DEFAULT_FLAGS | WIDTH, &[][..]),
    ] {
        assert!(options(head, flags, tail).is_none(), "{head:#x} {flags:#x}");
    }
    for head in [0, 0x80, 0xd0, 0xe0, 0xff] {
        assert!(Options::decode(head, |_| panic!("must reject before reading")).is_none());
    }
    for n in 0..4 {
        assert!(Options::decode(0xc1, |_| Some(vec![0; n])).is_none());
    }
}
