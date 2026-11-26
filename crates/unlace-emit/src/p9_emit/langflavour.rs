//! (unlace) Language flavours: an output-language profile read from a TOML file.
//!
//! A flavour names one of the output languages as its base and overrides parts of that
//! language's [`LangProfile`]: keyword and operator spellings, forms and capabilities. The
//! printer stays the base language's (`PrintC::out_lang` is the base), and many of its sites
//! decide by the language itself or write a spelling as text rather than read the profile. So
//! a field is overridable only for the base languages whose printer reads it at every site
//! that prints the construct, and [`load`] refuses every other field by name. The tables
//! below hold that audit; `docs/spec/09-emission.md` §9.6 says how each row was checked.

use std::collections::BTreeMap;
use std::sync::Mutex;

use toml::{Table, Value};

use crate::lang::{
    CastForm, CharForm, DeclForm, DoWhileForm, ForLoopForm, GotoForm, InfLoopForm, LabelForm,
    LangCaps, LangForms, LangProfile, MemberForm, OutLang, OutLangExt, ProtoForm, StringEscape,
    SwitchForm, WhileForm,
};
use crate::printc::tokens;
use crate::printlanguage::OpToken;

use OutLang::{C, Go, Java, Rust};

/// A loaded flavour: the base language and its profile with the file's overrides applied.
pub struct Flavour {
    base: OutLang,
    profile: LangProfile,
    /// The operator tokens the file respells, by identity, with their spelling.
    spellings: Vec<(&'static OpToken, &'static str)>,
    /// The file's `name`, when it names the flavour.
    name: Option<String>,
}

impl Flavour {
    /// The language whose printer renders this flavour.
    pub fn base(&self) -> OutLang {
        self.base
    }

    /// The name the file gives the flavour, if it gives one.
    pub fn name(&self) -> Option<&str> {
        self.name.as_deref()
    }

    /// The base language's profile with the file's overrides applied.
    pub fn profile(&self) -> &LangProfile {
        &self.profile
    }

    /// The text `tok` opens with: the file's spelling, else the token's own.
    #[inline]
    pub fn spelling(&self, tok: &'static OpToken) -> &'static str {
        self.spellings
            .iter()
            .find(|(from, _)| std::ptr::eq(*from, tok))
            .map_or(tok.print1, |(_, text)| text)
    }
}

impl std::fmt::Debug for Flavour {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("Flavour")
            .field("base", &self.base)
            .finish_non_exhaustive()
    }
}

/// Why a flavour file was refused.
#[derive(Debug, Clone, PartialEq, Eq, thiserror::Error)]
pub enum FlavourError {
    /// The text is not TOML.
    #[error("{0}")]
    Syntax(String),
    /// A field is unknown, holds a value of the wrong kind, or cannot be honoured by the base
    /// language's printer.
    #[error("{field}: {problem}")]
    Field { field: String, problem: String },
}

fn refuse<T>(field: impl Into<String>, problem: impl Into<String>) -> Result<T, FlavourError> {
    Err(FlavourError::Field {
        field: field.into(),
        problem: problem.into(),
    })
}

/// The flavours loaded so far, by their text. The printer keeps `&'static` profiles
/// (`PrintC::lang`), so an accepted flavour lives for the rest of the process; loading the
/// same text again returns the same flavour.
static LOADED: Mutex<BTreeMap<String, &'static Flavour>> = Mutex::new(BTreeMap::new());

/// Parse and validate the flavour file `text`.
pub fn load(text: &str) -> Result<&'static Flavour, FlavourError> {
    let mut loaded = LOADED
        .lock()
        .unwrap_or_else(|poisoned| poisoned.into_inner());
    if let Some(flavour) = loaded.get(text) {
        return Ok(flavour);
    }
    let doc: Table = text
        .parse()
        .map_err(|e: toml::de::Error| FlavourError::Syntax(e.to_string()))?;
    let flavour: &'static Flavour = Box::leak(Box::new(Draft::read(&doc)?.accept()));
    loaded.insert(text.to_string(), flavour);
    Ok(flavour)
}

