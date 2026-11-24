//! RISC-V Zfh half-precision floating point decodes and lifts to 2-byte float
//! p-code; before, every Zfh instruction was a bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_zfh")
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

const PROBE64: [&str; 34] = [
    "flh fa0,0x2(a1)",
    "fsh fa2,0x4(a3)",
    "fadd.h fa0,fa1,fa2,dyn",
    "fsub.h fa0,fa1,fa2,rtz",
    "fmul.h fa0,fa1,fa2,dyn",
    "fdiv.h fa0,fa1,fa2,rne",
    "fsqrt.h fa0,fa1,dyn",
    "fsgnj.h fa0,fa1,fa2",
    "fsgnjn.h fa0,fa1,fa2",
    "fsgnjx.h fa0,fa1,fa2",
    "fmin.h fa0,fa1,fa2",
    "fmax.h fa0,fa1,fa2",
    "fcvt.s.h fa0,fa1",
    "fcvt.h.s fa0,fa1,dyn",
    "fcvt.d.h fa0,fa1",
    "fcvt.h.d fa0,fa1,dyn",
    "fcvt.w.h a0,fa1,rtz",
    "fcvt.wu.h a0,fa1,rtz",
    "fcvt.h.w fa0,a1,dyn",
    "fcvt.h.wu fa0,a1,dyn",
    "feq.h a0,fa1,fa2",
    "flt.h a0,fa1,fa2",
    "fle.h a0,fa1,fa2",
    "fclass.h a0,fa1",
    "fmv.x.h a0,fa1",
    "fmv.h.x fa0,a1",
    "fmadd.h fa0,fa1,fa2,fa3,dyn",
    "fmsub.h fa0,fa1,fa2,fa3,dyn",
    "fnmsub.h fa0,fa1,fa2,fa3,dyn",
    "fnmadd.h fa0,fa1,fa2,fa3,dyn",
    "fcvt.l.h a0,fa1,rtz",
    "fcvt.lu.h a0,fa1,rtz",
    "fcvt.h.l fa0,a1,dyn",
    "fcvt.h.lu fa0,a1,dyn",
];

#[test]
fn every_rv64_zfh_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("zfh64.elf"), "probe"]);
    assert_eq!(&listing[..PROBE64.len().min(listing.len())], PROBE64);
}

#[test]
fn every_rv32_zfh_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("zfh32.elf"), "probe"]);
    let common = &PROBE64[..30];
    assert_eq!(&listing[..common.len().min(listing.len())], common);
}

#[test]
fn compiler_selected_half_precision_lifts() {
    for elf in [fixture("zfh32.elf"), fixture("zfh64.elf")] {
        for function in [
            "hadd", "hmuladd", "widen", "narrow", "toint", "hless", "hload",
        ] {
            decompile(&elf, function);
        }
    }
}
