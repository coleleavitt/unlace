use std::collections::BTreeSet;

use crate::c_printer::postprocess::{
    brace_delta, contains_identifier, output_has_cond_family_temp, prune_trace_enabled,
};
use crate::c_printer::trace_text_matches_filter;

use super::{parse_plain_local_decl_name, parse_shadowing_local_decl_name};

pub(in crate::c_printer) fn prune_unused_plain_local_decls(output: String) -> String {
    let max_passes = if output_has_cond_family_temp(&output) {
        8
    } else {
        4
    };
    if prune_trace_enabled() {
        eprintln!("[unlace-output] decl-prune begin max_passes={max_passes}");
    }
    let mut current = output;
    for pass in 0..max_passes {
        let next = prune_unused_plain_local_decls_once(&current, pass);
        if next == current {
            if prune_trace_enabled() {
                eprintln!("[unlace-output] decl-prune fixpoint reached after pass={pass}");
            }
            return next;
        }
        current = next;
    }
    if prune_trace_enabled() {
        eprintln!("[unlace-output] decl-prune hit {max_passes}-pass cap without fixpoint");
    }
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

        for line_idx in body_start..body_end {
            let Some(name) = parse_plain_local_decl_name(lines[line_idx]) else {
                continue;
            };
            let mut used_later = false;
            for later in &lines[(line_idx + 1)..body_end] {
                if parse_shadowing_local_decl_name(later) == Some(name) {
                    break;
                }
                if contains_identifier(later, name) {
                    used_later = true;
                    break;
                }
            }
            if !used_later {
                remove.insert(line_idx);
            }
            if prune_trace_enabled() {
                let text = format!(
                    "decl-prune pass={pass} line={} name={name} block=[{}..{}) decision={}",
                    line_idx + 1,
                    body_start + 1,
                    body_end + 1,
                    if used_later { "keep" } else { "remove" }
                );
                if trace_text_matches_filter(&text) {
                    eprintln!("[unlace-output] {text}");
                }
            }
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