/// The `base` values, as `--language` spells them.
const BASES: [(&str, OutLang); 4] = [("c", C), ("rust", Rust), ("go", Go), ("java", Java)];
const ALL: &[OutLang] = &[C, Rust, Go, Java];

fn base_name(base: OutLang) -> &'static str {
    BASES
        .iter()
        .find(|(_, lang)| *lang == base)
        .map_or("", |(name, _)| name)
}

/// What a file sets, borrowed from its text: a refused file leaves nothing behind.
struct Draft<'doc> {
    base: OutLang,
    forms: LangForms,
    caps: LangCaps,
    keywords: Vec<(&'static Keyword, &'doc str)>,
    /// Each `[operators]` key with its spelling and the tokens it respells.
    operators: Vec<(&'doc str, &'doc str, Vec<&'static OpToken>)>,
    name: Option<&'doc str>,
}

impl<'doc> Draft<'doc> {
    fn read(doc: &'doc Table) -> Result<Self, FlavourError> {
        let base = match doc.get("base") {
            None => {
                return refuse(
                    "base",
                    "missing; name the base language: c, rust, go or java",
                );
            }
            Some(Value::String(name)) => match BASES.iter().find(|(known, _)| known == name) {
                Some((_, lang)) => *lang,
                None => {
                    return refuse(
                        "base",
                        format!("unknown language {name:?} (expected c, rust, go or java)"),
                    );
                }
            },
            Some(_) => return refuse("base", "expected a string: c, rust, go or java"),
        };
        let mut draft = Draft {
            base,
            forms: base.profile().forms,
            caps: base.profile().caps,
            keywords: Vec::new(),
            operators: Vec::new(),
            name: None,
        };
        for (key, value) in sorted(doc) {
            match key {
                "base" => {}
                "keywords" => draft.keywords(section(key, value)?)?,
                "operators" => draft.operators(section(key, value)?)?,
                "forms" => draft.forms(section(key, value)?)?,
                "caps" => draft.caps(section(key, value)?)?,
                "name" => draft.name = Some(flavour_name(value)?),
                "types" => {
                    return refuse(
                        key,
                        "type spellings cannot be overridden: the type speller is chosen by the \
                         base language, not read from the profile",
                    );
                }
                _ => {
                    return refuse(
                        key,
                        "unknown field (expected base, keywords, operators, forms, caps or name)",
                    );
                }
            }
        }
        // A `goto` statement and its keyword come together: Rust has neither.
        let respelled = draft
            .keywords
            .iter()
            .any(|(keyword, _)| keyword.key == "goto");
        match draft.forms.goto {
            GotoForm::CGoto if !respelled && base.profile().kw_goto.is_empty() => refuse(
                "forms.goto",
                format!(
                    "\"c-goto\" needs keywords.goto: {} has no spelling for it",
                    base_name(base)
                ),
            ),
            GotoForm::Unrepresentable if respelled => refuse(
                "keywords.goto",
                format!(
                    "the {} printer prints this keyword only with forms.goto = \"c-goto\"",
                    base_name(base)
                ),
            ),
            _ => Ok(draft),
        }
    }

    fn keywords(&mut self, table: &'doc Table) -> Result<(), FlavourError> {
        for (key, value) in sorted(table) {
            let field = format!("keywords.{key}");
            let Some(keyword) = KEYWORDS.iter().find(|k| k.key == key) else {
                return refuse(
                    field,
                    format!(
                        "unknown keyword (the keywords are: {})",
                        names(KEYWORDS, |k| k.key)
                    ),
                );
            };
            if !keyword.bases.contains(&self.base) {
                return refuse(
                    field,
                    format!(
                        "the {} printer does not print this keyword from the profile",
                        base_name(self.base)
                    ),
                );
            }
            self.keywords.push((keyword, spelling(&field, value)?));
        }
        Ok(())
    }

