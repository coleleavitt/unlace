//! Port of `decompiler/cpp/interface.{hh,cc}` (W9) — the generic command-line
//! interface framework that the decompiler console (`decomp_dbg`) and the XML
//! datatest runner (`decomp_test_dbg`) are built on.
//!
//! # What is ported
//!
//! - [`IfaceError`] / [`IfaceParseError`] / [`IfaceExecutionError`]: the
//!   interface exception hierarchy.  These are **not** part of
//!   [`unlace_base::error::UnlaceError`] (`LowlevelError` and friends) — in C++
//!   `IfaceError` is its own standalone `struct` (`interface.hh`), with
//!   `IfaceParseError` and `IfaceExecutionError` deriving from it.  A console
//!   command-dispatch frame catches `IfaceError` broadly, which catches both
//!   subclasses but *not* a `LowlevelError`.  We model the hierarchy with a
//!   single [`IfaceError`] struct carrying an [`IfaceErrorKind`] tag so the
//!   "is this a parse error / execution error / plain interface error"
//!   distinction the dispatcher needs is preserved.  (ADR 0004: the catch
//!   placement, not just the message, must match.)
//!
//! - [`CommandStream`]: a faithful re-implementation of the
//!   `std::istringstream` token extraction (`>> ws`, `>> std::string`,
//!   `eof()`, `get(char)`) that `expandCom` and every command's `execute`
//!   read their parameters from.  The exact whitespace/eof contract is what
//!   the prefix-resolution logic and the datatest stringmatching depend on.
//!
//! - [`IfaceCommand`]: a registered command = the ordered token sequence
//!   (`com`) plus a boxed [`IfaceCommandAction`].  The token-sequence methods
//!   (`compare`, `command_string`, `add_word`, ...) live on the struct; the
//!   behavior (`execute`, `module`, `create_data`) lives on the trait so the
//!   decompiler-specific commands (ported in other W9 modules) plug in without
//!   touching this framework.  [`IfaceCommandDummy`] is a command with a no-op
//!   action, used only as a search key during prefix resolution
//!   (`restrictCom`), exactly as in C++.
//!
//! - [`IfaceStatus`]: the console executor.  The C++ class is abstract — the
//!   only virtuals that differ between `IfaceTerm` (interactive/batch) and
//!   `ConsoleCommands` (datatest feed) concern **where command lines and the
//!   input-stream stack come from**.  We factor that single axis into the
//!   [`LineSource`] trait, held inside one concrete `IfaceStatus`, so the
//!   shared base logic (history, the command registry + sort, `runCommand`,
//!   `expandCom`/`restrictCom`, error evaluation, the script prompt/flag
//!   stack) is ported once.  `IfaceTerm` and `ConsoleCommands` are then just
//!   two `LineSource` implementations (see `ifaceterm.rs`).
//!
//! - [`IfcQuit`], [`IfcHistory`], [`IfcOpenfile`], [`IfcOpenfileAppend`],
//!   [`IfcClosefile`], [`IfcEcho`]: the six concrete commands of the "base"
//!   module (C++ `IfaceBaseCommand` subclasses, `interface.cc:518-622`).  They
//!   are part of `interface.cc` so they are ported here; the decompiler console
//!   registers them (`ifacedecomp.cc` `registerCommands`), which is ported in
//!   `w9-con-ifacedecomp`.  `IfcOpenfile`/`IfcClosefile` are the bulk-output
//!   redirect the Python harness drives to capture `print C` (CLAUDE.md);
//!   `IfcQuit` sets [`IfaceStatus::done`] to drop out of `mainloop`.  The C++
//!   abstract base's `getModule()=="base"`/`createData()==null` is supplied by
//!   the private [`BaseModule`] marker each command embeds.
//!
//! Where C++ stores a back-pointer to `IfaceStatus` in each command (set by
//! `setData`) and mutates it from `execute`, the port passes `&mut
//! IfaceStatus` to [`IfaceCommandAction::execute`] explicitly — the faithful
//! Rust shape for "the command acts on the owning status".
//!
//! `consolemain.cc`'s `main()` (argument parsing, `startDecompilerLibrary`,
//! registering the console-only `load file`/`addpath`/`save`/`restore`
//! commands, the init-script push, the top-level `IfaceError` catch) is
//! deferred to the `decomp_dbg` binary; its structure is mirrored there.
//!
//! ## Documented losses
//!
//! - The `__REMOTE_SOCKET__` `RemoteSocket` class (a build-flag-gated UNIX
//!   domain socket transport, off in every unlace build) is not ported.
//! - The interactive readline path (`IfaceTerm::readLine`'s key-by-key line
//!   editing, history scroll, TAB completion) is a documented loss; the
//!   non-interactive batch path that the datatests drive is ported faithfully.
//!   See `ifaceterm.rs`.

use std::cmp::Ordering;
use std::collections::BTreeMap;
use std::fmt;
use unlace_base::types::int4;

// ---------------------------------------------------------------------------
// Interface exception hierarchy (interface.hh).
// ---------------------------------------------------------------------------

/// Which interface exception this is — mirrors the C++ class hierarchy
/// (`IfaceError` base, `IfaceParseError`/`IfaceExecutionError` derived).
///
/// A C++ `catch (IfaceError &)` frame catches all three; the dispatcher in
/// `ifacedecomp.cc` distinguishes them only by message prefix, so the kind is
/// kept available for that frame.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum IfaceErrorKind {
    /// Plain `IfaceError` — a generic interface error.
    Base,
    /// `IfaceParseError` — options missing or in the wrong form on the
    /// command line.
    Parse,
    /// `IfaceExecutionError` — a command started but reached an error state.
    Execution,
}

/// C++ `IfaceError` and its subclasses (`interface.hh`).
///
/// `Display` renders the bare `explain` string, like reading the C++ member;
/// frame-specific prefixes are added where they print.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct IfaceError {
    /// C++ field `explain`: the explanatory string.
    pub explain: String,
    /// Which member of the hierarchy this is.
    pub kind: IfaceErrorKind,
}

impl IfaceError {
    /// `throw IfaceError(s)`
    pub fn base(s: impl Into<String>) -> Self {
        IfaceError {
            explain: s.into(),
            kind: IfaceErrorKind::Base,
        }
    }

    /// `throw IfaceParseError(s)`
    pub fn parse(s: impl Into<String>) -> Self {
        IfaceError {
            explain: s.into(),
            kind: IfaceErrorKind::Parse,
        }
    }

