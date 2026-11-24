//! TriCore TC1.6.2/TC1.8 (AURIX TC3xx/TC4x) instructions decode in the
//! `tricore:LE:32:tc18` language and lift; before, each was a bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/tricore_tc18")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

fn rows(stdout: &str) -> Vec<String> {
    stdout
        .lines()
        .filter(|line| !line.starts_with('#') && !line.is_empty())
        .map(|line| {
            line.split_whitespace()
                .skip(2)
                .collect::<Vec<_>>()
                .join(" ")
        })
        .collect()
}

fn decompile_raw(bin: &str) -> String {
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &fixture(bin),
        "0x1000",
        "--raw-image",
        "--target",
        "tricore:LE:32:tc18",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{bin}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{bin}:\n{stdout}");
    assert!(!lower.contains("bad instruction"), "{bin}:\n{stdout}");
    stdout
}

#[test]
fn every_tc18_encoding_decodes_as_the_manual_names_it() {
    let (stdout, stderr, code) = run_unlace(&[
        "disassemble",
        &fixture("tricore_tc18.elf"),
        "probe",
        "--target",
        "tricore:LE:32:tc18",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let want = std::fs::read_to_string(fixture("probe.txt")).unwrap();
    let want: Vec<&str> = want.lines().collect();
    assert_eq!(rows(&stdout), want);
}

#[test]
fn tc18_instructions_lift_to_their_c_meaning() {
    for (bin, expect) in [
        ("div64.bin", "CONCAT44(a1,a0) / CONCAT44(a3,a2)"),
        ("popcnt.bin", "POPCOUNT(a0)"),
        ("shuffle.bin", "bswap(a0)"),
        ("itodf.bin", "(double)a0"),
        ("lha.bin", "return 0x70004000;"),
        ("crc32l.bin", "crc32l_w(a0,a1)"),
        ("madd_df.bin", "a0 * a0"),
        ("max_f.bin", "if (a1 <= a0)"),
    ] {
        let c = decompile_raw(bin);
        assert!(c.contains(expect), "{bin}: want {expect:?}\n{c}");
    }
}
