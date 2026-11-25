use super::*;
use unlace_base::address::{AddrSpacePtr, Address};
use unlace_console::engine::{EntryProvenance, ObjectLocation};

#[test]
fn records_and_optional_limits_match_legacy_bytes() {
    let entries = [
        FunctionEntry {
            name: "函数🚀\x7f\n\"\\".into(),
            addr: Address::from_space_ptr(AddrSpacePtr::Null, 0),
            aliases: vec!["é\t".into(), "别名".into()],
            size: u64::MAX,
            object_location: Some(ObjectLocation {
                section_index: 7,
                section: "__text\u{2028}".into(),
                offset: u64::MAX,
            }),
            provenance: EntryProvenance::Mapped,
            binding: None,
        },
        FunctionEntry {
            name: String::new(),
            addr: Address::from_space_ptr(AddrSpacePtr::Null, u64::MAX),
            aliases: vec![],
            size: 0,
            object_location: None,
            provenance: EntryProvenance::Mapped,
            binding: None,
        },
    ];
    let limits = Json::Object(vec![
        (
            "maxinstruction".into(),
            Json::Number("18446744073709551615".into()),
        ),
        ("jumptablemax".into(), Json::Number("0".into())),
        (
            "over".into(),
            Json::Array(vec![Json::Object(vec![
                ("name".into(), Json::Str("é".into())),
                ("over_maxinstruction".into(), Json::Bool(true)),
                ("switches_over_jumptablemax".into(), Json::Array(vec![])),
            ])]),
        ),
    ]);
    for entries in [&entries[..0], &entries[..1], &entries[..]] {
        for error in [None, Some("失败\0\x1f")] {
            for limits in [None, Some(&limits)] {
                let display_address = |address| address ^ 0x1234;
                let declared = Declared::default();
                let mut bytes = Vec::new();
                write(
                    &mut bytes,
                    "输入🚀",
                    entries,
                    123,
                    error,
                    limits,
                    &display_address,
                    &declared,
                )
                .unwrap();
                let expected = super::super::functions_json(
                    "输入🚀",
                    entries,
                    123,
                    error,
                    limits,
                    &display_address,
                    &declared,
                );
                assert_eq!(bytes, expected.as_bytes());
            }
        }
    }
}

#[test]
fn every_unicode_scalar_has_the_legacy_escape_spelling() {
    let text: String = (0..=0x10ffff).filter_map(char::from_u32).collect();
    let mut bytes = Vec::new();
    let mut out = io::BufWriter::with_capacity(1 << 16, &mut bytes);
    let mut serializer =
        serde_json::Serializer::with_formatter(&mut out, AsciiPretty(PrettyFormatter::new()));
    text.serialize(&mut serializer).unwrap();
    out.flush().unwrap();
    drop(out);
    assert_eq!(
        bytes,
        crate::jsonfmt::dumps_indent2(&Json::Str(text)).as_bytes()
    );
}

#[test]
fn write_errors_preserve_their_kind_and_run_verdict() {
    struct FailingWriter(io::ErrorKind);

    impl Write for FailingWriter {
        fn write(&mut self, _: &[u8]) -> io::Result<usize> {
            Err(io::Error::new(self.0, "output failure"))
        }

        fn flush(&mut self) -> io::Result<()> {
            Ok(())
        }
    }

    for kind in [io::ErrorKind::BrokenPipe, io::ErrorKind::PermissionDenied] {
        for run_error in [None, Some("no functions discovered")] {
            let result = write(
                &mut FailingWriter(kind),
                "fixture",
                &[],
                0,
                run_error,
                None,
                &|address| address,
                &Declared::default(),
            );
            assert_eq!(result.as_ref().unwrap_err().kind(), kind);
            let status = super::super::finish_with_run_error(result, run_error);
            let expected = if kind == io::ErrorKind::BrokenPipe {
                i32::from(run_error.is_some())
            } else {
                1
            };
            assert_eq!(status, expected);
        }
    }
}
