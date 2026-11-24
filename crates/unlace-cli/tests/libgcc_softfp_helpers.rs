//! Calls to libgcc's soft-float and machine-mode integer routines on targets
//! other than 32-bit ARM carry prototypes typed by their machine modes, laid out
//! under the integer convention (`unlace_softfpsigs`), so a function whose last
//! act is one returns its result and keeps its arguments (#864).
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(object: &str, function: &str, options: &[&str]) -> String {
    let path = repo_root()
        .join("crates/unlace-cli/tests/fixtures/libgcc_softfp")
        .join(object);
    let mut args = vec!["decompile", path.to_str().unwrap(), function];
    args.extend_from_slice(options);
    let (stdout, stderr, code) = run_unlace(&args);
    assert_eq!(code, 0, "{object} {function}: {stderr}");
    stdout
}

#[test]
fn single_precision_routines_return_their_result() {
    for object in ["mipsel.o", "mipsbe.o", "rv32.o", "lanai.o"] {
        for (function, line) in [
            ("fadd", "return __addsf3(a0,a1);"),
            ("fmul", "return __mulsf3(a0,a1);"),
            ("toint", "return __fixsfsi(a0);"),
            ("u2f", "return __floatunsisf(a0);"),
            ("flt", "__ltsf2(a0,a1)"),
        ] {
            let out = decompile(object, function, &[]);
            assert!(out.contains(line), "{object} {function}: {out}");
            assert!(!out.starts_with("void"), "{object} {function}: {out}");
        }
    }
}

#[test]
fn double_precision_routines_take_register_pairs_on_little_endian_targets() {
    for object in ["mipsel.o", "rv32.o"] {
        for (function, line) in [
            ("dadd", "return __adddf3(CONCAT44(a1,a0),CONCAT44(a3,a2));"),
            ("d2f", "return __truncdfsf2(CONCAT44(a1,a0));"),
            ("i2d", "return __floatsidf(a0);"),
            ("d2l", "return __fixdfdi(CONCAT44(a1,a0));"),
        ] {
            let out = decompile(object, function, &[]);
            assert!(out.contains(line), "{object} {function}: {out}");
        }
    }
}

#[test]
fn a_big_endian_eight_byte_result_waits_for_libgccsigs() {
    let off = decompile("mipsbe.o", "dadd", &[]);
    assert!(off.starts_with("void"), "{off}");
    let on = decompile("mipsbe.o", "dadd", &["--option", "libgccsigs", "on"]);
    assert!(
        on.contains("return __adddf3(CONCAT44(a0,a1),CONCAT44(a2,a3));"),
        "{on}"
    );
}

#[test]
fn eight_byte_values_wait_for_a_model_that_holds_them() {
    // Lanai's spec passes a `long long` on the stack and returns it through a
    // hidden pointer, unlike the four-byte values it passes in registers.
    let dadd = decompile("lanai.o", "dadd", &[]);
    assert!(!dadd.contains(" *"), "{dadd}");
}

/// The #864 repro: GNU gcc 15.3 objects whose `scale` ends in a call to
/// `__addsf3`.
#[test]
fn gcc_soft_float_scale_returns_its_sum() {
    for object in ["gcc-csky.o", "gcc-or1k.o", "gcc-arc.o", "gcc-xtensa.o"] {
        let out = decompile(object, "scale", &[]);
        assert!(out.contains("return __addsf3("), "{object}: {out}");
        assert!(out.contains("__floatsisf(a1)"), "{object}: {out}");
        assert!(!out.starts_with("void"), "{object}: {out}");
    }
}