    fn operators(&mut self, table: &'doc Table) -> Result<(), FlavourError> {
        let map_token = self.base.profile().map_token;
        for (key, value) in sorted(table) {
            let field = format!("operators.{key}");
            let Some(operator) = OPERATORS.iter().find(|o| o.key == key) else {
                return refuse(
                    field,
                    format!(
                        "unknown operator (the operators are: {})",
                        names(OPERATORS, |o| o.key)
                    ),
                );
            };
            if !operator.bases.contains(&self.base) {
                return refuse(
                    field,
                    format!(
                        "the {} printer does not print this operator through its token alone",
                        base_name(self.base)
                    ),
                );
            }
            let text = spelling(&field, value)?;
            // The token the C table names, and the one the base language prints in its place.
            let mut respelled: Vec<&'static OpToken> = Vec::new();
            for tok in operator
                .tokens
                .iter()
                .flat_map(|tok| [*tok, map_token(tok)])
            {
                let taken = |toks: &[&'static OpToken]| toks.iter().any(|t| std::ptr::eq(*t, tok));
                if let Some((owner, ..)) = self.operators.iter().find(|(.., toks)| taken(toks)) {
                    return refuse(
                        field,
                        format!(
                            "{} prints this operator and operators.{owner} as one token; set one \
                             of them",
                            base_name(self.base)
                        ),
                    );
                }
                if !taken(&respelled) {
                    respelled.push(tok);
                }
            }
            self.operators.push((key, text, respelled));
        }
        Ok(())
    }

    fn forms(&mut self, table: &'doc Table) -> Result<(), FlavourError> {
        for (key, value) in sorted(table) {
            let field = format!("forms.{key}");
            let Some(row) = FORMS.iter().find(|f| f.key == key) else {
                return refuse(
                    field,
                    format!("unknown form (the forms are: {})", names(FORMS, |f| f.key)),
                );
            };
            (row.set)(&mut self.forms, row, &field, value, self.base)?;
        }
        Ok(())
    }

    fn caps(&mut self, table: &'doc Table) -> Result<(), FlavourError> {
        for (key, value) in sorted(table) {
            let field = format!("caps.{key}");
            let Some(cap) = CAPS.iter().find(|c| c.key == key) else {
                return refuse(
                    field,
                    format!(
                        "unknown capability (the capabilities are: {})",
                        names(CAPS, |c| c.key)
                    ),
                );
            };
            let Value::Boolean(wanted) = value else {
                return refuse(field, "expected true or false");
            };
            let slot = (cap.field)(&mut self.caps);
            if *wanted != *slot && !cap.honoured.contains(&(self.base, *wanted)) {
                return refuse(
                    field,
                    format!(
                        "the {} printer cannot honour {wanted}",
                        base_name(self.base)
                    ),
                );
            }
            *slot = *wanted;
        }
        Ok(())
    }

    /// The flavour of an accepted file. Its spellings are kept for the rest of the process,
    /// as the profile is.
    fn accept(self) -> Flavour {
        fn keep(text: &str) -> &'static str {
            Box::leak(text.into())
        }
        let mut profile = *self.base.profile();
        profile.forms = self.forms;
        profile.caps = self.caps;
        for (keyword, text) in self.keywords {
            *(keyword.field)(&mut profile) = keep(text);
        }
        let spellings = self
            .operators
            .into_iter()
            .flat_map(|(_, text, toks)| {
                let text = keep(text);
                toks.into_iter().map(move |tok| (tok, text))
            })
            .collect();
        Flavour {
            base: self.base,
            profile,
            spellings,
            name: self.name.map(str::to_string),
        }
    }
}

/// A table's entries in key order, whatever order the file or the TOML map keeps them in.
/// The `name` field: a string with some text in it.
fn flavour_name(value: &Value) -> Result<&str, FlavourError> {
    match value {
        Value::String(text) if !text.trim().is_empty() => Ok(text),
        Value::String(_) => refuse(
            "name",
            "expected a name; leave the field out to use the file name",
        ),
        _ => refuse("name", "expected a string"),
    }
}

