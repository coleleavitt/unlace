//! A Go local that DWARF gives a register range and a frame slot takes the
//! name of the variable holding its value, not of the frame row.
//!
//! `runtime.findRunnable` in `tests/fixtures/go-arm64-dwarf-result/arm64-plain.elf`
//! has DWARF `mp` in `x0` over [0x571b4, 0x571bc) and then in the frame slot
//! `fbreg -80`. The value there is the one the decompiler holds in `x0`: the
//! printed code assigns `mp` to it, and `--storage` lists `x0` for that
//! variable over the DWARF range.
use crate::common;

#[test]
fn go_register_then_slot_local_takes_the_value_name() {
    let binary = common::repo_root()
        .join("tests/fixtures/go-arm64-dwarf-result/arm64-plain.elf")
        .to_string_lossy()
        .into_owned();
    let (stdout, stderr, code) = common::run_unlace(&[
        "decompile",
        &binary,
        "runtime.findRunnable",
        "--json",
        "--storage",
    ]);
    assert_eq!(code, 0, "stderr: {stderr}");
    let record: serde_json::Value = serde_json::from_str(&stdout).unwrap();
    let function = &record["functions"][0];
    assert_eq!(function["name"], "runtime.findRunnable");

    let code_text = function["code"].as_str().unwrap();
    assert!(
        code_text.contains("mp = "),
        "the printed code names the value mp"
    );

    let variables = function["variables"].as_array().unwrap();
    let mp = variables
        .iter()
        .find(|v| v["name"] == "mp")
        .expect("a row named mp");
    let x0 = mp["storage"]
        .as_array()
        .unwrap()
        .iter()
        .find(|piece| piece["space"] == "register" && piece["register"] == "x0")
        .expect("mp is held in x0");
    let covered = x0["ranges"]
        .as_array()
        .unwrap()
        .iter()
        .any(|r| r["start"] == 356788 && r["end"] == 356844);
    assert!(
        covered,
        "x0 holds mp over the DWARF range [0x571b4, 0x571ec)"
    );
}
