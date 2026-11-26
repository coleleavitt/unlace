//! `--language-file`: a language flavour (a TOML profile over a base output language) on the
//! text surface, the JSON surface and the worker pool, and the refusals a bad file gets.
//!
//! Integration tests require the processor specs under `specs/`.

use std::path::PathBuf;
use std::process::Command;

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap()
}

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures")
        .join(name)
        .to_str()
        .unwrap()
        .to_string()
}

/// GNU `ptx` as an object file with its DWARF: `swallow_file_in_memory` reads through a
/// `BLOCK *`, tests with `&&`, `||` and `!`, and keeps one `goto`.
fn ptx() -> String {
    fixture("ptx.o")
}

fn run_unlace(args: &[&str]) -> (String, String, Option<i32>) {
    let out = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .env("SLEIGHHOME", repo_root().join("specs"))
        .args(args)
        .output()
        .expect("failed to spawn the unlace binary");
    (
        String::from_utf8_lossy(&out.stdout).into_owned(),
        String::from_utf8_lossy(&out.stderr).into_owned(),
        out.status.code(),
    )
}

/// A flavour file holding `text`; the file goes when the handle does.
fn flavour(text: &str) -> tempfile::TempPath {
    let file = tempfile::Builder::new()
        .suffix(".toml")
        .tempfile()
        .expect("a temporary file");
    std::fs::write(file.path(), text).expect("the flavour is written");
    file.into_temp_path()
}

fn path(file: &tempfile::TempPath) -> &str {
    file.to_str().expect("a UTF-8 temporary path")
}

const PSEUDO: &str = r#"
base = "c"

[keywords]
if = "when"
else = "otherwise"
goto = "jump"

[operators]
assign = ":="
boolean_and = "and"
boolean_or = "or"
boolean_not = "not "

[forms]
member = "rust-deref-paren"
"#;

/// The same lines of `swallow_file_in_memory`, as C and as [`PSEUDO`] spells them.
const RESPELLED: [(&str, &str); 6] = [
    (
        "if (((file_name) && (*file_name)) && ((*file_name != '-' || (file_name[1])))) {",
        "when (((file_name) and (*file_name)) and ((*file_name != '-' or (file_name[1])))) {",
    ),
    ("block->start = v1;", "(*block).start := v1;"),
    ("if (!v1) {", "when (not v1) {"),
    ("else {", "otherwise {"),
    ("goto label_400517;", "jump label_400517;"),
    (
        "block->end = &v1[used_length];",
        "(*block).end := &v1[used_length];",
    ),
];

#[test]
fn a_flavour_respells_keywords_and_operators_and_changes_a_form() {
    let (plain, _, code) = run_unlace(&["decompile", &ptx(), "swallow_file_in_memory"]);
    assert_eq!(code, Some(0));
    let file = flavour(PSEUDO);
    let (flavoured, stderr, code) = run_unlace(&[
        "decompile",
        &ptx(),
        "swallow_file_in_memory",
        "--language-file",
        path(&file),
    ]);
    assert_eq!(code, Some(0), "{stderr}");
    for (c, pseudo) in RESPELLED {
        assert!(plain.contains(c), "the C render lost {c:?}:\n{plain}");
        assert!(
            flavoured.contains(pseudo),
            "expected {pseudo:?} in:\n{flavoured}"
        );
    }
    for gone in ["if (", "goto ", "->", "&&", "||", "(!", " = "] {
        assert!(
            !flavoured.contains(gone),
            "{gone:?} survived in:\n{flavoured}"
        );
    }
}

