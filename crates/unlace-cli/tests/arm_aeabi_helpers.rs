//! Calls to the Arm run-time ABI helpers carry their RTABI32 prototypes, laid out
//! under the base standard whatever the image's own convention: a soft-float
//! object (with or without an FPU, either byte order) and a hard-float object on
//! a single-precision FPU, whose `double` operations call the helpers. Under
//! `option aeabifloat on` the floating-point helpers print as the C operators
//! and casts they implement.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(object: &str, function: &str) -> String {
    decompile_with(object, function, &[])
}

fn decompile_with(object: &str, function: &str, options: &[&str]) -> String {
    let path = repo_root()
        .join("crates/unlace-cli/tests/fixtures/arm_aeabi")
        .join(object);
    let mut args = vec!["decompile", path.to_str().unwrap(), function];
    args.extend_from_slice(options);
    let (stdout, stderr, code) = run_kuna(&args);
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

const FOLD: [&str; 3] = ["--option", "aeabifloat", "on"];

#[test]
fn folded_soft_float_helpers_print_as_operators_and_casts() {
    for object in ["arm.o", "armeb.o", "thumbv7m.o"] {
        for (function, line) in [
            ("fadd", "return a + b;"),
            ("fmul", "return a * b;"),
            ("dadd", "return a + b;"),
            ("ddiv", "return a / b;"),
            ("flt", "(a < b)"),
            ("dlt", "(a < b)"),
            ("toint", "return (int)a;"),
            ("dtou", "return (unsigned int)(long long)a;"),
            ("i2d", "return (double)a;"),
            ("f2d", "return (double)a;"),
            ("d2f", "return (float)a;"),
            ("d2l", "return (long long)a;"),
            ("l2d", "return (double)a;"),
            ("u2f", "return (float)a;"),
            ("dscale", "return v * (double)n;"),
        ] {
            let out = decompile_with(object, function, &FOLD);
            assert!(out.contains(line), "{object} {function}: {out}");
            assert!(!out.contains("__aeabi"), "{object} {function}: {out}");
        }
    }
}

#[test]
fn folded_hard_float_double_helpers_print_as_operators_and_casts() {
    for (function, line) in [
        ("dlt", "(a < b)"),
        ("dtou", "return (unsigned int)(long long)a;"),
        ("d2f", "return (float)a;"),
        ("d2l", "return (long long)a;"),
    ] {
        let out = decompile_with("thumbv7em-hf.o", function, &FOLD);
        assert!(out.contains(line), "{function}: {out}");
        assert!(!out.contains("__aeabi"), "{function}: {out}");
    }
}

#[test]
fn a_double_moved_back_to_d0_prints_whole() {
    for (function, line, options) in [
        ("dadd", "return __aeabi_dadd(a,b);", &[][..]),
        ("i2d", "return __aeabi_i2d(a);", &[][..]),
        ("dadd", "return a + b;", &FOLD[..]),
        ("i2d", "return (double)a;", &FOLD[..]),
    ] {
        let out = decompile_with("thumbv7em-hf.o", function, options);
        assert!(out.contains(line), "{function}: {out}");
        assert!(!out.contains("0xffffffff00000000"), "{function}: {out}");
    }
}

/// The objects above without their debug information: the caller's return
/// comes from recovery alone, and a pure helper's result handed straight to
/// the RETURN is the return value.
#[test]
fn a_pure_helper_result_handed_back_is_returned_without_debug_info() {
    for object in ["arm-nodebug.o", "armeb-nodebug.o", "thumbv7m-nodebug.o"] {
        for (function, line) in [
            ("fadd", "return __aeabi_fadd(a0,a1);"),
            ("fmul", "return __aeabi_fmul(a0,a1);"),
            ("toint", "return __aeabi_f2iz(a0);"),
            ("u2f", "return __aeabi_ui2f(a0);"),
        ] {
            let out = decompile(object, function);
            assert!(out.contains(line), "{object} {function}: {out}");
            assert!(!out.starts_with("void"), "{object} {function}: {out}");
        }
    }
}
