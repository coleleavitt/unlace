//! (unlace `sdktypes`) The SDK root whose C headers the `unlace` CLI
//! preprocesses for a Mach-O's imports.
//!
//! The CLI reads the value from the run's `--option` list before the engine
//! starts and turns the headers into `--types` directives
//! (`unlace-cli/src/sdktypes.rs`); the engine only checks the value. Apple's
//! headers are never vendored: the user names an SDK on disk, and nothing
//! derived from it is written anywhere.

use std::path::PathBuf;

/// Parse an `sdktypes` option value: `off` (and empty) clear it, anything else
/// is the SDK root. A path that names no directory is refused.
pub fn parse_option_value(value: &str) -> Result<Option<PathBuf>, String> {
    let v = value.trim();
    if v.is_empty() || v.eq_ignore_ascii_case("off") {
        return Ok(None);
    }
    let path = PathBuf::from(v);
    if !path.is_dir() {
        return Err(format!("sdktypes: {v:?} is not a directory"));
    }
    Ok(Some(path))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn off_clears_and_a_missing_directory_is_refused() {
        assert_eq!(parse_option_value("off").unwrap(), None);
        assert_eq!(parse_option_value("").unwrap(), None);
        assert!(parse_option_value("/definitely/not/here").is_err());
        let here = std::env::temp_dir();
        assert_eq!(
            parse_option_value(here.to_str().unwrap()).unwrap(),
            Some(here)
        );
    }
}
