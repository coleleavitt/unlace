//! Hex-Rays-style final names for the printer's synthetic locals.
//!
//! The pipeline hands the printer several generic name families: register
//! coalescer groups (`c3`), fresh SSA temporaries (`v41`, `v12_3`), condition
//! temporaries (`cond_7`), and argument-register carriers in a function that
//! does not take that argument (`a2` in `main(void)`). Hex-Rays names every
//! such lvar `vN` by its lvar index, and calls the lvar a function returns
//! `result` (lvar naming, hexx64 `sub_2112D0`). The arguments hold indices
//! `0..n`, so the first local of a two-argument function is `v2` and that of
//! a function without arguments is `v0`; `result` holds an index of its own.
//! Here locals take indices in order of first appearance, which is
//! declaration order for the top-of-body declarations.
//!
//! This runs after every other cleanup stage, so the numbering is dense over
//! the locals that survived pruning. Stack slots (`v_8`, `buf_16`) keep their
//! offset names: their offsets are not yet on one frame base, so an IDA-style
//! `[rsp+..]` comment cannot replace the offset the name carries.

use std::collections::{BTreeMap, BTreeSet};

use super::{
    collect_function_header_param_names, is_arg_number_name, is_arg_versioned_name,
    is_coalesced_number_name, is_cond_number_name, is_ident_byte, is_v_number_name,
};

/// Rename the synthetic locals of one printed function to `result` and
/// `vN`, leaving parameters, recovered names, and stack slots alone.
pub(in crate::c_printer) fn number_synthetic_locals(output: String) -> String {
    let Some(body_start) = function_body_start(&output) else {
        return output;
    };
    let (head, body) = output.split_at(body_start);
    let header = head.lines().last().unwrap_or_default();
    let mut params = BTreeSet::new();
    collect_function_header_param_names(header, &mut params);

    let spans = identifier_spans(body);
    let mut order = Vec::new();
    let mut taken: BTreeSet<&str> = identifier_spans(header)
        .into_iter()
        .map(|span| &header[span.start..span.end])
        .collect();
    for span in &spans {
        let name = &body[span.start..span.end];
        if span.member {
            continue;
        }
        if params.contains(name) {
            taken.insert(name);
        } else if is_synthetic_local_name(name) || name == "result" {
            if !order.contains(&name) {
                order.push(name);
            }
            if name == "result" {
                taken.insert(name);
            }
        } else {
            taken.insert(name);
        }
    }
    if order.iter().all(|&name| name == "result") {
        return output;
    }

    let mut renames: BTreeMap<&str, String> = BTreeMap::new();
    if !taken.contains("result")
        && let Some(returned) = sole_returned_name(body).filter(|name| order.contains(name))
    {
        renames.insert(returned, "result".to_string());
    }
    let mut next = params.len();
    for name in order {
        if name == "result" || renames.contains_key(name) {
            next += 1;
            continue;
        }
        let fresh = loop {
            let candidate = format!("v{next}");
            next += 1;
            if !taken.contains(candidate.as_str()) {
                break candidate;
            }
        };
        renames.insert(name, fresh);
    }

    let mut out = String::with_capacity(output.len());
    out.push_str(head);
    let mut copied = 0;
    for span in &spans {
        if span.member {
            continue;
        }
        if let Some(new) = renames.get(&body[span.start..span.end]) {
            out.push_str(&body[copied..span.start]);
            out.push_str(new);
            copied = span.end;
        }
    }
    out.push_str(&body[copied..]);
    out
}

/// Generic names the pipeline invents for a local without recovered meaning.
fn is_synthetic_local_name(name: &str) -> bool {
    is_v_number_name(name)
        || is_coalesced_number_name(name)
        || is_cond_number_name(name)
        || is_arg_number_name(name)
        || is_arg_versioned_name(name)
}

/// Byte offset just past the function's signature line (`T f(...) {`).
fn function_body_start(output: &str) -> Option<usize> {
    let mut offset = 0;
    for line in output.split_inclusive('\n') {
        let trimmed = line.trim_end();
        let is_header = !line.starts_with(char::is_whitespace)
            && !trimmed.starts_with("/*")
            && !trimmed.starts_with("//")
            && trimmed.ends_with('{')
            && trimmed.contains('(');
        offset += line.len();
        if is_header {
            return Some(offset);
        }
    }
    None
}

/// The one identifier every `return <identifier>;` statement returns.
/// Returns of other expressions (`return 0;`) do not disqualify it.
fn sole_returned_name(body: &str) -> Option<&str> {
    let mut returned = None;
    let mut rest = body;
    while let Some(pos) = rest.find("return ") {
        let preceded_by_ident = rest[..pos].bytes().last().is_some_and(is_ident_byte);
        let after = &rest[pos + "return ".len()..];
        rest = after;
        if preceded_by_ident {
            continue;
        }
        let len = after.bytes().take_while(|&b| is_ident_byte(b)).count();
        let name = &after[..len];
        let is_plain_return = len > 0
            && !name.as_bytes()[0].is_ascii_digit()
            && after[len..].trim_start().starts_with(';');
        if !is_plain_return {
            continue;
        }
        match returned {
            None => returned = Some(name),
            Some(prev) if prev == name => {}
            Some(_) => return None,
        }
    }
    returned
}

