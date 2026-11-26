//! The exported C syntax tree (`DecompileOptions::want_ctree`) over every function of the
//! browser and loader fixtures: each tree prints back to its code through the reference
//! printer, asking for it changes nothing else in the record, a statement's addresses are
//! instructions its lines map to, the tree follows the layout options, and output in another
//! language reports why it has no tree.
//!
//! Requires built `.sla` specs for each fixture.

use std::collections::{BTreeMap, BTreeSet};
use std::path::PathBuf;

use unlace_console::engine::{ConsoleProgram, bootstrap_from_image};
use unlace_console::project::{DecompileOptions, FuncResult, decompile_targets_with};
use unlace_decomp::ctreeexport::{Brace, ExportTree, Kind, Node, print_c};
use unlace_decomp::options::{BraceCategory, BraceStyle};
use unlace_decomp::printc::ArchPrintExt;

/// The last two add the forms the others lack: labels, `goto`, loops with leading statements
/// in their conditions, `try` and comment lines.
const FIXTURES: [&str; 7] = [
    "integrations/web/test/fixtures/sample.elf",
    "integrations/web/test/fixtures/sample_aarch64.o",
    "crates/unlace-analysis/tests/fixtures/fauxware",
    "crates/unlace-analysis/tests/fixtures/entrymain_arm",
    "crates/unlace-analysis/tests/fixtures/pdb_prog.exe",
    "crates/unlace-analysis/tests/fixtures/uefi_diskio_x64.efi",
    "crates/unlace-cli/tests/fixtures/itaniumeh/eh4_x86_64.elf",
];

fn fixture(path: &str) -> String {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .join(path)
        .canonicalize()
        .unwrap()
        .to_str()
        .expect("UTF-8 fixture path")
        .to_owned()
}

fn batch(
    binary: &str,
    want_ctree: bool,
    setup: impl FnOnce(&mut ConsoleProgram),
) -> Vec<FuncResult> {
    let specs = vec![fixture("specs")];
    let mut prog = bootstrap_from_image(binary, "", &specs)
        .expect("bootstrap fixture with built processor specs");
    prog.arch_mut()
        .apply_mode("aggressive")
        .expect("aggressive mode");
    setup(&mut prog);
    prog.commit_pending_analysis().expect("analysis commit");
    let targets = prog.function_entries_executable();
    let opts = DecompileOptions {
        want_provenance: true,
        want_ctree,
        single_target: targets.len() == 1,
        ..DecompileOptions::default()
    };
    decompile_targets_with(&mut prog, targets, &opts)
}

fn tree(result: &FuncResult) -> Result<&ExportTree, &str> {
    let detail = result.detail.as_deref().expect("a detail");
    match detail.ctree.as_ref().expect("the tree was asked for") {
        Ok(tree) => Ok(tree),
        Err(reason) => Err(reason),
    }
}

/// Every address of every statement under `node` is one a line of the statement maps to.
fn check_addresses(node: &Node, lines: &BTreeMap<u32, BTreeSet<u64>>, at: &str) {
    if node.kind.is_statement() {
        let mapped: BTreeSet<u64> = lines
            .range(node.span.line..=node.span.end_line)
            .flat_map(|(_, addresses)| addresses)
            .copied()
            .collect();
        for address in &node.addresses {
            assert!(
                mapped.contains(address),
                "{at}: {:?} on lines {}..={} names 0x{address:x}, which no line of it maps",
                node.kind,
                node.span.line,
                node.span.end_line
            );
        }
    }
    for child in &node.children {
        check_addresses(child, lines, at);
    }
}

#[test]
fn trees_print_back_every_fixture_function() {
    let mut trees = 0;
    for path in FIXTURES {
        let binary = fixture(path);
        let (plain, exported) = (batch(&binary, false, |_| {}), batch(&binary, true, |_| {}));
        assert_eq!(plain.len(), exported.len(), "{path}: batch sizes differ");
        for (plain, exported) in plain.iter().zip(&exported) {
            let at = format!("{path} {} @ 0x{:x}", exported.name, exported.address);
            assert_eq!(
                plain.code, exported.code,
                "{at}: asking for the tree changed the code"
            );
            assert_eq!(plain.line_mappings, exported.line_mappings, "{at}");
            assert_eq!(
                format!("{:?}", plain.variables),
                format!("{:?}", exported.variables),
                "{at}"
            );
            let Some(code) = exported.code.as_deref() else {
                continue;
            };
            let tree = tree(exported).unwrap_or_else(|reason| panic!("{at}: {reason}"));
            assert_eq!(print_c(tree), code, "{at}");
            tree.root.walk(&mut |node| {
                assert_ne!(node.kind, Kind::Raw, "{at}: {:?} is not typed", node.text);
            });
            let lines = exported
                .line_mappings
                .iter()
                .map(|line| {
                    let number = u32::try_from(line.line_number).unwrap();
                    (number, line.addresses.iter().copied().collect())
                })
                .collect();
            check_addresses(&tree.root, &lines, &at);
            trees += 1;
        }
    }
    assert!(trees > 100, "{trees} trees checked");
}

#[test]
fn a_tree_follows_the_layout_options() {
    let binary = fixture(FIXTURES[2]);
    let exported = batch(&binary, true, |prog| {
        let print = prog.arch_mut().print_mut();
        print.set_indent_increment(4);
        print.set_brace_format(BraceCategory::Function, BraceStyle::SameLine);
        print.set_brace_format(BraceCategory::IfElse, BraceStyle::NextLine);
        print.set_brace_format(BraceCategory::Loop, BraceStyle::SkipLine);
    });
    let mut braced = 0;
    for result in &exported {
        let Some(code) = result.code.as_deref() else {
            continue;
        };
        let tree = tree(result).unwrap_or_else(|reason| panic!("{}: {reason}", result.name));
        assert_eq!(print_c(tree), code, "{}", result.name);
        assert_eq!(
            (
                tree.style.indent,
                tree.style.brace_function,
                tree.style.brace_ifelse,
                tree.style.brace_loop
            ),
            (4, Brace::SameLine, Brace::NextLine, Brace::SkipLine)
        );
        tree.root.walk(&mut |node| {
            braced += usize::from(matches!(node.kind, Kind::If | Kind::While | Kind::DoWhile));
        });
    }
    assert!(braced > 5, "{braced} statements with braces of their own");
}

#[test]
fn output_in_another_language_says_why_it_has_no_tree() {
    let binary = fixture(FIXTURES[0]);
    let exported = batch(&binary, true, |prog| {
        prog.arch_mut()
            .set_print_language_checked("rust-language")
            .expect("output language");
    });
    let mut refused = 0;
    for result in exported.iter().filter(|result| result.code.is_some()) {
        let reason = tree(result).expect_err("a Rust body has no tree");
        assert!(reason.contains("C output only"), "{reason}");
        refused += 1;
    }
    assert!(refused > 5);
}
