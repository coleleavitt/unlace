pub(in crate::c_printer) fn is_prunable_synthetic_local(name: &str) -> bool {
    matches!(name, "cond" | "result" | "pfn")
        || is_v_number_name(name)
        || is_coalesced_number_name(name)
        || is_cond_number_name(name)
}

pub(in crate::c_printer) fn is_decl_synthetic_local(name: &str) -> bool {
    is_prunable_synthetic_local(name) || is_arg_versioned_name(name) || is_arg_number_name(name)
}

pub(in crate::c_printer) fn is_v_number_name(name: &str) -> bool {
    let Some(rest) = name.strip_prefix('v') else {
        return false;
    };
    is_v_number_suffix(rest)
}

pub(in crate::c_printer) fn is_v_number_suffix(rest: &str) -> bool {
    let Some((head, tail)) = rest.split_once('_') else {
        return !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit());
    };
    !head.is_empty()
        && head.bytes().all(|b| b.is_ascii_digit())
        && !tail.is_empty()
        && tail.bytes().all(|b| b.is_ascii_digit())
}

pub(in crate::c_printer) fn is_cond_number_name(name: &str) -> bool {
    let Some(rest) = name.strip_prefix("cond_") else {
        return false;
    };
    !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit())
}

pub(in crate::c_printer) fn is_coalesced_number_name(name: &str) -> bool {
    let Some(rest) = name.strip_prefix('c') else {
        return false;
    };
    !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit())
}

pub(in crate::c_printer) fn is_arg_versioned_name(name: &str) -> bool {
    let Some(rest) = name.strip_prefix('a') else {
        return false;
    };
    let Some((arg, version)) = rest.split_once('_') else {
        return false;
    };
    !arg.is_empty()
        && arg.bytes().all(|b| b.is_ascii_digit())
        && !version.is_empty()
        && version.bytes().all(|b| b.is_ascii_digit())
}

pub(in crate::c_printer) fn is_arg_number_name(name: &str) -> bool {
    let Some(rest) = name.strip_prefix('a') else {
        return false;
    };
    !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit())
}

pub(in crate::c_printer) fn contains_identifier(haystack: &str, needle: &str) -> bool {
    let bytes = haystack.as_bytes();
    let needle_bytes = needle.as_bytes();
    if needle_bytes.is_empty() || needle_bytes.len() > bytes.len() {
        return false;
    }
    let mut start = 0usize;
    while let Some(pos) = haystack[start..].find(needle) {
        let idx = start + pos;
        let before = idx.checked_sub(1).and_then(|i| bytes.get(i)).copied();
        let after = bytes.get(idx + needle_bytes.len()).copied();
        let before_boundary = before.is_none_or(|b| !is_ident_byte(b));
        let after_boundary = after.is_none_or(|b| !is_ident_byte(b));
        if before_boundary && after_boundary {
            return true;
        }
        start = idx + needle_bytes.len();
    }
    false
}

pub(in crate::c_printer) fn is_c_identifier(s: &str) -> bool {
    let mut bytes = s.bytes();
    let Some(first) = bytes.next() else {
        return false;
    };
    (first == b'_' || first.is_ascii_alphabetic()) && bytes.all(is_ident_byte)
}

pub(in crate::c_printer) fn is_ident_byte(b: u8) -> bool {
    b == b'_' || b.is_ascii_alphanumeric()
}
