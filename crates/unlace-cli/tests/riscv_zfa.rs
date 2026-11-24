//! RISC-V Zfa beyond fli.s (fli.d/h, fminm/fmaxm, fround/froundnx,
//! fcvtmod.w.d, fleq/fltq, RV32 fmvh.x.d/fmvp.d.x) decodes; before, each was a
//! bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_zfa")
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

const PROBE32: [&str; 57] = [
    "fli.d fa0,-1.0",
    "fli.d fa0,min",
    "fli.d fa0,1.52587890625e-05",
    "fli.d fa0,3.0517578125e-05",
    "fli.d fa0,0.00390625",
    "fli.d fa0,0.0078125",
    "fli.d fa0,0.0625",
    "fli.d fa0,0.125",
    "fli.d fa0,0.25",
    "fli.d fa0,0.3125",
    "fli.d fa0,0.375",
    "fli.d fa0,0.4375",
    "fli.d fa0,0.5",
    "fli.d fa0,0.625",
    "fli.d fa0,0.75",
    "fli.d fa0,0.875",
    "fli.d fa0,1.0",
    "fli.d fa0,1.25",
    "fli.d fa0,1.5",
    "fli.d fa0,1.75",
    "fli.d fa0,2.0",
    "fli.d fa0,2.5",
    "fli.d fa0,3.0",
    "fli.d fa0,4.0",
    "fli.d fa0,8.0",
    "fli.d fa0,16.0",
    "fli.d fa0,128.0",
    "fli.d fa0,256.0",
    "fli.d fa0,32768.0",
    "fli.d fa0,65536.0",
    "fli.d fa0,inf",
    "fli.d fa0,nan",
    "fli.s fa1,-1.0",
    "fli.s fa1,min",
    "fli.h fa2,0.5",
    "fli.h fa2,nan",
    "fminm.s fa0,fa1,fa2",
    "fmaxm.s fa0,fa1,fa2",
    "fminm.d fa0,fa1,fa2",
    "fmaxm.d fa0,fa1,fa2",
    "fminm.h fa0,fa1,fa2",
    "fmaxm.h fa0,fa1,fa2",
    "fround.s fa0,fa1,dyn",
    "froundnx.s fa0,fa1,rtz",
    "fround.d fa0,fa1,rne",
    "froundnx.d fa0,fa1,dyn",
    "fround.h fa0,fa1,rup",
    "froundnx.h fa0,fa1,dyn",
    "fcvtmod.w.d a0,fa1,rtz",
    "fleq.s a0,fa1,fa2",
    "fltq.s a0,fa1,fa2",
    "fleq.d a0,fa1,fa2",
    "fltq.d a0,fa1,fa2",
    "fleq.h a0,fa1,fa2",
    "fltq.h a0,fa1,fa2",
    "fmvh.x.d a0,fa1",
    "fmvp.d.x fa0,a1,a2",
];

#[test]
fn every_rv32_zfa_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("zfa32.elf"), "probe"]);
    assert_eq!(&listing[..PROBE32.len().min(listing.len())], PROBE32);
}

#[test]
fn every_rv64_zfa_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("zfa64.elf"), "probe"]);
    let common = &PROBE32[..55];
    assert_eq!(&listing[..common.len().min(listing.len())], common);
}

#[test]
fn compiler_selected_zfa_lifts() {
    for elf in [fixture("zfa32.elf"), fixture("zfa64.elf")] {
        for function in ["dmin", "fmaxf", "dfloor", "half", "quietle"] {
            decompile(&elf, function);
        }
    }
}
