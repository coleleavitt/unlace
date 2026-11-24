//! Environment variables under the `UNLACE_` prefix.
//!
//! The helpers read a name as written; they exist so every read of an
//! `UNLACE_` variable goes through one place.

use std::env::VarError;
use std::ffi::OsString;

pub const PREFIX: &str = "UNLACE_";

/// `name` as read (the `UNLACE_` spelling).
pub fn current_name(name: &str) -> String {
    name.to_owned()
}

/// `std::env::var_os` of `name`.
pub fn var_os(name: &str) -> Option<OsString> {
    std::env::var_os(name)
}

/// `std::env::var` of `name`.
pub fn var(name: &str) -> Result<String, VarError> {
    std::env::var(name)
}
