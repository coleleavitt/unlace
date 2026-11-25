//! The Lua 5.4 bytecode language decompiles the raw code array of one `luac5.4` function.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/lua54")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x1000",
        "--raw-image",
        "--target",
        "Lua:LE:32:5.4",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `function(a, b) local s = 0 for i = 1, a do s = s + i end
/// if s > b then return s & 0xff end return s | b end`
#[test]
fn lua54_numeric_for_and_bitwise_return_decompile() {
    let out = decompile("sum_for.bin");
    assert!(out.contains("v1 = luaForPrep(1,a0,1);"), "{out}");
    assert!(out.contains("v2 = luaAdd(v2,v3);"), "{out}");
    assert!(out.contains("v1 = luaForLoop(v3,a0,1);"), "{out}");
    assert!(out.contains("if (luaLt(a1,v2))"), "{out}");
    assert!(out.contains("return v2 & K0;"), "{out}");
    assert!(out.contains("return v2 | a1;"), "{out}");
}

/// `function(t, n) local x = t.count + n print(x, n)
/// while n < 10 do n = n + 1 end return x << 3 end`
#[test]
fn lua54_field_call_and_while_loop_decompile() {
    let out = decompile("field_call_loop.bin");
    assert!(out.contains("v1 = luaAdd(luaGetTable(a0,K0),a1);"), "{out}");
    assert!(out.contains("luaCall(luaGetTable(U0,K1),v1,a1);"), "{out}");
    assert!(out.contains("while (luaLt(a1,10)) {"), "{out}");
    assert!(out.contains("a1 = luaAdd(a1,1);"), "{out}");
    assert!(out.contains("return v1 << 3;"), "{out}");
}
