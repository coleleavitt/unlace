//! Intel APX in the 64-bit x86 language: the extended GPRs R16-R31 under the
//! REX2 prefix, and the legacy instructions promoted to EVEX map 4 (new data
//! destination, no-flags, CCMP/CTEST, CFCMOVcc, SETcc.zu, PUSH2/POP2) plus
//! JMPABS, and the EGPR forms of the EVEX-promoted VEX and map-4 system
//! instructions. Before, a REX2 prefix decoded as the invalid AAD and every
//! map-4 instruction, and every EVEX instruction with an EGPR, was a bad
//! instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/x86_apx")
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

const PROBE: [&str; 16] = [
    "ADD R16,R17",
    "MOV R20,qword ptr [R21 + R22*0x8 + 0x10]",
    "MOVZX R18D,byte ptr [R19]",
    "ADD R16,RAX,RBX",
    "ADD.NF RAX,RBX",
    "SUB R30D,R31D,0x5",
    "CCMPZ {dfv=of} RAX,RBX",
    "CTESTNZ {dfv=sf,zf} EAX,0x7",
    "CFCMOVZ RAX,qword ptr [RBX]",
    "CMOVL RAX,RBX,RCX",
    "SETZUC R16B",
    "PUSH2 R16,R17",
    "POP2 R17,R16",
    "IMULZU AX,BX,0x7",
    "SHL.NF R16,RAX,0x3",
    "JMPABS 0x1122334455667788",
];

#[test]
fn apx_forms_decode() {
    let elf = fixture("apx.elf");
    let (stdout, stderr, code) = run_unlace(&["disassemble", &elf, "probe"]);
    assert_eq!(code, 0, "{stderr}");
    let listing = rows(&stdout);
    assert_eq!(&listing[..PROBE.len()], PROBE, "{stdout}");
}

const EVEX_PROBE: [&str; 10] = [
    "ANDN R16, R17, R18",
    "BLSR.NF R16, R17",
    "SHLX R20, R21, R22",
    "KMOVQ K1, R16",
    "KMOVD R17D, K2",
    "MOVDIR64B R16, zmmword ptr [R17]",
    "WRSSQ qword ptr [R16],R17",
    "VMOVDQU32 ZMM0, zmmword ptr [R16 + R17*0x8 + 0x40]",
    "VPEXTRQ R16, XMM1, 0x1",
    "TILELOADD TMM0, [R16 + R17*0x1]",
];

#[test]
fn apx_evex_egpr_forms_decode() {
    let elf = fixture("apx.elf");
    let (stdout, stderr, code) = run_unlace(&["disassemble", &elf, "evex_probe"]);
    assert_eq!(code, 0, "{stderr}");
    let listing = rows(&stdout);
    assert_eq!(&listing[..EVEX_PROBE.len()], EVEX_PROBE, "{stdout}");
}

fn decompile_raw(addr: &str) -> String {
    let bin = fixture("apx.bin");
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "x86:LE:64:default:gcc",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{addr}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{addr}:\n{stdout}");
    assert!(!lower.contains("bad instruction"), "{addr}:\n{stdout}");
    stdout
}

#[test]
fn apx_functions_decompile() {
    for (addr, want) in [
        // push2/pop2 around an NDD add and a no-flags NDD imul
        ("0x1070", "return (a0 + a1) * a2;"),
        // cmp; ccmpe {dfv=}; setzue: the conditional compare chains the tests
        ("0x1090", "return a0 == a1 && a2 == a3;"),
        // REX2 EGPRs in a base+index*scale address
        ("0x10b0", "return a0 + 3 + a1 * 4;"),
        // {nf} add leaves the carry of the cmp for setzub
        ("0x10c0", "return a0 < a1;"),
        // EVEX-promoted ANDN and SHRX on EGPRs
        ("0x1120", "return (~a1 & a0) >> (a2 & 0x3f);"),
    ] {
        let out = decompile_raw(addr);
        assert!(out.contains(want), "{addr}: want {want}\n{out}");
    }
    // cfcmovne: the load happens only on the taken condition
    let out = decompile_raw("0x10a0");
    assert!(out.contains("if (a0)"), "{out}");
    assert!(out.contains("= *a0;"), "{out}");
}
