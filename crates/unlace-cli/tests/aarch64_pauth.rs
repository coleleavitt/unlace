//! AArch64 pointer authentication: every FEAT_PAuth and FEAT_PAuth_LR encoding of
//! LLVM 22's TableGen decodes and prints as LLVM does (numbers in unlace's hex), and
//! the odd BTI hints are hints, not `bti`.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/aarch64_pauth")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

#[test]
fn every_pauth_encoding_decodes() {
    let expected = std::fs::read_to_string(fixture("probe.txt")).unwrap();
    let expected: Vec<&str> = expected.lines().collect();
    let elf = fixture("pauth.elf");
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
    assert!(expected.contains(&"retaasppc #0"), "{stdout}");
    assert!(expected.contains(&"pacm"), "{stdout}");
}
