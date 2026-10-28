//! Hex-Rays-style expression combining over the printed function body.
//!
//! Hex-Rays builds a ctree and runs its combiner (`sub_B36D0`, a switch on
//! the `cot_*` opcode) before printing: `x = x + y` becomes `x += y`
//! (`cot_asgadd`), `x += 1` becomes `++x` (`cot_preinc`), and a zero test in
//! a condition loses its `!= 0`. The unlace printer emits text directly, so
//! this stage recovers the expression tree of each emitted statement and
//! condition ([`parse`]), rewrites it with the same per-opcode rules
//! ([`rules`]), and prints it back ([`print`]).
//!
//! The parser covers the expression subset the printer emits, not all of C.
//! A statement is rewritten only when printing its parsed tree reproduces
//! the original text exactly, so a construct the parser misreads is left
//! untouched rather than rewritten from a wrong tree.

mod lex;
mod parse;
mod print;
mod rules;

#[cfg(test)]
mod tests;

use parse::{Expr, parse_expr};
use rules::{combine_condition, combine_statement, combine_value};

/// Combine every statement and condition of a printed function.
pub(in crate::c_printer) fn combine_expressions(output: String) -> String {
    map_lines(output, combine_line)
}

/// Drop `x = x;` statements. Runs before dead-store pruning, which counts
/// the self-read as a use of the earlier store.
pub(in crate::c_printer) fn remove_self_assignments(output: String) -> String {
    map_lines(output, |line| {
        let indent_len = line.len() - line.trim_start().len();
        let (indent, code) = line.split_at(indent_len);
        if indent_len == 0 || code.contains("//") || code.contains("/*") {
            return None;
        }
        let new_code = simple_statements(code.trim_end(), |piece| {
            let expr = parse_expr(piece)?;
            matches!(
                &expr,
                Expr::Assign { op: None, lhs, rhs } if lhs == rhs && lhs.as_ident().is_some()
            )
            .then_some(None)
        })?;
        Some(match new_code {
            Some(code) => Line::Rewritten(format!("{indent}{code}")),
            None => Line::Removed,
        })
    })
}

fn map_lines(output: String, mut f: impl FnMut(&str) -> Option<Line>) -> String {
    let mut out = String::with_capacity(output.len());
    let mut changed = false;
    for line in output.lines() {
        match f(line) {
            Some(Line::Rewritten(text)) => {
                changed = true;
                out.push_str(&text);
                out.push('\n');
            }
            Some(Line::Removed) => changed = true,
            None => {
                out.push_str(line);
                out.push('\n');
            }
        }
    }
    if !changed {
        return output;
    }
    if !output.ends_with('\n') {
        out.pop();
    }
    out
}

enum Line {
    Rewritten(String),
    /// Every statement on the line was a no-op.
    Removed,
}

/// The rewritten line, or `None` when it is unchanged or not a statement.
fn combine_line(line: &str) -> Option<Line> {
    let indent_len = line.len() - line.trim_start().len();
    if indent_len == 0 {
        // Prelude, signatures and closing braces sit at column 0.
        return None;
    }
    let (indent, rest) = line.split_at(indent_len);
    if rest.contains("/*") {
        return None;
    }
    let (code, comment) = split_line_comment(rest);
    let code_trimmed = code.trim_end();
    let new_code = combine_control(code_trimmed).or_else(|| combine_simple(code_trimmed))?;
    let new_code = match new_code {
        Some(code) => code,
        None => return Some(Line::Removed),
    };
    if new_code == code_trimmed {
        return None;
    }
    let mut text = format!("{indent}{new_code}");
    if !comment.is_empty() {
        text.push_str(&code[code_trimmed.len()..]);
        text.push_str(comment);
    }
    Some(Line::Rewritten(text))
}

/// Split off a trailing `// comment` that sits outside any literal.
fn split_line_comment(line: &str) -> (&str, &str) {
    let bytes = line.as_bytes();
    let mut quote = None;
    let mut i = 0;
    while i < bytes.len() {
        let b = bytes[i];
        match quote {
            Some(q) => {
                if b == b'\\' {
                    i += 1;
                } else if b == q {
                    quote = None;
                }
            }
            None if b == b'"' || b == b'\'' => quote = Some(b),
            None if line[i..].starts_with("//") => return line.split_at(i),
            None => {}
        }
        i += 1;
    }
    (line, "")
}

/// Control-statement headers: the condition is combined in a boolean
/// context, `for` init/step as statements.
fn combine_control(code: &str) -> Option<Option<String>> {
    const CONDITION_FORMS: &[(&str, &str)] = &[
        ("if (", ") {"),
        ("} else if (", ") {"),
        ("while (", ") {"),
        ("} while (", ");"),
    ];
    for (prefix, suffix) in CONDITION_FORMS {
        if let Some(cond) = code
            .strip_prefix(prefix)
            .and_then(|rest| rest.strip_suffix(suffix))
        {
            let cond = rewrite(cond, |e| Some(combine_condition(e)))?;
            return Some(Some(format!("{prefix}{cond}{suffix}")));
        }
    }
    let header = code.strip_prefix("for (")?.strip_suffix(") {")?;
    let parts = split_top_level(header, b';');
    let [init, cond, step] = parts.as_slice() else {
        return None;
    };
    let init = rewrite_or_keep(init.trim(), combine_statement);
    let cond = rewrite_or_keep(cond.trim(), |e| Some(combine_condition(e)));
    let step = rewrite_or_keep(step.trim(), combine_statement);
    let mut joined = init.unwrap_or_default();
    for part in [cond, step].into_iter().flatten() {
        joined.push_str("; ");
        joined.push_str(&part);
    }
    Some(Some(format!("for ({joined}) {{")))
}

