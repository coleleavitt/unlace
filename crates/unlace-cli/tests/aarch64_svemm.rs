//! AArch64 SVE matrix-multiply and BFloat16 extensions (FEAT_F64MM, FEAT_F32MM,
//! FEAT_I8MM, SVE BF16, FEAT_SVE_F16F32MM) decode under LLVM's names and lift to
//! user operations; before, every one was a bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/aarch64_svemm")
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
fn every_svemm_encoding_decodes_as_llvm_names_it() {
    let expected = std::fs::read_to_string(fixture("probe.txt")).unwrap();
    let expected: Vec<&str> = expected.lines().collect();
    let elf = fixture("svemm.elf");
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
fn compiled_svemm_code_lifts() {
    let elf = fixture("svemm.elf");
    let fmmla = decompile(&elf, "mmla_d");
    assert!(fmmla.contains("SVEMM_fmmla("), "{fmmla}");
    let smmla = decompile(&elf, "mmla_s8");
    assert!(smmla.contains("SVEMM_smmla("), "{smmla}");
    let bfdot = decompile(&elf, "bf_dot");
    assert!(bfdot.contains("SVEMM_bfdot("), "{bfdot}");
    let mlal = decompile(&elf, "bf_mlal");
    assert!(mlal.contains("SVEMM_bfmlalt(SVEMM_bfmlalb("), "{mlal}");
    let ldro = decompile(&elf, "ld_ro");
    assert!(ldro.contains("SVEMM_ld1row("), "{ldro}");
}
