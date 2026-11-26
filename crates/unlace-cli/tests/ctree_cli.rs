//! `--ctree`: the C syntax tree of the code as an opt-in member of the `--json` record.

use crate::common::{repo_root, run_unlace};
use unlace_cli::embed::ctree_from_json;
use unlace_decomp::ctreeexport::{Kind, print_c};
use unlace_decomp::lang::OutLang;

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
    // `i = i + 1`: the sum is printed for the op that writes `i`, so it has `i`'s type.
    let sum = &step["children"][1];
    assert_eq!((&sum["op"], &sum["type"]), (&"add".into(), &"int".into()));

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
fn the_flag_needs_json() {
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
    ] {
        let (stdout, stderr, code) = run_unlace(&args);
        assert_ne!(code, 0, "{args:?}");
        assert!(stdout.is_empty(), "{args:?}: {stdout}");
        assert!(stderr.contains(message), "{args:?}: {stderr}");
    }
}

#[test]
fn a_loop_and_a_test_are_typed_in_rust_and_go() {
    for (language, lang, kind) in [("rust", OutLang::Rust, "while"), ("go", OutLang::Go, "for")] {
        let document = document(&[
            "decompile",
            &sample(),
            "sum_to",
            "--json",
            "--ctree",
            "--language",
            language,
        ]);
        let record = &document["functions"][0];
        let code = record["code"].as_str().unwrap();
        let tree = ctree_from_json(&record["ctree"].to_string()).expect("a tree");
        assert_eq!(tree.lang, lang);
        assert_eq!(print_c(&tree), code, "{language}");
        let mut kinds = Vec::new();
        tree.root.walk(&mut |node| kinds.push(node.kind));
        assert!(
            kinds.contains(&Kind::from_name(kind).unwrap()),
            "{language}: {kinds:?}"
        );
    }
}

#[test]
fn jobs_2_gives_the_trees_jobs_1_does() {
    let sample = sample();
    let serial = document(&["decompile-all", &sample, "--json", "--ctree", "--jobs", "1"]);
    let pooled = document(&["decompile-all", &sample, "--json", "--ctree", "--jobs", "2"]);
    assert_eq!(serial, pooled, "--jobs 2 differs from --jobs 1");
}

/// A language file over C: keywords, operators and the member form respelled.
const PSEUDO: &str = r#"
base = "c"

[keywords]
if = "when"
else = "otherwise"
goto = "jump"
while = "aslongas"
return = "give"

[operators]
assign = ":="
boolean_and = "and"
boolean_or = "or"
boolean_not = "not "
plus = "plus"

[forms]
member = "rust-deref-paren"
"#;

#[test]
fn a_language_file_over_c_changes_spellings_and_not_what_the_nodes_are() {
    let ptx = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/ptx.o")
        .to_str()
        .expect("UTF-8 fixture path")
        .to_owned();
    let file = tempfile::Builder::new()
        .suffix(".toml")
        .tempfile()
        .expect("a temporary file");
    std::fs::write(file.path(), PSEUDO).expect("the language file is written");
    let language = file.path().to_str().expect("a UTF-8 temporary path");

    let kinds = |document: &serde_json::Value| {
        let mut kinds: Vec<Vec<String>> = Vec::new();
        for record in document["functions"].as_array().unwrap() {
            let code = record["code"].as_str().expect("ptx decompiles");
            let name = record["name"].as_str().unwrap();
            assert!(record["ctree_error"].is_null(), "{name}: {record}");
            let tree = ctree_from_json(&record["ctree"].to_string()).expect("a tree");
            assert_eq!(print_c(&tree), code, "{name}");
            let mut of_function = Vec::new();
            tree.root.walk(&mut |node| {
                assert_ne!(node.kind, Kind::Raw, "{name}: {:?}", node.text);
                of_function.push(if node.name.is_empty() {
                    node.kind.name().to_string()
                } else {
                    node.name.clone()
                });
            });
            kinds.push(of_function);
        }
        kinds
    };
    let functions = "swallow_file_in_memory,fix_output_parameters,digest_word_file,print_spaces";
    let select = [
        "decompile-all",
        &ptx,
        "--json",
        "--ctree",
        "--functions",
        functions,
    ];
    let plain = document(&select);
    let flavoured = document(&[&select[..], &["--language-file", language]].concat());

    let record = &flavoured["functions"][0];
    let code = record["code"].as_str().unwrap();
    assert!(code.contains("when (") && code.contains(" := "), "{code}");
    assert!(!code.contains("if (") && !code.contains(" = "), "{code}");
    let keywords = &record["ctree"]["style"]["keywords"];
    assert_eq!(keywords["if"], "when");
    assert_eq!(keywords["return"], "give");
    assert!(keywords.get("switch").is_none(), "{keywords}");
    assert_eq!(
        plain["functions"][0]["ctree"]["style"]["keywords"],
        serde_json::json!({})
    );

    // The member form adds a dereference where C prints `->`; nothing else differs.
    let member = |kinds: Vec<Vec<String>>| -> Vec<Vec<String>> {
        kinds
            .into_iter()
            .map(|of_function| {
                of_function
                    .into_iter()
                    .filter(|kind| {
                        !["ptr_member", "member", "deref", "paren"].contains(&kind.as_str())
                    })
                    .collect()
            })
            .collect()
    };
    assert_eq!(member(kinds(&flavoured)), member(kinds(&plain)));
}

#[test]
fn a_constant_carries_the_type_it_is_printed_with() {
    let document = document(&["decompile", &sample(), "sum_to", "--json", "--ctree"]);
    let root = &document["functions"][0]["ctree"]["root"];
    let body = &root["children"][1];
    let loop_ = body["children"]
        .as_array()
        .unwrap()
        .iter()
        .find(|statement| statement["kind"] == "for")
        .expect("a for loop");
    let [init, _, step, _] = loop_["children"].as_array().unwrap().as_slice() else {
        panic!("{loop_}");
    };
    let start = &init["children"][1];
    let one = &step["children"][1]["children"][1];
    assert_eq!(
        (&start["kind"], &start["text"], &start["type"]),
        (&"const".into(), &"1".into(), &"int".into())
    );
    assert_eq!(
        (&one["kind"], &one["text"], &one["type"]),
        (&"const".into(), &"1".into(), &"int".into())
    );
    let tree = ctree_from_json(&document["functions"][0]["ctree"].to_string()).expect("a tree");
    let mut zeros = Vec::new();
    tree.root.walk(&mut |node| {
        if node.kind == Kind::Const && node.text == "0" {
            zeros.push(node.ty.clone());
        }
    });
    assert_eq!(zeros, vec![Some("long".to_string())]);
}

#[test]
fn a_string_literal_carries_its_pointer_type() {
    let document = document(&["decompile", &sample(), "main", "--json", "--ctree"]);
    let tree = ctree_from_json(&document["functions"][0]["ctree"].to_string()).expect("a tree");
    let mut constants = Vec::new();
    tree.root.walk(&mut |node| {
        if node.kind == Kind::Const {
            constants.push((node.text.clone(), node.ty.clone()));
        }
    });
    assert_eq!(
        constants,
        vec![
            ("3".to_string(), Some("int".to_string())),
            ("\"%ld\\n\"".to_string(), Some("char *".to_string())),
        ]
    );
}
