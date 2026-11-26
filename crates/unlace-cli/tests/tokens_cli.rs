//! `--tokens` on `unlace decompile --json` and `unlace decompile-all --json`:
//! the token source map of every function rebuilds its `code`, asking for it
//! leaves `code` byte-identical, and each record's references hold (a `var`
//! names its row; a token's instruction is one its line maps to). The console
//! path has the same checks in `crates/unlace-console/tests/verify_srcmap.rs`.
use std::collections::{BTreeMap, BTreeSet};

use crate::common;

use serde_json::Value;
use unlace_decomp::prettyprint::{SyntaxHighlight, TokenKind};
use unlace_decomp::srcmap::{CodeToken, verify};

fn path(fixture: &str) -> String {
    common::repo_root()
        .join(fixture)
        .to_str()
        .expect("UTF-8 fixture path")
        .to_owned()
}

fn document(fixture: &str, extra: &[&str]) -> Value {
    let binary = path(fixture);
    let specs = path("specs");
    let mut args = vec!["decompile-all", &binary, "--json", "--sleighpath", &specs];
    args.extend(extra);
    let (stdout, stderr, status) = common::run_unlace(&args);
    assert_eq!(status, 0, "{fixture} {extra:?}: {stderr}");
    serde_json::from_str(&stdout).expect("decompile-all --json")
}

/// The record's tokens as [`verify`] reads them: only the place and the text.
fn tokens(record: &Value) -> Vec<CodeToken> {
    let number = |token: &Value, key: &str| token[key].as_u64().expect(key) as usize;
    record["tokens"]
        .as_array()
        .expect("tokens")
        .iter()
        .map(|token| CodeToken {
            line: number(token, "line"),
            col: number(token, "col"),
            len: number(token, "len"),
            kind: TokenKind::Syntax,
            color: SyntaxHighlight::NoColor,
            text: token["text"].as_str().expect("text").to_owned(),
            address: token["address"].as_u64(),
            callee: token["callee"].as_u64(),
            var: token["var"].as_u64().map(|var| var as usize),
            decl: None,
            type_text: None,
        })
        .collect()
}

fn check(fixture: &str, language: &str) -> usize {
    let plain = document(fixture, &["--language", language]);
    let mapped = document(fixture, &["--language", language, "--tokens"]);
    let (plain, mapped) = (
        plain["functions"].as_array().expect("functions"),
        mapped["functions"].as_array().expect("functions"),
    );
    assert_eq!(plain.len(), mapped.len(), "{fixture}: batch sizes differ");
    let mut checked = 0;
    for (p, m) in plain.iter().zip(mapped) {
        let at = format!("{fixture} [{language}] {}", m["name"]);
        assert_eq!(
            p["code"], m["code"],
            "{at}: asking for tokens changed the code"
        );
        assert!(p.get("tokens").is_none(), "{at}: tokens without --tokens");
        let Some(code) = m["code"].as_str() else {
            assert_eq!(m["tokens"], serde_json::json!([]), "{at}");
            assert_eq!(m["tokens_error"], Value::Null, "{at}");
            continue;
        };
        assert_eq!(m["tokens_error"], Value::Null, "{at}:\n{code}");
        let tokens = tokens(m);
        assert_eq!(verify(&tokens, code), Ok(()), "{at}");
        let lines: BTreeMap<u64, BTreeSet<u64>> = m["line_mappings"]
            .as_array()
            .expect("line_mappings")
            .iter()
            .map(|l| {
                let addresses = l["addresses"].as_array().expect("addresses");
                (
                    l["line_number"].as_u64().expect("line_number"),
                    addresses.iter().filter_map(Value::as_u64).collect(),
                )
            })
            .collect();
        for (token, json) in tokens.iter().zip(m["tokens"].as_array().expect("tokens")) {
            if let Some(row) = token.var {
                assert_eq!(
                    m["variables"][row]["name"], token.text,
                    "{at}: token var index"
                );
            }
            if matches!(json["kind"].as_str(), Some("comment" | "label")) {
                continue;
            }
            if let Some(address) = token.address {
                assert!(
                    lines
                        .get(&(token.line as u64))
                        .is_some_and(|set| set.contains(&address)),
                    "{at}: token {:?} on line {} names {address:#x}, not in its line mapping",
                    token.text,
                    token.line
                );
            }
        }
        checked += 1;
    }
    checked
}

