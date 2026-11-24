//! AArch64 SVE2 and SVE2.1 (with the SVE2 crypto, BitPerm and B16B16
//! extensions) decode under LLVM's names and lift to user operations; before,
//! every one was a bad instruction (or, for the B16B16 arithmetic and the
//! 128-bit element stores, a wrong SVE decode).
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/aarch64_sve2")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

fn decompile(elf: &str, function: &str) -> String {
    let (stdout, stderr, code) = run_unlace(&["decompile", elf, function]);
    assert_eq!(code, 0, "{function}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{function}:\n{stdout}");
    assert!(!lower.contains("bad instruction"), "{function}:\n{stdout}");
    stdout
}

#[test]
fn every_sve2_encoding_decodes_as_llvm_names_it() {
    let expected = std::fs::read_to_string(fixture("probe.txt")).unwrap();
    let expected: Vec<&str> = expected.lines().collect();
    let elf = fixture("sve2.elf");
    let (stdout, stderr, code) = run_unlace(&["disassemble", &elf, "probe", "--count", "4096"]);
    assert_eq!(code, 0, "{stderr}");
    let listing: Vec<String> = stdout
        .lines()
        .filter(|line| line.starts_with("0x"))
        .map(|line| {
            line.split_whitespace()
                .skip(2)
                .collect::<Vec<_>>()
                .join(" ")
        })
        .collect();
    assert_eq!(listing.len(), expected.len(), "{stdout}");
    let wrong: Vec<String> = expected
        .iter()
        .zip(&listing)
        .filter(|(want, got)| *want != got)
        .map(|(want, got)| format!("{want} != {got}"))
        .collect();
    assert!(
        wrong.is_empty(),
        "{} rows differ:\n{}",
        wrong.len(),
        wrong.join("\n")
    );
}

#[test]
fn compiled_sve2_code_lifts() {
    let elf = fixture("sve2.elf");
    let mla = decompile(&elf, "qrdmlah");
    assert!(mla.contains("SVE2_sqrdmlah("), "{mla}");
    let addp = decompile(&elf, "pairwise");
    assert!(addp.contains("SVE2_addp("), "{addp}");
    let first = decompile(&elf, "any_left");
    assert!(first.contains("SVE2_whilege("), "{first}");
    assert!(first.contains("SVE2_sve_first("), "{first}");
    let hist = decompile(&elf, "histogram");
    assert!(hist.contains("SVE2_histcnt("), "{hist}");
}
