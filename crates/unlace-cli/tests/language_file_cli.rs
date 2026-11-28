//! `--language-file`: a language flavour (a TOML profile over a base output language) on the
//! text surface, the JSON surface and the worker pool, and the refusals a bad file gets.
//!
//! Integration tests require the processor specs under `specs/`.

use unlace_testkit::repo_root;

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
    let specs = repo_root().join("specs");
    let run = unlace_testkit::run_bin_env(
        env!("CARGO_BIN_EXE_unlace"),
        args,
        &[("SLEIGHHOME", specs.to_str().expect("utf-8 path"))],
    );
    (run.stdout, run.stderr, run.code)
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

/// `text` with comments and string and character constants blanked, so a scan sees only
/// code.
fn code_only(text: &str) -> String {
    let mut out = String::with_capacity(text.len());
    let mut chars = text.chars().peekable();
    while let Some(c) = chars.next() {
        match c {
            '/' if chars.peek() == Some(&'/') => {
                if chars.by_ref().any(|c| c == '\n') {
                    out.push('\n');
                }
            }
            '/' if chars.peek() == Some(&'*') => {
                let mut star = false;
                for c in chars.by_ref().skip(1) {
                    if star && c == '/' {
                        break;
                    }
                    star = c == '*';
                }
            }
            '"' | '\'' => {
                while let Some(inner) = chars.next() {
                    match inner {
                        '\\' => {
                            chars.next();
                        }
                        '\n' => {
                            out.push('\n');
                            break;
                        }
                        _ if inner == c => break,
                        _ => {}
                    }
                }
                out.push(' ');
            }
            _ => out.push(c),
        }
    }
    out
}

/// Whether `code` holds `spelling`: as a whole word when it is one, anywhere otherwise.
fn holds(code: &str, spelling: &str) -> bool {
    let word = |c: char| c.is_ascii_alphanumeric() || c == '_';
    if !spelling.chars().all(word) {
        return code.contains(spelling);
    }
    code.match_indices(spelling).any(|(at, _)| {
        !code[..at].chars().next_back().is_some_and(word)
            && !code[at + spelling.len()..].chars().next().is_some_and(word)
    })
}

/// A base language with the keywords it accepts and the two-character operators it accepts,
/// each with the text its default spelling leaves in the code, and what else the file needs.
struct Accepted {
    base: &'static str,
    keywords: &'static [(&'static str, &'static str)],
    operators: &'static [(&'static str, &'static str)],
    rest: &'static str,
}

const C_OPERATORS: &[(&str, &str)] = &[
    ("boolean_and", "&&"),
    ("boolean_or", "||"),
    ("equal", "=="),
    ("greater_equal", ">="),
    ("less_equal", "<="),
    ("not_equal", "!="),
];

const ACCEPTED: [Accepted; 4] = [
    Accepted {
        base: "c",
        keywords: &[
            ("break", "break"),
            ("case", "case"),
            ("continue", "continue"),
            ("default", "default"),
            ("do", "do"),
            ("else", "else"),
            ("for", "for"),
            ("goto", "goto"),
            ("if", "if"),
            ("null", "NULL"),
            ("return", "return"),
            ("switch", "switch"),
            ("true", "true"),
            ("while", "while"),
        ],
        operators: C_OPERATORS,
        rest: "",
    },
    Accepted {
        base: "java",
        keywords: &[
            ("break", "break"),
            ("case", "case"),
            ("continue", "continue"),
            ("default", "default"),
            ("do", "do"),
            ("else", "else"),
            ("for", "for"),
            ("goto", "goto"),
            ("if", "if"),
            ("null", "null"),
            ("return", "return"),
            ("switch", "switch"),
            ("true", "true"),
            ("while", "while"),
        ],
        operators: C_OPERATORS,
        rest: "",
    },
    Accepted {
        base: "rust",
        keywords: &[
            ("break", "break"),
            ("continue", "continue"),
            ("default", "_ =>"),
            ("else", "else"),
            ("goto", "panic!"),
            ("if", "if"),
            ("null", "core::ptr::null_mut()"),
            ("return", "return"),
            ("switch", "match"),
            ("while", "while"),
        ],
        operators: C_OPERATORS,
        rest: "[forms]\ngoto = \"c-goto\"\nlabel = \"c-colon\"\n",
    },
    Accepted {
        base: "go",
        keywords: &[
            ("continue", "continue"),
            ("else", "else"),
            ("goto", "goto"),
            ("null", "nil"),
            ("switch", "switch"),
        ],
        operators: &[
            ("boolean_and", "&&"),
            ("equal", "=="),
            ("greater_equal", ">="),
            ("less_equal", "<="),
        ],
        rest: "",
    },
];