fn sorted(table: &Table) -> Vec<(&str, &Value)> {
    let mut entries: Vec<(&str, &Value)> = table.iter().map(|(k, v)| (k.as_str(), v)).collect();
    entries.sort_by_key(|(key, _)| *key);
    entries
}

fn section<'doc>(name: &str, value: &'doc Value) -> Result<&'doc Table, FlavourError> {
    match value {
        Value::Table(table) => Ok(table),
        _ => refuse(name, "expected a table"),
    }
}

/// A spelling the printer can put on the page: text on one line.
fn spelling<'doc>(field: &str, value: &'doc Value) -> Result<&'doc str, FlavourError> {
    let Value::String(text) = value else {
        return refuse(field, "expected a string");
    };
    if text.is_empty() {
        return refuse(field, "the spelling is empty");
    }
    if text.chars().any(char::is_control) {
        return refuse(field, "the spelling holds a control character");
    }
    Ok(text)
}

fn names<T>(rows: &[T], name: impl Fn(&T) -> &'static str) -> String {
    rows.iter().map(name).collect::<Vec<_>>().join(", ")
}

/// One keyword of `[keywords]`: its key, its profile field, and the base languages whose
/// printer spells every use of it from that field.
struct Keyword {
    key: &'static str,
    field: fn(&mut LangProfile) -> &mut &'static str,
    bases: &'static [OutLang],
}

macro_rules! keywords_table {
    ($($key:literal => $field:ident: $bases:expr;)+) => {
        static KEYWORDS: &[Keyword] = &[$(Keyword {
            key: $key,
            field: |profile| &mut profile.$field,
            bases: $bases,
        }),+];
    };
}

// Go writes `if`, `return`, `break`, `for`, `case` and `default` as text in its statement
// emitters and conversion closures; Rust and Go have no `do`, and Rust no `for` or `case`.
// `true` is the condition of an endless loop, which Rust and Go spell `loop` and `for`.
keywords_table! {
    "break" => kw_break: &[C, Rust, Java];
    "case" => kw_case: &[C, Java];
    "continue" => kw_continue: ALL;
    "default" => kw_default: &[C, Rust, Java];
    "do" => kw_do: &[C, Java];
    "else" => kw_else: ALL;
    "for" => kw_for: &[C, Java];
    "goto" => kw_goto: ALL;
    "if" => kw_if: &[C, Rust, Java];
    "null" => null_literal: ALL;
    "return" => kw_return: &[C, Rust, Java];
    "switch" => kw_switch: ALL;
    "true" => kw_true: &[C, Java];
    "while" => kw_while: &[C, Rust, Java];
}

/// One operator of `[operators]`: its key, the tokens of the C table that stand for it, and
/// the base languages whose printer writes it through the token emitter alone.
struct Operator {
    key: &'static str,
    tokens: &'static [&'static OpToken],
    bases: &'static [OutLang],
}

/// Rust prints integer `+`, `-` and `*` as `wrapping_*` calls.
const NOT_RUST: &[OutLang] = &[C, Go, Java];
/// Go writes `!`, `||` and `!= 0` as text in its bottom-test loop header and its
/// conversion closures.
const NOT_GO: &[OutLang] = &[C, Rust, Java];
/// Rust writes the `=` of an array initialization as text, and Go the ones of its
/// bottom-test loop header.
const C_AND_JAVA: &[OutLang] = &[C, Java];

macro_rules! operators_table {
    ($($key:ident => $($tok:ident),+: $bases:expr;)+) => {
        static OPERATORS: &[Operator] = &[$(Operator {
            key: stringify!($key),
            tokens: &[$(&tokens::$tok),+],
            bases: $bases,
        }),+];
    };
}

