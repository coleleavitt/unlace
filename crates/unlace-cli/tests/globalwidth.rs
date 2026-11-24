//! `globalwidth`: a symbol-table data object takes the width its accesses use,
//! and the padding between functions disassembles as IDA's `align` item.

use crate::common;

#[test]
fn indexed_short_table_is_typed_by_its_accesses() {
    let binary = common::fixture("globalwidth_x86_64");
    let (on, stderr, rc) = common::run_unlace(&["decompile", &binary, "f"]);
    assert_eq!(rc, 0, "{stderr}");
    assert!(on.contains("g3[a0 & 7] = (short)a0;"), "{on}");
    assert!(
        on.contains("(int)g1"),
        "a narrowing read is not an array: {on}"
    );
    let (off, _, _) =
        common::run_unlace(&["decompile", &binary, "f", "--option", "globalwidth", "off"]);
    assert!(off.contains("*(short *)&g3["), "{off}");
}

#[test]
fn padding_after_a_return_is_one_align_row() {
    let binary = common::fixture("globalwidth_x86_64");
    let (all, stderr, rc) = common::run_unlace(&[
        "disassemble",
        &binary,
        "0x401000",
        "--addr",
        "--count",
        "40",
    ]);
    assert_eq!(rc, 0, "{stderr}");
    assert!(all.lines().any(|l| l.ends_with("align 16")), "{all}");
}

/// `aifdataveto`: a gap the code only reads as data is not a function, however
/// much it looks like one.
#[test]
fn a_function_shaped_table_the_code_reads_is_no_entry() {
    let binary = common::fixture("aifdataveto_x86_64");
    let list = |extra: &[&str]| {
        let mut args = vec!["functions", binary.as_str(), "--json"];
        args.extend_from_slice(extra);
        let (out, stderr, rc) = common::run_unlace(&args);
        assert_eq!(rc, 0, "{stderr}");
        out.contains("\"0x401020\"")
    };
    assert!(
        list(&["--option", "aifdataveto", "off"]),
        "the table is a function without the veto"
    );
    assert!(!list(&[]), "the veto drops the table");
}

/// An arm64e hardened jump table: the `cmp`/`csel` clamp bounds the switch,
/// and the inline table `LC_FUNCTION_STARTS` lists is read as data, not code.
#[test]
fn a_hardened_arm64e_jump_table_is_a_switch_and_no_entry() {
    let binary = common::repo_root()
        .join("tests/stages/fixtures/relswitch/relswitch_arm64e")
        .to_str()
        .unwrap()
        .to_owned();
    let (c, stderr, rc) = common::run_unlace(&["decompile", &binary, "_dispatch"]);
    assert_eq!(rc, 0, "{stderr}");
    assert!(
        c.contains("switch(a0 >> 0x3e)") && c.contains("case 3:"),
        "{c}"
    );
    assert!(
        !c.contains("jump-as-call") && !c.contains("sub_4060"),
        "{c}"
    );

    let list = |extra: &[&str]| {
        let mut args = vec!["functions", binary.as_str(), "--option", "listing", "on"];
        args.extend_from_slice(extra);
        let (out, stderr, rc) = common::run_unlace(&args);
        assert_eq!(rc, 0, "{stderr}");
        out
    };
    let without = list(&["--option", "aifdataveto", "off"]);
    assert!(
        without.contains("0x4060"),
        "the start is listed without the veto:\n{without}"
    );
    let with_veto = list(&[]);
    assert!(
        !with_veto.contains("0x4060"),
        "the table is read as data:\n{with_veto}"
    );
}
