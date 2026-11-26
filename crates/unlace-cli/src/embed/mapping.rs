//! The `unlace map` queries over one load, for the embedding crate: a function
//! decompiled with its token map and its variables' storage, and the two
//! directions between its text and its instructions ([`crate::map`]).

use unlace_decomp::funcreport::VarInfo;
use unlace_decomp::srcmap::CodeToken;

use super::{Output, Selector, Session};
use crate::decompile_all::Extra;
use crate::map::{Place, Span, address_spans, live_variables, span_addresses, span_text};

/// One function decompiled as `unlace decompile --json --tokens --storage`
/// decompiles it.
pub struct Mapped {
    /// The decompile; its document carries `tokens` and each variable's `storage`.
    pub output: Output,
    /// Why the function has no token map to answer from, when it has none.
    pub unmapped: Option<String>,
    tokens: Vec<CodeToken>,
    variables: Vec<VarInfo>,
}

/// One piece of storage that holds a variable.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Held {
    /// The address space's name: `register`, `stack`, `ram`, ...
    pub space: String,
    /// The register's name, for a register.
    pub register: Option<String>,
    /// The signed frame offset of a stack piece, else the offset in the space.
    pub offset: i128,
    /// Size in bytes.
    pub size: i64,
}

/// A variable live at an instruction, with the pieces that hold it there.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Live {
    /// The variable's name in the code.
    pub name: String,
    /// Its type, as the variable row spells it.
    pub type_name: String,
    /// The pieces holding it on entry to the instruction.
    pub storage: Vec<Held>,
}

/// `(line, column)`: a 1-based line and a 0-based column in UTF-16 code units.
pub type At = (usize, usize);

impl Session {
    /// Decompile one function with its token map and variable storage.
    pub fn map(&mut self, selector: &Selector) -> Result<Mapped, String> {
        let wanted = Extra {
            tokens: true,
            storage: true,
            ..self.args.extra
        };
        let asked = std::mem::replace(&mut self.args.extra, wanted);
        let ran = self.run(selector);
        self.args.extra = asked;
        let (output, function) = ran?;
        let (tokens, unmapped) = match crate::map::tokens(&function) {
            Ok(tokens) => (tokens.to_vec(), None),
            Err(reason) => (Vec::new(), Some(reason)),
        };
        Ok(Mapped {
            output,
            unmapped,
            tokens,
            variables: function.variables,
        })
    }
}

impl Mapped {
    /// The addresses of the instructions the text from `start` up to, not
    /// including, `end` came from, ascending.
    pub fn addresses(&self, start: At, end: At) -> Vec<u64> {
        let place = |(line, col): At| Place { line, col };
        let span = Span {
            start: place(start),
            end: place(end),
        };
        span_addresses(&self.tokens, &span)
    }

    /// The runs of text that came from the instruction at `address`: each
    /// one's start, its end (not included) and its text.
    pub fn spans(&self, address: u64) -> Vec<(At, At, String)> {
        let code = self.output.code.as_deref().unwrap_or("");
        address_spans(&self.tokens, address)
            .into_iter()
            .map(|span| {
                (
                    (span.start.line, span.start.col),
                    (span.end.line, span.end.col),
                    span_text(code, &span),
                )
            })
            .collect()
    }

    /// The variables a register, stack slot or memory location holds on entry
    /// to the instruction at `address`.
    pub fn live(&self, address: u64) -> Vec<Live> {
        live_variables(&self.variables, address)
            .into_iter()
            .map(|(variable, pieces)| Live {
                name: variable.name.clone(),
                type_name: variable.type_name.clone(),
                storage: pieces
                    .into_iter()
                    .map(|piece| Held {
                        space: piece.space.clone(),
                        register: piece.register.clone(),
                        offset: piece.offset,
                        size: piece.size,
                    })
                    .collect(),
            })
            .collect()
    }
}