operators_table! {
    assign => ASSIGNMENT: C_AND_JAVA;
    bitwise_and => BITWISE_AND: ALL;
    bitwise_not => BITWISE_NOT: ALL;
    bitwise_or => BITWISE_OR: ALL;
    bitwise_xor => BITWISE_XOR: ALL;
    boolean_and => BOOLEAN_AND: ALL;
    boolean_not => BOOLEAN_NOT: NOT_GO;
    boolean_or => BOOLEAN_OR: NOT_GO;
    boolean_xor => BOOLEAN_XOR: NOT_GO;
    divide => DIVIDE: ALL;
    equal => EQUAL: ALL;
    greater_equal => GREATER_EQUAL: ALL;
    greater_than => GREATER_THAN: ALL;
    less_equal => LESS_EQUAL: ALL;
    less_than => LESS_THAN: ALL;
    minus => BINARY_MINUS: NOT_RUST;
    modulo => MODULO: ALL;
    multiply => MULTIPLY, FLOAT_MULTIPLY: NOT_RUST;
    not_equal => NOT_EQUAL: NOT_GO;
    plus => BINARY_PLUS, FLOAT_PLUS: NOT_RUST;
    shift_left => SHIFT_LEFT: ALL;
    shift_right => SHIFT_RIGHT: ALL;
    shift_right_signed => SHIFT_SRIGHT: ALL;
}

/// The TOML spellings of a form enum's variants.
trait FormValue: Copy + PartialEq + 'static {
    const VALUES: &'static [(&'static str, Self)];
}

macro_rules! form_values {
    ($($ty:ident { $($name:literal => $variant:ident),+ $(,)? })+) => {$(
        impl FormValue for $ty {
            const VALUES: &'static [(&'static str, Self)] = &[$(($name, $ty::$variant)),+];
        }
        // Exhaustive, so a new variant needs a spelling here.
        const _: fn($ty) = |form| match form {
            $($ty::$variant => {})+
        };
    )+};
}

form_values! {
    ProtoForm {
        "c-prefix-return" => CPrefixReturn,
        "rust-fn-arrow" => RustFnArrow,
        "go-func" => GoFunc,
    }
    DeclForm {
        "c-type-then-name" => CTypeThenName,
        "rust-let-colon" => RustLetColon,
        "go-var" => GoVar,
    }
    SwitchForm { "c-switch" => CSwitch, "rust-match" => RustMatch, "go-switch" => GoSwitch }
    InfLoopForm { "c-do-while-true" => CDoWhileTrue, "rust-loop" => RustLoop, "go-for" => GoFor }
    WhileForm {
        "c-paren-while" => CParenWhile,
        "rust-bare-while" => RustBareWhile,
        "go-for-condition" => GoForCondition,
    }
    DoWhileForm {
        "c-do-while" => CDoWhile,
        "rust-loop-break-if" => RustLoopBreakIf,
        "go-bottom-test" => GoBottomTest,
    }
    ForLoopForm { "c-for-header" => CForHeader, "degrade-to-while" => DegradeToWhile }
    GotoForm { "c-goto" => CGoto, "unrepresentable" => Unrepresentable }
    LabelForm { "c-colon" => CColon, "comment-only" => CommentOnly }
    MemberForm { "c-arrow" => CArrow, "rust-deref-paren" => RustDerefParen }
    CastForm {
        "prefix-paren" => PrefixParen,
        "postfix-as" => PostfixAs,
        "go-conversion" => GoConversion,
    }
    CharForm { "c-quoted" => CQuoted, "rust-byte" => RustByte, "go-rune" => GoRune }
    StringEscape {
        "c-escapes" => CEscapes,
        "rust-escapes" => RustEscapes,
        "go-escapes" => GoEscapes,
        "java-escapes" => JavaEscapes,
    }
}

/// One form of `[forms]`: its key, the base languages whose printer takes another value than
/// their own for it, why the others keep theirs, and how to set it from a TOML value.
struct Form {
    key: &'static str,
    bases: &'static [OutLang],
    fixed: &'static str,
    set: fn(&mut LangForms, &Form, &str, &Value, OutLang) -> Result<(), FlavourError>,
}

