//! Tests for the flavour loader: what a file may set, and how a refused field is named.

use super::*;
use crate::langrust::rust_tokens;

fn flavour(text: &str) -> &'static Flavour {
    load(text).unwrap_or_else(|e| panic!("{text}: {e}"))
}

/// The `field: problem` a refused file is answered with.
fn refused(text: &str) -> String {
    load(text).expect_err(text).to_string()
}

#[test]
fn a_file_that_names_only_its_base_is_the_base_profile() {
    for (name, lang) in BASES {
        let loaded = flavour(&format!("base = \"{name}\"\n"));
        assert_eq!(loaded.base(), lang);
        let (mut got, mut base) = (*loaded.profile(), *lang.profile());
        for keyword in KEYWORDS {
            assert_eq!(*(keyword.field)(&mut got), *(keyword.field)(&mut base));
        }
        assert_eq!(got.caps, base.caps);
        assert_eq!(got.forms, base.forms);
        for tok in OPERATORS.iter().flat_map(|operator| operator.tokens) {
            assert_eq!(loaded.spelling(tok), tok.print1);
        }
    }
}

#[test]
fn overrides_reach_the_profile() {
    let loaded = flavour(
        r#"
        base = "c"
        [keywords]
        return = "ret"
        null = "nil"
        [operators]
        boolean_and = "and"
        multiply = "times"
        [forms]
        member = "rust-deref-paren"
        [caps]
        implicit_bool_conditions = false
        "#,
    );
    let profile = loaded.profile();
    assert_eq!(profile.kw_return, "ret");
    assert_eq!(profile.null_literal, "nil");
    assert_eq!(profile.kw_if, "if");
    assert_eq!(loaded.spelling(&tokens::BOOLEAN_AND), "and");
    assert_eq!(loaded.spelling(&tokens::MULTIPLY), "times");
    assert_eq!(loaded.spelling(&tokens::FLOAT_MULTIPLY), "times");
    assert_eq!(loaded.spelling(&tokens::BOOLEAN_OR), "||");
    assert_eq!(profile.forms.member, MemberForm::RustDerefParen);
    assert!(!profile.caps.implicit_bool_conditions);
    assert!(profile.caps.ternary);
}

/// Rust prints `&` through its own token (its rank differs from C's); a site that pushes
/// the C token prints the override too.
#[test]
fn an_operator_is_respelled_under_the_base_languages_token() {
    let loaded = flavour("base = \"rust\"\n[operators]\nbitwise_and = \"band\"\n");
    assert_eq!(loaded.spelling(&rust_tokens::BITWISE_AND), "band");
    assert_eq!(loaded.spelling(&tokens::BITWISE_AND), "band");
    assert_eq!(loaded.spelling(&rust_tokens::BITWISE_OR), "|");
}

/// Go prints both right shifts as one `>>` token, so the two keys cannot disagree.
#[test]
fn two_operators_the_base_prints_as_one_token_cannot_both_be_set() {
    let go = Go.profile().map_token;
    assert!(std::ptr::eq(
        go(&tokens::SHIFT_RIGHT),
        go(&tokens::SHIFT_SRIGHT)
    ));
    let one = flavour("base = \"go\"\n[operators]\nshift_right = \"shr\"\n");
    assert_eq!(one.spelling(go(&tokens::SHIFT_SRIGHT)), "shr");
    assert_eq!(
        refused(
            "base = \"go\"\n[operators]\nshift_right = \"shr\"\nshift_right_signed = \"sar\"\n"
        ),
        "operators.shift_right_signed: go prints this operator and operators.shift_right as one \
         token; set one of them"
    );
    // C keeps them apart.
    let c =
        flavour("base = \"c\"\n[operators]\nshift_right = \"shr\"\nshift_right_signed = \"sar\"\n");
    assert_eq!(c.spelling(&tokens::SHIFT_RIGHT), "shr");
    assert_eq!(c.spelling(&tokens::SHIFT_SRIGHT), "sar");
}

/// A form or capability a base cannot change still takes that base's own value.
#[test]
fn the_base_languages_own_values_are_accepted() {
    let loaded =
        flavour("base = \"rust\"\n[forms]\nswitch = \"rust-match\"\n[caps]\nternary = false\n");
    assert_eq!(loaded.profile().forms, Rust.profile().forms);
    assert_eq!(loaded.profile().caps, Rust.profile().caps);
}

