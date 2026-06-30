use crate::c_printer::postprocess::{
    is_c_identifier, is_prunable_synthetic_local, is_side_effect_free_temp_initializer,
};

pub(in crate::c_printer) fn split_plain_statement_segments(
    line: &str,
) -> Option<(&str, Vec<&str>)> {
    let indent_len = line.len() - line.trim_start().len();
    if indent_len == 0 {
        return None;
    }
    let indent = &line[..indent_len];
    let rest = line[indent_len..].trim();
    if rest.contains("BYREF") || rest.contains("[rsp") || rest.contains("[rbp") {
        return None;
    }
    if !rest.contains(';') || rest.contains('{') || rest.contains('}') {
        return None;
    }
    let mut segments = Vec::new();
    for segment in rest.split_inclusive(';') {
        if !segment.trim().is_empty() {
            segments.push(segment.trim());
        }
    }
    (segments.len() > 1 || parse_plain_assignment_lhs(segments[0]).is_some())
        .then_some((indent, segments))
}

pub(in crate::c_printer) fn parse_plain_assignment_lhs(segment: &str) -> Option<&str> {
    let stmt = segment.trim().strip_suffix(';')?.trim();
    let (lhs, rhs) = stmt.split_once(" = ")?;
    if lhs.contains(char::is_whitespace)
        || !is_c_identifier(lhs)
        || !is_prunable_synthetic_local(lhs)
        || (rhs.contains('(') && !is_side_effect_free_temp_initializer(rhs))
    {
        return None;
    }
    Some(lhs)
}

/// Match a compound assignment `lhs OP= rhs;` (`+=`, `-=`, `*=`, `&=`, …) to a
/// prunable synthetic local, returning `lhs`. Caller must verify `lhs` is
/// genuinely dead (no later occurrence) before removing, since a compound
/// assignment reads its lhs. The rhs must be side-effect-free (no call) so
/// dropping it can't lose an observable effect.
pub(in crate::c_printer) fn parse_dead_compound_assignment_lhs(segment: &str) -> Option<&str> {
    let stmt = segment.trim().strip_suffix(';')?.trim();
    // Find the compound-assign operator `<op>=` (but not `==`, `<=`, `>=`,
    // `!=`). Scan for " X= " where X is one of + - * / % & | ^ or << >>.
    const OPS: &[&str] = &[
        " += ", " -= ", " *= ", " /= ", " %= ", " &= ", " |= ", " ^= ", " <<= ", " >>= ",
    ];
    let (lhs, rhs) = OPS.iter().find_map(|op| stmt.split_once(op))?;
    if lhs.contains(char::is_whitespace)
        || !is_c_identifier(lhs)
        || !is_prunable_synthetic_local(lhs)
        || rhs.contains('(')
    {
        return None;
    }
    Some(lhs)
}
