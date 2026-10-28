use std::collections::BTreeSet;

use crate::c_printer::postprocess::{contains_identifier, is_c_identifier, is_ident_byte};

pub(in crate::c_printer) fn is_control_line(line: &str) -> bool {
    let trimmed = line.trim_start();
    trimmed.starts_with("if (") || trimmed.starts_with("while (") || trimmed.starts_with("for (")
}

pub(in crate::c_printer) fn collect_v_number_names(line: &str, names: &mut BTreeSet<String>) {
    if contains_identifier(line, "result") {
        names.insert("result".to_string());
    }
    let bytes = line.as_bytes();
    let mut idx = 0;
    while idx < bytes.len() {
        let starts_temp = bytes[idx] == b'v';
        let starts_coalesced =
            bytes[idx] == b'c' && bytes.get(idx + 1).is_some_and(|b| b.is_ascii_digit());
        let starts_cond = bytes[idx..].starts_with(b"cond_");
        let starts_arg_version = bytes[idx] == b'a'
            && bytes.get(idx + 1).is_some_and(|b| b.is_ascii_digit())
            && bytes.get(idx + 2) == Some(&b'_');
        let starts_arg_number =
            bytes[idx] == b'a' && bytes.get(idx + 1).is_some_and(|b| b.is_ascii_digit());
        if !starts_temp
            && !starts_coalesced
            && !starts_cond
            && !starts_arg_version
            && !starts_arg_number
        {
            idx += 1;
            continue;
        }
        let start = idx;
        if starts_cond {
            idx += "cond_".len();
        } else if starts_arg_version {
            idx += 1;
            while idx < bytes.len() && bytes[idx].is_ascii_digit() {
                idx += 1;
            }
            if bytes.get(idx) != Some(&b'_') {
                idx += 1;
                continue;
            }
            idx += 1;
        } else {
            idx += 1;
        }
        let digits_start = idx;
        while idx < bytes.len() && bytes[idx].is_ascii_digit() {
            idx += 1;
        }
        if idx == digits_start {
            continue;
        }
        if starts_temp && bytes.get(idx) == Some(&b'_') {
            let suffix_start = idx + 1;
            let mut suffix_end = suffix_start;
            while suffix_end < bytes.len() && bytes[suffix_end].is_ascii_digit() {
                suffix_end += 1;
            }
            if suffix_end > suffix_start {
                idx = suffix_end;
            }
        }
        let before_ok = start == 0 || !is_ident_byte(bytes[start - 1]);
        let after_ok = idx == bytes.len() || !is_ident_byte(bytes[idx]);
        if before_ok && after_ok {
            names.insert(line[start..idx].to_string());
        }
    }
}

pub(in crate::c_printer) fn collect_function_header_param_names(
    line: &str,
    names: &mut BTreeSet<String>,
) {
    let trimmed = line.trim();
    if !trimmed.ends_with('{') {
        return;
    }
    // Drop annotations such as `/* BYREF */` or `/* // dropped 2 param(s) */`:
    // their parentheses would be taken for the parameter list's.
    let mut uncommented = String::with_capacity(trimmed.len());
    let mut rest = trimmed;
    while let Some((head, tail)) = rest.split_once("/*") {
        uncommented.push_str(head);
        rest = tail.split_once("*/").map_or("", |(_, after)| after);
    }
    uncommented.push_str(rest);
    let trimmed = uncommented.as_str();
    let Some(open) = trimmed.find('(') else {
        return;
    };
    let Some(close) = trimmed.rfind(')') else {
        return;
    };
    if close <= open {
        return;
    }
    let params = trimmed[open + 1..close].trim();
    if params.is_empty() || params == "void" {
        return;
    }
    for param in params.split(',') {
        let param = param.trim();
        if param.is_empty() || param == "..." || param == "void" {
            continue;
        }
        let Some(raw_name) = param.split_whitespace().last() else {
            continue;
        };
        let name = raw_name
            .trim_start_matches('*')
            .split_once('[')
            .map_or(raw_name.trim_start_matches('*'), |(name, _)| name);
        if is_c_identifier(name) {
            names.insert(name.to_string());
        }
    }
}
