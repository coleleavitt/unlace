//! `--rules FILE` on `unlace decompile` and `unlace decompile-all`: a rewrite
//! rule file changes the functions its patterns match and nothing else, on
//! every surface that decompiles, and a refused file is an argument error that
//! names each rule and its line.

use crate::common;

/// The count of a 64-bit x86 shift is masked to six bits by the processor, so
/// SLEIGH writes the mask out and it prints as `x >> (n & 0x3f)`.
const SHIFT_MASK: &str = r#"
[[rule]]
name = "shiftmask64"
group = "analysis"
match = "INT_RIGHT(x:8, INT_AND(n:1, 0x3f))"
replace = "INT_RIGHT(x, n)"
"#;

fn unlace(args: &[&str]) -> (String, String, i32) {
    let specs = common::repo_root().join("specs");
    let mut argv = args.to_vec();
    argv.extend_from_slice(&["--sleighpath", specs.to_str().unwrap()]);
    common::run_unlace(&argv)
}

fn rule_file(stem: &str, text: &str) -> String {
    let path = common::scratch_file(stem, "toml");
    std::fs::write(&path, text).unwrap();
    path.to_str().unwrap().to_string()
}

/// `(name, text)` of every function of a `decompile-all` text run.
fn functions(stdout: &str) -> Vec<(&str, &str)> {
    stdout
        .split("// Function: ")
        .skip(1)
        .map(|block| {
            let (header, body) = block.split_once('\n').expect("a header line");
            (header.split(' ').next().unwrap_or(header), body.trim())
        })
        .collect()
}

#[test]
fn a_rule_file_rewrites_the_function_it_matches_and_no_other() {
    let bin = common::fixture("array_index_x86_64");
    let rules = rule_file("shiftmask", SHIFT_MASK);
    let (plain, _, code) = unlace(&["decompile-all", &bin]);
    assert_eq!(code, 0);
    let (ruled, _, code) = unlace(&["decompile-all", &bin, "--rules", &rules]);
    assert_eq!(code, 0);

    let (plain, ruled) = (functions(&plain), functions(&ruled));
    assert_eq!(plain.len(), ruled.len());
    let changed: Vec<(&str, &str, &str)> = plain
        .iter()
        .zip(&ruled)
        .filter(|(before, after)| before != after)
        .map(|(before, after)| (before.0, before.1, after.1))
        .collect();
    // `right_context` shifts right logically by a masked count. `signed_context`
    // shifts arithmetically and `left_context` masks to two bits: neither matches.
    let [(name, before, after)] = changed.as_slice() else {
        panic!("one function changes: {changed:?}");
    };
    assert_eq!(*name, "right_context");
    assert!(
        before.contains("return p->i32[7L >> ((unsigned char)shift & 0x3f)];"),
        "{before}"
    );
    assert!(
        after.contains("return p->i32[7L >> (signed char)shift];"),
        "{after}"
    );
}

