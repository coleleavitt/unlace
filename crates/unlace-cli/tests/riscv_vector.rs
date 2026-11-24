//! RISC-V vector extension 1.0 plus the ratified vector crypto and BF16
//! extensions decode under LLVM's names and lift to user operations; before,
//! the vector spec was the 0.9 draft with every instruction unimplemented (and
//! draft-only names such as vlxei, vpopc.m and vamo*).
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_vector")
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

fn decompile(elf: &str, function: &str) -> String {
    let (stdout, stderr, code) = run_unlace(&["decompile", elf, function]);
    assert_eq!(code, 0, "{function}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{function}:\n{stdout}");
    assert!(!lower.contains("bad instruction"), "{function}:\n{stdout}");
    stdout
}

#[test]
fn every_vector_encoding_decodes_as_llvm_names_it() {
    let expected = std::fs::read_to_string(fixture("probe64.txt")).unwrap();
    let expected: Vec<&str> = expected.lines().collect();
    let elf = fixture("vector64.elf");
    let (stdout, stderr, code) = run_unlace(&["disassemble", &elf, "probe"]);
    assert_eq!(code, 0, "{stderr}");
    let listing = rows(&stdout);
    assert!(listing.len() >= expected.len(), "{} rows", listing.len());
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
fn compiler_selected_vector_code_lifts() {
    for elf in [fixture("vector32.elf"), fixture("vector64.elf")] {
        let add = decompile(&elf, "vadd4");
        assert!(add.contains("vadd_vv("), "{add}");
        let sum = decompile(&elf, "vsum8");
        assert!(sum.contains("vmv_x_s("), "{sum}");
        decompile(&elf, "vfma4");
        decompile(&elf, "vsel16");
    }
}
