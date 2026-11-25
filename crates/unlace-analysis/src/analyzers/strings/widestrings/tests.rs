use super::super::{DEFAULT_WIDE_MIN_LEN, scan_run};
use super::*;

#[test]
fn utf16_run_is_the_ascii_matcher_widened() {
    // "ntdll.dll" as UTF-16LE, NUL-terminated: 9 units + the 0x0000.
    let mut data = Vec::new();
    for ch in "ntdll.dll".chars() {
        data.push(ch as u8);
        data.push(0);
    }
    data.extend_from_slice(&[0, 0]);
    assert_eq!(
        scan_utf16_run(&data, 0x1000, 5),
        vec![StringFact {
            addr: 0x1000,
            len: 20
        }]
    );
    // The defect the width exists to fix: at 1-byte width the same bytes are a
    // one-character run, which the pass rejects outright.
    assert!(scan_run(&data, 0x1000, 5).is_empty());
}

#[test]
fn short_and_unterminated_wide_runs_are_rejected() {
    let wide = |s: &str, term: bool| {
        let mut d = Vec::new();
        for ch in s.chars() {
            d.push(ch as u8);
            d.push(0);
        }
        if term {
            d.extend_from_slice(&[0, 0]);
        }
        d
    };
    // 4 units + terminator: below the minimum.
    assert!(scan_utf16_run(&wide("abcd", true), 0, 5).is_empty());
    // 9 units, no terminator: require-NUL-end rejects it.
    assert!(scan_utf16_run(&wide("ntdll.dll", false), 0, 5).is_empty());
    // Closed by a non-NUL out-of-charset unit: also rejected.
    let mut ended = wide("ntdll.dll", false);
    ended.extend_from_slice(&[0x01, 0x02]);
    assert!(scan_utf16_run(&ended, 0, 5).is_empty());
}

#[test]
fn an_ascii_literal_is_never_read_as_a_wide_one() {
    // The disjointness the two widths rely on: a 1-byte literal's units have a
    // non-zero high byte, so no wide run starts inside it.
    let data = b"NtQueryInformationProcess\x00\x00\x00";
    assert!(scan_utf16_run(data, 0x2000, 5).is_empty());
    assert!(!scan_run(data, 0x2000, 5).is_empty());
}

#[test]
fn units_are_read_on_even_addresses() {
    // A wide run that begins at an ODD image address is not a wide literal:
    // reading it as one would pair bytes across the compiler's alignment.
    let mut data = vec![0xffu8];
    for ch in "ntdll.dll".chars() {
        data.push(ch as u8);
        data.push(0);
    }
    data.extend_from_slice(&[0, 0]);
    // vma even => units start at offset 0, and offset 1 (the real run) is never
    // a unit boundary.
    assert!(scan_utf16_run(&data, 0x1000, 5).is_empty());
}

#[test]
fn scan_wide_strings_over_the_pe_fixture() {
    // End-to-end: the widened scan must surface the wide `ntdll.dll` the 1-byte
    // pass cannot see, at its `.rdata` address (9 units + terminator = 20 bytes).
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/widestrings_x86_64.exe"
    );
    let bytes = std::fs::read(path).expect("read widestrings_x86_64.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse widestrings_x86_64.exe");
    let wide = scan_wide_strings(&file, DEFAULT_WIDE_MIN_LEN);
    assert!(
        wide.contains(&StringFact {
            addr: 0x140002100,
            len: 20
        }),
        "wide ntdll.dll @ 0x140002100 len 20 not detected: {wide:?}"
    );
    // And the 1-byte pass still sees nothing there — the gap this closes.
    assert!(
        !super::super::scan_strings(&file, DEFAULT_WIDE_MIN_LEN, false)
            .iter()
            .any(|f| f.addr == 0x140002100),
        "the ASCII width must not claim the wide literal"
    );
}
