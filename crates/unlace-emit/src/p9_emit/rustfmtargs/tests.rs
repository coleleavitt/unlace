use super::*;

fn decode(mut bytes: &[u8]) -> Option<Template> {
    decode_template(false, |n| {
        let value = bytes.get(..n)?.to_vec();
        bytes = &bytes[n..];
        Some(value)
    })
}

#[test]
fn templates_preserve_literals_and_argument_indices() {
    assert_eq!(
        decode(b"\x08value = \xc0\x01\n\0")
            .unwrap()
            .render(
                MacroKind::Print(false),
                &[Formatter {
                    primitive: "u64",
                    kind: Trait::Display
                }; 16]
            )
            .unwrap(),
        ("println!", "\"value = {}\"".into())
    );
    assert_eq!(
        decode(b"\xc0\x01 \xc0\x01 \xc8\0\0\x01\n\0")
            .unwrap()
            .render(
                MacroKind::Print(false),
                &[Formatter {
                    primitive: "u64",
                    kind: Trait::Display
                }; 16]
            )
            .unwrap(),
        ("println!", "\"{0} {1} {0}\"".into())
    );
    assert_eq!(
        decode(b"\x03{\"\\\xc0\x03}\0\n\0")
            .unwrap()
            .render(
                MacroKind::Print(true),
                &[Formatter {
                    primitive: "u64",
                    kind: Trait::Display
                }; 16]
            )
            .unwrap(),
        ("eprintln!", "\"{{\\\"\\\\{}}}\\0\"".into())
    );
    assert_eq!(
        decode(b"\x80\x02\0ok\xc0\0")
            .unwrap()
            .render(
                MacroKind::Print(false),
                &[Formatter {
                    primitive: "u64",
                    kind: Trait::Display
                }; 16]
            )
            .unwrap(),
        ("print!", "\"ok{}\"".into())
    );
}

#[test]
fn unsupported_or_malformed_templates_are_refused() {
    for bytes in [
        &b""[..],
        b"\0",
        b"\x01x\0",
        b"\xc1\x20\0\0\x60\0",
        b"\x81\0",
        b"\xc0",
        b"\x80\x01",
        b"\x01\xff\xc0\0",
        b"\xc8\x10\0\0",
        b"\xc8\x01\0\0",
        b"\x80\0\0\xc0\0",
    ] {
        assert!(decode(bytes).is_none(), "{bytes:?}");
    }
    assert!(decode(&[0xc0; 129]).is_none());
}

#[test]
fn only_unambiguous_full_display_identities_qualify() {
    let display = |ty| format!("core::fmt::num::imp::<impl core::fmt::Display for {ty}>::fmt");
    assert_eq!(
        formatter_symbols([(0, Some(display("i64")))]).get(&0),
        Some(&"i64")
    );
    for name in [
        "fmt",
        "core::fmt::num::imp::u64::fmt",
        "core::fmt::num::imp::<impl core::fmt::LowerExp for u64>::fmt",
        "core::fmt::num::<impl core::fmt::Debug for u64>::fmt",
        "<T as core::fmt::Display>::fmt",
    ] {
        assert!(formatter_symbols([(0, Some(name.into()))]).is_empty());
    }
    let found = formatter_symbols([
        (1, Some(display("u64"))),
        (1, Some(display("usize"))),
        (2, Some(display("u64"))),
        (2, None),
        (2, Some(display("u64"))),
        (3, Some(display("u64"))),
        (3, Some(display("i64"))),
    ]);
    assert_eq!(found, BTreeMap::from([(1, "u64")]));
}
