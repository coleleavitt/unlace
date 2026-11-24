//! A zig-built RISC-V shared object whose DWARF gives a `void` return as a zero-size base type
//! loads and decompiles; before, `functions` and `decompile` panicked with "outtype null".
use crate::common;
use common::{repo_root, run_unlace};

fn fixture() -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_zig_void/void_return.so")
        .to_str()
        .unwrap()
        .to_owned()
}

#[test]
fn zig_void_return_lists_and_decompiles() {
    let so = fixture();
    let (stdout, stderr, code) = run_unlace(&["functions", &so]);
    assert_eq!(code, 0, "unlace functions: {stderr}");
    assert!(stdout.contains("f"), "{stdout}");
    let (stdout, stderr, code) = run_unlace(&["decompile", &so, "f"]);
    assert_eq!(code, 0, "unlace decompile f: {stderr}");
    assert!(!stderr.contains("panicked"), "{stderr}");
    assert!(stdout.contains("f("), "{stdout}");
}
