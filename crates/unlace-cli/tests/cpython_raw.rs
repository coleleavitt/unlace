//! The CPython 3.12 bytecode language decompiles a function's co_code from a raw image:
//! fast locals become parameters and variables, the value stack folds away, and objects,
//! names and operators are named user-ops (fixtures from `fixtures/cpython/source.py`).
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/cpython")
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
        "CPython:LE:32:3.12",
        "--base",
        "0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `f`: a for loop over `range(n)` with a `continue`, then a while loop, from FOR_ITER,
/// POP_JUMP_IF_FALSE, JUMP_BACKWARD, BINARY_OP and COMPARE_OP.
#[test]
fn cpython_loops_decompile() {
    let out = decompile("loops.bin");
    assert!(
        out.contains("v1 = py_iter(py_call(0,py_global(0),a0));"),
        "{out}"
    );
    assert!(out.contains("while (!(bool)py_iter_done(v1)) {"), "{out}");
    assert!(out.contains("v4 = py_inplace_add(v4,v3);"), "{out}");
    assert!(
        out.contains("v4 = py_inplace_subtract(v4,py_const(4));"),
        "{out}"
    );
    assert!(out.contains("return v4;"), "{out}");
}

/// `g`: POP_JUMP_IF_NOT_NONE, LOAD_ATTR and BINARY_SUBSCR with their inline caches.
#[test]
fn cpython_attrs_decompile() {
    let out = decompile("attrs.bin");
    assert!(out.contains("if ((bool)py_is_none(a0))"), "{out}");
    assert!(out.contains("v2 = py_getattr(a0,0);"), "{out}");
    assert!(
        out.contains("return py_add(v2,py_multiply(v1,py_const(2)));"),
        "{out}"
    );
}
