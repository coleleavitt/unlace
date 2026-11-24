//! Calls to the Arm run-time ABI helpers carry their RTABI32 prototypes, laid out
//! under the base standard whatever the image's own convention: a soft-float
//! object (with or without an FPU, either byte order) and a hard-float object on
//! a single-precision FPU, whose `double` operations call the helpers.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(object: &str, function: &str) -> String {
    let path = repo_root()
        .join("crates/unlace-cli/tests/fixtures/arm_aeabi")
        .join(object);
    let (stdout, stderr, code) = run_kuna(&["decompile", path.to_str().unwrap(), function]);
    assert_eq!(code, 0, "{object} {function}: {stderr}");
    stdout
}

#[test]
fn soft_float_helpers_take_typed_arguments() {
    for object in ["arm.o", "armeb.o", "thumbv7m.o"] {
        for (function, line) in [
            ("fadd", "return __aeabi_fadd(a,b);"),
            ("dadd", "return __aeabi_dadd(a,b);"),
            ("ddiv", "return __aeabi_ddiv(a,b);"),
            ("dlt", "__aeabi_dcmplt(a,b)"),
            ("toint", "return __aeabi_f2iz(a);"),
            ("dtou", "return __aeabi_d2uiz(a);"),
            ("i2d", "return __aeabi_i2d(a);"),
            ("f2d", "return __aeabi_f2d(a);"),
            ("d2f", "return __aeabi_d2f(a);"),
            ("d2l", "return __aeabi_d2lz(a);"),
            ("l2d", "return __aeabi_l2d(a);"),
            ("u2f", "return __aeabi_ui2f(a);"),
            ("dscale", "return __aeabi_dmul(v,"),
            ("fill", "__aeabi_memset(d,n,7);"),
        ] {
            let out = decompile(object, function);
            assert!(out.contains(line), "{object} {function}: {out}");
            assert!(!out.contains("union"), "{object} {function}: {out}");
        }
    }
}

#[test]
fn hard_float_double_helpers_take_core_registers() {
    for (function, line) in [
        ("dlt", "__aeabi_dcmplt(a,b)"),
        ("dtou", "return __aeabi_d2uiz(a);"),
        ("d2f", "return __aeabi_d2f(a);"),
        ("d2l", "return __aeabi_d2lz(a);"),
        ("dadd", "__aeabi_dadd(a,b);"),
        ("fill", "__aeabi_memset(d,n,7);"),
    ] {
        let out = decompile("thumbv7em-hf.o", function);
        assert!(out.contains(line), "{function}: {out}");
    }
}
