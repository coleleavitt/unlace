use std::collections::BTreeSet;
use std::fmt::Write;

use crate::c_printer::trace_temp_text;

use super::{
    collect_function_header_param_names, collect_v_number_names, is_control_line,
    parse_shadowing_local_decl_name,
};

pub(in crate::c_printer) fn declare_missing_control_v_decls(output: String) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let mut out = String::with_capacity(output.len());
    let mut in_function = false;
    let mut pending_decls: BTreeSet<String> = BTreeSet::new();
    let mut declared: BTreeSet<String> = BTreeSet::new();
    let mut body_lines: Vec<&str> = Vec::new();

    for line in lines {
        if !in_function {
            if line.contains('(') && line.trim_end().ends_with('{') {
                in_function = true;
                pending_decls.clear();
                declared.clear();
                collect_function_header_param_names(line, &mut declared);
                body_lines.clear();
                out.push_str(line);
                out.push('\n');
            } else {
                out.push_str(line);
                out.push('\n');
            }
            continue;
        }

        if line == "}" {
            for name in &pending_decls {
                if !declared.contains(name) {
                    trace_temp_text(format_args!(
                        "declare-control name={name} decision=insert declared={:?}",
                        declared
                    ));
                    let _ = writeln!(out, "    int {}; // temp", name);
                } else {
                    trace_temp_text(format_args!(
                        "declare-control name={name} decision=skip-already-declared"
                    ));
                }
            }
            for body_line in &body_lines {
                out.push_str(body_line);
                out.push('\n');
            }
            out.push_str(line);
            out.push('\n');
            in_function = false;
            continue;
        }

        if let Some(name) = parse_shadowing_local_decl_name(line) {
            declared.insert(name.to_string());
            trace_temp_text(format_args!(
                "declare-control line={:?} declared-name={name}",
                line.trim()
            ));
        }
        if is_control_line(line) {
            let before = pending_decls.len();
            collect_v_number_names(line, &mut pending_decls);
            if pending_decls.len() != before {
                trace_temp_text(format_args!(
                    "declare-control line={:?} pending={:?}",
                    line.trim(),
                    pending_decls
                ));
            }
        }
        body_lines.push(line);
    }

    if in_function {
        for body_line in &body_lines {
            out.push_str(body_line);
            out.push('\n');
        }
    }

    out
}

pub(in crate::c_printer) fn declare_missing_temp_v_decls(output: String) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let mut out = String::with_capacity(output.len());
    let mut in_function = false;
    let mut pending_decls: BTreeSet<String> = BTreeSet::new();
    let mut declared: BTreeSet<String> = BTreeSet::new();
    let mut body_lines: Vec<&str> = Vec::new();

    for line in lines {
        if !in_function {
            if line.contains('(') && line.trim_end().ends_with('{') {
                in_function = true;
                pending_decls.clear();
                declared.clear();
                collect_function_header_param_names(line, &mut declared);
                body_lines.clear();
                out.push_str(line);
                out.push('\n');
            } else {
                out.push_str(line);
                out.push('\n');
            }
            continue;
        }

        if line == "}" {
            for name in &pending_decls {
                if !declared.contains(name) {
                    trace_temp_text(format_args!(
                        "declare-temp name={name} decision=insert declared={:?}",
                        declared
                    ));
                    let _ = writeln!(out, "    __int64 {}; // temp", name);
                } else {
                    trace_temp_text(format_args!(
                        "declare-temp name={name} decision=skip-already-declared"
                    ));
                }
            }
            for body_line in &body_lines {
                out.push_str(body_line);
                out.push('\n');
            }
            out.push_str(line);
            out.push('\n');
            in_function = false;
            continue;
        }

        if let Some(name) = parse_shadowing_local_decl_name(line) {
            declared.insert(name.to_string());
            trace_temp_text(format_args!(
                "declare-temp line={:?} declared-name={name}",
                line.trim()
            ));
        }
        let before = pending_decls.len();
        collect_v_number_names(line, &mut pending_decls);
        if pending_decls.len() != before {
            trace_temp_text(format_args!(
                "declare-temp line={:?} pending={:?}",
                line.trim(),
                pending_decls
            ));
        }
        body_lines.push(line);
    }

    if in_function {
        for body_line in &body_lines {
            out.push_str(body_line);
            out.push('\n');
        }
    }

    out
}