/// The claim behind the loader's tables (spec 9.6), on three functions of `ptx` that use
/// every keyword: with all of a base language's keywords and its two-character operators
/// respelled, none of their default spellings is left in the code. A printer site that
/// starts writing one as text fails here. The one-character operators share their spelling
/// with declarators and patterns, so they are not scanned for.
#[test]
fn accepted_keywords_and_operators_are_respelled_everywhere() {
    for accepted in ACCEPTED {
        let mut text = format!("base = \"{}\"\n[keywords]\n", accepted.base);
        for (key, _) in accepted.keywords {
            text += &format!("{key} = \"KW_{key}\"\n");
        }
        text += "[operators]\n";
        for (key, _) in accepted.operators {
            text += &format!("{key} = \"OP_{key}\"\n");
        }
        text += accepted.rest;
        let file = flavour(&text);
        let (out, stderr, status) = run_unlace(&[
            "decompile-all",
            &ptx(),
            "--functions",
            "main,generate_all_output,find_occurs_in_text",
            "--language-file",
            path(&file),
        ]);
        assert_eq!(status, Some(0), "{}: {stderr}", accepted.base);
        let code = code_only(&out);
        for (key, left) in accepted.keywords {
            assert!(
                holds(&code, &format!("KW_{key}")),
                "{}: keywords.{key} is not used in:\n{out}",
                accepted.base
            );
            assert!(
                !holds(&code, left),
                "{}: keywords.{key} left {left:?} in:\n{out}",
                accepted.base
            );
        }
        // A binary operator stands alone between blanks or at the end of a wrapped line.
        let alone: std::collections::BTreeSet<&str> = code.split_whitespace().collect();
        for (key, left) in accepted.operators {
            assert!(
                alone.contains(format!("OP_{key}").as_str()),
                "{}: operators.{key} is not used in:\n{out}",
                accepted.base
            );
            assert!(
                !alone.contains(left),
                "{}: operators.{key} left {left:?} in:\n{out}",
                accepted.base
            );
        }
    }
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
            assert_eq!(
                without_flavour_member(&flavoured),
                plain,
                "{language} {surface:?}"
            );
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
    assert_eq!(without_flavour_member(&flavoured), plain);
}

/// `text` without the `language_flavour` line of a `--json` document.
fn without_flavour_member(text: &str) -> String {
    text.split_inclusive('\n')
        .filter(|line| !line.contains("\"language_flavour\""))
        .collect()
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

/// A flavour file named `stem.toml` in `dir`, as its path.
fn named_flavour(dir: &tempfile::TempDir, stem: &str, text: &str) -> String {
    let file = dir.path().join(format!("{stem}.toml"));
    std::fs::write(&file, text).expect("the flavour is written");
    file.to_str().expect("a UTF-8 temporary path").to_string()
}

/// The JSON document names the flavour applied: the file's `name`, else its stem, on
/// `decompile` and on `decompile-all` at any job count.
#[test]
fn the_json_names_the_flavour_applied() {
    let dir = tempfile::tempdir().expect("a temporary directory");
    let by_stem = named_flavour(&dir, "house", "base = \"c\"\n");
    let by_name = named_flavour(&dir, "ignored", "name = \"office\"\nbase = \"c\"\n");
    for (file, name) in [(&by_stem, "house"), (&by_name, "office")] {
        let (stdout, stderr, code) = run_unlace(&[
            "decompile",
            &ptx(),
            "swallow_file_in_memory",
            "--json",
            "--language-file",
            file,
        ]);
        assert_eq!(code, Some(0), "{stderr}");
        let document: serde_json::Value = serde_json::from_str(&stdout).expect("a JSON document");
        assert_eq!(document["language"], "c-language");
        assert_eq!(document["language_flavour"], name);
        for jobs in ["1", "2"] {
            let (stdout, stderr, code) = run_unlace(&[
                "decompile-all",
                &ptx(),
                "--json",
                "--functions",
                "swallow_file_in_memory,print_spaces",
                "--jobs",
                jobs,
                "--language-file",
                file,
            ]);
            assert_eq!(code, Some(0), "--jobs {jobs}: {stderr}");
            let document: serde_json::Value =
                serde_json::from_str(&stdout).expect("a JSON document");
            assert_eq!(document["language_flavour"], name, "--jobs {jobs}");
        }
    }
}

/// Without `--language-file` the document has no `language_flavour` member.
#[test]
fn a_document_without_a_flavour_has_no_flavour_member() {
    let (stdout, stderr, code) =
        run_unlace(&["decompile", &ptx(), "swallow_file_in_memory", "--json"]);
    assert_eq!(code, Some(0), "{stderr}");
    let document: serde_json::Value = serde_json::from_str(&stdout).expect("a JSON document");
    assert!(document.get("language_flavour").is_none(), "{stdout}");
}

/// A `name` with no text in it is refused with the field named.
#[test]
fn a_blank_flavour_name_is_refused() {
    let file = flavour("name = \"  \"\nbase = \"c\"\n");
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &ptx(),
        "swallow_file_in_memory",
        "--json",
        "--language-file",
        path(&file),
    ]);
    assert_eq!(code, Some(2), "{stdout}");
    assert!(stderr.contains("name"), "{stderr}");
    assert!(stderr.contains("expected a name"), "{stderr}");
}
