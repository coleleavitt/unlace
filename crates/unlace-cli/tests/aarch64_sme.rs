//! AArch64 SME, SME2, SME2.1 and SME2.2 (with the F64F64, I16I64, F16F16,
//! B16B16, F8F16, F8F32, LUTv2, MOP4 and TMOP extensions) decode under LLVM's
//! names and lift to user operations that take the ZA operand by number;
//! before, every one was a bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/aarch64_sme")
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
fn every_sme_encoding_decodes_as_llvm_names_it() {
    let expected = std::fs::read_to_string(fixture("probe.txt")).unwrap();
    let expected: Vec<&str> = expected.lines().collect();
    let elf = fixture("sme.elf");
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
fn compiled_sme_code_lifts() {
    let elf = fixture("sme.elf");
    let outer = decompile(&elf, "outer");
    assert!(outer.contains("SME_fmopa(0,"), "{outer}");
    let row = decompile(&elf, "read_row");
    assert!(row.contains("SME_mova("), "{row}");
    let zero = decompile(&elf, "zero_all");
    assert!(zero.contains("SME_zero(0xff)"), "{zero}");
    let store = decompile(&elf, "store_row");
    assert!(store.contains("SME_st1w("), "{store}");
    assert!(!store.contains("xzr"), "xzr reads as 0: {store}");
    let add = decompile(&elf, "add_vg2");
    assert!(add.contains("SME_add("), "{add}");
}