    /// `throw IfaceExecutionError(s)`
    pub fn execution(s: impl Into<String>) -> Self {
        IfaceError {
            explain: s.into(),
            kind: IfaceErrorKind::Execution,
        }
    }

    /// Would a C++ `catch (IfaceParseError &)` frame catch this?
    pub fn is_parse(&self) -> bool {
        matches!(self.kind, IfaceErrorKind::Parse)
    }

    /// Would a C++ `catch (IfaceExecutionError &)` frame catch this?
    pub fn is_execution(&self) -> bool {
        matches!(self.kind, IfaceErrorKind::Execution)
    }
}

impl fmt::Display for IfaceError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(&self.explain)
    }
}

impl std::error::Error for IfaceError {}

/// Result alias for fallible interface operations.
pub type IfaceResult<T> = Result<T, IfaceError>;

// ---------------------------------------------------------------------------
// CommandStream — faithful std::istringstream token extraction.
// ---------------------------------------------------------------------------

/// A re-implementation of the `std::istringstream` reading surface used by the
/// console: `s >> ws`, `s >> std::string`, `s.eof()`, `s.get(char)`.
///
/// The whitespace/eof contract is transcribed from C++ `operator>>`:
///
/// - [`skip_ws`](CommandStream::skip_ws) (`>> ws`) consumes leading
///   whitespace; if that reaches end-of-input the eof flag is set.
/// - [`read_token`](CommandStream::read_token) (`>> std::string`) first skips
///   leading whitespace, then reads one run of non-whitespace characters.  If
///   the read reaches end-of-input *while consuming the token* (the token runs
///   to the end of the buffer), the eof flag is set — but if non-whitespace is
///   followed by more whitespace, eof is **not** set until that whitespace is
///   consumed.  An extraction that finds only whitespace/end produces an empty
///   token and sets eof (the `fail` case in C++).
/// - [`eof`](CommandStream::eof) reports the latched eof flag, exactly like the
///   stream's `eofbit`.
///
/// [`read_filename`](CommandStream::read_filename) is the one unlace addition: C++
/// reads every path with `s >> filename`, which silently splits a path on its
/// spaces. It layers an optional double-quoted form over `read_token` and is
/// byte-identical to it for unquoted input.
///
/// Whitespace is the C++ default `std::isspace` set restricted to ASCII
/// (` \t\n\r\x0b\x0c`), matching [`char::is_ascii_whitespace`].
#[derive(Debug, Clone)]
pub struct CommandStream {
    buf: Vec<u8>,
    pos: usize,
    eof: bool,
}

impl CommandStream {
    /// Construct a stream over the given command line (C++
    /// `istringstream is(line)`).
    pub fn new(line: &str) -> Self {
        CommandStream {
            buf: line.as_bytes().to_vec(),
            pos: 0,
            eof: false,
        }
    }

    #[inline]
    fn is_ws(c: u8) -> bool {
        // C++ default-locale isspace over ASCII.
        c == b' ' || c == b'\t' || c == b'\n' || c == b'\r' || c == 0x0b || c == 0x0c
    }

    /// `s.eof()` — has a read reached end-of-stream?
    pub fn eof(&self) -> bool {
        self.eof
    }

    /// `s >> ws` — skip leading whitespace, latching eof if the end is reached.
    ///
    /// Returns a `&mut Self` so calls chain like the C++ `s >> ws` expression.
    pub fn skip_ws(&mut self) -> &mut Self {
        while self.pos < self.buf.len() && Self::is_ws(self.buf[self.pos]) {
            self.pos += 1;
        }
        if self.pos >= self.buf.len() {
            self.eof = true;
        }
        self
    }

    /// `s >> tok` for a `std::string` token.
    ///
    /// Returns the extracted token.  On a failed extraction (only whitespace
    /// remained) the token is empty and eof is set, mirroring C++ where the
    /// target string is left unchanged on failure — callers in the ported code
    /// always either guard on `eof()` first or treat an empty token as "no
    /// further input", so an empty return is the faithful failure signal.
    pub fn read_token(&mut self) -> String {
        // Skip leading whitespace.
        while self.pos < self.buf.len() && Self::is_ws(self.buf[self.pos]) {
            self.pos += 1;
        }
        if self.pos >= self.buf.len() {
            // Nothing to extract: extraction fails, eofbit set.
            self.eof = true;
            return String::new();
        }
        let start = self.pos;
        while self.pos < self.buf.len() && !Self::is_ws(self.buf[self.pos]) {
            self.pos += 1;
        }
        // If the token ran to the end of the buffer, the extraction hit EOF.
        if self.pos >= self.buf.len() {
            self.eof = true;
        }
        // The slice is non-whitespace ASCII-or-UTF8 bytes copied verbatim.
        String::from_utf8_lossy(&self.buf[start..self.pos]).into_owned()
    }

    /// Read a **filename** argument: one whitespace-delimited token, or a
    /// double-quoted string when the argument opens with `"`.
    ///
    /// C++ reads every path with `s >> filename`, so a path containing a space
    /// splits into two arguments and the command loads the wrong file (or, for
    /// `openfile`, writes to a truncated path). The console's own grammar is the
    /// only place that can fix it: quoting at the caller cannot help a reader
    /// that has no quote rule.
    ///
    /// Unquoted input is byte-identical to [`read_token`](CommandStream::read_token)
    /// — the vendored corpus, every generated script and every hand-typed line
    /// without a quote parse exactly as before. Inside quotes, `\"` and `\\`
    /// are escapes; every other backslash is literal, so a Windows path survives
    /// whether or not its separators were doubled. An unterminated quote
    /// consumes the rest of the line (its own diagnostic would have to invent a
    /// grammar error the C++ console has no wording for).
    pub fn read_filename(&mut self) -> String {
        while self.pos < self.buf.len() && Self::is_ws(self.buf[self.pos]) {
            self.pos += 1;
        }
        if self.pos >= self.buf.len() {
            self.eof = true;
            return String::new();
        }
        if self.buf[self.pos] != b'"' {
            return self.read_token();
        }
        self.pos += 1;
        // The unescaped result is never longer than what remains.
        let mut out: Vec<u8> = Vec::with_capacity(self.buf.len() - self.pos);
        while self.pos < self.buf.len() {
            let c = self.buf[self.pos];
            self.pos += 1;
            match c {
                b'"' => {
                    if self.pos >= self.buf.len() {
                        self.eof = true;
                    }
                    return String::from_utf8_lossy(&out).into_owned();
                }
                b'\\' if matches!(self.buf.get(self.pos), Some(b'"') | Some(b'\\')) => {
                    out.push(self.buf[self.pos]);
                    self.pos += 1;
                }
                _ => out.push(c),
            }
        }
        self.eof = true;
        String::from_utf8_lossy(&out).into_owned()
    }

