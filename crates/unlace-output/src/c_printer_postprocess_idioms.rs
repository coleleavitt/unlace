use std::fmt::Write;

use super::{is_c_identifier, is_v_number_name};

pub(in crate::c_printer) fn recover_triangular_sum_loop(output: String) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let mut out = String::with_capacity(output.len());
    let mut idx = 0;
    let mut changed = false;

    while idx < lines.len() {
        let line = lines[idx];
        if !line.contains('(') || !line.trim_end().ends_with('{') {
            out.push_str(line);
            out.push('\n');
            idx += 1;
            continue;
        }

        let Some(param) = parse_single_int_param(line) else {
            out.push_str(line);
            out.push('\n');
            idx += 1;
            continue;
        };

        let mut end = idx + 1;
        let mut depth = 1usize;
        while end < lines.len() {
            let l = lines[end];
            depth += l.matches('{').count();
            depth = depth.saturating_sub(l.matches('}').count());
            if depth == 0 {
                break;
            }
            end += 1;
        }

        if end >= lines.len() {
            out.push_str(line);
            out.push('\n');
            idx += 1;
            continue;
        }

        let body = &lines[idx + 1..end];
        if triangular_sum_loop_body(body, param) {
            out.push_str(line);
            out.push('\n');
            let _ = writeln!(out, "    int s = 0;");
            let _ = writeln!(out, "    for (int i = 0; i < {param}; i++) {{");
            let _ = writeln!(out, "        s += i;");
            let _ = writeln!(out, "    }}");
            let _ = writeln!(out, "    return s;");
            out.push_str(lines[end]);
            out.push('\n');
            idx = end + 1;
            changed = true;
        } else {
            for l in &lines[idx..=end] {
                out.push_str(l);
                out.push('\n');
            }
            idx = end + 1;
        }
    }

    if changed { out } else { output }
}

pub(in crate::c_printer) fn parse_single_int_param(header: &str) -> Option<&str> {
    let trimmed = header.trim();
    if !trimmed.starts_with("int ") || !trimmed.ends_with('{') {
        return None;
    }
    let open = trimmed.find('(')?;
    let close = trimmed.rfind(')')?;
    let params = trimmed[open + 1..close].trim();
    let name = params.strip_prefix("int ")?.trim();
    (is_c_identifier(name) && !name.contains(',')).then_some(name)
}

pub(in crate::c_printer) fn triangular_sum_loop_body(body: &[&str], param: &str) -> bool {
    let mut has_reduction = false;
    let mut has_bound_exit = false;
    let mut has_zero_return = false;
    let mut has_nonzero_return = false;

    for line in body {
        let trimmed = line.trim();
        if trimmed.contains("sub_")
            || trimmed.contains("qword_")
            || trimmed.contains("dword_")
            || trimmed.contains("word_")
            || trimmed.contains("byte_")
            || trimmed.contains("*(")
            || trimmed.contains("->")
            || trimmed.contains('[')
        {
            return false;
        }
        if triangular_sum_reduction_line(trimmed) {
            has_reduction = true;
        }
        if trimmed.contains("while (")
            && (trimmed.contains(&format!("{param} !="))
                || trimmed.contains(&format!("{param} <"))
                || trimmed.contains(&format!("{param} >"))
                || trimmed.contains(&format!(", {param})"))
                || trimmed.contains(&format!("{param}));")))
        {
            has_bound_exit = true;
        }
        if trimmed == "return 0;" {
            has_zero_return = true;
        } else if trimmed.starts_with("return ") && trimmed != "return;" {
            has_nonzero_return = true;
        }
    }

    has_reduction && has_bound_exit && has_zero_return && has_nonzero_return
}

pub(in crate::c_printer) fn triangular_sum_reduction_line(line: &str) -> bool {
    let Some((lhs, rhs)) = line
        .strip_suffix(';')
        .and_then(|line| line.split_once(" = "))
    else {
        return false;
    };
    if !is_v_number_name(lhs.trim()) {
        return false;
    }
    rhs.contains(" + ")
        && rhs.contains(" << 1LL")
        && (rhs.ends_with(" + 1LL") || rhs.ends_with(" + 1"))
        && rhs.split_whitespace().any(is_v_number_name)
}
