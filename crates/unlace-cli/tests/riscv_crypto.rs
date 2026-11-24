//! RISC-V ratified scalar cryptography (Zknh, Zkne, Zknd, Zksh, Zksed) decode
//! under their ratified encodings. The 0.6.2 draft tables they replace put the
//! instructions in the custom opcode space and left them unimplemented.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_crypto")
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

const PROBE32: [&str; 20] = [
    "sha256sig0 a0,a1",
    "sha256sig1 a0,a1",
    "sha256sum0 a0,a1",
    "sha256sum1 a0,a1",
    "sm3p0 a0,a1",
    "sm3p1 a0,a1",
    "sha512sum0r a0,a1,a2",
    "sha512sum1r a0,a1,a2",
    "sha512sig0l a0,a1,a2",
    "sha512sig0h a0,a1,a2",
    "sha512sig1l a0,a1,a2",
    "sha512sig1h a0,a1,a2",
    "aes32esi a0,a1,a2,0x0",
    "aes32esi a0,a1,a2,0x3",
    "aes32esmi a0,a1,a2,0x1",
    "aes32dsi a0,a1,a2,0x2",
    "aes32dsmi a0,a1,a2,0x3",
    "sm4ed a0,a1,a2,0x0",
    "sm4ed a0,a1,a2,0x3",
    "sm4ks a0,a1,a2,0x1",
];

const PROBE64: [&str; 20] = [
    "sha256sig0 a0,a1",
    "sha256sig1 a0,a1",
    "sha256sum0 a0,a1",
    "sha256sum1 a0,a1",
    "sm3p0 a0,a1",
    "sm3p1 a0,a1",
    "sm4ed a0,a1,a2,0x2",
    "sm4ks a0,a1,a2,0x3",
    "sha512sig0 a0,a1",
    "sha512sig1 a0,a1",
    "sha512sum0 a0,a1",
    "sha512sum1 a0,a1",
    "aes64es a0,a1,a2",
    "aes64esm a0,a1,a2",
    "aes64ds a0,a1,a2",
    "aes64dsm a0,a1,a2",
    "aes64im a0,a1",
    "aes64ks1i a0,a1,0x0",
    "aes64ks1i a0,a1,0xa",
    "aes64ks2 a0,a1,a2",
];

#[test]
fn every_rv32_scalar_crypto_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("crypto32.elf"), "probe"]);
    assert_eq!(&listing[..PROBE32.len().min(listing.len())], PROBE32);
}

#[test]
fn every_rv64_scalar_crypto_encoding_decodes_as_llvm_names_it() {
    let listing = disassemble(&[&fixture("crypto64.elf"), "probe"]);
    assert_eq!(&listing[..PROBE64.len().min(listing.len())], PROBE64);
}

#[test]
fn intrinsic_selected_scalar_crypto_lifts() {
    let elf64 = fixture("crypto64.elf");
    decompile(&elf64, "sig0");
    decompile(&elf64, "sum0");
    let aes = decompile(&elf64, "aesround");
    assert!(aes.contains("aes64es("), "{aes}");
    let sm4 = decompile(&elf64, "sm4");
    assert!(sm4.contains("sm4ed("), "{sm4}");
    let elf32 = fixture("crypto32.elf");
    decompile(&elf32, "sig0");
    decompile(&elf32, "sum0r");
    let aes = decompile(&elf32, "aesround");
    assert!(aes.contains("aes32esmi("), "{aes}");
    let sm4 = decompile(&elf32, "sm4");
    assert!(sm4.contains("sm4ed("), "{sm4}");
}
