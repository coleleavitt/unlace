//! `unlace map`: both directions between a function's decompiled text and
//! its instructions, on the browser's example (`sum_to`'s listing is in
//! `variable_storage_cli.rs`).
use crate::common;

use serde_json::Value;

fn sample() -> String {
    common::repo_root()
        .join("integrations/web/test/fixtures/sample.elf")
        .to_str()
        .expect("UTF-8 fixture path")
        .to_owned()
}

fn unlace(args: &[&str]) -> (String, String, i32) {
    let binary = sample();
    let specs = common::repo_root().join("specs");
    let mut argv = vec![args[0], &binary];
    argv.extend(&args[1..]);
    argv.extend(["--sleighpath", specs.to_str().expect("UTF-8 path")]);
    common::run_unlace(&argv)
}

fn json(args: &[&str]) -> Value {
    let (stdout, stderr, status) = unlace(args);
    assert_eq!(status, 0, "{args:?}: {stderr}");
    serde_json::from_str(&stdout).expect("--json")
}

/// The record `unlace map` answers from, and the 1-based line of `acc += i;`.
fn sum_to() -> (Value, usize) {
    let doc = json(&["decompile", "sum_to", "--json", "--tokens"]);
    let record = doc["functions"][0].clone();
    let line = record["code"]
        .as_str()
        .expect("code")
        .lines()
        .position(|l| l.trim() == "acc += i;")
        .expect("the loop body")
        + 1;
    (record, line)
}

#[test]
fn a_line_maps_to_the_instructions_it_came_from() {
    let (record, line) = sum_to();
    let mapped: Vec<String> = record["line_mappings"]
        .as_array()
        .expect("line_mappings")
        .iter()
        .find(|m| m["line_number"] == line)
        .expect("the line's mapping")["addresses"]
        .as_array()
        .expect("addresses")
        .iter()
        .map(|a| format!("{:#x}\n", a.as_u64().unwrap()))
        .collect();
    // 1180: cltq (the widening of i), 1182: add %rax,-0x8(%rbp)
    assert_eq!(mapped.concat(), "0x1180\n0x1182\n");
    let (stdout, stderr, status) = unlace(&["map", "sum_to", "--line", &line.to_string()]);
    assert_eq!(
        (stdout.as_str(), status),
        (mapped.concat().as_str(), 0),
        "{stderr}"
    );
}

#[test]
fn a_span_maps_to_the_instructions_of_the_tokens_it_touches() {
    let (record, line) = sum_to();
    let token = |text: &str| {
        record["tokens"]
            .as_array()
            .expect("tokens")
            .iter()
            .find(|t| t["line"] == line && t["text"] == text)
            .unwrap_or_else(|| panic!("no {text} on line {line}"))
            .clone()
    };
    // `acc` alone is the add; from `acc` through `i` it is the add and the cltq.
    let (acc, i) = (token("acc"), token("i"));
    let col = |t: &Value| t["col"].as_u64().unwrap();
    let end = |t: &Value| col(t) + t["len"].as_u64().unwrap();
    let span = format!("{line}:{}-{line}:{}", col(&acc), end(&acc));
    let (stdout, _, _) = unlace(&["map", "sum_to", "--span", &span]);
    assert_eq!(stdout, "0x1182\n");
    let span = format!("{line}:{}-{line}:{}", col(&acc), end(&i));
    let doc = json(&["map", "sum_to", "--span", &span, "--json"]);
    assert_eq!(
        doc["addresses_hex"],
        serde_json::json!(["0x1180", "0x1182"])
    );
    assert_eq!(doc["function"]["name"], "sum_to");
    assert_eq!(doc["code"], record["code"]);
    assert_eq!(doc["error"], Value::Null);
}

