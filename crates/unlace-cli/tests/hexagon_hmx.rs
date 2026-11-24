//! Hexagon HMX (the matrix extension's FP16 instructions) decodes with LLVM's
//! syntax and lifts each instruction to a named pcodeop over its decoded
//! address and control fields; before, every HMX word was a bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

const TARGET: &str = "Hexagon:LE:32:default";

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/hexagon_hmx")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

fn normalize(text: &str) -> String {
    text.split_whitespace()
        .collect::<String>()
        .replace("LR", "r31")
        .to_lowercase()
}

fn rows(stdout: &str) -> Vec<String> {
    stdout
        .lines()
        .filter(|line| !line.starts_with('#') && !line.is_empty())
        .map(|line| {
            normalize(
                &line
                    .split_whitespace()
                    .skip(2)
                    .collect::<Vec<_>>()
                    .join(" "),
            )
        })
        .collect()
}

#[test]
fn every_hmx_encoding_decodes_as_llvm_prints_it() {
    let (stdout, stderr, code) = run_unlace(&[
        "disassemble",
        &fixture("hmx.elf"),
        "probe",
        "--target",
        TARGET,
    ]);
    assert_eq!(code, 0, "{stderr}");
    let expected: Vec<String> = [
        "activation.hf = mxmem(r0,r1)",
        "weight.hf = mxmem(r2,r3)",
        "activation.hf = mxmem(r4,r5):deep",
        "weight.hf = mxmem(r6,r7)",
        "activation.hf = mxmem(r8,r9):single",
        "weight.hf = mxmem(r10,r11):deep",
        "bias = mxmem2(r12)",
        "cvt.hf = acc(r13)",
        "mxmem(r14,r15) = cvt",
        "mxmem2(r16) = bias",
        "mxclracc.hf",
        "jumpr r31",
    ]
    .iter()
    .map(|row| normalize(row))
    .collect();
    assert_eq!(rows(&stdout), expected, "{stdout}");
}

#[test]
fn hmx_instructions_lift_to_named_pcodeops() {
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &fixture("hmx.bin"),
        "0x1000",
        "--raw-image",
        "--target",
        TARGET,
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    for fragment in [
        "hmx_activation_hf(a0 & 0xfffff800,a0 & 0x7ff,a1);",
        "hmx_weight_hf(a2 & 0xffffff80,a2 >> 5 & 1,a3 & 0xffffff80);",
        "hmx_bias_load(a4 & 0xffffff00,a4 & 3);",
        "hmx_cvt_hf_acc(a5 >> 0xc & 3,a5 & 0xfff);",
        "hmx_cvt_store(a0 & 0xfffff800,a1);",
        "hmx_bias_store(a4 & 0xffffff00,a4 & 3);",
        "hmx_clracc_hf();",
    ] {
        assert!(stdout.contains(fragment), "{fragment}:\n{stdout}");
    }
}