    /// `s.get(c)` — read one raw character (no whitespace skipping).
    ///
    /// Returns `None` and latches eof at end-of-stream, like C++ where `get`
    /// returns the stream in a failed/eof state.
    pub fn get(&mut self) -> Option<u8> {
        if self.pos >= self.buf.len() {
            self.eof = true;
            return None;
        }
        let c = self.buf[self.pos];
        self.pos += 1;
        Some(c)
    }

    /// `s >> num` for an `int4` (C++ `operator>>(int4&)`).
    ///
    /// Mirrors `std::istream::operator>>` for a signed decimal integer: skip
    /// leading whitespace, read an optional `+`/`-` sign followed by one or
    /// more decimal digits.  On a **failed** extraction (no digits) C++11 sets
    /// the target to `0` and latches failbit; the only caller (`IfcHistory`)
    /// guards `!eof()` before reading and re-checks `!eof()` after, so the
    /// faithful failure signal here is `num = 0` plus the latched eof from the
    /// surrounding `>> ws`.  As in the stream, eof is latched only when the
    /// digit run reaches the physical end of the buffer.
    pub fn read_int(&mut self) -> int4 {
        // Skip leading whitespace.
        while self.pos < self.buf.len() && Self::is_ws(self.buf[self.pos]) {
            self.pos += 1;
        }
        if self.pos >= self.buf.len() {
            self.eof = true;
            return 0;
        }
        let start = self.pos;
        // Optional leading sign.
        if self.buf[self.pos] == b'+' || self.buf[self.pos] == b'-' {
            self.pos += 1;
        }
        let digits_start = self.pos;
        while self.pos < self.buf.len() && self.buf[self.pos].is_ascii_digit() {
            self.pos += 1;
        }
        if self.pos == digits_start {
            // No digits read: extraction fails (failbit), value left 0.  Rewind
            // the sign we tentatively consumed so a later read sees it, matching
            // the stream leaving the get-pointer at the offending character.
            self.pos = start;
            return 0;
        }
        // If the number ran to the end of the buffer, the extraction hit EOF.
        if self.pos >= self.buf.len() {
            self.eof = true;
        }
        // The slice is ASCII sign+digits; parse into int4 (C++ wraps/saturates
        // the same input the same way for the small history counts in scope).
        std::str::from_utf8(&self.buf[start..self.pos])
            .ok()
            .and_then(|s| s.parse::<int4>().ok())
            .unwrap_or(0)
    }

    /// The remaining un-consumed bytes as a string (used by commands that read
    /// "the rest of the line", e.g. `echo`).
    pub fn rest(&self) -> String {
        String::from_utf8_lossy(&self.buf[self.pos..]).into_owned()
    }

    /// `s.peek()` — look at the next character without consuming it.  Returns
    /// `None` at end-of-stream (C++ `peek()` returns `EOF`).  Does **not** latch
    /// eof (C++ `peek` only sets eofbit on an actual failed extraction; the
    /// address grammar peeks first then extracts).
    pub fn peek(&self) -> Option<u8> {
        self.buf.get(self.pos).copied()
    }

    /// C++ `parse_toseparator(istream&,string&)` (`grammar.cc:3039`): scan to the
    /// next C separator, collecting `[A-Za-z0-9_]` after skipping leading
    /// whitespace.  Used by the `[space,offset,size]` address grammar.
    pub fn read_to_separator(&mut self) -> String {
        while self.pos < self.buf.len() && Self::is_ws(self.buf[self.pos]) {
            self.pos += 1;
        }
        let start = self.pos;
        while self.pos < self.buf.len() {
            let c = self.buf[self.pos];
            if c.is_ascii_alphanumeric() || c == b'_' {
                self.pos += 1;
            } else {
                break;
            }
        }
        String::from_utf8_lossy(&self.buf[start..self.pos]).into_owned()
    }
}

// ---------------------------------------------------------------------------
// IfaceCommand / IfaceCommandAction.
// ---------------------------------------------------------------------------

/// The behavior half of a console command (C++ `IfaceCommand`'s pure
/// virtuals).
///
/// The decompiler-specific commands implement this in other W9 modules; the
/// framework here only needs `module()`/`create_data()` at registration time
/// and `execute()` at dispatch.  Where C++ stashes the owning `IfaceStatus`
/// pointer via `setData`, the port hands `status` to `execute` directly.
pub trait IfaceCommandAction {
    /// C++ `execute(istream &s)`: run the command, reading any remaining
    /// parameters from `s` and acting on `status`.
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()>;

    /// C++ `getModule()`: the formal module name whose [`IfaceData`] this
    /// command shares.
    fn module(&self) -> String;

    /// C++ `createData()`: create this module's shared data object (called once
    /// per module).  `None` mirrors the common `return (IfaceData *)0`.
    fn create_data(&self) -> Option<Box<dyn IfaceData>> {
        None
    }
}

/// C++ `IfaceData`: the root of module-shared command data.
///
/// A marker trait; concrete module data (ported elsewhere) implements it and
/// downcasts via [`std::any::Any`].
pub trait IfaceData: std::any::Any {
    /// Upcast to [`std::any::Any`] for downcasting to the concrete module data.
    fn as_any(&self) -> &dyn std::any::Any;
    /// Mutable upcast to [`std::any::Any`].
    fn as_any_mut(&mut self) -> &mut dyn std::any::Any;
}

/// A no-op action used by [`IfaceCommandDummy`] and by comment commands.
///
/// `module()` returns `"dummy"`, matching C++ `IfaceCommandDummy::getModule`.
struct DummyAction;

impl IfaceCommandAction for DummyAction {
    fn execute(&self, _status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        Ok(())
    }
    fn module(&self) -> String {
        "dummy".to_string()
    }
}

/// C++ `IfaceCommand`: a command = its ordered token sequence (`com`) plus the
/// behavior.
///
/// Ordering and prefix matching operate on `com` alone, so the behavior is
/// boxed behind [`IfaceCommandAction`] and never participates in comparison.
pub struct IfaceCommand {
    /// C++ `com`: the token sequence the command line must start with.
    com: Vec<String>,
    /// The behavior (the C++ virtuals).
    action: Box<dyn IfaceCommandAction>,
}

