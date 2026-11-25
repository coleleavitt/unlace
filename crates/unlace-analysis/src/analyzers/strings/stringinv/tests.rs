use super::*;
use crate::pass::StringFact;
use crate::strings::widestrings::scan_utf16_run;
use crate::strings::{scan_run, scan_strings};

/// The pass-faithful query, so a test says which policy it is asserting.
fn nul(min_len: usize, ascii: bool, utf16: bool, section: Option<&str>) -> Query {
    Query {
        min_len,
        ascii,
        utf8: false,
        utf16,
        section: section.map(str::to_string),
        termination: Termination::Nul,
    }
}

#[test]
fn utf16_matcher_mirrors_the_ascii_one() {
    // "ntdll.dll" as UTF-16LE, NUL-terminated: 9 units + the 0x0000.
    let mut data = Vec::new();
    for ch in "ntdll.dll".chars() {
        data.push(ch as u8);
        data.push(0);
    }
    data.extend_from_slice(&[0, 0]);
    let out = scan_utf16_run(&data, 0x1000, 5);
    assert_eq!(
        out,
        vec![StringFact {
            addr: 0x1000,
            len: 20
        }]
    );

    // The same bytes read at 1-byte width are a one-character run, which the
    // pass rejects outright — this is the defect the width exists to fix.
    assert!(scan_run(&data, 0x1000, 5).is_empty());
}

#[test]
fn utf16_requires_a_null_end_and_the_minimum() {
    // 4 units + terminator: below the minimum.
    let short = b"a\0b\0c\0d\0\0\0";
    assert!(scan_utf16_run(short, 0, 5).is_empty());
    // 6 units closed by a non-NUL unit: rejected, exactly as requireNullEnd
    // rejects it at 1-byte width.
    let unterminated = b"a\0b\0c\0d\0e\0f\0\x01\x02";
    assert!(scan_utf16_run(unterminated, 0, 5).is_empty());
}

#[test]
fn utf16_units_stay_on_even_addresses() {
    // A region mapped at an odd VMA reads its units from the odd file offset,
    // so `hello` still starts on an even address.
    let mut data = vec![0xffu8];
    for ch in "hello".chars() {
        data.push(ch as u8);
        data.push(0);
    }
    data.extend_from_slice(&[0, 0]);
    let out = scan_utf16_run(&data, 0x1001, 5);
    assert_eq!(
        out,
        vec![StringFact {
            addr: 0x1002,
            len: 12
        }]
    );
}

#[test]
fn a_length_prefixed_name_table_needs_the_relaxed_ending() {
    // The reported shape: each name preceded by its own length tag, no NUL
    // anywhere. `strings(1)` reads all three; require-NUL-end reads none.
    let data = b"\x0cout.js\x06std\x12_0x8ec6b3\x11".to_vec();
    let nul_runs = scan_runs(&data, 0x1000, 4, Termination::Nul);
    assert!(
        nul_runs.is_empty(),
        "no run here ends at a NUL: {nul_runs:?}"
    );

    let any_runs = scan_runs(&data, 0x1000, 4, Termination::Any);
    let texts: Vec<String> = any_runs
        .iter()
        .map(|r| ascii_text(&data[(r.addr - 0x1000) as usize..][..r.visible_len]))
        .collect();
    assert_eq!(
        texts,
        vec!["out.js", "_0x8ec6b3"],
        "\"std\" is below the minimum"
    );
    assert!(
        any_runs.iter().all(|r| !r.nul_terminated),
        "none of them is a C string"
    );
}

#[test]
fn a_run_reaching_the_end_of_a_region_is_a_text_run_only() {
    let data = b"trailing".to_vec();
    assert!(scan_runs(&data, 0, 4, Termination::Nul).is_empty());
    assert_eq!(
        scan_runs(&data, 0, 4, Termination::Any),
        vec![Run {
            addr: 0,
            visible_len: 8,
            nul_terminated: false
        }]
    );
}

#[test]
fn the_relaxed_ending_keeps_every_terminated_row_intact() {
    // Relaxing the ending only ADDS rows: a NUL-terminated literal keeps its
    // address, its text and its terminator-inclusive extent.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let strict = inventory(&file, &nul(5, true, false, None));
    let relaxed = inventory(
        &file,
        &Query {
            min_len: 5,
            ascii: true,
            utf8: false,
            utf16: false,
            section: None,
            termination: Termination::Any,
        },
    );
    for row in &strict.strings {
        assert!(row.nul_terminated, "the strict policy admits nothing else");
        assert!(
            relaxed.strings.contains(row),
            "0x{:x} {:?} was dropped by the relaxed ending",
            row.addr,
            row.text
        );
    }
    assert!(
        relaxed.strings.len() > strict.strings.len(),
        "fauxware has an unterminated printable run"
    );
    assert!(relaxed.strings.iter().any(|r| !r.nul_terminated));
}

