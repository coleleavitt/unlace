use super::*;
use crate::strings::scan_runs;

/// The filing image's literal, verbatim: `_φ( °-°)/ so what was the magical
/// keycombination? ` — a fullwidth low line, a phi and two degree signs.
const KAOMOJI: &[u8] = b"\xef\xbc\xbf\xcf\x86\x28\x20\xc2\xb0\x2d\xc2\xb0\x29\x2f so what \
was the magical keycombination? \x00";

#[test]
fn a_multi_byte_prefix_no_longer_moves_the_start() {
    // The 1-byte matcher starts the run after the LAST multi-byte sequence.
    let ascii = scan_runs(KAOMOJI, 0x2000, 5, Termination::Any);
    assert_eq!(ascii.len(), 1);
    assert_eq!(ascii[0].addr, 0x200c, "the 1-byte reading loses the prefix");

    // The UTF-8 reading starts it at the literal's first byte, and its extent
    // runs to the NUL: 0x37 bytes of text, 50 characters.
    let utf8 = scan_utf8_runs(KAOMOJI, 0x2000, 5, Termination::Any);
    assert_eq!(
        utf8,
        vec![Run {
            addr: 0x2000,
            visible_len: 0x37,
            nul_terminated: true
        }],
        "the whole literal is one run at its true address"
    );
    let text = std::str::from_utf8(&KAOMOJI[..0x37]).expect("valid UTF-8 by construction");
    assert_eq!(text.chars().count(), 50);
    assert!(text.starts_with('\u{ff3f}'));
}

#[test]
fn pure_ascii_reads_exactly_as_the_1_byte_matcher() {
    // The guarantee the inventory relies on to run one 1-byte scan instead of
    // two: with no multi-byte sequence present the two matchers agree
    // run-for-run, under either ending policy.
    let data = b"\x00Hi\x00Username: \x00\x01\x02abcdefgh\x00trailing";
    for term in [Termination::Nul, Termination::Any] {
        assert_eq!(
            scan_utf8_runs(data, 0x1000, 5, term),
            scan_runs(data, 0x1000, 5, term),
            "{term:?} disagrees on pure ASCII"
        );
    }
}

#[test]
fn an_ill_formed_sequence_closes_the_run_without_eating_ascii() {
    // 0xc3 is a lead byte, but '(' is not a continuation byte: the sequence is
    // rejected, the run closes, and the scan resumes ON the '(' rather than
    // past it — so no 1-byte run is ever swallowed by a bad decode.
    let data = b"hello\xc3(world!\x00";
    let runs = scan_utf8_runs(data, 0, 5, Termination::Any);
    assert_eq!(
        runs,
        vec![
            Run {
                addr: 0,
                visible_len: 5,
                nul_terminated: false
            },
            Run {
                addr: 6,
                visible_len: 7,
                nul_terminated: true
            },
        ]
    );
    assert_eq!(
        runs,
        scan_runs(data, 0, 5, Termination::Any),
        "same as the 1-byte matcher"
    );
}

#[test]
fn overlongs_surrogates_and_controls_are_declined() {
    // C0 80 (overlong NUL), ED A0 80 (a surrogate), F5 80 80 80 (past
    // U+10FFFF) and C2 85 (U+0085 NEXT LINE, a C1 control) are all rejected,
    // so none of them joins two neighbouring runs into one.
    for bad in [
        &b"\xc0\x80"[..],
        b"\xed\xa0\x80",
        b"\xf5\x80\x80\x80",
        b"\xc2\x85",
    ] {
        let mut data = b"aaaaa".to_vec();
        data.extend_from_slice(bad);
        data.extend_from_slice(b"bbbbb\x00");
        let runs = scan_utf8_runs(&data, 0, 5, Termination::Any);
        assert_eq!(
            runs.len(),
            2,
            "{bad:x?} must not join the two runs: {runs:?}"
        );
        assert_eq!(runs[0].addr, 0);
    }
}

#[test]
fn the_minimum_length_counts_characters_not_bytes() {
    // Five characters, ten bytes: accepted at min 5, rejected at min 6.
    let data = b"\xc2\xb0\xc2\xb0\xc2\xb0\xc2\xb0\xc2\xb0\x00";
    assert_eq!(
        scan_utf8_runs(data, 0, 5, Termination::Nul),
        vec![Run {
            addr: 0,
            visible_len: 10,
            nul_terminated: true
        }]
    );
    assert!(scan_utf8_runs(data, 0, 6, Termination::Nul).is_empty());
}

#[test]
fn a_sequence_truncated_by_the_end_of_a_region_is_not_a_character() {
    // The last byte of a section is a lead byte with nothing after it.
    let data = b"aaaaa\xc2";
    assert_eq!(
        scan_utf8_runs(data, 0, 5, Termination::Any),
        vec![Run {
            addr: 0,
            visible_len: 5,
            nul_terminated: false
        }]
    );
}
