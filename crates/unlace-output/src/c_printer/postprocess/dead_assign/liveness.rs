use crate::c_printer::postprocess::{contains_identifier, is_cond_number_name};

/// True for the synthetic flag/condition temporaries (`cond`, `cond_N`) whose
/// re-assignment chains are pure dead scaffolding emitted by the x86 flag
/// pipeline. These — and only these — may be aggressively pruned when every
/// later reference is itself a write. Real register-named values (`vN`) and
/// `result` are excluded so observable last-stores survive.
pub(in crate::c_printer) fn is_cond_family_local(name: &str) -> bool {
    name == "cond" || is_cond_number_name(name)
}

/// Returns true iff `name` appears as an rvalue use (not as the LHS of a
/// plain `name = …;` write) in `text`. Used by the dead-assignment pruner
/// so that a chain of pure writes `cond = 0; … cond = a < b;` is recognised
/// as dead even when later writes textually reference the variable.
pub(in crate::c_printer) fn identifier_used_as_rvalue(text: &str, name: &str) -> bool {
    let mut rest = text;
    while let Some(pos) = rest.find(name) {
        let before = &rest[..pos];
        let after = &rest[pos + name.len()..];
        // Identifier boundary check on both sides.
        let prev_ok = before
            .chars()
            .last()
            .is_none_or(|c| !(c.is_ascii_alphanumeric() || c == '_'));
        let next_ok = after
            .chars()
            .next()
            .is_none_or(|c| !(c.is_ascii_alphanumeric() || c == '_'));
        if !(prev_ok && next_ok) {
            rest = &rest[pos + name.len()..];
            continue;
        }
        // Skip if this occurrence is a plain LHS of `name = …` (NOT `==`, `+=`).
        let after_trim = after.trim_start();
        let lhs_assignment = after_trim
            .strip_prefix('=')
            .is_some_and(|s| !s.starts_with('=') && !s.starts_with('>'));
        let prev_trim = before.trim_end();
        let prev_is_op = prev_trim
            .chars()
            .last()
            .is_some_and(|c| !matches!(c, ' ' | '(' | ',' | ';' | '{'));
        if lhs_assignment && !prev_is_op {
            rest = &rest[pos + name.len()..];
            continue;
        }
        return true;
    }
    false
}

/// `true` when the plain assignment at `lines[idx]` is a **loop-carried store**:
/// it sits inside a loop, and `lhs` is **live-on-entry to that loop** (a read of
/// `lhs` reaches the loop header before any write). Such a store is live — its
/// value is carried back to the loop-top read across the back-edge — even though
/// the pruner's forward-only `used_later` scan, which only looks at lines BELOW
/// the store, sees no use and would wrongly delete it.
///
/// The textual pruner has no CFG, so we recover just enough structure: brace-
/// match outward from the store to the innermost enclosing loop header
/// (`while`/`for`/`do`), then scan that loop body from the TOP for the first
/// occurrence of `lhs`. If it is a READ (rvalue), `lhs` is loop-live-in and the
/// back-edge carries this store to it → keep. If it is a WRITE, the loop
/// redefines `lhs` before reading it, so a loop-bottom store of `lhs` is dead
/// (overwritten before the next read) → do not keep. This precision matters:
/// the looser "any read above" test retained dead single-use temps that the
/// loop rewrites at the top, bloating the leaked-temp count.
pub(in crate::c_printer) fn is_loop_carried_use_above(
    lines: &[&str],
    idx: usize,
    lhs: &str,
) -> bool {
    // 1. Find the innermost enclosing loop header by brace-matching upward.
    let mut depth: i32 = 0;
    let mut i = idx;
    let loop_header = loop {
        if i == 0 {
            return false;
        }
        i -= 1;
        let line = lines[i];
        // Scanning upward: a `}` closes a block nested below; a `{` that drives
        // depth negative opens a block that ENCLOSES `idx`.
        depth += line.matches('}').count() as i32;
        depth -= line.matches('{').count() as i32;
        if depth < 0 {
            let trimmed = line.trim_start();
            let is_loop_header = trimmed.starts_with("while")
                || trimmed.starts_with("for ")
                || trimmed.starts_with("for(")
                || trimmed.starts_with("do ")
                || trimmed.starts_with("do{")
                || trimmed == "do";
            if is_loop_header {
                break i;
            }
            // A non-loop enclosing block (`if`/`else`/`switch`/function body):
            // keep climbing for an outer loop that may enclose both.
            depth = 0;
        }
    };

    // 2. Is `lhs` live-on-entry to that loop? Scan the loop body from the top
    //    until `lhs` first appears; bounded to the body by brace depth.
    let mut body_depth: i32 = lines[loop_header].matches('{').count() as i32
        - lines[loop_header].matches('}').count() as i32;
    let mut j = loop_header + 1;
    while j < lines.len() && body_depth > 0 {
        let line = lines[j];
        if identifier_used_as_rvalue(line, lhs) {
            return true; // first occurrence is a read → loop-live-in
        }
        if contains_identifier(line, lhs) {
            return false; // first occurrence is a pure write → kills live-in
        }
        body_depth += line.matches('{').count() as i32;
        body_depth -= line.matches('}').count() as i32;
        j += 1;
    }
    false
}
