use super::*;

struct Code(Vec<u8>);

impl DexCode for Code {
    fn code_bytes(&self, addr: u64, len: usize) -> Option<&[u8]> {
        let off = usize::try_from(addr).ok()?;
        self.0.get(off..off.checked_add(len)?)
    }

    fn code_size(&self, addr: u64) -> Option<u64> {
        Some(match self.code_bytes(addr, 1)?[0] {
            0x1a | 0x38 => 4,
            0x6e => 6,
            _ => 2,
        })
    }
}

fn code(hex: &str) -> Code {
    let digits: Vec<u8> = hex
        .bytes()
        .filter(u8::is_ascii_hexdigit)
        .map(|c| (c as char).to_digit(16).unwrap() as u8)
        .collect();
    Code(digits.chunks(2).map(|p| p[0] << 4 | p[1]).collect())
}

fn block(start: u64, end: u64, handlers: &[(Option<u32>, u64)]) -> TryBlock {
    TryBlock {
        start,
        end,
        handlers: handlers.to_vec(),
    }
}

/// `Tries.sync` of tests/stages/fixtures/dex/tries.dex.
const SYNC: &str = "1d01 1a00 2c00 6e20 0e00 0200 1e01 1101 0d02 1e01 2702";
/// `Tries.withFinally` of the same fixture.
const FINALLY: &str = "1a00 0000 6e10 0d00 0200 0c02 6e20 0e00 2100 6e20 0e00 0100 1102 \
                           0d02 6e20 0e00 0100 2702";

#[test]
fn monitor_release_reads_as_synchronized() {
    let got = idioms(&code(SYNC), (0, 22), &[block(2, 20, &[(None, 16)])]);
    assert_eq!(
        got.get(&16),
        Some(&JavaIdiom::Synchronized {
            enter: 0,
            exits: vec![12]
        })
    );
    let idiom = &got[&16];
    assert!(idiom.hides(0) && idiom.hides(12));
    assert!(!idiom.hides(18) && !idiom.hides(6));
}

#[test]
fn synchronized_needs_the_monitor_enter_before_the_range() {
    let got = idioms(&code(SYNC), (0, 22), &[block(6, 20, &[(None, 16)])]);
    assert!(got.is_empty(), "{got:?}");
}

#[test]
fn repeated_handler_code_reads_as_finally() {
    let got = idioms(&code(FINALLY), (0, 36), &[block(4, 18, &[(None, 26)])]);
    assert_eq!(
        got.get(&26),
        Some(&JavaIdiom::Finally {
            rethrow: 34,
            copies: vec![(18, 24)]
        })
    );
    let idiom = &got[&26];
    assert!(idiom.hides(18) && idiom.hides(34));
    assert!(!idiom.hides(24) && !idiom.hides(28));
}

#[test]
fn a_typed_handler_is_no_finally() {
    let got = idioms(&code(FINALLY), (0, 36), &[block(4, 18, &[(Some(3), 26)])]);
    assert!(got.is_empty(), "{got:?}");
}

#[test]
fn finally_needs_a_byte_equal_copy() {
    let changed = FINALLY.replacen("6e20 0e00 0100 1102", "6e20 0e00 0200 1102", 1);
    let got = idioms(&code(&changed), (0, 36), &[block(4, 18, &[(None, 26)])]);
    assert!(got.is_empty(), "{got:?}");
}

#[test]
fn a_branch_into_the_copy_from_outside_declines() {
    // if-eqz v0, -> the copy at 22, placed after the handler's throw.
    let with_branch = format!("{FINALLY} 3800 f8ff");
    let got = idioms(&code(&with_branch), (0, 40), &[block(4, 18, &[(None, 26)])]);
    assert!(got.is_empty(), "{got:?}");
}