impl IfaceCommand {
    /// Build a command from its behavior; words are added with
    /// [`add_word`](IfaceCommand::add_word) (as `registerCom` does).
    pub fn new(action: Box<dyn IfaceCommandAction>) -> Self {
        IfaceCommand {
            com: Vec::new(),
            action,
        }
    }

    /// C++ `addWord`: append a token to the command-line string.
    pub fn add_word(&mut self, temp: &str) {
        self.com.push(temp.to_string());
    }

    /// C++ `removeWord`: drop the last token.
    pub fn remove_word(&mut self) {
        self.com.pop();
    }

    /// C++ `getCommandWord(i)`: the i-th token.
    pub fn command_word(&self, i: usize) -> &str {
        &self.com[i]
    }

    /// C++ `addWords`: append a list of tokens.
    pub fn add_words(&mut self, wordlist: &[String]) {
        for w in wordlist {
            self.com.push(w.clone());
        }
    }

    /// C++ `numWords`: the number of tokens.
    pub fn num_words(&self) -> int4 {
        self.com.len() as int4
    }

    /// C++ `commandString`: the whole command line, tokens space-separated.
    pub fn command_string(&self) -> String {
        words_to_string(&self.com)
    }

    /// C++ `compare`: order two commands lexicographically by their token
    /// sequences (token-by-token `std::string::compare`, then length).
    ///
    /// Returns -1, 0, 1 like the C++ `int4` result; mapped to [`Ordering`] by
    /// [`cmp`](IfaceCommand::cmp).
    pub fn compare(&self, op2: &IfaceCommand) -> int4 {
        let mut i1 = self.com.iter();
        let mut i2 = op2.com.iter();
        loop {
            match (i1.next(), i2.next()) {
                (None, None) => return 0,
                (None, Some(_)) => return -1, // this is less
                (Some(_), None) => return 1,
                (Some(a), Some(b)) => {
                    let res = str_compare(a, b);
                    if res != 0 {
                        return res;
                    }
                }
            }
        }
    }

    /// The module name this command belongs to.
    pub fn module(&self) -> String {
        self.action.module()
    }
}

/// C++ `IfaceCommandDummy`: a command with no behavior, used purely as a sort
/// key during prefix resolution.
pub struct IfaceCommandDummy;

impl IfaceCommandDummy {
    /// Create the dummy with the given partial token list (C++ `dummy;
    /// dummy.addWords(input)`).
    fn with_words(words: &[String]) -> IfaceCommand {
        let mut c = IfaceCommand::new(Box::new(DummyAction));
        c.add_words(words);
        c
    }
}

/// C++ `compare_ifacecommand(a, b)`: `0 > a->compare(*b)`.
fn compare_ifacecommand(a: &IfaceCommand, b: &IfaceCommand) -> bool {
    a.compare(b) < 0
}

/// `std::string::compare` semantics returning -1/0/1 (the sign is all C++
/// uses).  C++ `string::compare` compares by `char` (unsigned-byte ordering),
/// which is exactly `[u8]` comparison.
fn str_compare(a: &str, b: &str) -> int4 {
    match a.as_bytes().cmp(b.as_bytes()) {
        Ordering::Less => -1,
        Ordering::Equal => 0,
        Ordering::Greater => 1,
    }
}

/// C++ `IfaceStatus::wordsToString` / `IfaceCommand::commandString`:
/// space-separated concatenation of tokens.
pub fn words_to_string(list: &[String]) -> String {
    let mut res = String::new();
    for (i, w) in list.iter().enumerate() {
        if i != 0 {
            res.push(' ');
        }
        res.push_str(w);
    }
    res
}

/// C++ `maxmatch`: set `res` to the maximal common prefix of `op1` and `op2`.
///
/// Returns `(common_prefix, true)` if one string is a prefix of the other up
/// to the shorter length (every compared char matched), or
/// `(common_prefix_so_far, false)` at the first mismatch.  Comparison is
/// byte-wise, matching C++ `op1[i] == op2[i]` on `char`.
fn maxmatch(op1: &str, op2: &str) -> (String, bool) {
    let a = op1.as_bytes();
    let b = op2.as_bytes();
    let len = a.len().min(b.len());
    let mut res = String::new();
    for i in 0..len {
        if a[i] == b[i] {
            res.push(a[i] as char);
        } else {
            return (res, false);
        }
    }
    (res, true)
}

// ---------------------------------------------------------------------------
// IfaceBaseCommand and the "base" module commands (interface.hh:261-298,
// interface.cc:518-622).
// ---------------------------------------------------------------------------

/// C++ `IfaceBaseCommand` (`interface.hh:261`): the root of the "base" module
/// commands — those useful as part of any interface.
///
/// In C++ this is an abstract class supplying `getModule()=="base"`,
/// `createData()==null`, and the `setData` that stashes the owning
/// `IfaceStatus*`.  The port hands `&mut IfaceStatus` to each
/// [`IfaceCommandAction::execute`] directly (see the trait docs), so there is
/// no stored back-pointer; the shared "base" `module()` is provided by the
/// [`BaseModule`] marker each concrete command embeds, keeping every
/// `Ifc*::module()` byte-equal to C++ `getModule()` without repetition.
///
/// These six commands are registered by the decompiler console
/// (`ifacedecomp.cc` `IfaceDecompCapability::registerCommands` lines 40-45),
/// which is ported in `w9-con-ifacedecomp`; they are defined here because they
/// are part of `interface.cc`, the module this item owns.
struct BaseModule;

impl BaseModule {
    /// C++ `IfaceBaseCommand::getModule(void) const { return "base"; }`.
    #[inline]
    fn module() -> String {
        "base".to_string()
    }
}

/// C++ `IfcQuit` (`interface.cc:520`): terminate processing from the interface.
pub struct IfcQuit;

impl IfaceCommandAction for IfcQuit {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        // Generic quit call back
        if !s.eof() {
            return Err(IfaceError::parse("Too many parameters to quit"));
        }
        status.done = true; // Set flag to drop out of mainloop
        Ok(())
    }
    fn module(&self) -> String {
        BaseModule::module()
    }
}

/// C++ `IfcHistory` (`interface.cc:531`): list the most recent successful
/// command lines, oldest to newest.
pub struct IfcHistory;

impl IfaceCommandAction for IfcHistory {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        // List most recent command lines
        let mut num: int4;
        let mut historyline = String::new();

        if !s.eof() {
            num = s.read_int();
            s.skip_ws();
            if !s.eof() {
                return Err(IfaceError::parse("Too many parameters to history"));
            }
        } else {
            num = 10; // Default number of history lines
        }

