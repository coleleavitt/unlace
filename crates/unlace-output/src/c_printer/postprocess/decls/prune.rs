use std::collections::BTreeSet;

use crate::c_printer::postprocess::{brace_delta, is_ident_byte, output_has_cond_family_temp};

use super::{parse_plain_local_decl_name, parse_shadowing_local_decl_name};

pub(in crate::c_printer) fn prune_unused_plain_local_decls(output: String) -> String {
    let max_passes = if output_has_cond_family_temp(&output) {
        8
    } else {
        4
    };
    tracing::debug!(target: "unlace::cprinter::prune", "decl-prune begin max_passes={max_passes}");
    let mut current = output;
    for pass in 0..max_passes {
        let next = prune_unused_plain_local_decls_once(&current, pass);
        if next == current {
            tracing::debug!(target: "unlace::cprinter::prune", "decl-prune fixpoint reached after pass={pass}");
            return next;
        }
        current = next;
    }
    tracing::debug!(target: "unlace::cprinter::prune", "decl-prune hit {max_passes}-pass cap without fixpoint");
    current
}

pub(in crate::c_printer) fn prune_unused_plain_local_decls_once(output: &str, pass: u32) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let mut remove = BTreeSet::new();

    // Walk every block-opening `{` line, not just function-decl lines, so
    // shadowing decls inside `if`/`else`/`do`/`while`/`for` bodies are pruned
    // with the same used-later check applied within their own lexical block.
    for open_idx in 0..lines.len() {
        if !lines[open_idx].trim_end().ends_with('{') {
            continue;
        }

        let body_start = open_idx + 1;
        let mut depth = brace_delta(lines[open_idx]);
        if depth <= 0 {
            continue;
        }
        let mut scan = body_start;
        while scan < lines.len() && depth > 0 {
            depth += brace_delta(lines[scan]);
            scan += 1;
        }
        let body_end = scan.saturating_sub(1);

        let block_decl_names = block_shadowing_decl_names(&lines, body_start, body_end);
        let mut used_after: BTreeSet<String> = BTreeSet::new();
        for line_idx in (body_start..body_end).rev() {
            let Some(name) = parse_plain_local_decl_name(lines[line_idx]) else {
                collect_candidate_identifiers(
                    lines[line_idx],
                    &block_decl_names,
                    None,
                    &mut used_after,
                );
                continue;
            };
            let used_later = used_after.contains(name);
            if !used_later {
                remove.insert(line_idx);
            }
            tracing::debug!(target: "unlace::cprinter::prune",
                "decl-prune pass={pass} line={} name={name} block=[{}..{}) decision={}",
                line_idx + 1,
                body_start + 1,
                body_end + 1,
                if used_later { "keep" } else { "remove" }
            );
            used_after.remove(name);
            collect_candidate_identifiers(
                lines[line_idx],
                &block_decl_names,
                Some(name),
                &mut used_after,
            );
        }
    }

    if remove.is_empty() {
        return output.to_string();
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

fn block_shadowing_decl_names(
    lines: &[&str],
    body_start: usize,
    body_end: usize,
) -> BTreeSet<String> {
    lines[body_start..body_end]
        .iter()
        .filter_map(|line| parse_shadowing_local_decl_name(line).map(str::to_string))
        .collect()
}

fn collect_candidate_identifiers(
    line: &str,
    candidates: &BTreeSet<String>,
    skip: Option<&str>,
    out: &mut BTreeSet<String>,
) {
    if candidates.is_empty() {
        return;
    }
    let bytes = line.as_bytes();
    let mut i = 0usize;
    while i < bytes.len() {
        if !is_ident_byte(bytes[i]) {
            i += 1;
            continue;
        }
        let start = i;
        i += 1;
        while i < bytes.len() && is_ident_byte(bytes[i]) {
            i += 1;
        }
        let ident = &line[start..i];
        if skip == Some(ident) {
            continue;
        }
        if candidates.contains(ident) {
            out.insert(ident.to_string());
        }
    }
}
