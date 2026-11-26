//! `--language-file FILE`: a language flavour, a profile in a TOML file that names a base
//! output language and overrides parts of it (`unlace_decomp::langflavour`,
//! `docs/cli.md` "Language files").

use std::path::Path;

use unlace_console::engine::ConsoleProgram;
use unlace_decomp::lang::OutLang;
use unlace_decomp::langflavour::{self, Flavour};
use unlace_decomp::printc::ArchPrintExt;

/// A flavour and the file it was read from.
#[derive(Clone)]
pub(crate) struct LanguageFile {
    /// The path as given; a console script and a `--jobs` worker read the file again from it.
    pub(crate) path: String,
    /// The flavour's name: the file's `name`, else the file stem.
    pub(crate) name: String,
    flavour: &'static Flavour,
}

impl LanguageFile {
    /// Read and validate the flavour file at `path`.
    pub(crate) fn read(path: &str) -> Result<Self, String> {
        let text =
            std::fs::read_to_string(path).map_err(|e| format!("--language-file {path}: {e}"))?;
        let flavour =
            langflavour::load(&text).map_err(|e| format!("--language-file {path}: {e}"))?;
        let name = match flavour.name() {
            Some(name) => name.to_string(),
            None => Path::new(path)
                .file_stem()
                .and_then(|stem| stem.to_str())
                .ok_or_else(|| {
                    format!("--language-file {path}: no file name to take a flavour name from")
                })?
                .to_string(),
        };
        Ok(Self {
            path: path.to_string(),
            name,
            flavour,
        })
    }

    /// The `option setlanguage` name of the base language.
    pub(crate) fn base_name(&self) -> &'static str {
        self.flavour.base().print_name()
    }

    /// The file names its base language, so the command line may not name another: `--language`
    /// is refused, and so is a `setlanguage`/`outlang` option for any other language.
    pub(crate) fn check_selection(
        &self,
        language_flag: bool,
        options: &[(String, String)],
    ) -> Result<(), String> {
        if language_flag {
            return Err(
                "--language does not apply with --language-file: the file names its base language"
                    .into(),
            );
        }
        let other = options
            .iter()
            .filter(|(name, _)| matches!(name.as_str(), "setlanguage" | "outlang"))
            .find(|(_, value)| {
                OutLang::from_print_name(value).is_some_and(|lang| lang != self.flavour.base())
            });
        match other {
            Some((name, value)) => Err(format!(
                "--option {name} {value} does not apply with --language-file {}: its base \
                 language is {}",
                self.path,
                self.base_name()
            )),
            None => Ok(()),
        }
    }

    /// Make the program's printer render the flavour.
    pub(crate) fn install(&self, prog: &mut ConsoleProgram) {
        prog.arch_mut().print_mut().set_flavour(self.flavour);
    }
}