#[test]
fn the_wide_width_takes_the_same_ending_policy() {
    // "abcde" as UTF-16LE, closed by a non-zero unit instead of 0x0000.
    let mut data = Vec::new();
    for ch in "abcde".chars() {
        data.push(ch as u8);
        data.push(0);
    }
    data.extend_from_slice(&[0x01, 0x02]);
    assert!(scan_utf16_run(&data, 0, 5).is_empty());
    assert_eq!(
        scan_utf16_runs(&data, 0, 5, Termination::Any),
        vec![Run {
            addr: 0,
            visible_len: 10,
            nul_terminated: false
        }]
    );
}

/// The binary search keeps exactly the regions the pairwise rule keeps, with
/// ranges that overlap, touch, repeat, or are empty or inverted.
#[test]
fn retain_within_matches_the_pairwise_rule() {
    let ranges = [
        (0x60, 0x40),
        (0x10, 0x20),
        (0x20, 0x30),
        (0x0, 0x18),
        (0x50, 0x50),
        (0x10, 0x20),
    ];
    let data = [0u8; 0x40];
    for vma in 0..0x60u64 {
        for len in 0..0x20usize {
            let mut regions = vec![Region {
                name: None,
                vma,
                data: &data[..len],
            }];
            retain_within(&mut regions, &ranges);
            let end = vma + len as u64;
            let want = ranges.iter().any(|&(lo, hi)| vma >= lo && end <= hi);
            assert_eq!(!regions.is_empty(), want, "[{vma:#x}, {end:#x})");
        }
    }
    let mut edge = vec![Region {
        name: None,
        vma: u64::MAX,
        data: &data[..1],
    }];
    retain_within(&mut edge, &[(0, u64::MAX)]);
    assert!(edge.is_empty(), "an extent that overflows is never inside");
}

/// The indexed lookup answers every address as the linear scan does, and an
/// overlap keeps the scan so the first region in image order still wins.
#[test]
fn region_of_matches_the_linear_scan() {
    let data = [0u8; 0x20];
    let mk = |spans: &[(&str, u64, usize)]| -> Vec<Region<'_>> {
        spans
            .iter()
            .map(|&(n, vma, len)| Region {
                name: Some(n.into()),
                vma,
                data: &data[..len],
            })
            .collect()
    };
    let spans = [
        ("a", 0x40, 0x10),
        ("b", 0x10, 0x8),
        ("c", 0x18, 0x8),
        ("d", 0x30, 0x4),
    ];
    let disjoint = mk(&spans);
    assert!(disjoint_index(&disjoint).is_some());
    let mut overlap = vec![("early", 0x44, 0x8)];
    overlap.extend(spans);
    overlap.push(("late", 0x12, 0x4));
    let overlapping = mk(&overlap);
    assert!(disjoint_index(&overlapping).is_none());
    for addr in 0..0x60u64 {
        for regions in [&disjoint, &overlapping] {
            let linear = regions
                .iter()
                .find(|r| addr >= r.vma && addr - r.vma < r.data.len() as u64);
            let found = region_of(regions, disjoint_index(regions).as_deref(), addr);
            assert_eq!(found.map(|r| &r.name), linear.map(|r| &r.name), "{addr:#x}");
        }
    }
}

#[test]
fn section_operand_tolerates_a_missing_dot() {
    assert!(section_matches(Some(".rdata"), "rdata"));
    assert!(section_matches(Some(".rdata"), ".rdata"));
    assert!(!section_matches(Some(".rdata"), "data"));
    assert!(!section_matches(None, "rdata"));
}

