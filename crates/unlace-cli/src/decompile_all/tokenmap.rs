//! The `--tokens` members of a `--json` record: the token source map of the
//! record's `code`, as the web study view ships it (`docs/web-integration.md`),
//! from the same [`unlace_console::inspect::FuncDetail`].

use unlace_console::project::FuncResult;
use unlace_decomp::srcmap::CodeToken;

use crate::jsonfmt::Json;

/// `tokens` and `tokens_error` for `f`: the tokens when its map rebuilds its
/// code, else `[]` and the reason; `[]` and `null` for a record without code.
pub(super) fn fields(f: &FuncResult) -> [(String, Json); 2] {
    let (tokens, error) = match (&f.detail, &f.code) {
        (Some(detail), _) => (
            detail
                .tokens
                .iter()
                .enumerate()
                .map(|(i, t)| token_json(t, f.token_global(i)))
                .collect(),
            detail.tokens_error.clone(),
        ),
        (None, Some(_)) => (Vec::new(), Some("no token map for this record".to_string())),
        (None, None) => (Vec::new(), None),
    };
    [
        ("tokens".into(), Json::Array(tokens)),
        ("tokens_error".into(), error.map_or(Json::Null, Json::Str)),
    ]
}

fn token_json(t: &CodeToken, global: Option<u64>) -> Json {
    let number = |n: usize| Json::Number(n.to_string());
    let mut fields = vec![
        ("line".to_string(), number(t.line)),
        ("col".to_string(), number(t.col)),
        ("len".to_string(), number(t.len)),
        ("kind".to_string(), Json::Str(t.kind.name().into())),
        ("color".to_string(), Json::Str(t.color.name().into())),
        ("text".to_string(), Json::Str(t.text.clone())),
    ];
    let mut address = |key: &str, value: Option<u64>| {
        if let Some(value) = value {
            fields.push((key.to_string(), Json::Number(value.to_string())));
            fields.push((format!("{key}_hex"), Json::Str(format!("0x{value:x}"))));
        }
    };
    address("address", t.address);
    address("callee", t.callee);
    if let Some(var) = t.var {
        fields.push(("var".to_string(), number(var)));
    }
    if let Some(decl) = t.decl {
        fields.push(("decl".to_string(), Json::Str(decl.into())));
    }
    if let Some(type_text) = &t.type_text {
        fields.push(("type".to_string(), Json::Str(type_text.clone())));
    }
    if let Some(global) = global {
        fields.push(("global".to_string(), Json::Number(global.to_string())));
        fields.push(("global_hex".to_string(), Json::Str(format!("0x{global:x}"))));
    }
    Json::Object(fields)
}
