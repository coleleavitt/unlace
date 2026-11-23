//! The surface language P9 renders into, as the option plane and the passes name it. The
//! per-language policy objects it selects live in `p9_emit/kuna_lang.rs`.

/// The surface language P9 renders the recovered function into.
///
/// `C` is the corpus-pinned default: only its rendering is asserted by
/// `docs/baseline.json`.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Hash)]
pub enum OutLang {
    /// The c-language back-end (`printc.cc`'s successor).
    #[default]
    C,
    /// The rust-language back-end.
    Rust,
    Go,
    /// The java-language back-end (`printjava.cc`'s successor).
    Java,
}

impl OutLang {
    /// Resolve from an `option setlanguage` name, or `None` when the name names
    /// no back-end kuna can emit.
    pub fn from_print_name(name: &str) -> Option<OutLang> {
        match name {
            "c-language" | "c" => Some(OutLang::C),
            "rust-language" | "rust" => Some(OutLang::Rust),
            "go-language" | "go" => Some(OutLang::Go),
            "java-language" | "java" => Some(OutLang::Java),
            _ => None,
        }
    }

    /// Every language kuna can emit, by `option setlanguage` name.
    pub fn names() -> Vec<&'static str> {
        [OutLang::C, OutLang::Rust, OutLang::Go, OutLang::Java]
            .iter()
            .map(|l| l.print_name())
            .collect()
    }

    /// The `option setlanguage` name this language answers to.
    pub fn print_name(self) -> &'static str {
        match self {
            OutLang::C => "c-language",
            OutLang::Rust => "rust-language",
            OutLang::Go => "go-language",
            OutLang::Java => "java-language",
        }
    }
}
