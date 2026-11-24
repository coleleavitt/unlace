//! Environment variables under the `UNLACE_` prefix, with the legacy `KUNA_` prefix
//! still read as a deprecated alias.
//!
//! A name given with either prefix (`"UNLACE_SPECS"` or `"UNLACE_SPECS"`) reads
//! `UNLACE_SPECS` first and falls back to `UNLACE_SPECS`; a name with neither prefix is
//! read as written.

use std::env::VarError;
use std::ffi::OsString;

pub const PREFIX: &str = "UNLACE_";
pub const LEGACY_PREFIX: &str = "KUNA_";

fn suffix(name: &str) -> Option<&str> {
    name.strip_prefix(PREFIX)
        .or_else(|| name.strip_prefix(LEGACY_PREFIX))
}

/// The `UNLACE_` spelling of `name` (unchanged when it has neither prefix).
pub fn current_name(name: &str) -> String {
    suffix(name).map_or_else(|| name.to_owned(), |s| format!("{PREFIX}{s}"))
}

/// The legacy `KUNA_` spelling of `name` (unchanged when it has neither prefix).
pub fn legacy_name(name: &str) -> String {
    suffix(name).map_or_else(|| name.to_owned(), |s| format!("{LEGACY_PREFIX}{s}"))
}

/// `std::env::var_os` that prefers `UNLACE_<name>` and falls back to `KUNA_<name>`.
pub fn var_os(name: &str) -> Option<OsString> {
    match suffix(name) {
        Some(s) => std::env::var_os(format!("{PREFIX}{s}"))
            .or_else(|| std::env::var_os(format!("{LEGACY_PREFIX}{s}"))),
        None => std::env::var_os(name),
    }
}

/// `std::env::var` that prefers `UNLACE_<name>` and falls back to `KUNA_<name>`.
pub fn var(name: &str) -> Result<String, VarError> {
    match var_os(name) {
        Some(v) => v.into_string().map_err(VarError::NotUnicode),
        None => Err(VarError::NotPresent),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn names_map_between_prefixes() {
        assert_eq!(current_name("KUNA_SPECS"), "UNLACE_SPECS");
        assert_eq!(current_name("UNLACE_SPECS"), "UNLACE_SPECS");
        assert_eq!(legacy_name("UNLACE_SPECS"), "KUNA_SPECS");
        assert_eq!(current_name("HOME"), "HOME");
    }

    #[test]
    fn unlace_wins_and_unlace_is_the_fallback() {
        let (new, old) = ("UNLACE_ENVHELPER_TEST", "KUNA_ENVHELPER_TEST");
        // SAFETY: test-only variables no other test reads.
        unsafe {
            std::env::remove_var(new);
            std::env::set_var(old, "legacy");
        }
        assert_eq!(var(new).as_deref(), Ok("legacy"));
        assert_eq!(var(old).as_deref(), Ok("legacy"));
        unsafe { std::env::set_var(new, "current") };
        assert_eq!(var(old).as_deref(), Ok("current"));
        unsafe {
            std::env::remove_var(new);
            std::env::remove_var(old);
        }
        assert_eq!(var(new), Err(VarError::NotPresent));
    }
}