/// Read `value` as a variant of the form in `slot` and store it, when it is the base
/// language's own or the base language's printer honours another.
fn form<T: FormValue>(
    slot: &mut T,
    row: &Form,
    field: &str,
    value: &Value,
    base: OutLang,
) -> Result<(), FlavourError> {
    let expected = || names(T::VALUES, |(name, _)| *name);
    let Value::String(name) = value else {
        return refuse(field, format!("expected a string, one of: {}", expected()));
    };
    let Some((_, variant)) = T::VALUES.iter().find(|(known, _)| known == name) else {
        return refuse(
            field,
            format!("unknown form {name:?} (expected one of: {})", expected()),
        );
    };
    if *variant != *slot && !row.bases.contains(&base) {
        return refuse(
            field,
            format!(
                "the {} printer cannot honour {name:?}: {}",
                base_name(base),
                row.fixed
            ),
        );
    }
    *slot = *variant;
    Ok(())
}

macro_rules! forms_table {
    ($($key:ident: $bases:expr, $fixed:literal;)+) => {
        static FORMS: &[Form] = &[$(Form {
            key: stringify!($key),
            bases: $bases,
            fixed: $fixed,
            set: |forms, row, field, value, base| form(&mut forms.$key, row, field, value, base),
        }),+];
        // Exhaustive, so a new form needs a row here.
        const _: fn(LangForms) = |forms| {
            let LangForms { $($key: _),+ } = forms;
        };
    };
}

// A form picks which language's emitter prints the construct, and that emitter writes its
// own language's keywords and expects the structure its language was given. Only a form
// whose other emitter needs neither is honoured.
forms_table! {
    cast: &[], "a cast is printed with the base language's conversion token and type speller";
    char_lit: &[], "a character constant follows the base language's lexical rules";
    decl: &[], "a declaration is laid out with the base language's type speller";
    do_while: &[], "the loop was structured for the base language's bottom-test loop";
    for_loop: &[], "the printer does not read it: loop recovery follows the base language";
    goto: &[Rust], "the other form is the marker of a language without `goto`";
    inf_loop: &[], "the loop emitter of another language writes that language's keywords";
    label: &[Rust], "the other form is the comment of a language without labels";
    member: &[C], "its member accesses also decide by the language itself";
    proto: &[], "a signature is laid out with the base language's type speller";
    string_escape: &[], "a string constant follows the base language's lexical rules";
    switch: &[], "the switch was structured for what `break` leaves in the base language";
    while_loop: &[], "the loop emitter of another language writes that language's keywords";
}

/// One capability of `[caps]`: its key, its field, and the value a file may set for each base
/// language whose printer checks the capability at every site that produces the construct.
struct Cap {
    key: &'static str,
    field: fn(&mut LangCaps) -> &mut bool,
    honoured: &'static [(OutLang, bool)],
}

macro_rules! caps_table {
    ($($key:ident: $honoured:expr;)+) => {
        static CAPS: &[Cap] = &[$(Cap {
            key: stringify!($key),
            field: |caps| &mut caps.$key,
            honoured: $honoured,
        }),+];
        // Exhaustive, so a new capability needs a row here.
        const _: fn(LangCaps) = |caps| {
            let LangCaps { $($key: _),+ } = caps;
        };
    };
}

// Ten capabilities are read by nothing, and `c_for`, `integer_promotion` and
// `signed_text_byte` describe the base language to the passes, which ask `OutLang`, and to
// the arithmetic of case labels. The rest are read at some of the sites that print the
// construct and not at others: `brace_elision` leaves `if (c) break;`, `integer_suffixes` the
// suffix of a pointer scale, `ternary` the guarded ARM shift, `paren_conditions` the
// `while( true )` of an endless loop.
caps_table! {
    arrow_member: &[];
    brace_elision: &[];
    c_for: &[];
    comma_expression: &[];
    do_while: &[];
    goto: &[];
    implicit_bool_conditions: &[(C, false)];
    integer_promotion: &[];
    integer_suffixes: &[];
    labeled_block_break: &[];
    labeled_loop_break: &[];
    paren_conditions: &[];
    signed_text_byte: &[];
    switch_captures_break: &[];
    switch_default_optional: &[];
    switch_falls_through: &[];
    switch_multi_label: &[];
    ternary: &[];
}

#[cfg(test)]
mod tests;
