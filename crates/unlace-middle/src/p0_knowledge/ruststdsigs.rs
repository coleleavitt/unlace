//! (kuna `ruststdsigs`) The option gate for Rust standard-library signatures
//! built from an installed rustup toolchain.
//!
//! The FLIRT pass reads its signature files while the image loads, so the
//! choice travels as the process environment variable [`RUSTSTDSIGS_ENV`], set
//! by the CLI before loading and by `option ruststdsigs` for a later `load
//! file` in the same process. The registered [`RustStdSigs`] value exists for
//! the catalog's live `current` field. Default off.

/// Environment variable read by the FLIRT pass.
pub const RUSTSTDSIGS_ENV: &str = "UNLACE_RUSTSTDSIGS";

/// Which installed toolchain the standard-library signatures come from.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum RustStdSigs {
    /// No signatures are built.
    #[default]
    Off,
    /// Only a toolchain whose `rustc version` record equals the image's.
    Exact,
    /// The exact toolchain, else the installed one released nearest to it.
    Nearest,
}

impl RustStdSigs {
    /// Parse an option value; `on` is `exact`.
    pub fn parse(value: &str) -> Option<RustStdSigs> {
        Some(match value.trim().to_ascii_lowercase().as_str() {
            "" | "off" | "0" | "false" => RustStdSigs::Off,
            "exact" | "on" | "1" | "true" => RustStdSigs::Exact,
            "nearest" => RustStdSigs::Nearest,
            _ => return None,
        })
    }

    pub fn as_str(self) -> &'static str {
        match self {
            RustStdSigs::Off => "off",
            RustStdSigs::Exact => "exact",
            RustStdSigs::Nearest => "nearest",
        }
    }
}

/// The choice in force for this process: [`RUSTSTDSIGS_ENV`], off when unset
/// or unreadable.
pub fn ruststdsigs() -> RustStdSigs {
    unlace_base::env::var(RUSTSTDSIGS_ENV)
        .ok()
        .and_then(|v| RustStdSigs::parse(&v))
        .unwrap_or_default()
}

/// Bridge a `set_kuna_option("ruststdsigs", val)` choice to [`RUSTSTDSIGS_ENV`].
pub fn set_ruststdsigs_env(value: RustStdSigs) {
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(RUSTSTDSIGS_ENV, value.as_str()) };
}

impl crate::kuna_optionset::KunaOption for RustStdSigs {
    const NAME: &'static str = "ruststdsigs";
    crate::kuna_option_id!();

    fn unset() -> Self {
        RustStdSigs::Off
    }

    fn shipped() -> Self {
        RustStdSigs::Off
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let mode = RustStdSigs::parse(value).ok_or_else(|| {
            unlace_base::error::KunaError::lowlevel(format!(
                "ruststdsigs must be off|exact|nearest, got `{value}`"
            ))
        })?;
        Ok((
            mode,
            format!("Rust standard-library signatures set to {}", mode.as_str()),
        ))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn values_parse_and_print() {
        for (v, want) in [
            ("off", RustStdSigs::Off),
            ("exact", RustStdSigs::Exact),
            ("on", RustStdSigs::Exact),
            ("Nearest", RustStdSigs::Nearest),
        ] {
            assert_eq!(RustStdSigs::parse(v), Some(want), "{v}");
        }
        assert_eq!(RustStdSigs::parse("closest"), None);
        assert_eq!(RustStdSigs::Nearest.as_str(), "nearest");
    }
}
