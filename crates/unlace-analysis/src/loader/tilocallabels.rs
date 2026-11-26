//! TI compiler local labels. cl2000 (and the other TI compilers) emit every branch target of a
//! function as `$C$L<n>`, typed `STT_FUNC`, `STB_LOCAL`, size 0. They are labels inside a
//! function, not function entries, so the function inventory skips them.

/// `$C$L` followed by one or more decimal digits.
pub(crate) fn is_ti_local_label(name: &[u8]) -> bool {
    name.len() > 4 && name.starts_with(b"$C$L") && name[4..].iter().all(|b| b.is_ascii_digit())
}

#[cfg(test)]
mod tests;