#[test]
fn an_address_maps_to_its_spans_and_the_variables_live_there() {
    let (_, line) = sum_to();
    let (stdout, stderr, status) = unlace(&["map", "sum_to", "--addr", "0x1182"]);
    assert_eq!(status, 0, "{stderr}");
    assert_eq!(
        stdout,
        format!(
            "span {line}:4-{line}:10\tacc +=\n\
             var n\tint\tedi(4), stack-0x1c(4)\n\
             var i\tint\teax(4), stack-0x14(4)\n\
             var acc\tlong\tstack-0x10(8)\n"
        )
    );
    let doc = json(&["map", "sum_to", "--addr", "0x1182", "--json"]);
    assert_eq!(doc["spans"][0]["text"], "acc +=");
    assert_eq!(doc["spans"][0]["start"]["line"], line);
    let live: Vec<&str> = doc["variables"]
        .as_array()
        .expect("variables")
        .iter()
        .map(|v| v["name"].as_str().unwrap())
        .collect();
    assert_eq!(live, ["n", "i", "acc"]);
    // 1196 (pop %rbp): the result is in rax, no local is read again.
    let doc = json(&["map", "sum_to", "--addr", "0x1196", "--json"]);
    assert_eq!(doc["variables"], serde_json::json!([]));
    // 1161 (endbr64, the entry): the parameter is in its register.
    let (stdout, _, _) = unlace(&["map", "sum_to", "--addr", "0x1161"]);
    assert_eq!(stdout, "var n\tint\tedi(4)\n");
}

/// Every token that names an instruction is inside one of that instruction's
/// spans, and every span of an instruction maps back to it.
#[test]
fn the_two_directions_agree() {
    let (record, _) = sum_to();
    let tokens = record["tokens"].as_array().expect("tokens");
    let mut addresses: Vec<u64> = tokens
        .iter()
        .filter_map(|t| t["address"].as_u64())
        .collect();
    addresses.sort_unstable();
    addresses.dedup();
    assert!(addresses.len() >= 5, "{addresses:?}");
    for address in addresses {
        let doc = json(&[
            "map",
            "sum_to",
            "--addr",
            &format!("{address:#x}"),
            "--json",
        ]);
        let spans = doc["spans"].as_array().expect("spans");
        assert!(!spans.is_empty(), "{address:#x}");
        for token in tokens.iter().filter(|t| t["address"] == address) {
            let inside = spans.iter().any(|s| {
                s["start"]["line"] == token["line"]
                    && s["start"]["col"].as_u64() <= token["col"].as_u64()
                    && token["col"].as_u64().unwrap() + token["len"].as_u64().unwrap()
                        <= s["end"]["col"].as_u64().unwrap()
            });
            assert!(inside, "{address:#x}: {token} outside {spans:?}");
        }
        for span in spans {
            let text = format!(
                "{}:{}-{}:{}",
                span["start"]["line"],
                span["start"]["col"],
                span["end"]["line"],
                span["end"]["col"]
            );
            let (stdout, _, _) = unlace(&["map", "sum_to", "--span", &text]);
            assert!(
                stdout.lines().any(|l| l == format!("{address:#x}")),
                "{text} maps to {stdout:?}, not {address:#x}"
            );
        }
    }
}

#[test]
fn a_query_is_exactly_one_question_about_a_function_that_exists() {
    let (_, stderr, status) = unlace(&["map", "sum_to"]);
    assert_eq!(status, 2, "{stderr}");
    let (_, stderr, status) = unlace(&["map", "sum_to", "--line", "1", "--addr", "0x1182"]);
    assert_eq!(status, 2, "{stderr}");
    let (_, stderr, status) = unlace(&["map", "sum_to", "--span", "3:4"]);
    assert_eq!(status, 2, "{stderr}");
    let (stdout, stderr, status) = unlace(&["map", "no_such_function", "--line", "1", "--json"]);
    assert_eq!(status, 1, "{stderr}");
    let doc: Value = serde_json::from_str(&stdout).expect("the error document");
    assert!(
        doc["error"]
            .as_str()
            .is_some_and(|e| e.contains("no_such_function")),
        "{doc}"
    );
    assert_eq!(doc["function"], Value::Null);
}

/// The lines and columns index the text of the language asked for.
#[test]
fn the_selection_flags_are_decompile_s() {
    let (stdout, stderr, status) = unlace(&["decompile", "0x1161", "--language", "rust"]);
    assert_eq!(status, 0, "{stderr}");
    let line = stdout
        .lines()
        .position(|l| l.contains("acc = i64::wrapping_add(acc"))
        .unwrap_or_else(|| panic!("{stdout}"))
        + 1;
    let (stdout, stderr, status) = unlace(&[
        "map",
        "0x1161",
        "--line",
        &line.to_string(),
        "--language",
        "rust",
    ]);
    assert_eq!(
        (stdout.as_str(), status),
        ("0x1180\n0x1182\n", 0),
        "{stderr}"
    );
}