#[test]
fn tokens_rebuild_every_fixture_function_through_the_cli() {
    let fixtures = [
        "integrations/web/test/fixtures/sample.elf",
        "integrations/web/test/fixtures/sample_aarch64.o",
        "crates/unlace-analysis/tests/fixtures/fauxware",
        "crates/unlace-analysis/tests/fixtures/entrymain_arm",
        "crates/unlace-analysis/tests/fixtures/pdb_prog.exe",
        "crates/unlace-analysis/tests/fixtures/address_taken_stack_buffers_macho",
        "crates/unlace-analysis/tests/fixtures/callrettype_gcc_O0_x86_64",
    ];
    let mut total = 0;
    for fixture in fixtures {
        for language in ["c", "rust"] {
            total += check(fixture, language);
        }
    }
    assert!(total > 100, "only {total} function bodies checked");
}

/// A whole-binary run casts a scalar address to the pointer its callee
/// declares after the render; the cast's `(`, type and `)` join the token map.
#[test]
fn a_pointer_argument_cast_is_in_the_token_map() {
    let doc = document(
        "crates/unlace-analysis/tests/fixtures/callrettype_gcc_O0_x86_64",
        &["--language", "c", "--tokens"],
    );
    let main = doc["functions"]
        .as_array()
        .expect("functions")
        .iter()
        .find(|f| f["name"] == "main")
        .expect("main");
    let code = main["code"].as_str().expect("code");
    let line = code
        .lines()
        .position(|l| l.contains("skip_blanks((char *)&"))
        .unwrap_or_else(|| panic!("no cast argument in:\n{code}"))
        + 1;
    let on_line: Vec<(&str, &str)> = main["tokens"]
        .as_array()
        .expect("tokens")
        .iter()
        .filter(|t| t["line"] == line)
        .map(|t| (t["kind"].as_str().unwrap(), t["text"].as_str().unwrap()))
        .collect();
    let cast = [
        ("syntax", "("),
        ("type", "char *"),
        ("syntax", ")"),
        ("op", "&"),
    ];
    assert!(
        on_line.windows(cast.len()).any(|window| window == cast),
        "{on_line:?}"
    );
}

#[test]
fn tokens_need_json() {
    let binary = path("integrations/web/test/fixtures/sample.elf");
    let (_, stderr, status) = common::run_unlace(&["decompile", &binary, "sum_to", "--tokens"]);
    assert_eq!(status, 2, "{stderr}");
    assert!(
        stderr.contains("--tokens selects --json record keys"),
        "{stderr}"
    );
    let fixture = "integrations/web/test/fixtures/sample.elf";
    let serial = document(fixture, &["--tokens", "--jobs", "1"]);
    let pooled = document(fixture, &["--tokens", "--jobs", "2"]);
    assert_eq!(serial, pooled, "--jobs 2 differs from --jobs 1");
}

/// `unlace decompile --json --tokens` gives the one record `decompile-all`
/// gives for the same function.
#[test]
fn decompile_json_carries_the_same_tokens() {
    let binary = path("integrations/web/test/fixtures/sample.elf");
    let specs = path("specs");
    let (stdout, stderr, status) = common::run_unlace(&[
        "decompile",
        &binary,
        "sum_to",
        "--json",
        "--tokens",
        "--sleighpath",
        &specs,
    ]);
    assert_eq!(status, 0, "{stderr}");
    let one: Value = serde_json::from_str(&stdout).expect("decompile --json");
    let all = document(
        "integrations/web/test/fixtures/sample.elf",
        &["--functions", "sum_to", "--tokens"],
    );
    assert_eq!(one["functions"][0]["tokens"], all["functions"][0]["tokens"]);
    let tokens = one["functions"][0]["tokens"].as_array().expect("tokens");
    let acc = tokens
        .iter()
        .find(|t| t["text"] == "acc" && t["decl"] == "local")
        .expect("the declaration of acc");
    let row = acc["var"].as_u64().expect("acc's row") as usize;
    assert_eq!(one["functions"][0]["variables"][row]["name"], "acc");
    assert!(
        tokens
            .iter()
            .any(|t| t["text"] == "n" && t["decl"] == "param" && t["line"] == 1)
    );
}
