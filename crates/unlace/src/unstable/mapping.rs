//! What a function's text corresponds to in the machine code: the token map
//! of its text, where each variable lives, and the two questions `unlace map`
//! answers (`docs/cli.md`, "unlace map").
//!
//! ```no_run
//! use unlace::Decompiler;
//! use unlace::unstable::mapping::Span;
//!
//! let mut decompiler = Decompiler::open("a.out")?;
//! let main = decompiler.map_named("main")?;
//! // Which instructions did line 7 come from?
//! for address in main.addresses(Span::line(7)) {
//!     // Which text did each of them produce, and what was live there?
//!     for site in main.spans(address) {
//!         println!("{address:#x} {}:{} {}", site.span.start.line, site.span.start.col, site.text);
//!     }
//!     for variable in main.live(address) {
//!         println!("{address:#x} {} is live", variable.name);
//!     }
//! }
//! # Ok::<(), unlace::Error>(())
//! ```

use std::panic::{AssertUnwindSafe, catch_unwind};

use unlace_cli::embed;

use crate::{Decompiled, Decompiler, Error, Result, panic_message};

/// A place in a function's text, in the token map's coordinates.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct Place {
    /// The line, counted from 1.
    pub line: usize,
    /// The column, counted from 0 in UTF-16 code units.
    pub col: usize,
}

/// The text from `start` up to, not including, `end`.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
pub struct Span {
    /// The first place of the span.
    pub start: Place,
    /// The first place after it.
    pub end: Place,
}

impl Span {
    /// The whole of line `line` (counted from 1).
    ///
    /// ```
    /// use unlace::unstable::mapping::Span;
    /// let line = Span::line(7);
    /// assert_eq!((line.start.line, line.end.line), (7, 8));
    /// ```
    pub fn line(line: usize) -> Self {
        Span {
            start: Place { line, col: 0 },
            end: Place {
                line: line + 1,
                col: 0,
            },
        }
    }
}

/// A run of text that came from one instruction.
#[derive(Clone, Debug, PartialEq, Eq)]
#[non_exhaustive]
pub struct Site {
    /// Where the run is; it lies on one line.
    pub span: Span,
    /// Its text.
    pub text: String,
}

/// One piece of storage that holds a variable.
#[derive(Clone, Debug, PartialEq, Eq)]
#[non_exhaustive]
pub struct Held {
    /// The address space's name: `register`, `stack`, `ram`, ...
    pub space: String,
    /// The register's name, for a register.
    pub register: Option<String>,
    /// The signed frame offset of a stack piece (the stack pointer at entry
    /// is 0), else the offset in the space.
    pub offset: i128,
    /// Size in bytes.
    pub size: i64,
}

/// A variable live at an instruction.
#[derive(Clone, Debug, PartialEq, Eq)]
#[non_exhaustive]
pub struct Live {
    /// The variable's name in the text.
    pub name: String,
    /// Its type, as the document's variable row spells it.
    pub type_name: String,
    /// The pieces that hold it on entry to the instruction.
    pub storage: Vec<Held>,
}

/// A function decompiled with its token map and its variables' storage.
///
/// [`Mapped::function`]'s document is the one `unlace decompile --json
/// --tokens --storage` prints: `functions[0].tokens` and each variable's
/// `storage` are in it.
#[non_exhaustive]
pub struct Mapped {
    /// The decompile.
    pub function: Decompiled,
    index: embed::Mapped,
}

impl Mapped {
    /// The addresses of the instructions the tokens touching `span` came
    /// from, ascending.
    pub fn addresses(&self, span: Span) -> Vec<u64> {
        let at = |place: Place| (place.line, place.col);
        self.index.addresses(at(span.start), at(span.end))
    }

    /// The runs of text that came from the instruction at `address`, in text
    /// order.
    pub fn spans(&self, address: u64) -> Vec<Site> {
        let place = |(line, col)| Place { line, col };
        self.index
            .spans(address)
            .into_iter()
            .map(|(start, end, text)| Site {
                span: Span {
                    start: place(start),
                    end: place(end),
                },
                text,
            })
            .collect()
    }

    /// The variables a register, a stack slot or memory holds on entry to the
    /// instruction at `address`.
    pub fn live(&self, address: u64) -> Vec<Live> {
        self.index
            .live(address)
            .into_iter()
            .map(|live| Live {
                name: live.name,
                type_name: live.type_name,
                storage: live
                    .storage
                    .into_iter()
                    .map(|held| Held {
                        space: held.space,
                        register: held.register,
                        offset: held.offset,
                        size: held.size,
                    })
                    .collect(),
            })
            .collect()
    }
}

impl Decompiler {
    /// Add the token map to every document this decompiler returns
    /// (`--tokens`): `functions[0].tokens` and `tokens_error`.
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?.with_tokens();
    /// let main = decompiler.decompile_named("main")?;
    /// assert!(main.json["functions"][0]["tokens"].is_array());
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_tokens(self) -> Self {
        self.change(|request| request.tokens = true)
    }

    /// Add each variable's `storage` to every document this decompiler
    /// returns (`--storage`).
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?.with_storage();
    /// let main = decompiler.decompile_named("main")?;
    /// for variable in main.json["functions"][0]["variables"].as_array().into_iter().flatten() {
    ///     println!("{} {}", variable["name"], variable["storage"]);
    /// }
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_storage(self) -> Self {
        self.change(|request| request.storage = true)
    }

    /// Decompile the function at `address` with its token map and variable
    /// storage, as `unlace map` does, and keep them for the queries of
    /// [`Mapped`]. A function whose token map does not rebuild its text is an
    /// [`Error::Decompile`] saying why.
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// let mapped = decompiler.map(0x401000)?;
    /// println!("{:x?}", mapped.live(0x401000));
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn map(&mut self, address: u64) -> Result<Mapped> {
        self.map_selected(&embed::Selector::Address(address), format!("{address:#x}"))
    }

    /// [`Decompiler::map`] for the function called `name`.
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// let main = decompiler.map_named("main")?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn map_named(&mut self, name: &str) -> Result<Mapped> {
        self.map_selected(&embed::Selector::Name(name.to_string()), name.to_string())
    }

    fn map_selected(&mut self, selector: &embed::Selector, what: String) -> Result<Mapped> {
        let session = self.session()?;
        let index = match catch_unwind(AssertUnwindSafe(|| session.map(selector))) {
            Ok(Ok(index)) => index,
            Ok(Err(reason)) => return Err(Error::NotFound { what, reason }),
            Err(panic) => {
                self.session = None;
                return Err(Error::Panic(panic_message(panic.as_ref())));
            }
        };
        let function = Decompiled::from_output(index.output.clone())?;
        match index.unmapped.clone() {
            Some(reason) => Err(Error::Decompile {
                reason,
                name: function.name,
                address: function.address,
                json: function.json,
            }),
            None => Ok(Mapped { function, index }),
        }
    }
}