/// Rust has no `goto` keyword and prints a marker; a flavour that asks for the statement
/// supplies the keyword, and the keyword alone has no site to print it.
#[test]
fn a_rust_goto_statement_needs_its_keyword() {
    let loaded = flavour(
        "base = \"rust\"\n[keywords]\ngoto = \"goto\"\n[forms]\ngoto = \"c-goto\"\nlabel = \"c-colon\"\n",
    );
    assert_eq!(loaded.profile().forms.goto, GotoForm::CGoto);
    assert_eq!(loaded.profile().forms.label, LabelForm::CColon);
    assert_eq!(loaded.profile().kw_goto, "goto");
    assert_eq!(
        refused("base = \"rust\"\n[forms]\ngoto = \"c-goto\"\n"),
        "forms.goto: \"c-goto\" needs keywords.goto: rust has no spelling for it"
    );
    assert_eq!(
        refused("base = \"rust\"\n[keywords]\ngoto = \"goto\"\n"),
        "keywords.goto: the rust printer prints this keyword only with forms.goto = \"c-goto\""
    );
}

#[test]
fn a_refused_file_names_the_field() {
    for (text, field, problem) in [
        ("", "base", "missing"),
        ("base = \"pascal\"\n", "base", "unknown language \"pascal\""),
        ("base = 3\n", "base", "expected a string"),
        ("base = \"c\"\nkeyword = 1\n", "keyword", "unknown field"),
        (
            "base = \"c\"\nkeywords = \"if\"\n",
            "keywords",
            "expected a table",
        ),
        (
            "base = \"c\"\n[types]\nint4 = \"i32\"\n",
            "types",
            "cannot be overridden",
        ),
        (
            "base = \"c\"\n[keywords]\nretrun = \"ret\"\n",
            "keywords.retrun",
            "unknown keyword",
        ),
        (
            "base = \"c\"\n[keywords]\nreturn = 1\n",
            "keywords.return",
            "expected a string",
        ),
        (
            "base = \"c\"\n[keywords]\nreturn = \"\"\n",
            "keywords.return",
            "empty",
        ),
        (
            "base = \"c\"\n[keywords]\nreturn = \"a\\nb\"\n",
            "keywords.return",
            "control character",
        ),
        (
            "base = \"rust\"\n[keywords]\ndo = \"do\"\n",
            "keywords.do",
            "the rust printer does not",
        ),
        (
            "base = \"go\"\n[keywords]\nfor = \"loop\"\n",
            "keywords.for",
            "the go printer does not",
        ),
        (
            "base = \"c\"\n[operators]\ncomma = \";\"\n",
            "operators.comma",
            "unknown operator",
        ),
        (
            "base = \"go\"\n[operators]\nassign = \":=\"\n",
            "operators.assign",
            "the go printer does not",
        ),
        (
            "base = \"rust\"\n[operators]\nplus = \"add\"\n",
            "operators.plus",
            "the rust printer does not",
        ),
        (
            "base = \"c\"\n[forms]\nloop = \"rust-loop\"\n",
            "forms.loop",
            "unknown form",
        ),
        (
            "base = \"c\"\n[forms]\nmember = \"dot\"\n",
            "forms.member",
            "unknown form \"dot\" (expected one of: c-arrow, rust-deref-paren)",
        ),
        (
            "base = \"c\"\n[forms]\nmember = true\n",
            "forms.member",
            "expected a string",
        ),
        (
            "base = \"c\"\n[forms]\nswitch = \"rust-match\"\n",
            "forms.switch",
            "the c printer cannot honour \"rust-match\"",
        ),
        (
            "base = \"rust\"\n[forms]\nmember = \"c-arrow\"\n",
            "forms.member",
            "the rust printer cannot honour \"c-arrow\"",
        ),
        (
            "base = \"c\"\n[caps]\ngotos = true\n",
            "caps.gotos",
            "unknown capability",
        ),
        (
            "base = \"c\"\n[caps]\nternary = \"no\"\n",
            "caps.ternary",
            "expected true or false",
        ),
        (
            "base = \"c\"\n[caps]\nternary = false\n",
            "caps.ternary",
            "the c printer cannot honour false",
        ),
        (
            "base = \"rust\"\n[caps]\nbrace_elision = true\n",
            "caps.brace_elision",
            "the rust printer cannot honour true",
        ),
    ] {
        match load(text) {
            Err(FlavourError::Field {
                field: got,
                problem: why,
            }) => {
                assert_eq!(got, field, "{text}");
                assert!(why.contains(problem), "{text}: {why}");
            }
            other => panic!("{text}: expected a refused field, got {other:?}"),
        }
    }
}

#[test]
fn text_that_is_not_toml_is_a_syntax_error() {
    assert!(matches!(load("base = \n"), Err(FlavourError::Syntax(_))));
}

/// The printer keeps the profile for the rest of the process, so the same text must not
/// make a second one.
#[test]
fn the_same_text_loads_once() {
    let text = "base = \"java\"\n[keywords]\nwhile = \"whilst\"\n";
    assert!(std::ptr::eq(flavour(text), flavour(text)));
}
