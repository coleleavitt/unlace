//! `--assert` — the text syntax of the override plane.
//!
//! # Why this exists
//!
//! `rename`, `retype`, `map param`, `map return`, `map address`,
//! `comment instruction` and `parse line extern` are all functional in the
//! console, and until this flag not one of them was reachable from the `unlace`
//! binary: the generated console script emitted only `option`, `kassert`,
//! `function bounds` and `decompile`.  For an agent that is the difference
//! between reading a decompilation once and actually working through one — a
//! rename it cannot state is a rename it does not have
//! (`docs/re-needs/no-cli-rename-or-prototype-override.md`).
//!
//! # The flag
//!
//! ```text
//!   --assert 'prototype authenticate int authenticate(char *user,char *pass)'
//!   --assert 'type v2 char[16]'
//!   --assert 'name v2 credbuf'
//!   --assert 'readonly 0x404028+8'
//!   --assert 'flow 0x1405 return'
//!   --assert 'callee 0x147a handle_open'
//!   --assert 'callproto 0x13b0 void f(char *fmt, char *s, int a, int b)'
//!   --assert 'volatile 0x50000000+4'
//!   --assert 'bytes 0x43d0c6 8bd581c21f324000'
//!   --assert 'bytes 0x43d0c6 @notes/stage1.bin'
//!   --assert @notes/overrides.unlace
//! ```
//!
//! Repeatable, and `@FILE` holds one directive per line with `#` comments — the
//! `--define-function` file contract verbatim, because that is what makes an
//! override durable across invocations.  unlace does not write assertions back
//! into the image: the file is the artifact, and it is plain text an agent can
//! generate, diff and version.
//!
//! This module owns the SYNTAX only.  The vocabulary, where each directive lands
//! in the pipeline and what "applied" means for it live in
//! [`unlace_console::assertions`], which both the in-process surfaces and the
//! generated console script go through.
//!
//! # Console lowering
//!
//! `unlace decompile`'s text surface drives `decomp_dbg`, so each directive also
//! has to be expressible as console lines ([`ConsoleForm`]).  The two surfaces
//! emit the same facts in the same order; they differ only in whether the engine
//! is reached in-process or through a script.

use unlace_console::assertions::{Body, Directive};
#[cfg(test)]
pub(crate) use unlace_console::assertsyntax::parse_directive as parse_one;
pub(crate) use unlace_console::assertsyntax::parse_directive_flag as parse_flag;

/// The run's directives with the `--types` declarations ahead of the caller's
/// own, so an `--assert` on the same function is applied last and wins, and
/// the `sdktypes` declarations (`Some` when that option is on) ahead of both.
pub(crate) fn with_types(
    types: &[String],
    cpp: Option<&str>,
    sdk: Option<Vec<Directive>>,
    assertions: Vec<Directive>,
) -> Result<Vec<Directive>, String> {
    if types.is_empty() && cpp.is_some() && sdk.is_none() {
        return Err(
            "--types-cpp needs a --types <file.h|dir> or --option sdktypes to preprocess".into(),
        );
    }
    let mut all = sdk.unwrap_or_default();
    if !types.is_empty() {
        all.extend(unlace_console::cheader::load_types(types, cpp)?);
    }
    all.extend(assertions);
    Ok(all)
}

/// Where a directive's console line goes in the generated script.
///
/// The slots are forced, not stylistic: a `readonly` range must precede `read
/// symbols` (the symbols absorb the property as they are mapped), an `option`
/// must precede it too (the analysis commit), a `map param` needs a loaded
/// function, and a `rename` of a local needs a function that has already been
/// decompiled — before that the console answers `No symbol named: v2`, which is
/// exactly the bug that makes today's `--kassert p9 naming-policy` a silent
/// no-op.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub(crate) enum Slot {
    /// After `load file` and the `option` lines, before `read symbols`.  A range
    /// property has to be painted before the symbols over it are mapped: the
    /// mapping folds the property into each `SymbolEntry` and never consults the
    /// range again.
    Image,
    /// After `read symbols`, before `load function`.
    Program,
    /// After `load function`, before the first `decompile`.
    Function,
    /// After the first `decompile` (forcing a second one).
    Symbol,
}

/// One directive rendered for the console script.
#[derive(Debug)]
pub(crate) struct ConsoleForm {
    pub(crate) slot: Slot,
    pub(crate) line: String,
}

/// The function a directive names, when that is NOT the function this run
/// selected.  `target` is `None` for an `--addr` run, where the CLI does not
/// know the selected function's name until the script has run.
fn names_another(func: &Option<String>, target: Option<&str>) -> Option<String> {
    let f = func.as_deref()?;
    match target {
        Some(t) if t == f => None,
        _ => Some(f.to_string()),
    }
}

/// A qualified directive that cannot bind: it names a function this run did not
/// decompile, and its kind (a local, a comment, a flow edge) has no meaning
/// outside the function it belongs to.  Silently applying it to the SELECTED
/// function instead is what made `--assert 'param callee::0 ECX char *maze'`
/// rename the caller's parameters
/// (`docs/re-needs/qualified-parameter-assertions-modify.md`).
fn unbindable(func: &str) -> String {
    format!(
        "names {func}, which this run did not decompile (decompile {func}, or use \
         a directive that crosses functions: prototype, param, return)"
    )
}

