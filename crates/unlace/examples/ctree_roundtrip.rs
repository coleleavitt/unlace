//! Check that exported C syntax trees print back to the code they were exported from.
//!
//! ```sh
//! unlace decompile-all a.out --json --ctree > a.json
//! cargo run -p unlace --example ctree_roundtrip -- a.json
//! unlace decompile a.out main --json --ctree | cargo run -p unlace --example ctree_roundtrip
//! ```
//!
//! Each argument is a `--json --ctree` document (standard input when there is none). For every
//! record with `code`, the `ctree` member is read back and printed by the reference C printer
//! (`unlace::unstable::printer::CPrinter`); the result must be `code`, byte for byte. The
//! report counts the functions, the trees, the exact round trips, the trees with no `raw` node
//! (text the typed vocabulary does not cover), the nodes, the levels of the deepest tree, the
//! `raw` nodes by the kind of node they are in, and each reason a function has no tree.
//!
//! The exit status is 0 when every tree prints back, 1 when one does not (a `MISMATCH` line
//! names it), and 2 when a document or a tree in it could not be read (an `UNREADABLE` line
//! says why). `unlace::unstable` is not covered by a stability promise.

use std::collections::BTreeMap;
use std::io::Read;

use unlace::unstable::printer::{Kind, Node, print_c, tree_from_json};

#[derive(Default)]
struct Report {
    with_code: usize,
    trees: usize,
    exact: usize,
    fully_typed: usize,
    nodes: usize,
    deepest: usize,
    raw_in: BTreeMap<&'static str, usize>,
    no_tree: BTreeMap<String, usize>,
    mismatches: Vec<String>,
    unreadable: Vec<String>,
}

fn count_raw(node: &Node, parent: &'static str, depth: usize, report: &mut Report) -> usize {
    report.nodes += 1;
    report.deepest = report.deepest.max(depth);
    let mut raw = 0;
    if node.kind == Kind::Raw {
        *report.raw_in.entry(parent).or_default() += 1;
        raw += 1;
    }
    for child in &node.children {
        raw += count_raw(child, node.kind.name(), depth + 1, report);
    }
    raw
}

fn check(source: &str, text: &str, report: &mut Report) -> Result<(), Box<dyn std::error::Error>> {
    let document: serde_json::Value = serde_json::from_str(text)?;
    let functions = document["functions"].as_array().ok_or("no `functions`")?;
    for function in functions {
        let Some(code) = function["code"].as_str() else {
            continue;
        };
        let name = function["name"].as_str().unwrap_or("?");
        report.with_code += 1;
        if function["ctree"].is_null() {
            let reason = function["ctree_error"]
                .as_str()
                .unwrap_or("the document was not written with --ctree");
            *report.no_tree.entry(reason.to_string()).or_default() += 1;
            continue;
        }
        let tree = match tree_from_json(&function["ctree"].to_string()) {
            Ok(tree) => tree,
            Err(error) => {
                report.unreadable.push(format!("{source}: {name}: {error}"));
                continue;
            }
        };
        report.trees += 1;
        if count_raw(&tree.root, "tree", 1, report) == 0 {
            report.fully_typed += 1;
        }
        let printed = print_c(&tree);
        if printed == code {
            report.exact += 1;
        } else {
            let line = printed
                .lines()
                .zip(code.lines())
                .position(|(printed, code)| printed != code)
                .map_or(0, |at| at + 1);
            report
                .mismatches
                .push(format!("{source}: {name}: first difference on line {line}"));
        }
    }
    Ok(())
}

fn main() {
    let mut report = Report::default();
    let paths: Vec<String> = std::env::args().skip(1).collect();
    let mut documents = Vec::new();
    if paths.is_empty() {
        let mut text = String::new();
        let read = std::io::stdin().read_to_string(&mut text).map(|_| text);
        documents.push(("<stdin>".to_string(), read));
    }
    for path in paths {
        let read = std::fs::read_to_string(&path);
        documents.push((path, read));
    }
    for (source, text) in documents {
        let checked = text
            .map_err(Into::into)
            .and_then(|text| check(&source, &text, &mut report));
        if let Err(error) = checked {
            report.unreadable.push(format!("{source}: {error}"));
        }
    }

    println!("functions with code: {}", report.with_code);
    println!("with a tree: {}", report.trees);
    println!("print back byte for byte: {}", report.exact);
    println!("without raw nodes: {}", report.fully_typed);
    println!("nodes: {}", report.nodes);
    println!("deepest tree: {}", report.deepest);
    for (parent, count) in &report.raw_in {
        println!("raw nodes in {parent}: {count}");
    }
    for (reason, count) in &report.no_tree {
        println!("no tree ({reason}): {count}");
    }
    for mismatch in &report.mismatches {
        println!("MISMATCH {mismatch}");
    }
    for unreadable in &report.unreadable {
        println!("UNREADABLE {unreadable}");
    }
    if !report.unreadable.is_empty() {
        std::process::exit(2);
    }
    if !report.mismatches.is_empty() {
        std::process::exit(1);
    }
}