        if num > status.history_size() {
            num = status.history_size();
        }

        let mut i = num - 1;
        while i >= 0 {
            // List oldest to newest
            status.get_history(&mut historyline, i);
            status.out(&historyline);
            status.out("\n");
            i -= 1;
        }
        Ok(())
    }
    fn module(&self) -> String {
        BaseModule::module()
    }
}

/// C++ `IfcOpenfile` (`interface.cc:556`): redirect bulk output to a file
/// (truncating).
pub struct IfcOpenfile;

impl IfaceCommandAction for IfcOpenfile {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        if status.is_file_open() {
            return Err(IfaceError::execution("Output file already opened"));
        }
        let filename = s.read_filename();
        if filename.is_empty() {
            return Err(IfaceError::parse("No filename specified"));
        }
        status.open_file_redirect(&filename, false);
        Ok(())
    }
    fn module(&self) -> String {
        BaseModule::module()
    }
}

/// C++ `IfcOpenfileAppend` (`interface.cc:578`): redirect bulk output to a
/// file for appending (`ios_base::app`).
pub struct IfcOpenfileAppend;

impl IfaceCommandAction for IfcOpenfileAppend {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        if status.is_file_open() {
            return Err(IfaceError::execution("Output file already opened"));
        }
        let filename = s.read_filename();
        if filename.is_empty() {
            return Err(IfaceError::parse("No filename specified"));
        }
        status.open_file_redirect(&filename, true); // Open for appending
        Ok(())
    }
    fn module(&self) -> String {
        BaseModule::module()
    }
}

/// C++ `IfcClosefile` (`interface.cc:602`): close the current bulk-output file,
/// redirecting subsequent bulk output back to the interface output stream.
pub struct IfcClosefile;

impl IfaceCommandAction for IfcClosefile {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        if !status.is_file_open() {
            return Err(IfaceError::execution("No file open"));
        }
        status.close_file_redirect();
        Ok(())
    }
    fn module(&self) -> String {
        BaseModule::module()
    }
}

/// C++ `IfcEcho` (`interface.cc:614`): echo the rest of the command line to the
/// bulk-output stream, followed by a newline.
pub struct IfcEcho;

impl IfaceCommandAction for IfcEcho {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        // Echo command line to fileoptr
        status.file_out(&s.rest());
        status.file_out("\n");
        Ok(())
    }
    fn module(&self) -> String {
        BaseModule::module()
    }
}

// ---------------------------------------------------------------------------
// LineSource — the per-derivation input behavior (IfaceTerm vs ConsoleCommands).
// ---------------------------------------------------------------------------

/// The input behavior that distinguishes the concrete consoles.
///
/// C++ makes `readLine`, `pushScript(istream*, ...)`, `popScript`, and
/// `isStreamFinished` virtual.  Those all turn on **where command lines and
/// the nested input streams come from**, which is exactly what a `LineSource`
/// owns.  The history, registry, error-evaluation, and prompt/flag-stack logic
/// is identical across derivations and lives on [`IfaceStatus`].
///
/// `read_line` is handed the owning [`IfaceStatus`] (the source is detached for
/// the call, mirroring C++ inheritance where `IfaceTerm::readLine` reaches the
/// `IfaceStatus` members directly) so the interactive `IfaceTerm` path can echo
/// to `optr`, scroll `history`, and complete against the command registry.  The
/// batch sources ignore it.
pub trait LineSource {
    /// C++ `readLine(string &line)`: read the next command line.  An empty
    /// string signals "no command" (blank line / exhausted feed).  `status` is
    /// the owning console (with the source temporarily detached).
    fn read_line(&mut self, status: &mut IfaceStatus) -> String;

    /// C++ `pushScript(istream *iptr, ...)`'s input-stream half: push a new
    /// input source (file contents already read into `lines`).  The script
    /// prompt/flag bookkeeping is done by [`IfaceStatus::push_script_lines`].
    fn push_input(&mut self, lines: Vec<String>);

    /// C++ `popScript`'s input-stream half: pop back to the parent input
    /// source.
    fn pop_input(&mut self);

    /// C++ `isStreamFinished`'s stream half: is the *current* input source
    /// exhausted?  `IfaceStatus` combines this with `done`/`inerror`.
    fn current_stream_finished(&self) -> bool;
}

/// A placeholder [`LineSource`] installed while the real one is detached for a
/// `read_line` call (so the borrow checker permits `&mut IfaceStatus`).
struct DetachedSource;
impl LineSource for DetachedSource {
    fn read_line(&mut self, _status: &mut IfaceStatus) -> String {
        String::new()
    }
    fn push_input(&mut self, _lines: Vec<String>) {}
    fn pop_input(&mut self) {}
    fn current_stream_finished(&self) -> bool {
        true
    }
}

// ---------------------------------------------------------------------------
// IfaceStatus — the console executor (the non-abstract base logic).
// ---------------------------------------------------------------------------

/// C++ `IfaceStatus`: a generic console-mode interface and command executor.
///
/// One concrete struct hosts all the base behavior; the input behavior is the
/// boxed [`LineSource`].  Command output text is accumulated into [`optr`]
/// (the command-line output stream) and bulk output into [`fileoptr`], which
/// the `openfile`/`closefile` commands retarget.  Both are kept as in-memory
/// buffers here; the binary wires them to real stdout/files.
pub struct IfaceStatus {
    /// C++ `promptstack`: prompts saved per script-nesting level.
    promptstack: Vec<String>,
    /// C++ `flagstack`: errorisdone flag saved per nesting level.
    flagstack: Vec<u32>,
    /// C++ `prompt`: the current command prompt.
    prompt: String,
    /// C++ `maxhistory`.
    maxhistory: int4,
    /// C++ `curhistory`.
    curhistory: int4,
    /// C++ `history`: circular buffer of executed command lines.
    history: Vec<String>,
    /// C++ `sorted`: are the registered commands currently sorted?
    sorted: bool,
    /// C++ `errorisdone`: does any error terminate the process?
    errorisdone: bool,

    /// C++ `inerror`: did the last command fail?
    pub inerror: bool,
    /// C++ `comlist`: the registered commands.
    comlist: Vec<IfaceCommand>,
    /// C++ `datamap`: per-module shared data (BTreeMap per ADR 0002).
    datamap: BTreeMap<String, Option<Box<dyn IfaceData>>>,

