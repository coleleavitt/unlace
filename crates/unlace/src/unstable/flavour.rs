//! Language flavours: print through an output-language profile read from a TOML file.
//!
//! A flavour file names a base language (`c`, `rust`, `go`, `java`) and overrides parts of
//! its profile: keyword and operator spellings, forms and capabilities. `docs/cli.md`
//! ("Language files") describes the format and lists the fields each base language takes.

use std::path::Path;

use unlace_cli::embed;

use crate::{Decompiler, Error, Result, utf8};

impl Decompiler {
    /// Print through the language flavour in the TOML file at `path`
    /// (`--language-file`). The file is read and checked now: an unknown field, a value
    /// its field does not take, or an override the base language's printer cannot honour
    /// is an [`Error::Request`] that names the field. The engine reads the file again at
    /// each load.
    ///
    /// The file names its base language, so [`with_language`](Decompiler::with_language)
    /// does not apply with it: the load refuses the pair.
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_language_file("pseudo.toml")?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_language_file(self, path: impl AsRef<Path>) -> Result<Self> {
        let path = path.as_ref();
        let text = std::fs::read_to_string(path).map_err(|source| Error::Io {
            path: path.to_path_buf(),
            source,
        })?;
        embed::check_language_file(&text)
            .map_err(|problem| Error::Request(format!("{}: {problem}", path.display())))?;
        let path = utf8(path)?;
        Ok(self.change(|request| request.language_file = Some(path)))
    }
}
