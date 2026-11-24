//! The Netronome NFP-6xxx microengine language decompiles hand-encoded ME v2.8 microcode
//! (64-bit instruction words, branch targets in instruction numbers) from a raw image.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/nfp")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "NFP:LE:32:ME28",
        "--base",
        "0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `immed[gprA_1, 0]`, a flag-setting `alu[--, --, B, gprB_0]` and `beq`, then a loop of
/// `alu[gprA_1, gprA_1, +, gprB_0]`, `alu[gprB_0, gprB_0, -, 1]` (swapped operands) and `bne`,
/// a store through `*l$index0[1]` and `rtn[gprA_2]`.
#[test]
fn nfp_counted_loop_decompiles() {
    let out = decompile("sum_loop.bin");
    assert!(out.contains("v1 = 0;"), "{out}");
    assert!(out.contains("v1 += v2;"), "{out}");
    assert!(out.contains("v2 = v2 + -1"), "{out}");
    assert!(out.contains("*(int *)(v3 + 4) = v1;"), "{out}");
}

/// One of each class: alu_shf, asr, immed_w1, immed <<16, ld_field_w_clr, br_bset,
/// br!=byte, local_csr_wr, a mem[read] command, a deferred br and ctx_arb[kill].
#[test]
fn nfp_instruction_classes_decode() {
    let out = decompile("coverage.bin");
    assert!(out.contains("(v1 >> 3 & 1) != 1"), "{out}");
    assert!(out.contains("(v1 & 0xff) == 0x7f"), "{out}");
    assert!(out.contains("local_csr_wr(6,v1);"), "{out}");
    assert!(out.contains("cpp_cmd(0x40,0,0,v1,v2,1,1);"), "{out}");
    assert!(out.contains("ctx_kill();"), "{out}");
}