    /// C++ `done`: set by a command to stop the main loop.
    pub done: bool,
    /// C++ `optr`: command-line output, captured in this buffer.
    pub optr: String,
    /// C++ `fileoptr`: bulk output target.  `None` means "same as optr"
    /// (the C++ default `fileoptr = optr`); `Some` is an open redirect.
    pub fileoptr: Option<FileOut>,

    /// The input behavior (C++ virtual `readLine`/`pushScript`/...).
    source: Box<dyn LineSource>,

    /// (unlace) How many commands this session has dispatched, incremented just
    /// before each `execute`.  A command that wants to know whether it runs
    /// *immediately* after another one compares stamps: `load function` records
    /// this counter and `decompile` adopts its already-followed IR only when the
    /// counter advanced by exactly one, so any command in between (an `option`,
    /// a `map`, a `kassert`) silently invalidates the reuse rather than needing
    /// its own invalidation hook.
    pub command_seq: u64,
}

/// An open bulk-output redirect (`openfile`/`openfile append`).
#[derive(Debug, Default)]
pub struct FileOut {
    /// Accumulated bytes written to the redirect.
    pub contents: String,
    /// The filename it is bound to (for the binary to flush on close).
    pub filename: String,
    /// C++ `ios_base::app`: `openfile append` opens for appending; `openfile`
    /// truncates.  The binary honors this when it flushes `contents` to
    /// `filename` on `closefile`.
    pub append: bool,
}

impl IfaceStatus {
    /// C++ constructor `IfaceStatus(prmpt, os, mxhist=10)`.
    ///
    /// `os` is the in-memory command-output buffer; the binary drains it.  The
    /// input behavior is supplied as a [`LineSource`].
    pub fn new(prompt: &str, source: Box<dyn LineSource>, mxhist: int4) -> Self {
        IfaceStatus {
            promptstack: Vec::new(),
            flagstack: Vec::new(),
            prompt: prompt.to_string(),
            maxhistory: mxhist,
            curhistory: 0,
            history: Vec::new(),
            sorted: false,
            inerror: false,
            errorisdone: false,
            done: false,
            optr: String::new(),
            fileoptr: None,
            comlist: Vec::new(),
            datamap: BTreeMap::new(),
            source,
            command_seq: 0,
        }
    }

    /// C++ default `mxhist` of 10.
    pub fn with_default_history(prompt: &str, source: Box<dyn LineSource>) -> Self {
        Self::new(prompt, source, 10)
    }

    /// C++ `setErrorIsDone`.
    pub fn set_error_is_done(&mut self, val: bool) {
        self.errorisdone = val;
    }

    /// C++ `writePrompt`: write the current prompt to command output.
    pub fn write_prompt(&mut self) {
        self.optr.push_str(&self.prompt);
    }

    /// Current command prompt (test/inspection helper).
    pub fn prompt(&self) -> &str {
        &self.prompt
    }

    /// C++ `isInError`.
    pub fn is_in_error(&self) -> bool {
        self.inerror
    }

    /// C++ `getNumInputStreamSize`: depth of script nesting.
    pub fn num_input_stream_size(&self) -> int4 {
        self.promptstack.len() as int4
    }

    /// C++ `getHistorySize`.
    pub fn history_size(&self) -> int4 {
        self.history.len() as int4
    }

    /// Append text to command output (`*optr << ...`).
    pub fn out(&mut self, s: &str) {
        self.optr.push_str(s);
    }

    /// Append one raw byte to command output (`optr->put(c)`).
    ///
    /// Command-line text is ASCII (including the control bytes the line editor
    /// echoes: `\r`, `\b`, `\n`, space), so ASCII bytes append directly; a
    /// non-ASCII byte falls back to the Unicode replacement char, which only
    /// arises for malformed input and never in the datatest corpus.
    pub fn out_byte(&mut self, b: u8) {
        if b < 0x80 {
            self.optr.push(b as char);
        } else {
            self.optr.push('\u{FFFD}');
        }
    }

    /// Append text to bulk output (`*fileoptr << ...`), honoring the redirect.
    pub fn file_out(&mut self, s: &str) {
        match &mut self.fileoptr {
            Some(f) => f.contents.push_str(s),
            None => self.optr.push_str(s),
        }
    }

    /// Whether bulk output is currently redirected (C++ `optr != fileoptr`).
    pub fn is_file_open(&self) -> bool {
        self.fileoptr.is_some()
    }

    /// Establish the bulk-output redirect (`openfile`/`openfile append`).
    ///
    /// Mirrors the state transition in C++ `IfcOpenfile`/`IfcOpenfileAppend`:
    /// `fileoptr` becomes a fresh stream distinct from `optr`.  The actual
    /// filesystem open is the binary's job (it flushes [`FileOut::contents`] to
    /// [`FileOut::filename`] honoring [`FileOut::append`] on `closefile`),
    /// exactly as the framework defers script-file reads to the binary in
    /// [`push_script_lines`](IfaceStatus::push_script_lines).
    pub fn open_file_redirect(&mut self, filename: &str, append: bool) {
        self.fileoptr = Some(FileOut {
            contents: String::new(),
            filename: filename.to_string(),
            append,
        });
    }

    /// Tear down the bulk-output redirect (`closefile`), returning to `optr`.
    ///
    /// Mirrors C++ `IfcClosefile`: close the file stream and set
    /// `fileoptr = optr`.  Returns the captured [`FileOut`] so the binary can
    /// flush it to disk.
    pub fn close_file_redirect(&mut self) -> Option<FileOut> {
        self.fileoptr.take()
    }

    /// C++ `registerCom`: register a command under up to five tokens.
    ///
    /// Mirrors the variadic C++ signature with a slice of token strings (the
    /// `nullptr`-terminated tail becomes a shorter slice).  Creates the
    /// module's [`IfaceData`] on first sight of the module.
    pub fn register_com(&mut self, action: Box<dyn IfaceCommandAction>, words: &[&str]) {
        let mut cmd = IfaceCommand::new(action);
        for w in words {
            cmd.add_word(w);
        }
        let nm = cmd.module();
        // C++ registerCom: create the module's IfaceData only the first time
        // the module is seen (datamap.find(nm) == end()).
        if let std::collections::btree_map::Entry::Vacant(e) = self.datamap.entry(nm) {
            let data = cmd.action.create_data();
            e.insert(data);
        }
        self.comlist.push(cmd);
        self.sorted = false;
    }

    /// C++ `getData`: the module's shared data, or `None`.
    pub fn get_data(&self, nm: &str) -> Option<&dyn IfaceData> {
        match self.datamap.get(nm) {
            Some(Some(d)) => Some(d.as_ref()),
            _ => None,
        }
    }

