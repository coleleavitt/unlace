//! RISC-V ratified bit manipulation (Zba, Zbb, Zbc, Zbs, Zbkb, Zbkx) and
//! Zicond decode under their ratified encodings and lift to real p-code, where
//! the 0.92 draft tables read them as other, unimplemented instructions.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_bitmanip")
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

const PROBE64: [&str; 54] = [
    "sh1add a0,a1,a2",
    "sh2add a0,a1,a2",
    "sh3add a0,a1,a2",
    "andn a0,a1,a2",
    "orn a0,a1,a2",
    "xnor a0,a1,a2",
    "clz a0,a1",
    "ctz a0,a1",
    "cpop a0,a1",
    "max a0,a1,a2",
    "maxu a0,a1,a2",
    "min a0,a1,a2",
    "minu a0,a1,a2",
    "sext.b a0,a1",
    "sext.h a0,a1",
    "zext.h a0,a1",
    "rol a0,a1,a2",
    "ror a0,a1,a2",
    "rori a0,a1,0x3",
    "orc.b a0,a1",
    "rev8 a0,a1",
    "clmul a0,a1,a2",
    "clmulh a0,a1,a2",
    "clmulr a0,a1,a2",
    "bclr a0,a1,a2",
    "bclri a0,a1,0x3",
    "bext a0,a1,a2",
    "bexti a0,a1,0x3",
    "binv a0,a1,a2",
    "binvi a0,a1,0x3",
    "bset a0,a1,a2",
    "bseti a0,a1,0x3",
    "pack a0,a1,a2",
    "packh a0,a1,a2",
    "brev8 a0,a1",
    "xperm4 a0,a1,a2",
    "xperm8 a0,a1,a2",
    "czero.eqz a0,a1,a2",
    "czero.nez a0,a1,a2",
    "add.uw a0,a1,a2",
    "zext.w a0,a1",
    "sh1add.uw a0,a1,a2",
    "sh2add.uw a0,a1,a2",
    "sh3add.uw a0,a1,a2",
    "slli.uw a0,a1,0x23",
    "clzw a0,a1",
    "ctzw a0,a1",
    "cpopw a0,a1",
    "rolw a0,a1,a2",
    "rorw a0,a1,a2",
    "roriw a0,a1,0x3",
    "packw a0,a1,a2",
    "rori a0,a1,0x23",
    "bseti a0,a1,0x28",
];

const PROBE32: [&str; 41] = [
    "sh1add a0,a1,a2",
    "sh2add a0,a1,a2",
    "sh3add a0,a1,a2",
    "andn a0,a1,a2",
    "orn a0,a1,a2",
    "xnor a0,a1,a2",
    "clz a0,a1",
    "ctz a0,a1",
    "cpop a0,a1",
    "max a0,a1,a2",
    "maxu a0,a1,a2",
    "min a0,a1,a2",
    "minu a0,a1,a2",
    "sext.b a0,a1",
    "sext.h a0,a1",
    "zext.h a0,a1",
    "rol a0,a1,a2",
    "ror a0,a1,a2",
    "rori a0,a1,0x3",
    "orc.b a0,a1",
    "rev8 a0,a1",
    "clmul a0,a1,a2",
    "clmulh a0,a1,a2",
    "clmulr a0,a1,a2",
    "bclr a0,a1,a2",
    "bclri a0,a1,0x3",
    "bext a0,a1,a2",
    "bexti a0,a1,0x3",
    "binv a0,a1,a2",
    "binvi a0,a1,0x3",
    "bset a0,a1,a2",
    "bseti a0,a1,0x3",
    "pack a0,a1,a2",
    "packh a0,a1,a2",
    "brev8 a0,a1",
    "xperm4 a0,a1,a2",
    "xperm8 a0,a1,a2",
    "czero.eqz a0,a1,a2",
    "czero.nez a0,a1,a2",
    "zip a0,a1",
    "unzip a0,a1",
];

#[test]
fn every_rv64_bitmanip_encoding_decodes_as_llvm_names_it() {
    let elf = fixture("bitmanip64.elf");
    let listing = disassemble(&[&elf, "probe"]);
    assert_eq!(&listing[..PROBE64.len().min(listing.len())], PROBE64);
}

#[test]
fn every_rv32_bitmanip_encoding_decodes_as_llvm_names_it() {
    let elf = fixture("bitmanip32.elf");
    let listing = disassemble(&[&elf, "probe"]);
    assert_eq!(&listing[..PROBE32.len().min(listing.len())], PROBE32);
}

#[test]
fn compiler_selected_bitmanip_lifts_without_unimplemented_instructions() {
    let elf64 = fixture("bitmanip64.elf");
    for function in [
        "imax", "iminu", "pop", "lead", "trail", "keepif", "swap", "andnot", "setbit", "index",
    ] {
        decompile(&elf64, function);
    }
    assert!(decompile(&elf64, "pop").contains("POPCOUNT("));
    assert!(decompile(&elf64, "lead").contains("LZCOUNT("));
    let elf32 = fixture("bitmanip32.elf");
    for function in ["imax", "pop", "trail", "keepif", "swap"] {
        decompile(&elf32, function);
    }
    assert!(decompile(&elf32, "pop").contains("POPCOUNT("));
}
