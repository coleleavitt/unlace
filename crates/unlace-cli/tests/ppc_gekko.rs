//! The Gekko / Broadway paired-single instructions decode in the
//! `PowerPC:BE:32:Gekko` language as binutils (`-M gekko`) names them, and
//! paired loads, arithmetic and stores decompile to float expressions on both
//! slots; before, every primary-opcode-4 word was a bad instruction (or an
//! AltiVec one) and psq_l/psq_st were not decoded.
use crate::common;
use common::{repo_root, run_unlace};

const TARGET: &str = "PowerPC:BE:32:Gekko";

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/ppc_gekko")
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

fn raw(addr: &str) -> String {
    decompile(&[
        &fixture("funcs.bin"),
        addr,
        "--raw-image",
        "--target",
        TARGET,
        "--base",
        "0x80003000",
    ])
}

#[test]
fn every_paired_single_encoding_decodes_as_binutils_names_it() {
    let probe = fixture("probe.o");
    let (stdout, stderr, code) = run_unlace(&[
        "disassemble",
        &probe,
        "probe",
        "--target",
        TARGET,
        "--count",
        "48",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let want = std::fs::read_to_string(fixture("probe.txt")).unwrap();
    let want: Vec<&str> = want.lines().collect();
    assert_eq!(rows(&stdout), want);
}

#[test]
fn the_probe_lifts_without_bad_instructions() {
    decompile(&[&fixture("probe.o"), "probe", "--target", TARGET]);
}

#[test]
fn paired_add_of_two_vectors() {
    // psq_l f0,0(r3); psq_l f1,0(r4); ps_add f0,f0,f1; psq_st f0,0(r5); blr
    let c = raw("0x80003000");
    assert!(
        c.contains("a2->field_0x0 = (float)((double)a0->field_0x0 + (double)a1->field_0x0);"),
        "{c}"
    );
    assert!(
        c.contains("a2->field_0x4 = (float)((double)v1 + (double)v2);"),
        "{c}"
    );
}

#[test]
fn paired_multiply_and_sum_is_a_dot_product() {
    // psq_l f0,0(r3); psq_l f2,0(r4); ps_mul f0,f0,f2; ps_sum0 f1,f0,f0,f0; blr
    let c = raw("0x80003020");
    assert!(
        c.contains("(double)a0->field_0x0 * (double)a1->field_0x0"),
        "{c}"
    );
    assert!(
        c.contains("(double)a0->field_0x4 * (double)a1->field_0x4"),
        "{c}"
    );
}

#[test]
fn paired_scale_by_scalar_slot() {
    // psq_l f0,0(r3); ps_muls0 f0,f0,f1; psq_st f0,0(r3); blr
    let c = raw("0x80003040");
    assert!(
        c.contains("a1->field_0x0 = (float)((double)a1->field_0x0 * a0);"),
        "{c}"
    );
    assert!(
        c.contains("a1->field_0x4 = (float)((double)a1->field_0x4 * a0);"),
        "{c}"
    );
}

#[test]
fn quantized_load_names_its_gqr() {
    // psq_l f1,0(r3),1,2; blr
    let c = raw("0x80003050");
    assert!(c.contains("// spr392"), "{c}");
    assert!(c.contains("psq_load("), "{c}");
}
