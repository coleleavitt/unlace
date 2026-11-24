//! (unlace) The `sourcelang` option: the source-language image fact and its
//! per-run override.
//!
//! ## The fact
//!
//! Which language a binary was compiled from is a one-value property of the
//! image, like `image_windows_user`: the loader's detection
//! (`unlace_analysis::sourcelang::detect_compiler`) reports it once at `load
//! file`, and the engine records it as [`SourceLang`] on the `Architecture`
//! ([`crate::Architecture::source_lang`]), copied onto every per-function
//! `ArchContext`. Per-function rules gate on it (`option rustabi auto` acts
//! only on a Rust image; the frame-reload rule stands down on a Go one). The XML
//! `<binaryimage>` bootstrap never runs the analyzer tier, so the fact stays
//! [`SourceLang::Unknown`] on the datatest corpus by construction.
//!
//! ## Why the override is a load-time option, not only an `Architecture` flag
//!
//! Detection does not just set the engine fact — it selects analysis passes
//! (`passes_for(compiler, format)`: the Go pclntab pass, the Rust no-return
//! widening) *inside* `load file`, upstream of every per-function `option`
//! command. An override that should reach pass selection therefore travels on
//! the load options (`LoadOptions::sourcelang`, [`crate::loadoptions`]),
//! read by `unlace_analysis::sourcelang::effective_compiler`; the `unlace` CLI
//! carries it in [`SOURCELANG_ENV`]. The console `option sourcelang` arm still
//! updates the engine fact for the already-loaded program (the per-function
//! rules read the fresh value), and the console exports it so a later
//! `load file` in the same session honours it.
//!
//! Default **auto** (= trust detection); `c`, `rust`, `go` and `swift` force
//! the verdict. A `cpp` value is deliberately absent until something consumes
//! a C-vs-C++ distinction.

/// The source language a binary was compiled from, as recorded on the
/// `Architecture` at `load file`. The engine-plane mirror of the analyzer
/// tier's `Compiler` verdict (toolchain conveniences collapse: Gcc/Clang/MSVC
/// are all [`SourceLang::C`]).
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum SourceLang {
    /// No detection signal (also: every XML-bootstrap datatest).
    #[default]
    Unknown,
    /// A C/C++ toolchain with no more specific language signal.
    C,
    /// rustc.
    Rust,
    /// Go.
    Go,
    /// Swift.
    Swift,
}

impl SourceLang {
    /// `true` for [`SourceLang::Rust`] — what `option rustabi auto` tests.
    #[inline]
    pub fn is_rust(self) -> bool {
        matches!(self, SourceLang::Rust)
    }

    /// `true` for [`SourceLang::Go`].
    #[inline]
    pub fn is_go(self) -> bool {
        matches!(self, SourceLang::Go)
    }

    /// `true` for [`SourceLang::Swift`].
    pub fn is_swift(self) -> bool {
        matches!(self, SourceLang::Swift)
    }

    /// The option-value spelling of this language (the catalog `current` token).
    pub fn as_str(self) -> &'static str {
        match self {
            SourceLang::Unknown => "unknown",
            SourceLang::C => "c",
            SourceLang::Rust => "rust",
            SourceLang::Go => "go",
            SourceLang::Swift => "swift",
        }
    }

    /// Parse a forced-language token (the non-`auto` option values). `None`
    /// for anything else, `auto` included — the caller decides what auto means.
    pub fn parse_forced(token: &str) -> Option<SourceLang> {
        Some(match token.trim().to_ascii_lowercase().as_str() {
            "c" => SourceLang::C,
            "rust" => SourceLang::Rust,
            "go" | "golang" => SourceLang::Go,
            "swift" => SourceLang::Swift,
            _ => return None,
        })
    }
}

/// Environment variable carrying a forced source language into the load path.
/// Unset or `auto` means "trust detection"; `c`/`rust`/`go`/`swift` force the
/// verdict for analysis-pass selection and the engine fact alike.
pub const SOURCELANG_ENV: &str = "UNLACE_SOURCELANG";

/// The forced source language of the load in progress, if any.
pub fn forced() -> Option<SourceLang> {
    crate::loadoptions::scoped(|o| o.sourcelang).unwrap_or_else(crate::loadoptions::env::sourcelang)
}

/// The forced source language in this process's environment, if any. Reads
/// only the environment; a load in progress reads [`forced`].
pub fn forced_from_env() -> Option<SourceLang> {
    crate::loadoptions::env::sourcelang()
}

/// Export a `set_unlace_option("sourcelang", val)` choice to [`SOURCELANG_ENV`]
/// so a later `load file` in the same process sees it (`auto` clears it).
pub fn set_sourcelang_env(forced: Option<SourceLang>) {
    match forced {
        // FIXME: Audit that the environment access only happens in single-threaded code.
        Some(lang) => unsafe { std::env::set_var(SOURCELANG_ENV, lang.as_str()) },
        // FIXME: Audit that the environment access only happens in single-threaded code.
        None => unsafe { std::env::remove_var(SOURCELANG_ENV) },
    }
}

/// Parse a `sourcelang` option value: `auto` (and empty) clear the override,
/// a language token forces it, anything else is refused with the vocabulary.
pub fn parse_option_value(value: &str) -> Result<Option<SourceLang>, String> {
    let token = value.trim().to_ascii_lowercase();
    if token.is_empty() || token == "auto" {
        return Ok(None);
    }
    SourceLang::parse_forced(&token).map(Some).ok_or_else(|| {
        format!("unknown sourcelang value {value:?} (expected auto, c, rust, go or swift)")
    })
}

/// (unlace `sourcelang`) The language a run forces; `None` follows detection (`auto`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct SourceLangForced(pub Option<SourceLang>);

impl crate::optionset::UnlaceOption for SourceLangForced {
    const NAME: &'static str = "sourcelang";
    crate::unlace_option_id!();

    fn unset() -> Self {
        SourceLangForced(None)
    }

    fn shipped() -> Self {
        SourceLangForced(None)
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let forced = parse_option_value(value).map_err(unlace_base::error::UnlaceError::parse)?;
        let msg = match forced {
            Some(lang) => format!("Source language forced to {}", lang.as_str()),
            None => "Source language follows detection (auto)".to_string(),
        };
        Ok((SourceLangForced(forced), msg))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn tokens_round_trip() {
        for lang in [
            SourceLang::C,
            SourceLang::Rust,
            SourceLang::Go,
            SourceLang::Swift,
        ] {
            assert_eq!(SourceLang::parse_forced(lang.as_str()), Some(lang));
        }
        assert_eq!(SourceLang::parse_forced("golang"), Some(SourceLang::Go));
        assert_eq!(SourceLang::parse_forced(" RUST "), Some(SourceLang::Rust));
        // `auto`/`unknown` are not forceable languages.
        assert_eq!(SourceLang::parse_forced("auto"), None);
        assert_eq!(SourceLang::parse_forced("unknown"), None);
        assert_eq!(SourceLang::parse_forced("cpp"), None);
    }

    #[test]
    fn option_values_parse_and_refuse() {
        assert_eq!(parse_option_value("auto"), Ok(None));
        assert_eq!(parse_option_value(""), Ok(None));
        assert_eq!(parse_option_value("go"), Ok(Some(SourceLang::Go)));
        assert!(parse_option_value("fortran").is_err());
    }
}