/// The JSON surface loads in process and the pool's workers read the file themselves; both
/// print what the text surface (a console child) prints.
#[test]
fn every_surface_prints_the_flavour() {
    let file = flavour(PSEUDO);
    let flag = ["--language-file", path(&file)];
    let (text, _, _) =
        run_unlace(&[&["decompile", &ptx(), "swallow_file_in_memory"], &flag[..]].concat());

    let (document, stderr, code) = run_unlace(
        &[
            &["decompile", &ptx(), "swallow_file_in_memory", "--json"],
            &flag[..],
        ]
        .concat(),
    );
    assert_eq!(code, Some(0), "{stderr}");
    let document: serde_json::Value = serde_json::from_str(&document).expect("a JSON document");
    assert_eq!(document["language"], "c-language");
    assert_eq!(
        document["functions"][0]["code"].as_str().map(str::trim),
        Some(text.trim())
    );

    let (pooled, stderr, code) = run_unlace(
        &[
            &["decompile-all", &ptx(), "--jobs", "2", "--functions"],
            &["swallow_file_in_memory,print_spaces"][..],
            &flag[..],
        ]
        .concat(),
    );
    assert_eq!(code, Some(0), "{stderr}");
    assert!(pooled.contains("jump label_400517;"), "{pooled}");
    assert!(pooled.contains("when (1 > number)"), "{pooled}");
}

/// A keyword-only flavour is the base output with that keyword substituted.
#[test]
fn a_respelled_keyword_is_the_only_difference() {
    let functions = "fix_output_parameters,digest_word_file,print_spaces";
    let (plain, _, _) = run_unlace(&[
        "decompile-all",
        &ptx(),
        "--functions",
        functions,
        "--language",
        "c",
    ]);
    let file = flavour("base = \"c\"\n[keywords]\nwhile = \"WHILE\"\n");
    let (flavoured, stderr, code) = run_unlace(&[
        "decompile-all",
        &ptx(),
        "--functions",
        functions,
        "--language-file",
        path(&file),
    ]);
    assert_eq!(code, Some(0), "{stderr}");
    assert!(plain.matches("while").count() >= 5, "{plain}");
    assert_eq!(flavoured, plain.replace("while", "WHILE"));
}

#[test]
fn output_is_unchanged_with_a_file_that_overrides_nothing() {
    let fauxware = fixture("fauxware");
    for language in ["c", "rust"] {
        let file = flavour(&format!("base = \"{language}\"\n"));
        for surface in [&[][..], &["--json"][..]] {
            let (plain, _, code) = run_unlace(
                &[
                    &["decompile-all", &fauxware, "--language", language],
                    surface,
                ]
                .concat(),
            );
            assert_eq!(code, Some(0));
            let (flavoured, stderr, code) = run_unlace(
                &[
                    &["decompile-all", &fauxware, "--language-file", path(&file)],
                    surface,
                ]
                .concat(),
            );
            assert_eq!(code, Some(0), "{stderr}");
            assert_eq!(flavoured, plain, "{language} {surface:?}");
        }
    }
    let file = flavour("base = \"c\"\n");
    let (plain, _, _) = run_unlace(&["decompile", &fauxware, "main", "--language", "c"]);
    let (flavoured, _, _) = run_unlace(&[
        "decompile",
        &fauxware,
        "main",
        "--language-file",
        path(&file),
    ]);
    assert_eq!(flavoured, plain);
}

/// Rust has no `goto`: its printer writes a diverging marker and reports it. A flavour that
/// asks for the statement gets `goto` and a label line, and nothing is reported.
#[test]
fn a_rust_flavour_can_spell_a_jump_as_a_goto() {
    let irreducible = fixture("irreducible_x86_64");
    let (plain, note, _) = run_unlace(&[
        "decompile",
        &irreducible,
        "irreducible",
        "--language",
        "rust",
    ]);
    assert!(
        plain.contains("panic!(\"unlace: unstructured goto to "),
        "{plain}"
    );
    assert!(note.contains("unstructured goto"), "{note}");

    let file = flavour(
        "base = \"rust\"\n[keywords]\ngoto = \"goto\"\n[forms]\ngoto = \"c-goto\"\nlabel = \"c-colon\"\n",
    );
    let (flavoured, stderr, code) = run_unlace(&[
        "decompile",
        &irreducible,
        "irreducible",
        "--language-file",
        path(&file),
    ]);
    assert_eq!(code, Some(0), "{stderr}");
    assert!(!flavoured.contains("panic!"), "{flavoured}");
    assert!(!stderr.contains("unstructured goto"), "{stderr}");
    let label = flavoured
        .lines()
        .find_map(|line| line.trim().strip_prefix("goto ")?.strip_suffix(';'))
        .unwrap_or_else(|| panic!("no goto statement in:\n{flavoured}"));
    assert!(
        flavoured
            .lines()
            .any(|line| line.trim() == format!("{label}:")),
        "no `{label}:` line in:\n{flavoured}"
    );
    assert!(flavoured.contains("unsafe fn irreducible("), "{flavoured}");
}