    /// Mutable form of [`get_data`](IfaceStatus::get_data).
    pub fn get_data_mut(&mut self, nm: &str) -> Option<&mut (dyn IfaceData + 'static)> {
        match self.datamap.get_mut(nm) {
            Some(Some(d)) => Some(d.as_mut()),
            _ => None,
        }
    }

    /// C++ `saveHistory`: store a command line in the circular buffer.
    fn save_history(&mut self, line: &str) {
        if (self.history.len() as int4) < self.maxhistory {
            self.history.push(line.to_string());
        } else {
            self.history[self.curhistory as usize] = line.to_string();
        }
        self.curhistory += 1;
        if self.curhistory == self.maxhistory {
            self.curhistory = 0;
        }
    }

    /// C++ `getHistory(line, i)`: the command line `i` steps back, or unchanged
    /// `line` if `i` is too far back.
    pub fn get_history(&self, line: &mut String, i: int4) {
        if i >= self.history.len() as int4 {
            return; // No change if history too far back
        }
        let mut idx = self.curhistory - 1 - i;
        if idx < 0 {
            idx += self.maxhistory;
        }
        *line = self.history[idx as usize].clone();
    }

    /// C++ `pushScript(filename, newprompt)`: read a script file's lines and
    /// push them.  File reading is the binary's job; the framework method takes
    /// the already-read lines.
    pub fn push_script_lines(&mut self, lines: Vec<String>, newprompt: &str) {
        self.source.push_input(lines);
        self.push_script_state(newprompt);
    }

    /// The prompt/flag bookkeeping half of C++ `pushScript` (shared by the
    /// `LineSource` push).  In C++ `pushScript(istream*, newprompt)` does this
    /// after the derived class swaps the input stream.
    fn push_script_state(&mut self, newprompt: &str) {
        self.promptstack.push(self.prompt.clone());
        let mut flags = 0u32;
        if self.errorisdone {
            flags |= 1;
        }
        self.flagstack.push(flags);
        self.errorisdone = true; // Abort on first exception in a script
        self.prompt = newprompt.to_string();
    }

    /// C++ `popScript`: return to the parent input stream and restore prompt /
    /// flags.
    pub fn pop_script(&mut self) {
        self.source.pop_input();
        self.prompt = self
            .promptstack
            .pop()
            .expect("popScript: empty promptstack");
        let flags = self.flagstack.pop().expect("popScript: empty flagstack");
        self.errorisdone = (flags & 1) != 0;
        self.inerror = false;
    }

    /// C++ `reset`: pop all scripts and clear `errorisdone`/`done`.
    pub fn reset(&mut self) {
        while !self.promptstack.is_empty() {
            self.pop_script();
        }
        self.errorisdone = false;
        self.done = false;
    }

    /// C++ `evaluateError`: after a failed command, decide whether to abort the
    /// process, abort the current script, or continue.
    pub fn evaluate_error(&mut self) {
        if self.errorisdone {
            self.out("Aborting process\n");
            self.inerror = true;
            self.done = true;
            return;
        }
        if self.num_input_stream_size() != 0 {
            // we have something to pop
            let prompt = self.prompt.clone();
            self.out(&format!("Aborting {}\n", prompt));
            self.inerror = true;
            return;
        }
        self.inerror = false;
    }

    /// C++ `isStreamFinished`: `done || inerror || current stream eof`.
    pub fn is_stream_finished(&self) -> bool {
        if self.done || self.inerror {
            return true;
        }
        self.source.current_stream_finished()
    }

    fn ensure_sorted(&mut self) {
        if !self.sorted {
            self.comlist.sort_by(|a, b| {
                if compare_ifacecommand(a, b) {
                    Ordering::Less
                } else if compare_ifacecommand(b, a) {
                    Ordering::Greater
                } else {
                    Ordering::Equal
                }
            });
            self.sorted = true;
        }
    }

    /// C++ `runCommand`: read one line and execute it.
    ///
    /// Returns `Ok(true)` if a command executed, `Ok(false)` for a blank /
    /// non-command line, or an [`IfaceError`] from the command's `execute`
    /// (which the caller — `mainloop`/`execute` wrapper — catches).  The
    /// "Invalid command" / "Incomplete command" diagnostics are written to
    /// `optr` exactly as in C++ before returning `false`.
    pub fn run_command(&mut self) -> IfaceResult<bool> {
        self.ensure_sorted();

        // Detach the source so readLine can take `&mut self` (mirrors C++
        // IfaceTerm::readLine reaching IfaceStatus members via inheritance).
        let mut source = std::mem::replace(&mut self.source, Box::new(DetachedSource));
        let line = source.read_line(self);
        self.source = source;
        if line.is_empty() {
            return Ok(false);
        }
        self.save_history(&line);

        let mut is = CommandStream::new(&line);
        // The resolution returns the matched command index (into comlist) and
        // the match count; mirrors expandCom + the runCommand branches.
        let mut expand: Vec<String> = Vec::new();
        let (mut first, mut last) = (0usize, self.comlist.len());
        let mat = self.expand_com(&mut expand, &mut is, &mut first, &mut last);

        if mat == 0 {
            self.out("ERROR: Invalid command\n");
            return Ok(false);
        } else if expand.is_empty() {
            // Nothing useful typed
            return Ok(false);
        } else if mat > 1 {
            if self.comlist[first].num_words() != expand.len() as int4 {
                // Complete but not unique
                self.out("ERROR: Incomplete command\n");
                return Ok(false);
            }
        } else if mat < 0 {
            self.out("ERROR: Incomplete command\n");
        }

        // Execute the (first) command.  The action is detached from `self`
        // for the call so the command can take `&mut self`, then re-installed
        // (the comlist never changes during a command's execute in C++).
        let action = std::mem::replace(&mut self.comlist[first].action, Box::new(DummyAction));
        self.command_seq = self.command_seq.wrapping_add(1);
        let res = action.execute(self, &mut is);
        self.comlist[first].action = action;
        res?;
        Ok(true)
    }

