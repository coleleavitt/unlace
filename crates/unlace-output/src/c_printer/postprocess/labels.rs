use std::collections::BTreeSet;

use super::is_c_identifier;

/// Drop an unconditional `goto L;` when the very next emitted statement is
/// `L:`. The label itself is preserved here because other gotos may still
/// target it; the following `unused-labels` stage removes it when this was the
/// only reference.
pub(in crate::c_printer) fn prune_fallthrough_gotos(output: String) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let mut remove = BTreeSet::new();

    for idx in 0..lines.len().saturating_sub(1) {
        let Some(target) = parse_goto_target(lines[idx]) else {
            continue;
        };
        let Some(label) = parse_label_definition(lines[idx + 1]) else {
            continue;
        };
        if target == label {
            tracing::debug!(target: "unlace::cprinter::prune",
                "fallthrough-goto-prune line={} target={target}",
                idx + 1
            );
            remove.insert(idx);
        }
    }

    if remove.is_empty() {
        return output;
    }

    let mut pruned = String::with_capacity(output.len());
    for (idx, line) in lines.iter().enumerate() {
        if remove.contains(&idx) {
            continue;
        }
        pruned.push_str(line);
        pruned.push('\n');
    }
    pruned
}

/// Drop label definition lines (`label_N:;`) that have no remaining `goto
/// label_N;` referencing them. Such orphans arise when a later printer pass
/// elides the only branch to a label — e.g. stack-canary guard removal drops
/// the `goto <exit>` in the fail branch, leaving the exit label dangling.
/// gcc/clang reject these under `-Werror=unused-label`, so they must be swept.
pub(in crate::c_printer) fn prune_unused_labels(output: String) -> String {
    // Collect every label that is still the target of a `goto`.
    let mut referenced: BTreeSet<String> = BTreeSet::new();
    for line in output.lines() {
        let trimmed = line.trim_start();
        if let Some(rest) = trimmed.strip_prefix("goto ") {
            let name: String = rest
                .trim_end_matches(|c: char| c == ';' || c.is_whitespace())
                .to_string();
            if !name.is_empty() {
                referenced.insert(name);
            }
        }
    }

    let mut changed = false;
    let mut pruned = String::with_capacity(output.len());
    for line in output.lines() {
        if let Some(label) = parse_label_definition(line)
            && !referenced.contains(&label)
        {
            changed = true;
            continue;
        }
        pruned.push_str(line);
        pruned.push('\n');
    }

    if changed { pruned } else { output }
}

/// Parse a label-definition line of the form `label_16:;` or `label_16:`
/// (optionally indented), returning the bare label identifier. Returns `None`
/// for `case`/`default` labels and any line that is not solely a label
/// definition (so `goto` lines and statements are never matched).
pub(in crate::c_printer) fn parse_label_definition(line: &str) -> Option<String> {
    let trimmed = line.trim();
    let body = trimmed.strip_suffix(';').unwrap_or(trimmed);
    let name = body.strip_suffix(':')?;
    if name.is_empty()
        || name.contains(':')
        || name == "default"
        || name.starts_with("case ")
        || !name.chars().all(|c| c == '_' || c.is_ascii_alphanumeric())
        || name.chars().next().is_some_and(|c| c.is_ascii_digit())
    {
        return None;
    }
    Some(name.to_string())
}

pub(in crate::c_printer) fn parse_goto_target(line: &str) -> Option<String> {
    let trimmed = line.trim();
    let rest = trimmed.strip_prefix("goto ")?;
    let target = rest.trim_end_matches(';').trim();
    is_c_identifier(target).then_some(target.to_string())
}

pub(in crate::c_printer) fn brace_delta(line: &str) -> i32 {
    line.chars().fold(0, |depth, ch| match ch {
        '{' => depth + 1,
        '}' => depth - 1,
        _ => depth,
    })
}
