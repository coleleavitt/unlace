//! The NXP e200z4/e200z7 SPE2 and EFS2 instructions decode in the
//! `PowerPC:BE:32:e200-SPE2` language as binutils names them, and the lifted
//! loads and lane arithmetic decompile; before, most SPE2 words were bad
//! instructions and the rest decoded as other instructions at the same encoding.
use crate::common;
use common::{repo_root, run_unlace};

const TARGET: &str = "PowerPC:BE:32:e200-SPE2";

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/ppc_spe2")
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

fn decompile(args: &[&str]) -> String {
    let (stdout, stderr, code) = run_unlace(&[&["decompile"][..], args].concat());
    assert_eq!(code, 0, "unlace decompile {args:?}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{args:?}:\n{stdout}");
    assert!(!lower.contains("bad instruction"), "{args:?}:\n{stdout}");
    stdout
}

#[test]
fn every_spe2_and_efs2_encoding_decodes_as_binutils_names_it() {
    let probe = fixture("spe2_probe.o");
    let (stdout, stderr, code) = run_unlace(&[
        "disassemble",
        &probe,
        "probe",
        "--target",
        TARGET,
        "--count",
        "4000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let want = std::fs::read_to_string(fixture("probe.txt")).unwrap();
    let want: Vec<&str> = want.lines().collect();
    assert_eq!(rows(&stdout), want);
}

#[test]
fn the_probe_lifts_without_bad_instructions() {
    decompile(&[&fixture("spe2_probe.o"), "probe", "--target", TARGET]);
}

#[test]
fn raw_byte_splat_load_and_doubleword_add() {
    let c = decompile(&[
        &fixture("spe2.bin"),
        "0x1000",
        "--raw-image",
        "--target",
        TARGET,
        "--base",
        "0x1000",
    ]);
    assert!(
        c.contains("return *(unsigned char *)(a0 + a1) * 0x101010101010101ULL + a2;"),
        "{c}"
    );
}
