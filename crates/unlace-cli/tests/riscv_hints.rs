//! RISC-V cache-block operations (Zicbom, Zicboz, Zicbop), Zawrs,
//! Zihintpause, Zihintntl, fence.tso, may-be-operations (Zimop, Zcmop) and the
//! CFI extensions (Zicfiss, Zicfilp) decode under their own names; before, the
//! cache-block, wait, may-be-operation and shadow-stack encodings were bad
//! instructions and the hints read as plain ori/fence/add.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_hints")
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

const PROBE64: [&str; 35] = [
    "cbo.clean (a0)",
    "cbo.flush (a1)",
    "cbo.inval (a2)",
    "cbo.zero (a3)",
    "prefetch.i 0x40(a0)",
    "prefetch.r 0x0(a1)",
    "prefetch.w -0x20(a2)",
    "wrs.nto",
    "wrs.sto",
    "pause",
    "fence.tso",
    "ntl.p1",
    "ntl.pall",
    "ntl.s1",
    "ntl.all",
    "c.ntl.p1",
    "c.ntl.all",
    "mop.r.0 a0,a1",
    "mop.r.28 a0,a1",
    "mop.r.31 t0,s1",
    "mop.rr.0 a0,a1,a2",
    "mop.rr.7 a0,a1,a2",
    "c.mop.3",
    "c.mop.15",
    "c.sspush ra",
    "sspush t0",
    "sspopchk ra",
    "c.sspopchk t0",
    "ssrdp a0",
    "c.sspush ra",
    "c.sspopchk t0",
    "lpad 0x12345",
    "ssamoswap.w a0,a2,(a1)",
    "ssamoswap.w.aqrl a0,a2,(a1)",
    "ssamoswap.d a0,a2,(a1)",
];

#[test]
fn every_rv64_hint_and_cfi_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("hints64.elf"), "probe"]);
    assert_eq!(&listing[..PROBE64.len().min(listing.len())], PROBE64);
}

#[test]
fn every_rv32_hint_and_cfi_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("hints32.elf"), "probe"]);
    let common = &PROBE64[..34];
    assert_eq!(&listing[..common.len().min(listing.len())], common);
}

#[test]
fn hint_and_cfi_functions_lift() {
    for elf in [fixture("hints32.elf"), fixture("hints64.elf")] {
        for function in ["spin", "zero_block", "maybe"] {
            decompile(&elf, function);
        }
        let cfi = decompile(&elf, "cfi_add");
        assert!(cfi.contains("a0 + a1"), "{cfi}");
    }
}
