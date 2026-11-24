//! RISC-V Zabha byte and halfword AMOs (and amocas.b/h) decode and lift; before,
//! every one was a bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_zabha")
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

fn disassemble(args: &[&str]) -> Vec<String> {
    let (stdout, stderr, code) = run_unlace(&[&["disassemble"][..], args].concat());
    assert_eq!(code, 0, "unlace disassemble {args:?}: {stderr}");
    rows(&stdout)
}

fn decompile(elf: &str, function: &str) -> String {
    let (stdout, stderr, code) = run_unlace(&["decompile", elf, function]);
    assert_eq!(code, 0, "{function}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{function}:\n{stdout}");
    assert!(!lower.contains("bad instruction"), "{function}:\n{stdout}");
    stdout
}

const PROBE: [&str; 22] = [
    "amoswap.b a0,a2,(a1)",
    "amoadd.b a0,a2,(a1)",
    "amoxor.b a0,a2,(a1)",
    "amoand.b a0,a2,(a1)",
    "amoor.b a0,a2,(a1)",
    "amomin.b a0,a2,(a1)",
    "amomax.b a0,a2,(a1)",
    "amominu.b a0,a2,(a1)",
    "amomaxu.b a0,a2,(a1)",
    "amocas.b a0,a2,(a1)",
    "amoadd.b.aqrl t0,t1,(t2)",
    "amoswap.h a0,a2,(a1)",
    "amoadd.h a0,a2,(a1)",
    "amoxor.h a0,a2,(a1)",
    "amoand.h a0,a2,(a1)",
    "amoor.h a0,a2,(a1)",
    "amomin.h a0,a2,(a1)",
    "amomax.h a0,a2,(a1)",
    "amominu.h a0,a2,(a1)",
    "amomaxu.h a0,a2,(a1)",
    "amocas.h a0,a2,(a1)",
    "amoadd.h.aqrl t0,t1,(t2)",
];

#[test]
fn every_zabha_encoding_decodes_as_llvm_names_it() {
    for elf in [fixture("zabha32.elf"), fixture("zabha64.elf")] {
        let listing = disassemble(&[&elf, "probe"]);
        assert_eq!(&listing[..PROBE.len().min(listing.len())], PROBE, "{elf}");
    }
}

#[test]
fn compiler_selected_byte_and_halfword_atomics_lift() {
    for elf in [fixture("zabha32.elf"), fixture("zabha64.elf")] {
        for function in ["fetch_add8", "fetch_max16", "cas16", "xchg8"] {
            decompile(&elf, function);
        }
    }
}