/// The console line a directive lowers to, and the script slot it belongs in.
///
/// `target` is the function the run selected.  A `param`/`return` qualified with
/// a DIFFERENT function is a statement about that function's prototype, so it
/// lowers to the cross-function console spelling and moves to the program slot;
/// every other qualified directive that names a function this run does not
/// decompile is rejected rather than applied to the selected one.
pub(crate) fn console_form(d: &Directive, target: Option<&str>) -> Result<ConsoleForm, String> {
    let (slot, line) = match &d.body {
        Body::Function { start, end, name } => {
            let mut line = format!("function bounds {start:#x}");
            if let Some(end) = end {
                line.push_str(&format!(" {end:#x}"));
            }
            if let Some(name) = name {
                line.push_str(&format!(" as {name}"));
            }
            (Slot::Program, line)
        }
        Body::Typedef { decl } => (Slot::Program, format!("parse line {}", semicolon(decl))),
        // `parse line extern <decl>` binds the signature to the name INSIDE the
        // declaration, so a declaration that renames the function landed on a
        // fresh symbol and left the selected one untouched -- silently, since the
        // console reported no error (`docs/re-needs/text-output-silently-ignores.md`).
        // `map prototype` takes the target as its first token, as the in-process
        // surface always has.
        Body::Prototype { func, decl } => (
            Slot::Program,
            format!("map prototype {func} {}", semicolon(decl)),
        ),
        Body::Data { addr, decl } => (Slot::Program, format!("map address {addr:#x} {decl}")),
        Body::Param {
            func,
            index,
            storage,
            decl,
        } => match names_another(func, target) {
            Some(f) => (
                Slot::Program,
                format!("map param {f}::{index} {storage} {decl}"),
            ),
            None => (
                Slot::Function,
                format!("map param {index} {storage} {decl}"),
            ),
        },
        Body::Return {
            func,
            storage,
            decl,
        } => match names_another(func, target) {
            Some(f) => (Slot::Program, format!("map return {f}::{storage} {decl}")),
            None => (Slot::Function, format!("map return {storage} {decl}")),
        },
        Body::Comment { func, addr, text } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (
                Slot::Function,
                format!("comment instruction {addr:#x} {text}"),
            ),
        },
        Body::Flow { func, addr, kind } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (Slot::Function, format!("override flow {addr:#x} {kind}")),
        },
        Body::Callee { func, addr, callee } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (
                Slot::Function,
                format!("override indirect {addr:#x} {callee}"),
            ),
        },
        Body::CallProto { func, addr, decl } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (
                Slot::Function,
                format!("override prototype {addr:#x} {}", semicolon(decl)),
            ),
        },
        Body::Bytes { addr, data } => {
            let hex: String = data.iter().map(|b| format!("{b:02x}")).collect();
            (Slot::Image, format!("override bytes {addr:#x} {hex}"))
        }
        Body::Readonly { addr, size } => (Slot::Image, format!("readonly {addr:#x} {size}")),
        Body::Volatile { addr, size } => (Slot::Image, format!("volatile {addr:#x} {size}")),
        Body::Register {
            name,
            value,
            range: None,
        } => (Slot::Program, format!("set track {name} {value:#x}")),
        Body::Register {
            name,
            value,
            range: Some((addr, size)),
        } => (
            Slot::Program,
            format!(
                "set track {name} {value:#x} {addr:#x} {:#x}",
                addr + *size as u64
            ),
        ),
        Body::Name {
            func,
            symbol,
            newname,
        } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (Slot::Symbol, format!("rename {symbol} {newname}")),
        },
        Body::Type { func, symbol, decl } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (Slot::Symbol, format!("retype {symbol} {decl}")),
        },
        Body::Format {
            func,
            addr,
            format,
            value,
        } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (
                Slot::Symbol,
                unlace_console::constformat::console_line(*addr, format, *value),
            ),
        },
        Body::Isolate { func, symbol } => match names_another(func, target) {
            Some(f) => return Err(unbindable(&f)),
            None => (Slot::Symbol, format!("isolate {symbol}")),
        },
        Body::Split { .. } | Body::Map { .. } | Body::NoProp { .. } => {
            return Err(unlace_console::assertions::unapplied(&d.body));
        }
        Body::NoReturn { func } => (Slot::Program, format!("function noreturn {func}")),
    };
    Ok(ConsoleForm { slot, line })
}

fn semicolon(decl: &str) -> String {
    let decl = decl.trim();
    if decl.ends_with(';') {
        decl.to_string()
    } else {
        format!("{decl};")
    }
}

/// Does any directive need the script's second `decompile`?
pub(crate) fn needs_second_pass(directives: &[Directive], target: Option<&str>) -> bool {
    directives
        .iter()
        .filter_map(|d| console_form(d, target).ok())
        .any(|form| form.slot == Slot::Symbol)
}

#[cfg(test)]
mod tests;
