//! `globalwidth`: a symbol-table data object takes the width its accesses use,
//! and the padding between functions disassembles as IDA's `align` item.

use crate::common;

#[test]
fn indexed_short_table_is_typed_by_its_accesses() {
    let binary = common::fixture("globalwidth_x86_64");
    let (on, stderr, rc) = common::run_kuna(&["decompile", &binary, "f"]);
    assert_eq!(rc, 0, "{stderr}");
    assert!(on.contains("g3[a0 & 7] = (short)a0;"), "{on}");
    assert!(on.contains("(int)g1"), "a narrowing read is not an array: {on}");
    let (off, _, _) = common::run_kuna(&["decompile", &binary, "f", "--option", "globalwidth", "off"]);
    assert!(off.contains("*(short *)&g3["), "{off}");
}

#[test]
fn padding_after_a_return_is_one_align_row() {
    let binary = common::fixture("globalwidth_x86_64");
    let (all, stderr, rc) = common::run_kuna(&["disassemble", &binary, "0x401000", "--addr", "--count", "40"]);
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
        let (out, stderr, rc) = common::run_kuna(&args);
        assert_eq!(rc, 0, "{stderr}");
        out.contains("\"0x401020\"")
    };
    assert!(list(&["--option", "aifdataveto", "off"]), "the table is a function without the veto");
    assert!(!list(&[]), "the veto drops the table");
}

/// `calltable`: an unchecked table of functions is a call table (its targets
/// are functions); an entry on a switch case nothing calls is demoted.
#[test]
fn call_table_targets_are_functions_and_switch_cases_are_not() {
    let binary = common::fixture("calltable_x86_64");
    let list = |extra: &[&str]| {
        let mut args = vec!["functions", binary.as_str(), "--json"];
        args.extend_from_slice(extra);
        let (out, stderr, rc) = common::run_kuna(&args);
        assert_eq!(rc, 0, "{stderr}");
        ["0x401030", "0x401060", "0x401070"].map(|a| out.contains(&format!("\"{a}\"")))
    };
    assert_eq!(list(&[]), [false, true, true]);
    assert_eq!(list(&["--option", "calltable", "off"]), [true, false, false]);
}