#[test]
fn inventory_over_fauxware_reads_the_pass_back_as_text() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let inv = inventory(&file, &nul(5, true, false, None));
    let row = inv
        .strings
        .iter()
        .find(|s| s.addr == 0x400915)
        .expect("the pass's own \"Username: \" fact must be reported");
    assert_eq!(row.text, "Username: ");
    assert_eq!(row.char_len, 10);
    assert_eq!(row.byte_len, 11);
    assert_eq!(row.encoding, Encoding::Ascii);
    assert_eq!(row.section.as_deref(), Some(".rodata"));
    assert!(!inv.from_segments);

    // Every ASCII row is one the pass itself emitted — no row is invented here.
    let facts = scan_strings(&file, 5, false);
    for row in inv.strings.iter().filter(|s| s.encoding == Encoding::Ascii) {
        assert!(
            facts.contains(&StringFact {
                addr: row.addr,
                len: row.byte_len
            }),
            "row 0x{:x} is not a StringLiteralPass fact",
            row.addr
        );
    }
}

/// The reading that keeps a multi-byte prefix, at the inventory level: the
/// vendored `prompt` at 0x101000 opens with a fullwidth low line, so the
/// ASCII reading reports it from 0x10100c — twelve bytes past the address
/// `prompt_user` actually loads.
#[test]
fn the_utf8_reading_recovers_a_multi_byte_prefix() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/utf8prompt_x86_64"
    );
    let bytes = std::fs::read(path).expect("read utf8prompt_x86_64 fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse utf8prompt_x86_64");
    let q = |utf8: bool| Query {
        min_len: 5,
        ascii: true,
        utf8,
        utf16: false,
        section: None,
        termination: Termination::Any,
    };

    let ascii = inventory(&file, &q(false));
    let truncated = ascii
        .strings
        .iter()
        .find(|s| s.addr == 0x10100c)
        .expect("the ASCII reading");
    assert_eq!(truncated.char_len, 43);
    assert_eq!(truncated.encoding, Encoding::Ascii);
    assert!(!ascii.strings.iter().any(|s| s.addr == 0x101000));

    let utf8 = inventory(&file, &q(true));
    let whole = utf8
        .strings
        .iter()
        .find(|s| s.addr == 0x101000)
        .expect("the UTF-8 reading");
    assert_eq!(whole.encoding, Encoding::Utf8);
    assert_eq!(whole.char_len, 50, "fifty characters");
    assert_eq!(whole.byte_len, 56, "in fifty-five bytes plus the NUL");
    assert!(whole.text.starts_with('\u{ff3f}'));
    assert!(whole.text.ends_with("magical keycombination? "));
    assert!(
        !utf8.strings.iter().any(|s| s.addr == 0x10100c),
        "one reading answers the 1-byte width, so the truncated row is gone"
    );

    // The ASCII-only control literal is the same row under both readings.
    let control = |inv: &Inventory| {
        inv.strings
            .iter()
            .find(|s| s.addr == 0x101038)
            .cloned()
            .expect("the control literal")
    };
    assert_eq!(control(&ascii), control(&utf8));
    assert_eq!(control(&ascii).encoding, Encoding::Ascii);
}

/// The property the one-scan-or-the-other choice rests on: every row the
/// ASCII reading finds lies inside a row the UTF-8 reading finds, so nothing
/// is lost by not running both. Checked over both endings on an image that
/// holds multi-byte sequences and on one that holds none.
#[test]
fn the_utf8_reading_is_a_superset_of_the_ascii_one() {
    for name in ["utf8prompt_x86_64", "fauxware"] {
        let path =
            std::path::Path::new(concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures")).join(name);
        let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {name}: {e}"));
        let file = object::File::parse(bytes.as_slice()).expect("parse the fixture");
        for termination in [Termination::Nul, Termination::Any] {
            let q = |utf8: bool| Query {
                min_len: 5,
                ascii: true,
                utf8,
                utf16: false,
                section: None,
                termination,
            };
            let ascii = inventory(&file, &q(false));
            let utf8 = inventory(&file, &q(true));
            for row in &ascii.strings {
                let end = row.addr + u64::from(row.byte_len);
                assert!(
                    utf8.strings
                        .iter()
                        .any(|w| { w.addr <= row.addr && w.addr + u64::from(w.byte_len) >= end }),
                    "{name} {termination:?}: 0x{:x} {:?} is covered by no UTF-8 row",
                    row.addr,
                    row.text
                );
            }
        }
    }
}

#[test]
fn a_section_filter_narrows_the_inventory() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let inv = inventory(&file, &nul(5, true, false, Some("rodata")));
    assert!(!inv.strings.is_empty(), "fauxware has .rodata strings");
    assert!(
        inv.strings
            .iter()
            .all(|s| s.section.as_deref() == Some(".rodata"))
    );
    assert!(inv.regions.iter().any(|n| n == ".rodata"));
}