#[test]
fn every_decompiling_surface_takes_the_rules() {
    let bin = common::fixture("array_index_x86_64");
    let rules = rule_file("shiftmask-surfaces", SHIFT_MASK);
    let (text, _, code) = unlace(&["decompile", &bin, "right_context", "--rules", &rules]);
    assert_eq!(code, 0);
    assert!(text.contains("7L >> (signed char)shift"), "{text}");

    let (json, stderr, code) = unlace(&[
        "decompile",
        &bin,
        "right_context",
        "--rules",
        &rules,
        "--json",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let doc: serde_json::Value = serde_json::from_str(&json).expect("a JSON document");
    assert_eq!(doc["functions"][0]["code"].as_str(), Some(text.trim_end()));

    // `--raw` adds the final p-code: the AND is gone from it, not only from the C.
    let (raw, _, code) = unlace(&[
        "decompile",
        &bin,
        "right_context",
        "--rules",
        &rules,
        "--raw",
    ]);
    assert_eq!(code, 0);
    assert!(raw.contains("#0x7 >> ") && !raw.contains("#0x3f"), "{raw}");
    let (raw, _, _) = unlace(&["decompile", &bin, "right_context", "--raw"]);
    assert!(raw.contains("& #0x3f:1"), "{raw}");

    // A worker process registers the file on its own load.
    let (serial, _, code) = unlace(&["decompile-all", &bin, "--rules", &rules, "--jobs", "1"]);
    assert_eq!(code, 0);
    let (pooled, _, code) = unlace(&["decompile-all", &bin, "--rules", &rules, "--jobs", "2"]);
    assert_eq!(code, 0);
    assert_eq!(serial, pooled);
}

#[test]
fn rules_that_match_nothing_change_nothing() {
    let bin = common::fixture("array_index_x86_64");
    let (plain, _, code) = unlace(&["decompile-all", &bin, "--json"]);
    assert_eq!(code, 0);
    let empty = rule_file("empty", "# no rule yet\n");
    let (with_empty, _, code) = unlace(&["decompile-all", &bin, "--json", "--rules", &empty]);
    assert_eq!(code, 0);
    assert_eq!(plain, with_empty);
    // A 16-byte shift is nowhere in the binary.
    let idle = rule_file("idle", &SHIFT_MASK.replace("x:8", "x:16"));
    let (with_idle, _, code) = unlace(&["decompile-all", &bin, "--json", "--rules", &idle]);
    assert_eq!(code, 0);
    assert_eq!(plain, with_idle);
}

#[test]
fn a_refused_rule_file_is_an_argument_error_naming_each_rule_and_line() {
    let bad = rule_file(
        "refused",
        r#"[[rule]]
name = "unknownop"
group = "analysis"
match = "INT_ANDD(x, 0xff)"
replace = "x"

[[rule]]
name = "sizes"
group = "analysis"
match = "INT_AND(x:1, y:2)"
replace = "x"

[[rule]]
name = "unbound"
group = "analysis"
match = "INT_AND(x, 0xff)"
replace = "y"

[[rule]]
name = "wider"
group = "analysis"
match = "INT_ZEXT(x)"
replace = "x"
"#,
    );
    let bin = common::fixture("array_index_x86_64");
    for command in [
        vec!["decompile", bin.as_str(), "right_context"],
        vec!["decompile", bin.as_str(), "right_context", "--json"],
        vec!["decompile-all", bin.as_str()],
    ] {
        let mut argv = command.clone();
        argv.extend_from_slice(&["--rules", &bad]);
        let (stdout, stderr, code) = unlace(&argv);
        assert_eq!(code, 2, "{command:?}: {stderr}");
        assert!(stdout.is_empty(), "{command:?}: {stdout}");
        for expected in [
            format!("{bad}:4: rule \"unknownop\": match: unknown opcode INT_ANDD"),
            format!("{bad}:10: rule \"sizes\": match: size mismatch"),
            format!("{bad}:17: rule \"unbound\": replace: unbound capture `y`"),
            format!(
                "{bad}:23: rule \"wider\": replace: the replacement is not as wide as the \
                 matched op's output"
            ),
        ] {
            assert!(stderr.contains(&expected), "{command:?}: {stderr}");
        }
    }

    // A name is the rule's own across the files of one run too.
    let good = rule_file("twice", SHIFT_MASK);
    for command in [
        vec!["decompile", bin.as_str(), "right_context"],
        vec!["decompile-all", bin.as_str(), "--json"],
    ] {
        let mut argv = command.clone();
        argv.extend_from_slice(&["--rules", &good, "--rules", &good]);
        let (stdout, stderr, code) = unlace(&argv);
        assert_eq!(code, 2, "{command:?}: {stderr}");
        assert!(stdout.is_empty(), "{command:?}: {stdout}");
        assert!(
            stderr.contains(&format!(
                "{good}: rule \"shiftmask64\": a rule of an earlier"
            )),
            "{command:?}: {stderr}"
        );
    }

    let (_, stderr, code) = unlace(&["decompile-all", &bin, "--rules", "/nonexistent/rules.toml"]);
    assert_eq!(code, 2);
    assert!(stderr.contains("cannot read the rule file"), "{stderr}");
    // The inventory decompiles nothing, so it takes no rules.
    let (_, stderr, code) = unlace(&["functions", &bin, "--rules", &bad]);
    assert_eq!(code, 2);
    assert!(stderr.contains("unknown option --rules"), "{stderr}");
}
