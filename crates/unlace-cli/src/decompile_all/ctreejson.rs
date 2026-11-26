//! The `ctree` and `ctree_error` members of a `--json --ctree` record: the exported C syntax
//! tree (`unlace_decomp::ctreeexport`) as JSON, and back.
//!
//! A node is an object. `kind` is always there; every other member is left out when it is
//! empty: `op` (an operator's name), `form`, `text`, `close`, `sep`, `spacing`, `type`,
//! `line`/`col`/`end_line`/`end_col` (where the node's text is in `code`: 1-based lines,
//! UTF-16 columns, end exclusive), `addresses` and `children`. [`from_json`] reads back exactly
//! what [`to_json`] writes, so the reference printer over the parsed document reproduces
//! `code`.

use unlace_console::project::FuncResult;
use unlace_decomp::ctreeexport::{Brace, ExportTree, Form, Kind, Node, Span, Style};

use crate::jsonfmt::Json;

/// The record members `--ctree` adds: the tree, or `null` and the reason it has none. Both
/// are `null` on a record that has no `code`.
pub(super) fn fields(f: &FuncResult) -> [(String, Json); 2] {
    let (tree, error) = match f.detail.as_ref().and_then(|detail| detail.ctree.as_ref()) {
        Some(Ok(tree)) => (to_json(tree), Json::Null),
        Some(Err(reason)) => (Json::Null, Json::Str(reason.clone())),
        None => (Json::Null, Json::Null),
    };
    [("ctree".into(), tree), ("ctree_error".into(), error)]
}

fn number(value: impl ToString) -> Json {
    Json::Number(value.to_string())
}

/// `tree` as the `ctree` member.
pub(crate) fn to_json(tree: &ExportTree) -> Json {
    let style = &tree.style;
    Json::Object(vec![
        (
            "style".into(),
            Json::Object(vec![
                ("indent".into(), number(style.indent)),
                ("comment_indent".into(), number(style.comment_indent)),
                (
                    "brace_function".into(),
                    Json::Str(style.brace_function.name().into()),
                ),
                (
                    "brace_ifelse".into(),
                    Json::Str(style.brace_ifelse.name().into()),
                ),
                (
                    "brace_loop".into(),
                    Json::Str(style.brace_loop.name().into()),
                ),
                (
                    "brace_switch".into(),
                    Json::Str(style.brace_switch.name().into()),
                ),
            ]),
        ),
        ("root".into(), node_json(&tree.root)),
    ])
}

fn node_json(node: &Node) -> Json {
    let mut out: Vec<(String, Json)> = vec![("kind".into(), Json::Str(node.kind.name().into()))];
    let mut text = |key: &str, value: &str| {
        if !value.is_empty() {
            out.push((key.into(), Json::Str(value.into())));
        }
    };
    text("op", &node.name);
    text("form", node.form.name().unwrap_or_default());
    text("text", &node.text);
    text("close", &node.close);
    text("sep", &node.sep);
    if node.spacing != 0 {
        out.push(("spacing".into(), number(node.spacing)));
    }
    if let Some(ty) = &node.ty {
        out.push(("type".into(), Json::Str(ty.clone())));
    }
    if node.span.line != 0 {
        out.extend([
            ("line".into(), number(node.span.line)),
            ("col".into(), number(node.span.col)),
            ("end_line".into(), number(node.span.end_line)),
            ("end_col".into(), number(node.span.end_col)),
        ]);
    }
    if !node.addresses.is_empty() {
        out.push((
            "addresses".into(),
            Json::Array(node.addresses.iter().map(number).collect()),
        ));
    }
    if !node.children.is_empty() {
        out.push((
            "children".into(),
            Json::Array(node.children.iter().map(node_json).collect()),
        ));
    }
    Json::Object(out)
}

/// The tree a `ctree` member holds.
pub(crate) fn from_json(json: &Json) -> Result<ExportTree, String> {
    let style = member(json, "style").ok_or("ctree: no `style`")?;
    let brace = |key: &str| {
        text_of(style, key)
            .and_then(Brace::from_name)
            .ok_or_else(|| format!("ctree: bad `style.{key}`"))
    };
    let count =
        |key: &str| number_of(style, key).ok_or_else(|| format!("ctree: bad `style.{key}`"));
    Ok(ExportTree {
        style: Style {
            indent: count("indent")?,
            comment_indent: count("comment_indent")?,
            brace_function: brace("brace_function")?,
            brace_ifelse: brace("brace_ifelse")?,
            brace_loop: brace("brace_loop")?,
            brace_switch: brace("brace_switch")?,
        },
        root: node_from(member(json, "root").ok_or("ctree: no `root`")?)?,
    })
}

fn member<'a>(json: &'a Json, key: &str) -> Option<&'a Json> {
    match json {
        Json::Object(members) => members
            .iter()
            .find(|(name, _)| name == key)
            .map(|(_, value)| value),
        _ => None,
    }
}

fn text_of<'a>(json: &'a Json, key: &str) -> Option<&'a str> {
    match member(json, key)? {
        Json::Str(text) => Some(text),
        _ => None,
    }
}

fn number_of<T: std::str::FromStr>(json: &Json, key: &str) -> Option<T> {
    match member(json, key)? {
        Json::Number(digits) => digits.parse().ok(),
        _ => None,
    }
}

fn node_from(json: &Json) -> Result<Node, String> {
    let kind = text_of(json, "kind").ok_or("ctree: a node has no `kind`")?;
    let kind = Kind::from_name(kind).ok_or_else(|| format!("ctree: unknown kind `{kind}`"))?;
    let owned = |key: &str| text_of(json, key).unwrap_or_default().to_string();
    let form = match text_of(json, "form") {
        Some(name) => {
            Form::from_name(name).ok_or_else(|| format!("ctree: unknown form `{name}`"))?
        }
        None => Form::None,
    };
    let list = |key: &str| match member(json, key) {
        Some(Json::Array(items)) => items.as_slice(),
        _ => &[],
    };
    let mut node = Node::with_text(kind, owned("text"));
    node.name = owned("op");
    node.close = owned("close");
    node.sep = owned("sep");
    node.form = form;
    node.spacing = number_of(json, "spacing").unwrap_or(0);
    node.ty = text_of(json, "type").map(str::to_string);
    node.span = Span {
        line: number_of(json, "line").unwrap_or(0),
        col: number_of(json, "col").unwrap_or(0),
        end_line: number_of(json, "end_line").unwrap_or(0),
        end_col: number_of(json, "end_col").unwrap_or(0),
    };
    node.addresses = list("addresses")
        .iter()
        .map(|address| match address {
            Json::Number(digits) => digits.parse().map_err(|_| "ctree: bad address".to_string()),
            _ => Err("ctree: bad address".to_string()),
        })
        .collect::<Result<_, _>>()?;
    node.children = list("children")
        .iter()
        .map(node_from)
        .collect::<Result<_, _>>()?;
    Ok(node)
}

#[cfg(test)]
mod tests;
