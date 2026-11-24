//! RISC-V Zacas register-pair forms (RV32 `amocas.d`, RV64 `amocas.q`) decode
//! as LLVM names them and lift to a compare-and-swap over the even/odd pair;
//! before, both were bad instructions.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_zacas")
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

fn decompile_raw(bin: &str, target: &str) -> String {
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &fixture(bin),
        "0x1000",
        "--raw-image",
        "--target",
        target,
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
fn every_pair_form_decodes_as_llvm_names_it() {
    for (elf, width) in [("zacas32.elf", "d"), ("zacas64.elf", "q")] {
        let (stdout, stderr, code) = run_unlace(&["disassemble", &fixture(elf), "probe"]);
        assert_eq!(code, 0, "{elf}: {stderr}");
        let expected = [
            format!("amocas.{width} a0,a2,(a4)"),
            format!("amocas.{width}.aqrl t1,s2,(a1)"),
            format!("amocas.{width} zero,zero,(a0)"),
            "ret".to_owned(),
        ];
        assert_eq!(rows(&stdout), expected, "{elf}");
    }
}

#[test]
fn rv32_amocas_d_compares_and_swaps_the_register_pairs() {
    let c = decompile_raw("zacas32.bin", "RISCV:LE:32:default");
    assert!(c.contains("== CONCAT44(a1,a0)"), "{c}");
    assert!(c.contains("*a4 = CONCAT44(a3,a2);"), "{c}");
}

#[test]
fn rv64_amocas_q_lifts_without_a_bad_instruction() {
    let c = decompile_raw("zacas64.bin", "RISCV:LE:64:default");
    assert!(c.contains("*a4"), "{c}");
}