#[derive(Debug, Clone, Copy)]
struct IdentSpan {
    start: usize,
    end: usize,
    /// Follows `.` or `->`: a field name, not a local.
    member: bool,
}

/// Identifier spans of `text`, skipping numbers and the contents of string
/// and character literals. Comments are scanned for identifiers but never
/// open a literal, so an apostrophe in prose cannot swallow code.
fn identifier_spans(text: &str) -> Vec<IdentSpan> {
    let bytes = text.as_bytes();
    let mut spans = Vec::new();
    let mut in_line_comment = false;
    let mut in_block_comment = false;
    let mut idx = 0;
    while idx < bytes.len() {
        let b = bytes[idx];
        if in_line_comment && b == b'\n' {
            in_line_comment = false;
        } else if in_block_comment && bytes[idx..].starts_with(b"*/") {
            in_block_comment = false;
            idx += 2;
            continue;
        } else if !in_line_comment && !in_block_comment {
            if bytes[idx..].starts_with(b"//") {
                in_line_comment = true;
                idx += 2;
                continue;
            }
            if bytes[idx..].starts_with(b"/*") {
                in_block_comment = true;
                idx += 2;
                continue;
            }
            if b == b'"' || b == b'\'' {
                idx = skip_literal(bytes, idx);
                continue;
            }
        }
        if is_ident_byte(b) {
            let start = idx;
            while idx < bytes.len() && is_ident_byte(bytes[idx]) {
                idx += 1;
            }
            if !b.is_ascii_digit() {
                let member = text[..start].ends_with('.') || text[..start].ends_with("->");
                spans.push(IdentSpan {
                    start,
                    end: idx,
                    member,
                });
            }
            continue;
        }
        idx += 1;
    }
    spans
}

/// Index just past the literal opened by the quote at `open`.
fn skip_literal(bytes: &[u8], open: usize) -> usize {
    let quote = bytes[open];
    let mut idx = open + 1;
    while idx < bytes.len() {
        match bytes[idx] {
            b'\\' => idx += 2,
            b'\n' => return idx,
            b if b == quote => return idx + 1,
            _ => idx += 1,
        }
    }
    bytes.len()
}

#[cfg(test)]
mod tests {
    use super::number_synthetic_locals;

    #[test]
    fn numbers_locals_after_arguments_in_declaration_order() {
        let input = "int f(int a1, int a2) {\n    _QWORD c3; // rbx\n    __int64 v40; // temp\n    v40 = a1 + c3;\n    c3 = v40;\n    g(c3);\n}\n";
        let expected = "int f(int a1, int a2) {\n    _QWORD v2; // rbx\n    __int64 v3; // temp\n    v3 = a1 + v2;\n    v2 = v3;\n    g(v2);\n}\n";
        assert_eq!(number_synthetic_locals(input.to_string()), expected);
    }

    #[test]
    fn names_the_returned_local_result() {
        let input = "int f(void) {\n    _QWORD c0; // rax\n    int v9;\n    c0 = v9;\n    if (v9) return 0;\n    return c0;\n}\n";
        let expected = "int f(void) {\n    _QWORD result; // rax\n    int v1;\n    result = v1;\n    if (v1) return 0;\n    return result;\n}\n";
        assert_eq!(number_synthetic_locals(input.to_string()), expected);
    }

    #[test]
    fn renames_argument_carriers_of_a_function_without_that_argument() {
        let input = "int main(void) {\n    _QWORD a2; // rsi\n    a2 = 1;\n    return a2 + 1;\n}\n";
        let expected =
            "int main(void) {\n    _QWORD v0; // rsi\n    v0 = 1;\n    return v0 + 1;\n}\n";
        assert_eq!(number_synthetic_locals(input.to_string()), expected);
    }

    #[test]
    fn keeps_stack_slots_fields_literals_and_taken_names() {
        let input = "int f(int a) {\n    int v_4;\n    int v2;\n    int c7;\n    v_4 = a;\n    c7 = p->c1 + s.v1 + v2;\n    puts(\"c7 v2\");\n    return v_4;\n}\n";
        let expected = "int f(int a) {\n    int v_4;\n    int v1;\n    int v2;\n    v_4 = a;\n    v2 = p->c1 + s.v1 + v1;\n    puts(\"c7 v2\");\n    return v_4;\n}\n";
        assert_eq!(number_synthetic_locals(input.to_string()), expected);
    }

    #[test]
    fn existing_result_holds_an_index_and_taken_names_are_skipped() {
        let input = "int f(void) {\n    int result;\n    int c0;\n    c0 = v1_fn(2);\n    result = c0 + v1;\n    return result;\n}\n";
        let expected = "int f(void) {\n    int result;\n    int v1;\n    v1 = v1_fn(2);\n    result = v1 + v2;\n    return result;\n}\n";
        assert_eq!(number_synthetic_locals(input.to_string()), expected);
    }
}
