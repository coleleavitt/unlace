//! The MIPS-3D ASE (MIPS64 pre-R6 languages) and the SmartMIPS ASE (MIPS32
//! languages) decode as binutils names them and lift; before, every MIPS-3D word
//! and the SmartMIPS SPECIAL/SPECIAL2 forms were bad instructions or opaque
//! `SPECIAL2` placeholders.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/mips_ase")
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

const PROBES: [(&str, &str, &str); 2] = [
    ("mips3d_probe.o", "mips3d_probe.txt", "MIPS:BE:64:64-32addr"),
    (
        "smartmips_probe.o",
        "smartmips_probe.txt",
        "MIPS:BE:32:default",
    ),
];

#[test]
fn every_mips3d_and_smartmips_encoding_decodes_as_binutils_names_it() {
    for (object, expected, target) in PROBES {
        let (stdout, stderr, code) = run_unlace(&[
            "disassemble",
            &fixture(object),
            "probe",
            "--target",
            target,
            "--count",
            "1000",
        ]);
        assert_eq!(code, 0, "{object}: {stderr}");
        let want = std::fs::read_to_string(fixture(expected)).unwrap();
        let want: Vec<&str> = want.lines().collect();
        assert_eq!(rows(&stdout), want, "{object}");
    }
}

#[test]
fn the_probes_lift_without_bad_instructions() {
    for (object, _, target) in PROBES {
        decompile(&[&fixture(object), "probe", "--target", target]);
    }
}

#[test]
fn raw_scaled_indexed_load() {
    let c = decompile(&[
        &fixture("smartmips.bin"),
        "0x1000",
        "--raw-image",
        "--target",
        "MIPS:BE:32:default",
        "--base",
        "0x1000",
    ]);
    assert!(c.contains("return *(unsigned int *)(a0 + a1 * 4);"), "{c}");
}

#[test]
fn raw_reciprocal_newton_step() {
    let c = decompile(&[
        &fixture("mips3d.bin"),
        "0x1000",
        "--raw-image",
        "--target",
        "MIPS:BE:64:64-32addr",
        "--base",
        "0x1000",
    ]);
    assert!(c.contains("- 1.0);"), "{c}");
}