/// A run of `;`-terminated simple statements. `Some(None)` when every
/// statement on the line is a no-op.
fn combine_simple(code: &str) -> Option<Option<String>> {
    simple_statements(code, combine_piece)
}

/// Rewrite each `;`-terminated statement of `code` with `f`, which returns
/// `None` to keep a statement, `Some(None)` to drop it, `Some(Some(text))`
/// to replace it. `None` when `code` is not a run of simple statements;
/// `Some(None)` when every statement was dropped.
fn simple_statements(
    code: &str,
    mut f: impl FnMut(&str) -> Option<Option<String>>,
) -> Option<Option<String>> {
    if code.contains(['{', '}']) || !code.ends_with(';') {
        return None;
    }
    let mut pieces = split_top_level(code, b';');
    // `a; b;` splits into `a`, ` b`, ``.
    if pieces.pop().is_some_and(|tail| !tail.trim().is_empty()) {
        return None;
    }
    let mut kept = Vec::with_capacity(pieces.len());
    for piece in pieces {
        let piece = piece.trim();
        match f(piece) {
            Some(None) => {}
            Some(Some(text)) => kept.push(text),
            None => kept.push(piece.to_string()),
        }
    }
    if kept.is_empty() {
        return Some(None);
    }
    Some(Some(
        kept.iter()
            .map(|piece| format!("{piece};"))
            .collect::<Vec<_>>()
            .join(" "),
    ))
}

/// One statement without its `;`. `None` when it is not one we rewrite,
/// `Some(None)` when it is a no-op.
fn combine_piece(piece: &str) -> Option<Option<String>> {
    if let Some(value) = piece.strip_prefix("return ") {
        let value = rewrite(value, |e| Some(combine_value(e)))?;
        return Some(Some(format!("return {value}")));
    }
    if let Some(stmt) = rewrite_checked(piece, combine_statement) {
        return Some(stmt);
    }
    // Declaration with initializer: `TYPE name = value`.
    let (decl, value) = piece.split_once(" = ")?;
    if !is_declarator(decl) {
        return None;
    }
    let value = rewrite(value, |e| Some(combine_value(e)))?;
    Some(Some(format!("{decl} = {value}")))
}

/// `__int64 v1`, `_QWORD *p`, `unsigned int n`: type words then a name.
fn is_declarator(text: &str) -> bool {
    let words: Vec<&str> = text.split_whitespace().collect();
    words.len() >= 2
        && words.iter().all(|w| {
            let w = w.trim_start_matches('*');
            !w.is_empty() && w.bytes().all(|b| b == b'_' || b.is_ascii_alphanumeric())
        })
}

/// Parse `src`, apply `f`, print. `None` when `src` does not round-trip.
/// `Some(None)` when `f` drops the expression.
fn rewrite_checked(src: &str, f: impl FnOnce(Expr) -> Option<Expr>) -> Option<Option<String>> {
    let expr = parse_expr(src)?;
    if expr.to_string() != src {
        return None;
    }
    Some(f(expr).map(|e| e.to_string()))
}

fn rewrite(src: &str, f: impl FnOnce(Expr) -> Option<Expr>) -> Option<String> {
    rewrite_checked(src, f).flatten()
}

/// `for` clause: rewritten text, the original when it does not parse, and
/// `None` when the clause is empty or became a no-op.
fn rewrite_or_keep(src: &str, f: impl FnOnce(Expr) -> Option<Expr>) -> Option<String> {
    if src.is_empty() {
        return None;
    }
    match rewrite_checked(src, f) {
        Some(result) => result,
        None => Some(src.to_string()),
    }
}

/// Split at `sep` outside parentheses, brackets and literals.
fn split_top_level(text: &str, sep: u8) -> Vec<&str> {
    let bytes = text.as_bytes();
    let mut parts = Vec::new();
    let mut depth = 0i32;
    let mut quote = None;
    let mut start = 0;
    let mut i = 0;
    while i < bytes.len() {
        let b = bytes[i];
        match quote {
            Some(q) => {
                if b == b'\\' {
                    i += 1;
                } else if b == q {
                    quote = None;
                }
            }
            None => match b {
                b'"' | b'\'' => quote = Some(b),
                b'(' | b'[' => depth += 1,
                b')' | b']' => depth -= 1,
                _ if b == sep && depth == 0 => {
                    parts.push(&text[start..i]);
                    start = i + 1;
                }
                _ => {}
            },
        }
        i += 1;
    }
    parts.push(&text[start..]);
    parts
}
