//! Intel AMX (AMX-TILE, AMX-INT8, AMX-BF16, AMX-FP16, AMX-COMPLEX) decodes in
//! 64-bit x86 and lifts to user operations on tile numbers; before, every AMX
//! instruction was a bad instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/x86_amx")
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

const MNEMONICS: [&str; 15] = [
    "LDTILECFG",
    "STTILECFG",
    "TILEZERO",
    "TILELOADD",
    "TILELOADDT1",
    "TILESTORED",
    "TDPBSSD",
    "TDPBSUD",
    "TDPBUSD",
    "TDPBUUD",
    "TDPBF16PS",
    "TDPFP16PS",
    "TCMMIMFP16PS",
    "TCMMRLFP16PS",
    "TILERELEASE",
];

#[test]
fn every_amx_instruction_decodes() {
    let elf = fixture("amx.elf");
    let (stdout, stderr, code) = run_unlace(&["disassemble", &elf, "probe"]);
    assert_eq!(code, 0, "{stderr}");
    let listing = rows(&stdout);
    let mnemonics: Vec<&str> = listing
        .iter()
        .map(|row| row.split(' ').next().unwrap_or(""))
        .take(MNEMONICS.len())
        .collect();
    assert_eq!(mnemonics, MNEMONICS, "{stdout}");
    for (row, want) in [
        (2, "TILEZERO TMM3"),
        (6, "TDPBSSD TMM0,TMM1,TMM2"),
        (10, "TDPBF16PS TMM3,TMM4,TMM5"),
        (12, "TCMMIMFP16PS TMM1,TMM6,TMM7"),
        (14, "TILERELEASE"),
    ] {
        assert_eq!(listing[row], want, "{stdout}");
    }
    assert!(listing[3].starts_with("TILELOADD TMM0,"), "{stdout}");
    assert!(listing[5].ends_with(",TMM7"), "{stdout}");
}

#[test]
fn amx_kernel_lifts() {
    let elf = fixture("amx.elf");
    let (stdout, stderr, code) = run_unlace(&["decompile", &elf, "kernel"]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(stdout.contains("tdpbssd("), "{stdout}");
    assert!(stdout.contains("tileloadd("), "{stdout}");
}
