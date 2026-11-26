//! `--ctree`: the C syntax tree of the code as an opt-in member of the `--json` record.

use crate::common::{repo_root, run_unlace};
use unlace_cli::embed::ctree_from_json;
use unlace_decomp::ctreeexport::{Kind, print_c};

fn sample() -> String {
    repo_root()
        .join("integrations/web/test/fixtures/sample.elf")
        .to_str()
        .expect("UTF-8 fixture path")
        .to_owned()
}

fn document(args: &[&str]) -> serde_json::Value {
    let (stdout, stderr, code) = run_unlace(args);
    assert_eq!(code, 0, "{args:?}: {stderr}");
    serde_json::from_str(&stdout).expect("a JSON document")
}

#[test]
fn every_function_of_the_sample_exports_a_tree_that_prints_back_to_its_code() {
    let sample = sample();
    let plain = document(&["decompile-all", &sample, "--json"]);
    let with_tree = document(&["decompile-all", &sample, "--json", "--ctree"]);
    let (plain, with_tree) = (
        plain["functions"].as_array().unwrap(),
        with_tree["functions"].as_array().unwrap(),
    );
    assert_eq!(plain.len(), with_tree.len());
    assert!(plain.len() > 5);
    for (plain, record) in plain.iter().zip(with_tree) {
        let name = record["name"].as_str().unwrap();
        assert!(plain.get("ctree").is_none(), "{name}: opt-in");
        assert!(plain.get("ctree_error").is_none(), "{name}: opt-in");
        assert_eq!(
            plain["code"], record["code"],
            "{name}: the flag changes no code"
        );
        let code = record["code"].as_str().expect("the sample decompiles");
        assert!(record["ctree_error"].is_null(), "{name}");
        let tree = ctree_from_json(&record["ctree"].to_string()).expect("a tree");
        assert_eq!(print_c(&tree), code, "{name}");
        tree.root.walk(&mut |node| {
            assert_ne!(node.kind, Kind::Raw, "{name}: {:?}", node.text);
        });
    }
}

#[test]
fn a_statement_names_its_operands_types_lines_and_addresses() {
    let sample = sample();
    let document = document(&["decompile", &sample, "sum_to", "--json", "--ctree"]);
    let record = &document["functions"][0];
    let code = record["code"].as_str().unwrap();
    let body = &record["ctree"]["root"]["children"][1];
    assert_eq!(body["kind"], "block");
    let statements = body["children"].as_array().unwrap();
    let loop_ = statements
        .iter()
        .find(|statement| statement["kind"] == "for")
        .expect("a for loop");
    let [init, test, step, block] = loop_["children"].as_array().unwrap().as_slice() else {
        panic!("{loop_}");
    };
    assert_eq!(
        (&init["op"], &test["op"], &step["op"]),
        (&"assign".into(), &"le".into(), &"assign".into())
    );
    assert_eq!(test["type"], "bool");
    assert_eq!(block["kind"], "block");

    let lines: Vec<&str> = code.lines().collect();
    let text = |node: &serde_json::Value| {
        let at = |key: &str| node[key].as_u64().unwrap() as usize;
        assert_eq!(at("line"), at("end_line"));
        lines[at("line") - 1][at("col")..at("end_col")].to_string()
    };
    let operands = test["children"].as_array().unwrap();
    assert_eq!(
        format!(
            "{} {} {}",
            text(&operands[0]),
            test["text"].as_str().unwrap(),
            text(&operands[1])
        ),
        text(test)
    );
    assert_eq!(operands[0]["kind"], "var");
    assert_eq!(operands[0]["type"], "int");

    let mapped: Vec<u64> = record["line_mappings"]
        .as_array()
        .unwrap()
        .iter()
        .filter(|mapping| mapping["line_number"] == loop_["line"])
        .flat_map(|mapping| mapping["addresses"].as_array().unwrap())
        .map(|address| address.as_u64().unwrap())
        .collect();
    assert!(!mapped.is_empty());
    let addresses: Vec<u64> = loop_["addresses"]
        .as_array()
        .unwrap()
        .iter()
        .map(|address| address.as_u64().unwrap())
        .collect();
    for address in mapped {
        assert!(
            addresses.contains(&address),
            "{address:#x} of the loop's first line"
        );
    }
}

#[test]
fn the_flag_needs_json_one_process_and_c_output() {
    let sample = sample();
    for (args, message) in [
        (
            vec!["decompile-all", &sample, "--ctree"],
            "--ctree selects --json record keys; add --json",
        ),
        (
            vec!["decompile", &sample, "main", "--ctree"],
            "--ctree selects --json record keys; add --json",
        ),
        (
            vec!["decompile-all", &sample, "--json", "--ctree", "--jobs", "2"],
            "--ctree and --jobs are exclusive",
        ),
    ] {
        let (stdout, stderr, code) = run_unlace(&args);
        assert_ne!(code, 0, "{args:?}");
        assert!(stdout.is_empty(), "{args:?}: {stdout}");
        assert!(stderr.contains(message), "{args:?}: {stderr}");
    }

    let rust = document(&[
        "decompile",
        &sample,
        "main",
        "--json",
        "--ctree",
        "--language",
        "rust",
    ]);
    let record = &rust["functions"][0];
    assert!(record["code"].is_string());
    assert!(record["ctree"].is_null());
    assert!(
        record["ctree_error"]
            .as_str()
            .unwrap()
            .contains("C output only")
    );
}