#[test]
fn a_bad_file_is_refused_with_its_field_named() {
    for (text, field, problem) in [
        (
            "base = \"c\"\n[keywords]\nretrun = \"ret\"\n",
            "keywords.retrun",
            "unknown keyword",
        ),
        (
            "base = \"c\"\n[forms]\nmember = \"dot\"\n",
            "forms.member",
            "unknown form \"dot\"",
        ),
        (
            "base = \"c\"\n[forms]\nswitch = \"rust-match\"\n",
            "forms.switch",
            "the c printer cannot honour",
        ),
        (
            "base = \"rust\"\n[caps]\nbrace_elision = true\n",
            "caps.brace_elision",
            "the rust printer cannot honour true",
        ),
        ("[keywords]\nif = \"when\"\n", "base", "missing"),
    ] {
        let file = flavour(text);
        for command in ["decompile", "decompile-all"] {
            let mut args = vec![command, "/nonexistent/binary"];
            if command == "decompile" {
                args.push("main");
            }
            args.extend(["--language-file", path(&file)]);
            let (stdout, stderr, code) = run_unlace(&args);
            assert_eq!(code, Some(2), "{stderr}");
            assert!(stdout.is_empty(), "{stdout}");
            let expected = format!("error: --language-file {}: {field}: ", path(&file));
            assert!(
                stderr.contains(&expected),
                "expected {expected:?} in:\n{stderr}"
            );
            assert!(
                stderr.contains(problem),
                "expected {problem:?} in:\n{stderr}"
            );
        }
    }
    let (_, stderr, code) = run_unlace(&[
        "decompile",
        &ptx(),
        "main",
        "--language-file",
        "/nonexistent/flavour.toml",
    ]);
    assert_eq!(code, Some(2));
    assert!(
        stderr.contains("--language-file /nonexistent/flavour.toml: "),
        "{stderr}"
    );
}

/// The file names the base language, so nothing else on the command line may; and the
/// C-only exports take no flavour.
#[test]
fn the_file_names_the_language() {
    let file = flavour("base = \"c\"\n");
    let flag = ["--language-file", path(&file)];
    for (args, problem) in [
        (
            vec!["decompile", &ptx(), "main", "--language", "rust"],
            "--language does not apply with --language-file",
        ),
        (
            vec![
                "decompile",
                &ptx(),
                "main",
                "--option",
                "setlanguage",
                "rust-language",
            ],
            "--option setlanguage rust-language does not apply with --language-file",
        ),
        (
            vec!["decompile-all", &ptx(), "--option", "outlang", "go"],
            "--option outlang go does not apply with --language-file",
        ),
        (
            vec!["decompile-project", &ptx()],
            "--language-file does not apply to decompile-project",
        ),
        (
            vec!["decompile-graph", &ptx()],
            "--language-file does not apply to decompile-graph",
        ),
    ] {
        let (_, stderr, code) = run_unlace(&[&args[..], &flag[..]].concat());
        assert_eq!(code, Some(2), "{args:?}: {stderr}");
        assert!(stderr.contains(problem), "{args:?}: {stderr}");
    }
    // Naming the base language again is not a second language.
    let (_, stderr, code) = run_unlace(
        &[
            &[
                "decompile",
                &ptx(),
                "print_spaces",
                "--option",
                "setlanguage",
                "c-language",
            ],
            &flag[..],
        ]
        .concat(),
    );
    assert_eq!(code, Some(0), "{stderr}");
}
