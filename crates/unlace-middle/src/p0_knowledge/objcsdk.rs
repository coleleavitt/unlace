//! (unlace `objcsdk`) The load-time bridge for the Objective-C SDK header path.
//!
//! The `objc` pass runs while the loader snapshots the image, upstream of every
//! console `option`, so the directory it reads method signatures from travels
//! as a process environment variable ([`OBJCSDK_ENV`]) the way `sourcelang`
//! does. Apple's headers are never vendored: the user points unlace
//! at an SDK on disk (`--option objcsdk /path/to/iPhoneOS.sdk`) or at any
//! directory of `.h` files, and nothing derived from them is written anywhere.

use std::path::PathBuf;

/// Environment variable carrying the SDK or header directory into the load path.
/// Unset, empty or `off` means no headers are read.
pub const OBJCSDK_ENV: &str = "UNLACE_OBJCSDK";

/// The header root the load in progress names (`LoadOptions::objcsdk`, else
/// [`OBJCSDK_ENV`]), if any.
pub fn sdk_path() -> Option<PathBuf> {
    crate::loadoptions::scoped(|o| o.objcsdk.clone())
        .unwrap_or_else(crate::loadoptions::env::objcsdk)
}

/// The header root an [`OBJCSDK_ENV`] value names, as the load's environment
/// fallback reads it.
pub fn sdk_path_from_value(v: &str) -> Option<PathBuf> {
    match parse_option_value(v) {
        Ok(path) => path,
        Err(e) => {
            unlace_base::notes::say_once(
                OBJCSDK_ENV,
                &format!("{OBJCSDK_ENV}: {e}; no SDK headers are read"),
            );
            None
        }
    }
}

/// Parse an `objcsdk` option value: `off` (and empty) clear the path, anything
/// else is the path itself. A path that does not exist is refused.
pub fn parse_option_value(value: &str) -> Result<Option<PathBuf>, String> {
    let v = value.trim();
    if v.is_empty() || v.eq_ignore_ascii_case("off") {
        return Ok(None);
    }
    let path = PathBuf::from(v);
    if !path.is_dir() {
        return Err(format!("objcsdk: {v:?} is not a directory"));
    }
    Ok(Some(path))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn off_and_empty_clear_a_missing_path_is_refused() {
        assert_eq!(parse_option_value("off").unwrap(), None);
        assert_eq!(parse_option_value("  ").unwrap(), None);
        assert!(parse_option_value("/definitely/not/here").is_err());
        let here = std::env::temp_dir();
        assert_eq!(
            parse_option_value(here.to_str().unwrap()).unwrap(),
            Some(here)
        );
    }
}