    /// C++ `restrictCom`: narrow `[first,last)` to the commands whose `pos`-th
    /// token range matches `input`'s tokens.
    ///
    /// `input.back()` is bumped past its last character to form the
    /// upper-bound key, exactly as C++ does
    /// (`temp[temp.size()-1] += 1`).
    fn restrict_com(&self, first: &mut usize, last: &mut usize, input: &[String]) {
        let dummy_lower = IfaceCommandDummy::with_words(input);
        let newfirst = lower_bound(&self.comlist, *first, *last, &dummy_lower);

        let mut head: Vec<String> = input[..input.len() - 1].to_vec();
        let mut temp = input[input.len() - 1].clone().into_bytes();
        let li = temp.len() - 1;
        temp[li] = temp[li].wrapping_add(1);
        // temp will now be greater than any word whose first letters match
        // input.back().
        head.push(String::from_utf8_lossy(&temp).into_owned());
        let dummy_upper = IfaceCommandDummy::with_words(&head);
        let newlast = upper_bound(&self.comlist, *first, *last, &dummy_upper);

        *first = newfirst;
        *last = newlast;
    }

    /// C++ `expandCom`: expand the tokens read from `s` to a full command.
    ///
    /// Returns the C++ `int4`:
    /// - `0` — no matching command.
    /// - `>1` — that many matches (ambiguous unless completed exactly).
    /// - `1` — a unique, complete match.
    /// - `<0` — `-(number of matches)`; the last token is incomplete.
    ///
    /// `first`/`last` are indices into the sorted `comlist` and are narrowed in
    /// place; on a unique match `first` points at the resolved command.
    fn expand_com(
        &self,
        expand: &mut Vec<String>,
        s: &mut CommandStream,
        first: &mut usize,
        last: &mut usize,
    ) -> int4 {
        expand.clear();
        let mut res = true;
        if *first == *last {
            return 0; // empty subrange
        }
        let mut pos: usize = 0;
        loop {
            s.skip_ws();
            if *first == *last - 1 {
                // subrange is unique
                if s.eof() {
                    // Automatically provide missing words
                    while pos < self.comlist[*first].num_words() as usize {
                        expand.push(self.comlist[*first].command_word(pos).to_string());
                        pos += 1;
                    }
                }
                if self.comlist[*first].num_words() as usize == pos {
                    return 1; // Finished
                }
            }
            if !res {
                // Last word was ambiguous
                if !s.eof() {
                    return (*last - *first) as int4;
                }
                return (*first as int4) - (*last as int4); // negative => incomplete
            }
            if s.eof() {
                // no other words
                if expand.is_empty() {
                    return (*first as int4) - (*last as int4);
                }
                return (*last - *first) as int4; // number of matches
            }
            let tok = s.read_token();
            expand.push(tok);
            self.restrict_com(first, last, expand);
            if *first == *last {
                return 0; // empty subrange
            }
            let (newtok, r) = maxmatch(
                self.comlist[*first].command_word(pos),
                self.comlist[*last - 1].command_word(pos),
            );
            res = r;
            *expand.last_mut().unwrap() = newtok;
            pos += 1;
        }
    }

    /// Test/binary accessor: the number of registered commands.
    pub fn num_commands(&self) -> usize {
        self.comlist.len()
    }

    /// The expand-command outcome `IfaceTerm::doCompletion` needs: the C++
    /// `expandCom` match count, the expanded token list, and (when ambiguous)
    /// the full command strings of the candidate range `[first,last)`.
    ///
    /// Lives on `IfaceStatus` (not `ifaceterm`) because it touches the private
    /// `comlist`; `doCompletion` consumes it and does its own `optr` writing.
    pub(crate) fn completion_expand(
        &mut self,
        s: &mut CommandStream,
    ) -> (int4, Vec<String>, Vec<String>) {
        self.ensure_sorted();
        let mut expand: Vec<String> = Vec::new();
        let (mut first, mut last) = (0usize, self.comlist.len());
        let mat = self.expand_com(&mut expand, s, &mut first, &mut last);
        let candidates: Vec<String> = if mat != 0 {
            (first..last)
                .map(|i| self.comlist[i].command_string())
                .collect()
        } else {
            Vec::new()
        };
        (mat, expand, candidates)
    }

    /// Resolve a complete command line to the unique matching command's full
    /// token string, mirroring `doCompletion`/`runCommand` resolution without
    /// executing.  Used by tests and by `ifaceterm`'s completion.
    ///
    /// Returns:
    /// - `Ok(words)` for a unique resolution (the expanded full command),
    /// - `Err(IfaceError::execution("Invalid command"))` if nothing matches,
    /// - `Err(IfaceError::parse("Incomplete command"))` if ambiguous/partial.
    ///
    /// This is a convenience over [`expand_com`](IfaceStatus::expand_com) for
    /// the prefix-resolution test matrices.
    pub fn resolve(&mut self, line: &str) -> IfaceResult<Vec<String>> {
        self.ensure_sorted();
        let mut is = CommandStream::new(line);
        let mut expand: Vec<String> = Vec::new();
        let (mut first, mut last) = (0usize, self.comlist.len());
        let mat = self.expand_com(&mut expand, &mut is, &mut first, &mut last);
        if mat == 0 {
            return Err(IfaceError::execution("Invalid command"));
        }
        if expand.is_empty() {
            return Err(IfaceError::parse("Incomplete command"));
        }
        if mat > 1 {
            if self.comlist[first].num_words() != expand.len() as int4 {
                return Err(IfaceError::parse("Incomplete command"));
            }
        } else if mat < 0 {
            return Err(IfaceError::parse("Incomplete command"));
        }
        Ok((0..self.comlist[first].num_words() as usize)
            .map(|i| self.comlist[first].command_word(i).to_string())
            .collect())
    }
}

/// `std::lower_bound(first,last,&dummy,compare_ifacecommand)` over a slice
/// window `[lo,hi)`: the first index whose command is **not** ordered before
/// `key`.
fn lower_bound(coms: &[IfaceCommand], lo: usize, hi: usize, key: &IfaceCommand) -> usize {
    let mut lo = lo;
    let mut count = hi - lo;
    while count > 0 {
        let step = count / 2;
        let mid = lo + step;
        if compare_ifacecommand(&coms[mid], key) {
            lo = mid + 1;
            count -= step + 1;
        } else {
            count = step;
        }
    }
    lo
}

/// `std::upper_bound(first,last,&dummy,compare_ifacecommand)` over `[lo,hi)`:
/// the first index whose command **is** ordered after `key`.
fn upper_bound(coms: &[IfaceCommand], lo: usize, hi: usize, key: &IfaceCommand) -> usize {
    let mut lo = lo;
    let mut count = hi - lo;
    while count > 0 {
        let step = count / 2;
        let mid = lo + step;
        if !compare_ifacecommand(key, &coms[mid]) {
            lo = mid + 1;
            count -= step + 1;
        } else {
            count = step;
        }
    }
    lo
}

#[cfg(test)]
mod tests;
