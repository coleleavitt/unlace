use super::*;

#[test]
fn charset_recognizer() {
    // printable ASCII + the three whitespace escapes are content.
    assert!(is_string_char(b'A'));
    assert!(is_string_char(b' '));
    assert!(is_string_char(0x7e)); // '~', top of printable range
    assert!(is_string_char(b'\r'));
    assert!(is_string_char(b'\n'));
    assert!(is_string_char(b'\t'));
    // NUL, other control bytes, and high bytes are not content.
    assert!(!is_string_char(0x00));
    assert!(!is_string_char(0x01));
    assert!(!is_string_char(0x1f));
    assert!(!is_string_char(0x7f));
    assert!(!is_string_char(0x80));
    assert!(!is_string_char(0xff));
}

#[test]
fn matcher_basic() {
    // \x00 Hi \x00 Username:_ \x00 \x01\x02 abcdefgh \x00
    // - "Hi"        (len 2)  rejected (< min 5)
    // - "Username: " (len 10) accepted, NUL-terminated -> StringFact len 11
    // - "abcdefgh"  (len 8)  accepted, NUL-terminated -> StringFact len 9
    let data = b"\x00Hi\x00Username: \x00\x01\x02abcdefgh\x00";
    let vma = 0x1000u64;
    let out = scan_run(data, vma, 5);
    assert_eq!(out.len(), 2, "two strings should be detected");

    // "Username: " begins at index 4 (after \x00 Hi \x00).
    let username_off = 4u64;
    assert_eq!(
        out[0],
        StringFact {
            addr: vma + username_off,
            len: 11
        }
    );

    // "abcdefgh" begins after "...: \x00\x01\x02": index 4+11+2 = 17.
    let abc_off = (4 + 11 + 2) as u64;
    assert_eq!(
        out[1],
        StringFact {
            addr: vma + abc_off,
            len: 9
        }
    );
}

#[test]
fn code_section_strings_need_length_or_leading_padding() {
    let data = b"\x48\x8bD$x%\x00\x00\x00Hello\x00\x90abcdefghijklmnop\x00";
    assert!(
        !code_section_string(data, 2, 4),
        "D$x% after instruction bytes"
    );
    assert!(code_section_string(data, 9, 5), "Hello after zero padding");
    assert!(code_section_string(data, 16, 16), "a 16-character run");
    let over = b"\xe8\x0f\x00\x00\x00\x90kern\x00pad\x00\x58";
    assert!(
        code_section_string(over, 6, 4),
        "a string a call jumps over"
    );
    let back = b"\xe8\xf0\xff\xff\xff\x90kern\x00";
    assert!(
        !code_section_string(back, 6, 4),
        "a backward call target is not past the run"
    );
}

#[test]
fn non_terminated_run_rejected() {
    // A long printable run with no NUL terminator (reaches end of slice) is
    // rejected by requireNullEnd.
    let out = scan_run(b"abcdefghij", 0, 5);
    assert!(out.is_empty(), "non-NUL-terminated run must be rejected");
    // Terminated by a non-NUL out-of-charset byte is also rejected.
    let out2 = scan_run(b"abcdefghij\x01", 0, 5);
    assert!(
        out2.is_empty(),
        "run ended by a non-NUL byte must be rejected"
    );
}

#[test]
fn min_length_boundary() {
    // Exactly 5 visible chars + NUL -> accepted (len 6).
    let out5 = scan_run(b"abcde\x00", 0x2000, 5);
    assert_eq!(
        out5,
        vec![StringFact {
            addr: 0x2000,
            len: 6
        }]
    );
    // 4 visible chars + NUL -> rejected (< min 5).
    let out4 = scan_run(b"abcd\x00", 0x2000, 5);
    assert!(out4.is_empty(), "4-char string must be rejected at min 5");
}

#[test]
fn ascii_default_accepts_four_visible_characters() {
    let out = scan_run(b"quit\0abc\0", 0x2000, DEFAULT_ASCII_MIN_LEN);
    assert_eq!(
        out,
        vec![StringFact {
            addr: 0x2000,
            len: 5
        }]
    );
}

#[test]
fn scan_strings_over_fauxware() {
    // End-to-end fixture-level scan: the StringsAnalyzer port must surface the
    // three cited literals at their .rodata addresses.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let out = scan_strings(&file, DEFAULT_ASCII_MIN_LEN, false);

    let has = |addr: u64, len: u32| out.contains(&StringFact { addr, len });
    // "SOSNEAKY"   @ 0x4008d0 (8 visible + NUL = 9)
    assert!(
        has(0x4008d0, 9),
        "SOSNEAKY @ 0x4008d0 len 9 not detected: {out:?}"
    );
    // "Username: " @ 0x400915 (10 visible + NUL = 11)
    assert!(
        has(0x400915, 11),
        "\"Username: \" @ 0x400915 len 11 not detected: {out:?}"
    );
    // "Password: " @ 0x400920 (10 visible + NUL = 11)
    assert!(
        has(0x400920, 11),
        "\"Password: \" @ 0x400920 len 11 not detected: {out:?}"
    );
}

#[test]
fn scan_strings_over_pe_finds_hello() {
    // PR-10: the format-agnostic string scan must fire on a PE — the
    // `puts("hello")` literal lives in `.rdata` (`SectionKind::ReadOnlyData`,
    // `SectionFlags::Coff`), which the generalized `is_loaded_initialized`
    // now scans (the old `SHF_ALLOC`-only gate skipped every non-ELF section).
    // "hello" @ 0x140009000 (5 visible + NUL = 6).
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/pe_imports.exe");
    let bytes = std::fs::read(path).expect("read pe_imports.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse pe_imports.exe");
    assert_eq!(file.format(), object::BinaryFormat::Pe, "fixture is a PE");
    let out = scan_strings(&file, DEFAULT_ASCII_MIN_LEN, false);
    assert!(
        out.contains(&StringFact {
            addr: 0x140009000,
            len: 6
        }),
        "\"hello\" @ 0x140009000 len 6 not detected in PE .rdata: {out:?}"
    );
}

#[test]
fn elf_section_selection_is_unchanged() {
    // Parity guard: the ELF arm of `is_loaded_initialized` must match the old
    // `SHF_ALLOC`-only test exactly (the default ELF path is byte-identical).
    // Every SHF_ALLOC fauxware section is selected; `.comment` (no ALLOC) and
    // `.bss` (UninitializedData) are not.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    const SHF_ALLOC: u64 = 0x2;
    for sec in file.sections() {
        let old = !matches!(sec.kind(), SectionKind::UninitializedData)
            && match sec.flags() {
                object::SectionFlags::Elf { sh_flags } => sh_flags & SHF_ALLOC != 0,
                _ => false,
            };
        assert_eq!(
            is_loaded_initialized(&sec),
            old,
            "ELF section selection changed for {:?}",
            sec.name()
        );
    }
}
