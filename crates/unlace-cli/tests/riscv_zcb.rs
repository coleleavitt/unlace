//! RISC-V Zcb (compressed byte/halfword loads and stores, extensions, c.not,
//! c.mul) and Zacas (amocas.w, RV64 amocas.d) decode in the default RISC-V
//! languages; Zcb's encodings were reserved C space and read as bad instructions.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_zcb")
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

const PROBE32: [&str; 15] = [
    "c.lbu a0,0x0(a1)",
    "c.lbu a0,0x3(a1)",
    "c.lhu a2,0x0(a3)",
    "c.lhu a2,0x2(a3)",
    "c.lh s0,0x2(s1)",
    "c.sb a4,0x1(a5)",
    "c.sh a4,0x2(a5)",
    "c.zext.b a0",
    "c.sext.b a1",
    "c.zext.h a2",
    "c.sext.h a3",
    "c.not a4",
    "c.mul a5,s0",
    "amocas.w a0,a2,(a1)",
    "amocas.w.aqrl a0,a2,(a1)",
];

const PROBE64: [&str; 18] = [
    "c.lbu a0,0x0(a1)",
    "c.lbu a0,0x3(a1)",
    "c.lhu a2,0x0(a3)",
    "c.lhu a2,0x2(a3)",
    "c.lh s0,0x2(s1)",
    "c.sb a4,0x1(a5)",
    "c.sh a4,0x2(a5)",
    "c.zext.b a0",
    "c.sext.b a1",
    "c.zext.h a2",
    "c.sext.h a3",
    "c.not a4",
    "c.mul a5,s0",
    "amocas.w a0,a2,(a1)",
    "amocas.w.aqrl a0,a2,(a1)",
    "c.zext.w s1",
    "amocas.d a0,a2,(a1)",
    "amocas.d.aq a3,a4,(a5)",
];

#[test]
fn every_rv32_zcb_and_zacas_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("zcb32.elf"), "probe"]);
    assert_eq!(&listing[..PROBE32.len().min(listing.len())], PROBE32);
}

#[test]
fn every_rv64_zcb_and_zacas_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("zcb64.elf"), "probe"]);
    assert_eq!(&listing[..PROBE64.len().min(listing.len())], PROBE64);
}

#[test]
fn compiler_selected_zcb_and_zacas_lift() {
    for elf in [fixture("zcb32.elf"), fixture("zcb64.elf")] {
        for function in ["ldbyte", "ldhalf", "stbyte", "notmul", "cas"] {
            decompile(&elf, function);
        }
    }
}
