//! `unlace decompile` — the Rust port of `unlace/decompile.py`, plus its
//! machine-readable mode.
//!
//! The ordinary TEXT surface drives `decomp_dbg` with the same console command language
//! the datatests use (`load file` / `read symbols` / `option` /
//! `load function` | `load addr` / `decompile` / `openfile write <tmp>` /
//! `print C` / `closefile`), capturing the decompiled C through the bulk-output
//! redirect so interactive prompts never pollute it, and prints the captured C —
//! byte-identical to the Python tool.
//!
//! `--json` answers the same question in `decompile-all`'s record shape: a
//! `functions` array holding the one function that was asked for, with its
//! address, size, variables, line mappings and per-record `error`. It is not a
//! second dialect and not a second implementation — [`run_in_process`] routes the
//! selection through `decompile_all`'s own parser, decompile loop and
//! serializer, so an agent parses ONE shape whichever command it reached for.
//! That path loads the binary in-process rather than spawning `decomp_dbg`,
//! which is why the `decomp_dbg`-only flags are refused rather than ignored.
//! Explicit Rust signature application uses this same in-process path for text.

use std::io::{Read, Write};
use std::path::{Path, PathBuf};

use unlace_console::buildstamp;
use unlace_console::engine::{ARM_ISA_ENV, ArmIsa};

use crate::args::take_value;
use crate::decompile_all::{self, Args as AllArgs, DriverDefaults};
use crate::paths;

mod script;
use script::{build_script_for_input, reject_unquotable};

/// Options parsed for a `decompile` invocation.
pub struct DecompileArgs {
    pub binary: String,
    pub target: String,
    pub by_address: bool,
    pub bfd_target: Option<String>,
    pub raw: bool,
    pub regions: bool,
    /// `--trace`: report the maturity the function's last pass reached and the
    /// facts settled there (`phase status`) on stderr after the C.
    pub trace: bool,
    /// `--cfg-dot`: print the function's basic-block graph as Graphviz DOT on stdout
    /// instead of the C.
    pub cfg_dot: bool,
    pub options: Vec<(String, String)>,
    /// `--language-file FILE`: the flavour the console is told to print through
    /// (`language file`, after the options).
    pub(crate) language_file: Option<crate::langfile::LanguageFile>,
    /// `--rules FILE` (repeatable): rewrite rule files, lowered to `rewrite
    /// rules` lines ahead of the options.
    pub rules: Vec<String>,
    /// Run the first by-name attempt with `fast_funcdisc off` after every other
    /// option; a name miss retries without it ([`defers_fast_funcdisc`]).
    pub defer_fast_funcdisc: bool,
    pub kasserts: Vec<String>,
    /// `--define-function <start[-end][=name] | @file>` (repeatable): the
    /// caller-declared function boundaries, lowered to `function bounds` lines.
    pub func_decls: Vec<crate::funcdecl::FuncDecl>,
    /// `--assert <directive> | @FILE` (repeatable), lowered to console lines
    /// by [`build_script_for_input`].
    pub assertions: Vec<unlace_console::assertions::Directive>,
    /// `--assert-strict`: a rejected directive makes the run exit non-zero.
    pub assert_strict: bool,
    pub decomp_dbg: Option<String>,
    pub sleighpath: Option<String>,
    /// `--engine`: the console gets it as `UNLACE_ENGINE`.
    pub engine: Option<String>,
    /// Mach-O fat / universal slice override (`--slice <arch>`, e.g. `x86_64` /
    /// `arm64`). Picks which arch slice of a universal binary is loaded; absent
    /// ⇒ the deterministic default (x86-64 → arm64 → first present). Exported as
    /// `UNLACE_MACHO_SLICE` onto the subprocess (read at the dispatch slice peel).
    pub slice: Option<String>,
    /// Explicit ARM instruction-set state for every mapped code section.
    pub isa: Option<ArmIsa>,
    /// Treat the input as a headerless contiguous image.
    pub raw_image: bool,
    /// Address assigned to raw file offset zero.
    pub base: Option<u64>,
    /// The per-function memory limit in MiB (`0` off), handed to `decomp_dbg`
    /// as its `--max-fn-memory`; `None` hands it the cgroup default.
    pub max_fn_memory: Option<u64>,
    /// The per-function wall-clock budget in seconds (`0` off), handed to
    /// `decomp_dbg` as its `--max-fn-seconds`.
    pub max_fn_seconds: u64,
}

/// A 0x-prefixed token auto-selects address mode (a bare hex-looking token is a
/// function name; use `--addr` for bare numeric addresses) — `_looks_like_addr`.
pub(crate) fn looks_like_addr(target: &str) -> bool {
    target.starts_with("0x") || target.starts_with("0X")
}

/// Whether a by-name selection skips a preset's `fast_funcdisc` walk on its first
/// attempt: only when the resolved `options` turn the walk on, not when the caller
/// named the option, and not for an engine placeholder spelling (`sub_<hex>`,
/// `FUN_<hex>`, `func_0x<hex>`), whose entry may exist only because that walk
/// found it.
fn defers_fast_funcdisc(target: &str, explicit: bool, options: &[(String, String)]) -> bool {
    let walk_on = options
        .iter()
        .rev()
        .find(|(name, _)| name == "fast_funcdisc")
        .is_some_and(|(_, value)| value == "on");
    let placeholder = ["sub_", "FUN_", "func_"].iter().any(|prefix| {
        target.strip_prefix(prefix).is_some_and(|rest| {
            let digits = rest.strip_prefix("0x").unwrap_or(rest);
            !digits.is_empty() && digits.bytes().all(|b| b.is_ascii_hexdigit())
        })
    });
    walk_on && !explicit && !placeholder
}

pub(crate) fn parse_cli_address(value: &str) -> Result<u64, String> {
    let value = value.trim();
    let digits = value
        .strip_prefix("0x")
        .or_else(|| value.strip_prefix("0X"))
        .unwrap_or(value);
    u64::from_str_radix(digits, 16).map_err(|_| format!("invalid address {value:?}"))
}

/// The console prompt `decomp_dbg` writes before echoing each command; a
/// transcript line can therefore carry it as a prefix.
const CONSOLE_PROMPT: &str = "[decomp]>";

/// The console's exception→prefix grammar
/// (`crates/unlace-console/src/ifacedecomp.rs (execute)`), which that
/// module documents as byte-faithful and load-bearing: a command that raised
/// prints exactly one of these and the session continues.
const CONSOLE_DIAGNOSTICS: [&str; 7] = [
    "Execution error: ",
    "Command parsing error: ",
    "Low-level ERROR: ",
    "Parse ERROR: ",
    "Function ERROR: ",
    "Decoding ERROR: ",
    "ERROR: ",
];

/// Strip the prompt a transcript line may carry, and the surrounding whitespace.
fn console_text(trimmed: &str) -> &str {
    trimmed
        .strip_prefix(CONSOLE_PROMPT)
        .unwrap_or(trimmed)
        .trim()
}

/// The real reason `load file` failed, recovered from the transcript.
///
/// `IfcLoadFile`'s error arm (`crates/unlace-console/src/ifacedecomp.rs`)
/// writes `{e.explain()}` and then `Could not create architecture`, both to
/// stdout, so the escaped `LowlevelError` is the line before the trigger. `None`
/// means nothing but the command echo precedes it — no reason was printed, and
/// the caller keeps the generic wording.
fn arch_failure_reason(out: &str) -> Option<String> {
    let mut prev: Option<&str> = None;
    for raw in out.lines() {
        let trimmed = raw.trim();
        let line = console_text(trimmed);
        if line == "Could not create architecture" {
            let reason = prev?;
            if reason.starts_with(CONSOLE_PROMPT) {
                return None;
            }
            return Some(reason.to_string());
        }
        if !line.is_empty() {
            prev = Some(trimmed);
        }
    }
    None
}

/// The reason an `option` command failed, recovered from the transcript.
///
/// `IfcOption` hands a unlace stage-model name to `Architecture::set_unlace_option`
/// and an upstream one to `OptionDatabase::set`, and reports either one's
/// refusal of the VALUE as an `Execution error:`. The script this driver pipes
/// on stdin is not a *pushed* script, though, and `errorisdone` is only forced
/// for those (`unlace_console::interface (push_script_state)`), so the session
/// survives the refusal and `print C` still renders C — built without the
/// decision the run asked for. The in-process surfaces refuse the same value
/// outright (`decompile_all.rs (apply_one_option)`); this is the wording they
/// use, so both answer a bad `--option NAME VALUE` the same way.
///
/// The NAME comes from the command echo rather than from the caller's list, so
/// the answer always names the pair that was actually refused.
fn option_failure(out: &str) -> Option<String> {
    let mut option: Option<&str> = None;
    for raw in out.lines() {
        let trimmed = raw.trim();
        let line = console_text(trimmed);
        if line.is_empty() {
            continue;
        }
        if trimmed.starts_with(CONSOLE_PROMPT) {
            option = line
                .strip_prefix("option ")
                .and_then(|rest| rest.split_whitespace().next());
            continue;
        }
        let Some(name) = option else {
            continue;
        };
        for prefix in CONSOLE_DIAGNOSTICS {
            if let Some(reason) = line.strip_prefix(prefix) {
                let reason = reason.trim();
                if !reason.is_empty() {
                    return Some(format!("option {name}: {reason}"));
                }
            }
        }
    }
    None
}

/// Why a `rewrite rules` line was refused: the rule file changed or went away
/// after the command line checked it. The run would otherwise print C the
/// rules were never applied to.
fn rule_file_failure(out: &str) -> Option<String> {
    command_failures(out)
        .into_iter()
        .find_map(|(command, reason)| reason.filter(|_| command.starts_with("rewrite rules ")))
}

/// The reason the analysis commit failed, recovered from the transcript.
///
/// `IfcReadSymbols` maps a failed `commit_pending_analysis` to an
/// `IfaceExecutionError` and the console prints it and **keeps the session
/// alive**, so `print C` still renders C — built from a program whose debug
/// facts were only partially applied and cannot be re-committed. The diagnostic
/// is attributed to the command whose echo precedes it, so a later command's
/// error is never misreported as this one.
fn read_symbols_failure(out: &str) -> Option<String> {
    let mut in_read_symbols = false;
    for raw in out.lines() {
        let trimmed = raw.trim();
        let line = console_text(trimmed);
        if line.is_empty() {
            continue;
        }
        if trimmed.starts_with(CONSOLE_PROMPT) {
            in_read_symbols = line.split_whitespace().eq(["read", "symbols"]);
            continue;
        }
        if !in_read_symbols {
            continue;
        }
        for prefix in CONSOLE_DIAGNOSTICS {
            if let Some(reason) = line.strip_prefix(prefix) {
                let reason = reason.trim();
                if !reason.is_empty() {
                    return Some(reason.to_string());
                }
            }
        }
    }
    None
}

/// The reason the selection command failed, recovered from the transcript.
///
/// `load function` / `load addr` resolve through the shared selector model
/// (`unlace_console::engine::ConsoleProgram::resolve_entry`), whose ambiguity
/// report spans several lines — the diagnostic line plus one line per candidate
/// — so everything the console printed for that command is the reason.
fn selection_failure(out: &str) -> Option<String> {
    let mut in_load = false;
    let mut reason: Option<String> = None;
    for raw in out.lines() {
        let trimmed = raw.trim();
        let line = console_text(trimmed);
        if trimmed.starts_with(CONSOLE_PROMPT) {
            if reason.is_some() {
                break;
            }
            let mut words = line.split_whitespace();
            in_load = words.next() == Some("load")
                && matches!(words.next(), Some("function") | Some("addr"));
            continue;
        }
        if !in_load || line.is_empty() {
            continue;
        }
        match &mut reason {
            Some(collected) => {
                collected.push('\n');
                collected.push_str(raw.trim_end());
            }
            None => {
                for prefix in CONSOLE_DIAGNOSTICS {
                    if let Some(text) = line.strip_prefix(prefix) {
                        let text = text.trim();
                        if !text.is_empty() {
                            reason = Some(text.to_string());
                        }
                        break;
                    }
                }
            }
        }
    }
    reason
}

/// Inspect the combined stdout+stderr for the recognized fatal-error strings —
/// port of `_check_errors`.  Returns an error message if one is found.
///
/// The architecture arm must stay ahead of the analysis-commit arm: a failed
/// `load file` leaves no image, so every later command — `read symbols`
/// included — answers `No load image present`, which is a consequence, not the
/// reason. The option arm sits between the two, for that reason in both
/// directions: a dead image answers every `option` line the same way, and a
/// refused option is the earliest thing that can make a later command fail.
/// `allow_external` is false for raw images because their entries must have
/// mapped bytes.
fn check_errors(
    out: &str,
    target: &str,
    binary: &str,
    by_address: bool,
    allow_external: bool,
) -> Option<String> {
    if out.contains("Could not discover root of Ghidra installation") {
        return Some(
            "decomp_dbg could not find SLEIGH specs; pass --sleighpath or set SLEIGHHOME".into(),
        );
    }
    if out.contains("Could not create architecture") {
        // Byte-identical to the in-process surfaces'
        // `decompile_all.rs (load_program)` wording, so all four commands answer
        // one binary-load failure the same way; the generic string survives only
        // where the console printed no reason at all.
        return Some(match arch_failure_reason(out) {
            Some(reason) => {
                let msg = format!("could not build an architecture for {binary}: {reason}");
                if reason.contains("No sleigh specification") {
                    format!("{msg}\nnote: {}", paths::SPECS_HINT)
                } else {
                    msg
                }
            }
            None => format!(
                "could not build an architecture for {binary} (unsupported/!recognized binary)"
            ),
        });
    }
    if let Some(reason) = rule_file_failure(out) {
        return Some(reason);
    }
    if let Some(reason) = option_failure(out) {
        return Some(reason);
    }
    if let Some(reason) = language_file_failure(out) {
        return Some(format!("--language-file {reason}"));
    }
    if let Some(reason) = read_symbols_failure(out) {
        return Some(format!("read symbols (analysis commit) failed: {reason}"));
    }
    if !by_address && is_unknown_function(out) {
        // The selector model knows what the image DOES carry; this surface only
        // has the transcript. So its explanation wins where it has one, and the
        // stripped-binary advice is the answer only when it has none.
        let hint = name_miss_hint(out)
            .unwrap_or_else(|| "for a stripped binary pass an address with --addr".to_string());
        return Some(format!("no function {target:?} in {binary}; {hint}"));
    }
    // An ambiguous or unmapped selector is answered by the selector model, whose
    // report names every candidate. Return it verbatim: the transcript dump the
    // caller falls back to is capped at its FIRST 2000 characters, which in the
    // default mode is all option chatter, so the answer would be cut off.
    // A proven undefined external is not a bad selector. Other entries with
    // missing bytes remain selection failures.
    if !(allow_external && is_undefined_external_entry(out))
        && let Some(reason) = selection_failure(out)
    {
        if reason.contains("per-function decompile budget exceeded")
            || reason.contains("per-function memory limit exceeded")
        {
            return Some(format!(
                "decompilation failed for {target} in {binary}: {reason}"
            ));
        }
        return Some(reason);
    }
    None
}

/// Whether the console answered "there is no function by that name here".
///
/// The three spellings are the selector model's own
/// (`ConsoleProgram::resolve_entry` → `EntryLookupError`) plus the engine's
/// `Unknown function name:`. It is a MISS, not an ambiguity and not a load
/// failure, which is what makes it safe to answer with a second, wider attempt.
fn is_unknown_function(out: &str) -> bool {
    out.contains("Unknown function name:")
        || out.contains("no function matches")
        || out.contains("Bad namespace:")
}

/// (unlace, issue #666) What the console said about a name miss beyond the miss
/// itself — a near-miss spelling, or that the image names functions and none is
/// spelled that way.
///
/// `EntryLookupError::NotFound` renders that as a `; `-separated tail on its own
/// line; a bare `no function matches "x"` carries none, which is the stripped
/// image the `--addr` advice exists for.
fn name_miss_hint(out: &str) -> Option<String> {
    let reason = selection_failure(out)?;
    let (_selector, hint) = reason
        .strip_prefix("no function matches ")?
        .split_once("\"; ")?;
    let hint = hint.trim();
    (!hint.is_empty()).then(|| hint.to_string())
}

/// The console identifies undefined externals from the selected entry's
/// provenance. Missing bytes alone do not identify an external.
fn is_undefined_external_entry(out: &str) -> bool {
    selection_failure(out).as_deref() == Some("Selected entry is an undefined external symbol")
}

/// The console's per-function abort notice: `IfcDecompile` catches a
/// recoverable pipeline abort, prints `Skipping <name>: <reason>` and keeps
/// going (so `print C` still renders a shell).  Without this the CLI would
/// report success for a function that produced nothing.
///
/// Returns `(function name, reason)` for the first such notice.
fn find_pipeline_failure(out: &str) -> Option<(String, String)> {
    for line in out.lines() {
        // The console prompt is written before the command echo, so an output
        // line can carry it as a prefix.
        let line = line
            .trim_start()
            .strip_prefix("[decomp]>")
            .unwrap_or(line)
            .trim_start();
        let Some(rest) = line.strip_prefix("Skipping ") else {
            continue;
        };
        let rest = rest.trim();
        if rest.is_empty() {
            continue;
        }
        return Some(match rest.split_once(": ") {
            Some((name, reason)) => (name.to_string(), reason.trim().to_string()),
            None => (rest.to_string(), String::new()),
        });
    }
    None
}

/// Recover one [`Outcome`](unlace_console::assertions::Outcome) per `--assert`
/// directive from the `decomp_dbg` transcript.
///
/// The console's exception grammar is byte-faithful and load-bearing
/// (`ifacedecomp::execute`, and [`CONSOLE_DIAGNOSTICS`] already parses it): a
/// command that raised prints exactly one diagnostic prefix and the session
/// continues.  So a directive is `applied` unless a diagnostic follows the echo
/// of the console line it lowered to — which is the only signal this surface
/// has, since the C comes back through a file redirect and not the transcript.
///
/// A directive whose echo is absent entirely (the script never got that far —
/// the load failed) is reported as rejected rather than silently applied.
fn assertion_outcomes(
    out: &str,
    directives: &[unlace_console::assertions::Directive],
    selected: Option<&str>,
) -> Vec<unlace_console::assertions::Outcome> {
    use unlace_console::assertions::Outcome;
    let failures = command_failures(out);
    let refusals: String = out
        .lines()
        .filter(|raw| console_text(raw.trim()).starts_with("Rejected "))
        .flat_map(|raw| [raw, "\n"])
        .collect();
    let out = refusals.as_str();
    let mut outcomes: Vec<Outcome> = directives
        .iter()
        .map(|directive| {
            let (kind, phase, subphase) = directive.body.coords();
            let (detail, fatal) = match crate::assertdecl::console_form(directive, selected) {
                Ok(form) => match failures
                    .get(form.line.as_str())
                    .cloned()
                    .unwrap_or_else(|| Some(SCRIPT_NOT_REACHED.into()))
                {
                    Some(reason) => (Some(reason), false),
                    // The console line itself ran clean, which for a DEFERRED
                    // directive says only that it was taken: an `override flow`
                    // answers "Successfully added override" and is applied later,
                    // at flow time, where it can still be refused.
                    None => match pipeline_refusal(out, &form.line) {
                        Some(reason) => (Some(reason), true),
                        None => (None, false),
                    },
                },
                // Nothing was emitted for it: the directive names a function this
                // run did not decompile, and the reason is the report row.
                Err(detail) => (Some(detail), false),
            };
            Outcome {
                directive: directive.raw.clone(),
                kind,
                phase,
                subphase,
                status: if detail.is_none() {
                    "applied"
                } else {
                    "rejected"
                },
                detail,
                fatal,
            }
        })
        .collect();
    let applied: Vec<bool> = outcomes.iter().map(|o| o.status == "applied").collect();
    let binds = |d: &unlace_console::assertions::Directive| {
        crate::assertdecl::console_form(d, selected).is_ok()
    };
    for i in unlace_console::assertions::restated_callees(directives, |i| applied[i], binds) {
        outcomes[i] = unlace_console::assertions::restated_callee(&directives[i]);
    }
    for i in unlace_console::assertions::restated_call_prototypes(directives, |i| applied[i], binds)
    {
        outcomes[i] = unlace_console::assertions::restated(&directives[i]);
    }
    outcomes
}

/// Every command the transcript echoes, with the first diagnostic the console
/// printed for it (`None` when it ran clean).  One pass, so a run that carries
/// a header's worth of directives does not rescan the transcript for each.
fn command_failures(out: &str) -> std::collections::BTreeMap<&str, Option<String>> {
    let mut failures: std::collections::BTreeMap<&str, Option<String>> = Default::default();
    let mut current: Option<&str> = None;
    for raw in out.lines() {
        let trimmed = raw.trim();
        let text = console_text(trimmed);
        if trimmed.starts_with(CONSOLE_PROMPT) {
            failures.entry(text).or_default();
            current = Some(text);
            continue;
        }
        let Some(command) = current.filter(|_| !text.is_empty()) else {
            continue;
        };
        let reason = CONSOLE_DIAGNOSTICS
            .iter()
            .filter_map(|prefix| text.strip_prefix(prefix).map(str::trim))
            .find(|reason| !reason.is_empty());
        if let (Some(reason), Some(slot @ None)) = (reason, failures.get_mut(command)) {
            *slot = Some(reason.to_string());
        }
    }
    failures
}

/// The reason the console refused the `language file` command (the file changed or went away
/// after this process validated it), or `None` when it ran clean or was not issued.
fn language_file_failure(out: &str) -> Option<String> {
    command_failures(out)
        .into_iter()
        .find_map(|(command, reason)| reason.filter(|_| command.starts_with("language file ")))
}

/// The diagnostic the console printed for the command `line`, or `None` when it
/// ran clean.  `Some` for a command whose echo never appears at all — a script
/// that stopped early did not apply it.
fn command_failure(out: &str, line: &str) -> Option<String> {
    match command_failures(out).remove(line) {
        Some(reason) => reason,
        None => Some(SCRIPT_NOT_REACHED.into()),
    }
}

/// [`command_failure`]'s answer for a command whose echo never appears.
const SCRIPT_NOT_REACHED: &str = "the console script did not reach this directive";

/// The reason the pipeline REFUSED the directive that lowered to `line`, or
/// `None` when it was not refused.
///
/// A `flow` override cannot be applied when the `override flow` command runs —
/// there is no IR yet — so the console accepts it, tries it at flow time and, if
/// `Funcdata::overrideFlow` will not take it, prints `Rejected <command>:
/// <reason>` after the `decompile`.  Matching on the command's own spelling is
/// what pairs the line back to the directive that sent it.
fn pipeline_refusal(out: &str, line: &str) -> Option<String> {
    let prefix = format!("Rejected {line}: ");
    for raw in out.lines() {
        let text = console_text(raw.trim());
        if let Some(reason) = text.strip_prefix(&prefix) {
            let reason = reason.trim();
            if !reason.is_empty() {
                return Some(reason.to_string());
            }
        }
    }
    None
}

/// The per-function abort the console reported by RAISING on the `decompile`
/// command, rather than by swallowing it into the `Skipping` notice
/// ([`find_pipeline_failure`]).
///
/// Both leave the same thing behind — the previous, un-decompiled `Funcdata`,
/// which `print C` renders as a brace-matched shell — so a text-surface caller
/// that reads only stdout cannot tell either from a genuinely empty function.
/// The JSON surface has always reported this one (it drives the engine in
/// process and sees the error directly); the text surface exited 0 with an empty
/// body and an empty stderr.
fn decompile_command_failure(out: &str) -> Option<String> {
    match command_failure(out, "decompile") {
        Some(reason) if reason != SCRIPT_NOT_REACHED => Some(reason),
        _ => None,
    }
}

/// Why `print C` refused to render, e.g. a function whose rendering ran past
/// what the drive left of `--max-fn-seconds`; `None` when it did not refuse.
fn print_command_failure(out: &str) -> Option<String> {
    match command_failure(out, "print C") {
        Some(reason) if reason != SCRIPT_NOT_REACHED => Some(reason),
        _ => None,
    }
}

/// The engine's panic, as `<location> <message>`, read off its stderr.
fn engine_panic(stderr: &str) -> Option<String> {
    let mut lines = stderr.lines();
    let at = lines.find_map(|line| line.split_once("panicked at ").map(|(_, at)| at.trim()))?;
    let message = lines.next().map(str::trim).unwrap_or_default();
    Some(
        format!("{} {message}", at.trim_end_matches(':'))
            .trim_end()
            .to_string(),
    )
}

/// The function the console last announced (`Decompiling <name>`), so a failure
/// report names the same function the JSON surface's does.
fn decompiling_name(out: &str) -> Option<String> {
    out.lines().rev().find_map(|raw| {
        console_text(raw.trim())
            .strip_prefix("Decompiling ")
            .map(|n| n.trim().to_string())
    })
}

/// Owns a private output file, closing its handle before the console opens it.
fn temp_path(prefix: &str, suffix: &str) -> Result<tempfile::TempPath, String> {
    tempfile::Builder::new()
        .prefix(prefix)
        .suffix(suffix)
        .tempfile()
        .map(|file| file.into_temp_path())
        .map_err(|error| format!("could not create temporary output file: {error}"))
}

/// One `unlace decompile` run: the rendered C, the optional `--regions` dump, and
/// — when the pipeline aborted for the requested function — the failure report
/// (`unlace decompile` exits non-zero on it; see `docs/cli.md`).
struct DecompileOutcome {
    c: String,
    regions: Option<String>,
    /// The `phase status` dump for `--trace`.
    trace: Option<String>,
    /// The Graphviz DOT dump for `--cfg-dot`.
    cfg_dot: Option<String>,
    failure: Option<String>,
    /// One row per `--assert` directive, recovered from the transcript.
    assertions: Vec<unlace_console::assertions::Outcome>,
    /// The name the console decompiled under, for a diagnostic that has to say
    /// which function it is about -- `--addr` selection names an address, and
    /// the transcript is where the resolved name lives on this surface.
    name: String,
    /// The function an `--addr` selection lands inside, when not at an entry.
    interior: Option<crate::interior::Interior>,
    /// (unlace #1288) The note for a selection past the end of the flow of the
    /// function in front of it.
    past_flow: Option<String>,
}

/// Run the decompile and return its [`DecompileOutcome`].
fn decompile(args: &DecompileArgs) -> Result<DecompileOutcome, String> {
    let binary = std::fs::canonicalize(&args.binary)
        .map_err(|_| format!("binary not found: {}", args.binary))?;
    let binary = binary.to_string_lossy().to_string();
    reject_unquotable("binary path", &binary)?;
    for rules in &args.rules {
        reject_unquotable("rule file path", rules)?;
    }

    let engine = match &args.decomp_dbg {
        Some(d) if !Path::new(d).exists() => {
            return Err(format!("decomp_dbg not found at {d} (--decomp-dbg)"));
        }
        Some(d) => paths::Program {
            path: PathBuf::from(d),
            subcommand: None,
        },
        None => paths::decomp_dbg()?,
    };
    let pinned_by = match &args.decomp_dbg {
        Some(_) => Some("--decomp-dbg"),
        None => paths::pinned_by("UNLACE_DECOMP_DBG"),
    };

    let specs = match &args.sleighpath {
        Some(s) => PathBuf::from(s),
        None => paths::require_specs_dir()?,
    };

    let mut by_address = args.by_address;
    if !by_address && looks_like_addr(&args.target) {
        by_address = true;
    }

    let out_path = temp_path("unlace_c_", ".c")?;
    let regions_path = if args.regions {
        Some(temp_path("unlace_regions_", ".txt")?)
    } else {
        None
    };
    let trace_path = if args.trace {
        Some(temp_path("unlace_trace_", ".txt")?)
    } else {
        None
    };
    let cfg_dot_path = if args.cfg_dot {
        Some(temp_path("unlace_cfgdot_", ".dot")?)
    } else {
        None
    };
    // These are ours, but their directory is the caller's `TMPDIR`.
    reject_unquotable("temp directory", &out_path.display().to_string())?;
    if let Some(cp) = &cfg_dot_path {
        reject_unquotable("temp directory", &cp.display().to_string())?;
    }
    if let Some(rp) = &regions_path {
        reject_unquotable("temp directory", &rp.display().to_string())?;
    }
    if let Some(tp) = &trace_path {
        reject_unquotable("temp directory", &tp.display().to_string())?;
    }
    if let Some(file) = &args.language_file {
        reject_unquotable("language file path", &file.path)?;
    }

    // (unlace, RE-need `analysis-generated-function-name`) The driver defaults, split
    // in two. `base` is what this surface injects on the FIRST attempt — the DIV-15
    // Listing and the DIV-120 instruction-budget policy, neither of which touches the
    // entry set.
    // `discovery` is the DIV-20/DIV-68 non-x86-64 bundle the IN-PROCESS drivers also
    // inject (`decompile_all::load_program`), and it is held back for a second attempt
    // rather than injected up front.
    //
    // Held back because the bundle is not free: it changes the ENTRY SET, and the
    // entries it adds are not all real. On i386 and PPC64 the prologue matcher seeds a
    // start a few bytes inside a function it already knew (PPC64 ELFv2's local entry
    // point, 8 bytes past the global one), and `funcboundflow` then truncates the outer
    // function's flow at that seed — so injecting it unconditionally would turn a
    // correct `unlace decompile __do_global_ctors_aux` body into an empty husk on every
    // non-x86-64 image. Measured, not assumed: a before/after sweep over every function
    // of all 33 non-x86-64 fixtures found 8 such truncations and no other difference.
    //
    // So the wider inventory is paid for only where it is the ANSWER: a by-name
    // selection that missed. That is exactly the reported gap — `unlace functions` prints
    // a discovery-generated name that `unlace decompile` then refuses — and nothing that
    // already resolved changes at all.
    let full = decompile_all::driver_default_options(&binary, true, true, &args.options);
    let (base, discovery): (Vec<_>, Vec<_>) = full
        .into_iter()
        .partition(|(name, _)| matches!(*name, "listing" | "errortoomanyinstructions"));

    // The selected function's name, or `None` for an `--addr` run — what decides
    // whether a `<func>::`-qualified directive binds to the selection.
    let selected: Option<&str> = if by_address {
        None
    } else {
        Some(args.target.as_str())
    };
    let attempt = |injected: &[(&'static str, &'static str)], defer_fast_funcdisc: bool| {
        let script = build_script_for_input(
            args,
            &binary,
            by_address,
            &out_path,
            injected,
            defer_fast_funcdisc,
            regions_path.as_deref(),
            trace_path.as_deref(),
            cfg_dot_path.as_deref(),
        );

        let mut cmd = engine.command();
        cmd.arg("-s").arg(&specs).env("SLEIGHHOME", &specs);
        match args.max_fn_memory {
            Some(0) => {}
            Some(mib) => {
                cmd.arg("--max-fn-memory").arg(mib.to_string());
            }
            None => {
                cmd.arg("--max-fn-memory").arg("cgroup");
            }
        }
        if args.max_fn_seconds > 0 {
            cmd.arg("--max-fn-seconds")
                .arg(args.max_fn_seconds.to_string());
        }
        cmd.env(
            buildstamp::PARENT_ENV,
            buildstamp::identity(buildstamp::ChildKind::Engine),
        );
        match args.isa {
            Some(isa) => {
                cmd.env(ARM_ISA_ENV, isa.as_str());
            }
            None => {
                cmd.env_remove(ARM_ISA_ENV);
            }
        }
        // `--engine cpp|rust` (accepted for the Python tools' invocations; `rust`
        // is the only engine) reaches the console as `UNLACE_ENGINE`.
        if let Some(engine) = &args.engine {
            cmd.env("UNLACE_ENGINE", engine);
        }
        crate::loadtime::apply_to_command(&mut cmd, &args.options, args.slice.as_deref());
        let output = cmd
            .stdin(std::process::Stdio::piped())
            .stdout(std::process::Stdio::piped())
            .stderr(std::process::Stdio::piped())
            .spawn()
            .and_then(|mut child| {
                if let Some(mut sin) = child.stdin.take() {
                    let _ = sin.write_all(script.as_bytes());
                }
                child.wait_with_output()
            })
            .map_err(|e| (format!("failed to run decomp_dbg: {e}"), false))?;

        let stdout_text = String::from_utf8_lossy(&output.stdout).into_owned();
        let stderr_text = buildstamp::report(
            buildstamp::ChildKind::Engine,
            String::from_utf8_lossy(&output.stderr).into_owned(),
            "decomp_dbg",
            &engine.path,
            pinned_by,
        );
        let forwarded = |line: &&str| {
            line.starts_with("[unlace target] ")
                || line.starts_with("[unlace] MH_FILESET: ")
                || line.starts_with("[unlace typelib] ")
        };
        for note in stderr_text.lines().filter(forwarded) {
            unlace_base::notes::say_once(&binary, note);
        }
        if unlace_base::env::var_os("UNLACE_CALLEEPURGE_DEBUG").is_some() {
            for line in stderr_text
                .lines()
                .filter(|l| l.starts_with("calleepurge: "))
            {
                eprintln!("{line}");
            }
        }
        let combined = format!("{stdout_text}\n{stderr_text}");
        for sentence in unlace_console::declaredbytes::from_transcript(&stdout_text) {
            unlace_base::notes::say_once(&binary, &format!("warning: {sentence}"));
        }
        for line in crate::fid::report::from_transcript(&stdout_text) {
            unlace_base::notes::say_once(&binary, line);
        }
        if let Some(msg) = check_errors(
            &combined,
            &args.target,
            &binary,
            by_address,
            !args.raw_image,
        ) {
            // Widening the inventory cannot rescue a refused `--option`, and one
            // can look like a name miss: `option noreturn <not a function>`
            // puts `Unknown function name:` in the transcript.
            let retryable = !by_address
                && is_unknown_function(&combined)
                && option_failure(&combined).is_none();
            return Err((msg, retryable));
        }

        let mut c_text = String::new();
        if let Ok(mut fh) = std::fs::File::open(&out_path) {
            let _ = fh.read_to_string(&mut c_text);
        }
        let c_text = trim_newlines(&c_text);
        if c_text.trim().is_empty() {
            // An EXTERNAL, not a failure: the selected entry has no mapped bytes
            // because its definition lives in another module (a relocatable
            // object's undefined symbol). Those carry an
            // address only so a call to one renders by name. Say so, rather than
            // dumping a console transcript whose "Unable to load N bytes" reads
            // like a decompiler defect. The whole-binary surfaces answer the same
            // way through `unlace_console::project::decompile_targets`, which asks
            // the engine directly (`ConsoleProgram::entry_bytes_mapped`); this
            // path drives `decomp_dbg` as a subprocess and so reads its
            // provenance-specific report.
            if !args.raw_image && is_undefined_external_entry(&combined) {
                return Ok(DecompileOutcome {
                    c: format!(
                        "// {}: external symbol -- no code at this address in this module",
                        args.target
                    ),
                    regions: None,
                    trace: None,
                    cfg_dot: None,
                    failure: None,
                    assertions: assertion_outcomes(&stdout_text, &args.assertions, selected),
                    name: args.target.clone(),
                    interior: None,
                    past_flow: None,
                });
            }
            if let Some(reason) = print_command_failure(&stdout_text) {
                let func = decompiling_name(&stdout_text).unwrap_or_else(|| args.target.clone());
                return Err((
                    format!("decompilation failed for {func} in {binary}: {reason}"),
                    false,
                ));
            }
            if let Some(panic) = engine_panic(&stderr_text) {
                let func = decompiling_name(&stdout_text).unwrap_or_else(|| args.target.clone());
                return Err((
                    format!("decompiler panicked on {func} in {binary}: {panic}"),
                    false,
                ));
            }
            return Err((
                format!(
                    "no C output for {:?} in {}; decompiler said:\n{}",
                    args.target,
                    binary,
                    combined.trim().chars().take(2000).collect::<String>()
                ),
                false,
            ));
        }
        // The pipeline aborted for this function: the console kept the session
        // alive and `print C` rendered the un-decompiled shell above, so the C
        // is non-empty and only this notice distinguishes the failure from a
        // genuinely empty function.  Report it; `run` exits non-zero.
        let failure = find_pipeline_failure(&stdout_text)
            .or_else(|| {
                let reason = decompile_command_failure(&stdout_text)?;
                let func = decompiling_name(&stdout_text).unwrap_or_else(|| args.target.clone());
                Some((func, reason))
            })
            .map(|(func, reason)| {
                let mut msg = format!("decompilation failed for {func} in {binary}: {reason}");
                let note = stderr_text.trim();
                if !note.is_empty() {
                    msg.push_str("\nnote: decomp_dbg stderr:\n");
                    msg.push_str(&note.chars().take(2000).collect::<String>());
                }
                msg
            });

        let mut regions_text = None;
        if let Some(rp) = &regions_path {
            let mut buf = String::new();
            if let Ok(mut fh) = std::fs::File::open(rp) {
                let _ = fh.read_to_string(&mut buf);
            }
            regions_text = Some(trim_newlines(&buf));
        }
        let mut trace_text = None;
        if let Some(tp) = &trace_path {
            let mut buf = String::new();
            if let Ok(mut fh) = std::fs::File::open(tp) {
                let _ = fh.read_to_string(&mut buf);
            }
            trace_text = Some(trim_newlines(&buf));
        }
        let mut cfg_dot_text = None;
        if let Some(cp) = &cfg_dot_path {
            let mut buf = String::new();
            if let Ok(mut fh) = std::fs::File::open(cp) {
                let _ = fh.read_to_string(&mut buf);
            }
            cfg_dot_text = Some(trim_newlines(&buf));
        }
        Ok(DecompileOutcome {
            c: c_text,
            regions: regions_text,
            cfg_dot: cfg_dot_text,
            trace: trace_text,
            failure,
            assertions: assertion_outcomes(&stdout_text, &args.assertions, selected),
            name: decompiling_name(&stdout_text).unwrap_or_else(|| args.target.clone()),
            interior: crate::interior::from_transcript(&stdout_text),
            past_flow: crate::interior::past_flow_from_transcript(&stdout_text),
        })
    };

    let deferred = args.defer_fast_funcdisc && !by_address;
    let mut result = attempt(&base, deferred);
    if deferred && matches!(&result, Err((_, true))) {
        result = attempt(&base, false);
    }
    if !discovery.is_empty() && matches!(&result, Err((_, true))) {
        let widened: Vec<(&'static str, &'static str)> =
            base.iter().chain(discovery.iter()).copied().collect();
        result = attempt(&widened, false);
    }
    result.map_err(|(message, _)| message)
}

/// Python `str.strip("\n")`: trim leading/trailing newline characters only.
fn trim_newlines(s: &str) -> String {
    s.trim_matches('\n').to_string()
}

/// The text surface of `unlace decompile`.
///
/// Exit codes: `0` on success, `1` on a run-level error (no such function, no
/// architecture, no C at all) **and on a per-function pipeline abort** — the
/// recovered shell still goes to stdout (its comment names the reason), the
/// reason goes to stderr.  `docs/cli.md` documents the contract.
pub fn run(args: &DecompileArgs) -> i32 {
    match decompile(args) {
        Ok(out) => {
            let text = if args.cfg_dot {
                format!("{}\n", out.cfg_dot.unwrap_or_default())
            } else if args.regions {
                format!(
                    "{}\n\n// ==== unlace regions (S7) ====\n{}\n",
                    out.c,
                    out.regions.unwrap_or_default()
                )
            } else {
                format!("{}\n", out.c)
            };
            // The pipeline verdict is reported and returned whether or not stdout
            // survived (DIV-45): a closed reader is not evidence the decompile
            // worked.  Emitting first keeps the stdout-then-stderr order.
            let written = crate::output::emit(&text);
            if let Some(trace) = &out.trace {
                eprintln!("// ==== unlace maturity trace ====\n{trace}");
            }
            if let Some(interior) = &out.interior {
                eprintln!("{}", crate::interior::note(interior));
            }
            if let Some(note) = &out.past_flow {
                eprintln!("{note}");
            }
            // (unlace outlang) The Rust back-end's unrepresentable gotos, counted
            // off the rendered text: this surface drives `decomp_dbg` as a
            // subprocess, so an in-engine counter would never reach it.
            let gotos = unlace_decomp::langrust::count_unstructured_gotos(&out.c);
            decompile_all::report_unstructured_goto_sites(&[(out.name.as_str(), gotos)]);
            // A rejected assertion is reported and the run continues;
            // `--assert-strict` makes it the verdict.  A directive the PIPELINE
            // refused is the verdict either way: the C above was produced without
            // it, and nothing in the C says so.
            let rejected = decompile_all::report_rejected_assertions(&out.assertions);
            let refused = decompile_all::any_refused_assertion(&out.assertions);
            let status = match out.failure {
                Some(msg) => {
                    eprintln!("error: {msg}");
                    note_budget_flag(&msg);
                    1
                }
                None if refused => 1,
                None if args.assert_strict && rejected => 1,
                None => 0,
            };
            match written {
                Ok(()) => status,
                Err(err) => crate::output::status_after(err, status),
            }
        }
        Err(e) => {
            eprintln!("error: {e}");
            note_budget_flag(&e);
            1
        }
    }
}

/// Points a budget-stopped run at the flag that sets the budget.
fn note_budget_flag(msg: &str) {
    if msg.contains("per-function decompile budget exceeded") {
        eprintln!("note: --max-fn-seconds N sets the budget (0 disables it)");
    }
}

// --- command entry point -----------------------------------------------------

/// Entry point for `unlace decompile`: parse the command line, then render either
/// the text surface ([`run`], a `decomp_dbg` subprocess) or, with `--json`, the
/// `decompile-all` record shape for the one selected function ([`run_in_process`]).
pub fn main(argv: &[String]) -> Result<i32, String> {
    let mut binary: Option<String> = None;
    let mut target: Option<String> = None;
    let mut addr = false;
    let mut json = false;
    let mut apply_rust_signatures: Option<String> = None;
    let mut bfd_target: Option<String> = None;
    let mut raw = false;
    let mut regions = false;
    let mut trace = false;
    let mut cfg_dot = false;
    let mut options: Vec<(String, String)> = Vec::new();
    // The `--option` / `--language` tokens in argv order, replayed verbatim into
    // the `--json` argument list: option precedence and the `--language auto`
    // policy are position-sensitive, so both surfaces resolve them in one parser
    // rather than in two that can disagree.
    let mut forwarded: Vec<String> = Vec::new();
    let mut saw_language = false;
    let mut language_file: Option<crate::langfile::LanguageFile> = None;
    let mut mode: Option<String> = None;
    let mut kasserts: Vec<String> = Vec::new();
    let mut rules: Vec<String> = Vec::new();
    let mut func_decls: Vec<crate::funcdecl::FuncDecl> = Vec::new();
    let mut assertions: Vec<unlace_console::assertions::Directive> = Vec::new();
    let mut assert_strict = false;
    let mut project_file: Option<String> = None;
    let mut types: Vec<String> = Vec::new();
    let mut types_cpp: Option<String> = None;
    let mut decomp_dbg: Option<String> = None;
    let mut engine: Option<String> = None;
    let mut sleighpath: Option<String> = None;
    let mut slice: Option<String> = None;
    let mut isa: Option<ArmIsa> = None;
    let mut raw_image = false;
    let mut base: Option<u64> = None;
    let mut max_fn_memory: Option<u64> = None;
    let mut max_fn_seconds = unlace_console::project::DEFAULT_FN_BUDGET_SECONDS;
    let mut record_flag: Option<&str> = None;

    let mut i = 0;
    while i < argv.len() {
        let a = argv[i].as_str();
        match a {
            "--addr" => addr = true,
            "--json" => json = true,
            "--apply-rust-signatures" => {
                let value = take_value(argv, &mut i, "--apply-rust-signatures")?;
                if apply_rust_signatures.replace(value).is_some() {
                    return Err("duplicate --apply-rust-signatures".into());
                }
            }
            "--no-vars" => {
                record_flag = Some("--no-vars");
                forwarded.push(a.into());
            }
            "--omit" => {
                let value = take_value(argv, &mut i, "--omit")?;
                decompile_all::Omit::default().add(&value)?;
                record_flag = Some("--omit");
                forwarded.push("--omit".into());
                forwarded.push(value);
            }
            "--tokens" | "--storage" => {
                record_flag = Some(a);
                forwarded.push(a.into());
            }
            "--raw" => raw = true,
            "--raw-image" => raw_image = true,
            "--base" => base = Some(parse_cli_address(&take_value(argv, &mut i, "--base")?)?),
            "--regions" => regions = true,
            "--trace" => trace = true,
            "--cfg-dot" => cfg_dot = true,
            "--slice" => slice = Some(take_value(argv, &mut i, "--slice")?),
            "--isa" => {
                isa = ArmIsa::parse(&take_value(argv, &mut i, "--isa")?)?;
                forwarded.push("--isa".into());
                forwarded.push(isa.map_or("auto", ArmIsa::as_str).into());
            }
            "--target" => bfd_target = Some(take_value(argv, &mut i, "--target")?),
            "--option" => {
                options.push(crate::args::take_option(argv, &mut i)?);
                forwarded.extend(argv[i - 2..=i].iter().cloned());
            }
            "--language" => {
                let value = take_value(argv, &mut i, "--language")?;
                if let Some(lang) = decompile_all::parse_language_flag(&value)? {
                    options.push(("setlanguage".into(), lang.into()));
                }
                forwarded.push("--language".into());
                forwarded.push(value);
                saw_language = true;
            }
            "--language-file" => {
                let value = take_value(argv, &mut i, "--language-file")?;
                let file = crate::langfile::LanguageFile::read(&value)?;
                options.push(("setlanguage".into(), file.base_name().into()));
                if language_file.replace(file).is_some() {
                    return Err("duplicate --language-file".into());
                }
                forwarded.push("--language-file".into());
                forwarded.push(value);
            }
            "--mode" => mode = Some(take_value(argv, &mut i, "--mode")?),
            "--rules" => {
                let value = take_value(argv, &mut i, "--rules")?;
                rules.push(value.clone());
                forwarded.push("--rules".into());
                forwarded.push(value);
            }
            "--kassert" => kasserts.push(take_value(argv, &mut i, "--kassert")?),
            "--define-function" => {
                let value = take_value(argv, &mut i, "--define-function")?;
                func_decls.extend(crate::funcdecl::parse_flag(&value)?);
                forwarded.push("--define-function".into());
                forwarded.push(value);
            }
            "--assert" => {
                let value = take_value(argv, &mut i, "--assert")?;
                assertions.extend(crate::assertdecl::parse_flag(&value)?);
                forwarded.push("--assert".into());
                forwarded.push(value);
            }
            "--assert-strict" => {
                assert_strict = true;
                forwarded.push("--assert-strict".into());
            }
            "--project" => {
                let value = take_value(argv, &mut i, "--project")?;
                project_file = Some(value.clone());
                forwarded.push("--project".into());
                forwarded.push(value);
            }
            "--types" => {
                types.push(take_value(argv, &mut i, "--types")?);
                forwarded.extend(argv[i - 1..=i].iter().cloned());
            }
            "--types-cpp" => {
                types_cpp = Some(take_value(argv, &mut i, "--types-cpp")?);
                forwarded.extend(argv[i - 1..=i].iter().cloned());
            }
            "--decomp-dbg" => decomp_dbg = Some(take_value(argv, &mut i, "--decomp-dbg")?),
            "--max-fn-memory" => {
                let value = take_value(argv, &mut i, "--max-fn-memory")?;
                max_fn_memory = Some(decompile_all::parse_max_fn_memory(&value)?);
                forwarded.push("--max-fn-memory".into());
                forwarded.push(value);
            }
            "--max-fn-seconds" => {
                let value = take_value(argv, &mut i, "--max-fn-seconds")?;
                max_fn_seconds = value
                    .trim()
                    .parse::<u64>()
                    .map_err(|_| format!("invalid --max-fn-seconds value {value:?}"))?;
                forwarded.push("--max-fn-seconds".into());
                forwarded.push(value);
            }
            "--engine" => engine = Some(take_value(argv, &mut i, "--engine")?),
            "--sleighpath" => sleighpath = Some(take_value(argv, &mut i, "--sleighpath")?),
            "-h" | "--help" => {
                usage();
                return Ok(0);
            }
            "--timeout" => {
                take_value(argv, &mut i, "--timeout")?;
            }
            s if s.starts_with("--") => return Err(format!("unknown option {s}")),
            _ => {
                if binary.is_none() {
                    binary = Some(a.to_string());
                } else if target.is_none() {
                    target = Some(a.to_string());
                } else {
                    return Err(format!("unexpected argument {a:?}"));
                }
            }
        }
        i += 1;
    }

    let (binary, target) = match (binary, target) {
        (Some(b), Some(t)) => (b, t),
        _ => {
            return Err("decompile requires <binary> and <func>".into());
        }
    };
    if apply_rust_signatures.is_some() && engine.is_some() {
        return Err("--engine is not supported with --apply-rust-signatures".into());
    }
    addr |= looks_like_addr(&target);
    // An IDA database (`crate::idb`) loads in-process as its segments, and a name
    // selects through the database's own function list: a raw load selects by address.
    let idb = raw_image && crate::idb::is_database_file(&binary);
    let target = if idb && !addr {
        addr = true;
        crate::idb::function_address(&binary, &target)?
    } else {
        target
    };

    if raw_image {
        if bfd_target
            .as_deref()
            .is_none_or(|value| value.trim().is_empty())
        {
            return Err("--raw-image requires --target <SLEIGH-language-id>".into());
        }
        if base.is_none() {
            return Err("--raw-image requires --base <address>".into());
        }
        if parse_cli_address(&target).is_err() {
            return Err("--raw-image requires a numeric entry address".into());
        }
        if slice.is_some() {
            return Err("--slice does not apply to --raw-image input".into());
        }
        addr = true;
    } else if base.is_some() {
        return Err("--base requires --raw-image".into());
    }

    if json || idb || apply_rust_signatures.is_some() {
        if !json && record_flag.is_some() {
            return Err("--omit, --no-vars, --tokens and --storage require --json".into());
        }
        // Refused, not ignored: each of these is a `decomp_dbg` transcript the
        // in-process JSON path never produces, and silently dropping half a
        // request is the failure mode `--json` exists to end.
        for (flag, requested) in [
            ("--raw", raw),
            ("--regions", regions),
            ("--trace", trace),
            ("--cfg-dot", cfg_dot),
            ("--kassert", !kasserts.is_empty()),
            ("--decomp-dbg", decomp_dbg.is_some()),
        ] {
            if requested {
                let request = if apply_rust_signatures.is_some() {
                    "--apply-rust-signatures"
                } else if json {
                    "--json"
                } else {
                    "an IDA database"
                };
                return Err(format!("{flag} is not supported with {request}"));
            }
        }
        return Ok(run_in_process(&SingleRequest {
            binary: &binary,
            json,
            apply_rust_signatures: apply_rust_signatures.as_deref(),
            target: &target,
            by_address: addr,
            forwarded: &forwarded,
            mode: mode.as_deref(),
            bfd_target: bfd_target.as_deref(),
            slice: slice.as_deref(),
            sleighpath: sleighpath.as_deref(),
            raw_image,
            base,
        }));
    }

    if let Some(flag) = record_flag {
        return Err(format!("{flag} selects --json record keys; add --json"));
    }
    decompile_all::check_rule_files(&rules)?;
    // `--project`: its overrides come first, so a command-line --assert still wins.
    if let Some(project) = &project_file {
        let mut stored = Vec::new();
        for directive in crate::project::directives_for(project, &binary)? {
            stored.extend(crate::assertdecl::parse_flag(&directive)?);
        }
        stored.append(&mut assertions);
        assertions = stored;
    }
    let sdk = crate::sdktypes::directives(
        &binary,
        &options,
        slice.as_deref(),
        bfd_target.as_deref(),
        types_cpp.as_deref(),
    )?;
    let assertions = crate::assertdecl::with_types(&types, types_cpp.as_deref(), sdk, assertions)?;

    if let Some(file) = &language_file {
        file.check_selection(saw_language, &options)?;
    }

    // (unlace outlang, DIV-80) The auto policy -- follow the binary when the caller
    // named no language. See `decompile_all::detected_output_language`.
    if !saw_language
        && crate::loadtime::explicit_output_language(&options).is_none()
        && let Some(lang) = decompile_all::detected_output_language(&binary, &options)
    {
        options.push(("setlanguage".into(), lang.into()));
    }

    let explicit_fast_funcdisc = options.iter().any(|(name, _)| name == "fast_funcdisc");
    // Omitted mode is the size-driven `auto` policy. Preset overrides are
    // prepended so explicit `--option` pairs remain last-write-wins in the
    // generated console script.
    options = decompile_all::mode_options_for_binary(mode.as_deref(), &binary, options)?;
    if addr && !explicit_fast_funcdisc {
        options.push(("fast_funcdisc".into(), "off".into()));
    }
    let defer_fast_funcdisc = defers_fast_funcdisc(&target, explicit_fast_funcdisc, &options);

    Ok(run(&DecompileArgs {
        binary,
        target,
        by_address: addr,
        bfd_target,
        raw,
        regions,
        trace,
        cfg_dot,
        options,
        language_file,
        rules,
        defer_fast_funcdisc,
        kasserts,
        func_decls,
        assertions,
        assert_strict,
        decomp_dbg,
        sleighpath,
        engine,
        slice,
        isa,
        raw_image,
        base,
        max_fn_memory,
        max_fn_seconds,
    }))
}

fn usage() {
    eprintln!(
        "usage: unlace decompile <binary> <name|0xaddr> [--addr] [--json] [--raw] [--regions] [--trace] [--cfg-dot] \\\n\
         \x20                     [--no-vars] [--omit aliases,line_mappings,variables,types] \\\n\
         \x20                     [--tokens] [--storage] \\\n\
         \x20                     [--language auto|c|rust|java|go | --language-file FILE] \\\n\
         \x20                     [--mode auto|reliable|aggressive|fast] \\\n\
         \x20                     [--option N V].. [--rules FILE].. [--kassert ARGS].. \\\n\
         \x20                     [--define-function S[-E][=N]|@FILE].. \\\n\
         \x20                     [--assert DIRECTIVE|@FILE].. [--assert-strict] [--project FILE] \\\n\
         \x20                     [--types FILE.h|DIR].. [--types-cpp CC] \\\n\
         \x20                     [--isa auto|arm|thumb] [--slice ARCH] [--target T] \\\n\
         \x20                     [--sleighpath D] [--decomp-dbg P] [--max-fn-memory MiB]\n\
         \x20                     [--max-fn-seconds N] [--raw-image --target T --base VMA]\n\
         \n\
         Decompile ONE function.  The target is a name, or an address with --addr\n\
         (a `0x`-prefixed target implies it); an address inside another function is\n\
         decompiled as asked, with a note naming that function.  --json emits the\n\
         decompile-all record for that one function\n\
         ({{binary,count,functions:[{{name,address,code,error,warnings,variables,..}}]}});\n\
         without it, the C text alone.  With --json, --omit KEY[,KEY].. leaves those\n\
         record collections out (aliases, line_mappings, variables -- with\n\
         stack_objects -- and types) and lists them in a top-level `omitted` array;\n\
         name and address always stay.  --no-vars skips the variable extraction\n\
         and leaves `variables` empty, as on decompile-all.  --tokens adds the token\n\
         source map (`tokens`, `tokens_error`): every token of `code` with its line,\n\
         column, kind and the instruction, callee or variable it stands for.\n\
         --storage adds `storage` to every variable: the registers and stack slots\n\
         that hold it, each with the instruction address ranges in which it does.\n\
         `unlace map` answers span and address questions from the two.\n\
         --trace prints, on stderr after the C, the maturity the function's last\n\
         pass reached and the facts settled there (`phase status`); stdout is unchanged.\n\
         --cfg-dot prints the function's basic-block graph as Graphviz DOT on stdout\n\
         instead of the C (pipe it to `dot -Tsvg`); it is refused with --json.\n\
         \n\
         --apply-rust-signatures PATH trusts an explicit hashed Rust signature manifest;\n\
         only a complete unique profile and both-bank name/address agreement propose names.\n\
         It shares the in-process load for text and JSON and refuses byte overlays,\n\
         image-selection overrides and transcript-only controls.\n\
         \n\
         --option NAME VALUE (repeatable) flips one phase-model decision for this run;\n\
         `unlace catalog` lists them and `unlace docs options` explains the tiers.\n\
         --mode applies an option preset (`unlace modes`); omitted, `auto` picks one by\n\
         input size.  Explicit --option values win over the preset.\n\
         --language selects the output language; omitted, it follows the binary.\n\
         --language-file FILE prints through a language flavour instead: a TOML file\n\
         that names a base language and overrides keyword and operator spellings,\n\
         forms and capabilities of its profile (`unlace docs cli`, \"Language files\").\n\
         --rules FILE (repeatable) adds the p-code rewrite rules of a TOML rule file to\n\
         the rule pools for this run (`unlace docs cli`, \"--rules FILE\").\n\
         --max-fn-memory MiB stops the decompile once the process doing it holds\n\
         more than MiB resident and the function added 64 MiB or more, and\n\
         reports that instead of being killed by the system (omitted: under a\n\
         cgroup memory cap, once it grew by the cap's margin and the cgroup\n\
         nears its cap; 0 disables).\n\
         --max-fn-seconds N stops the decompile once following its flow and\n\
         analyzing it have run N seconds and reports that, naming the pass it\n\
         was in (default 120, as with --json; 0 disables).\n\
         \n\
         --define-function <start[-end][=name] | @file> (repeatable) declares where a\n\
         function starts and ends: start names an entry discovery missed, the\n\
         exclusive end bounds its flow so it stops swallowing its neighbours.\n\
         \n\
         --assert <directive | @file> (repeatable) states a fact the engine could not\n\
         derive.  The vocabulary is function, typedef, prototype, data, param, return,\n\
         name, type, format, isolate, comment, flow, callee, callproto, readonly, volatile,\n\
         bytes -- for instance `prototype login int login(char *user,char *pw)`,\n\
         `type v2 char[16]`,\n\
         `name v2 credbuf`, `readonly 0x404028+8`, `flow 0x1405 return`.\n\
         `format <addr> hex|dec|oct|bin|char [<value>]` sets the form the constant\n\
         read at <addr> is printed in; `isolate <symbol>` keeps a local from being\n\
         merged with another.\n\
         `bytes <addr> <hex|@FILE>` overlays recovered plaintext -- what a packer\n\
         writes over itself -- onto the loaded image; the file on disk is untouched.\n\
         @FILE holds one per line with `#` comments, which is what makes an override\n\
         durable across invocations.  A directive the engine declines is reported and\n\
         the run still succeeds; --assert-strict makes it exit 1 instead.\n\
         --project FILE applies a project file (`unlace project`): its overrides go in\n\
         as --assert directives ahead of the command line's, which still win.\n\
         \n\
         --types <file.h | dir> (repeatable) loads C declarations for this run: each\n\
         function declaration is the prototype of the function or import of that\n\
         name, and each struct, union, enum and typedef is defined for `type` and\n\
         `data`.  The text must be preprocessed C; --types-cpp CC runs `CC -E` over\n\
         each header first (unlace runs no preprocessor otherwise).  A declaration\n\
         that does not parse is reported with its file and line and the rest still\n\
         apply; an --assert on the same function wins over the header.\n\
         \n\
         --sleighpath D and --decomp-dbg P override where this run reads the compiled\n\
         SLEIGH tree and which engine binary it drives; without them both are found\n\
         beside this executable (see `unlace docs cli`, and UNLACE_SPECS/UNLACE_DECOMP_DBG).\n\
         \n\
         Whole-binary runs are `unlace decompile-all` / `unlace functions`."
    );
}

// --- the shared one-function in-process surface ------------------------------

/// The shared in-process request: output form, selection, and every
/// flag `decompile-all` also understands.
pub(crate) struct SingleRequest<'a> {
    pub(crate) binary: &'a str,
    pub(crate) json: bool,
    pub(crate) apply_rust_signatures: Option<&'a str>,
    pub(crate) target: &'a str,
    pub(crate) by_address: bool,
    /// The `--option` / `--language` tokens, in argv order.
    pub(crate) forwarded: &'a [String],
    pub(crate) mode: Option<&'a str>,
    pub(crate) bfd_target: Option<&'a str>,
    pub(crate) slice: Option<&'a str>,
    pub(crate) sleighpath: Option<&'a str>,
    pub(crate) raw_image: bool,
    pub(crate) base: Option<u64>,
}

impl SingleRequest<'_> {
    /// The request as `decompile-all` arguments.
    ///
    /// The selection is expressed as a `decompile-all` argument list and re-parsed by
    /// [`decompile_all::parse_args`] on purpose: the mode presets, the `--language`
    /// auto policy, option precedence, the address-selection `fast_funcdisc` default
    /// and the per-function watchdog budget then all resolve exactly once, in the
    /// parser that owns them, instead of being re-derived here where they would
    /// drift.
    pub(crate) fn args(&self) -> Result<AllArgs, String> {
        let mut argv: Vec<String> = vec![self.binary.to_string()];
        if self.json {
            argv.push("--json".into());
        }
        if let Some(path) = self.apply_rust_signatures {
            argv.extend(["--apply-rust-signatures".into(), path.into()]);
        }
        if self.by_address {
            argv.push("--addr".into());
            argv.push(if looks_like_addr(self.target) {
                self.target.to_string()
            } else {
                format!("0x{}", self.target)
            });
        } else {
            argv.push("--functions".into());
            argv.push(self.target.to_string());
        }
        if self.raw_image {
            argv.push("--raw-image".into());
            argv.push("--base".into());
            argv.push(format!(
                "0x{:x}",
                self.base.expect("raw parser requires --base")
            ));
        }
        argv.extend(self.forwarded.iter().cloned());
        for (flag, value) in [
            ("--mode", self.mode),
            ("--target", self.bfd_target),
            ("--slice", self.slice),
            ("--sleighpath", self.sleighpath),
        ] {
            if let Some(value) = value {
                argv.push(flag.into());
                argv.push(value.to_string());
            }
        }
        let command = if self.apply_rust_signatures.is_some() {
            "decompile"
        } else {
            "decompile-all"
        };
        decompile_all::parse_args(&argv, command)
    }
}

/// `unlace decompile --json`: `decompile-all`'s in-process load narrowed to the one
/// selected function, emitted through `decompile-all`'s own serializer.
fn run_in_process(req: &SingleRequest) -> i32 {
    let args = match req.args() {
        Ok(args) => args,
        Err(e) => {
            eprintln!("error: {e}");
            return 2;
        }
    };
    // stdout carries a document either way: a caller that asked for JSON gets
    // JSON, with the reason in the run-level `error`, rather than an empty stream
    // it has to reconcile against a prose stderr line — the missing error channel
    // is half of why this flag exists. The verdict follows the document, matching
    // `run`'s stdout-then-stderr ordering.
    let (text, failure) = match decompile_one(&args, req.target) {
        Ok(answered) => answered,
        Err((message, declared)) => (
            if req.json {
                decompile_all::render_result_json(
                    &args.binary,
                    &[],
                    &args.options,
                    Some(&message),
                    &[],
                    &Default::default(),
                    &declared,
                    args.omit,
                    args.extra,
                )
            } else {
                String::new()
            },
            Some(message),
        ),
    };
    let status = crate::output::emit_with_status(&text, i32::from(failure.is_some()));
    if let Some(message) = failure {
        eprintln!("error: {message}");
    }
    status
}

/// One selected function decompiled over its own load.
pub(crate) struct Selected {
    pub(crate) funcs: Vec<unlace_console::project::FuncResult>,
    pub(crate) assertions: Vec<unlace_console::assertions::Outcome>,
    pub(crate) interior: crate::interior::Interiors,
    pub(crate) declared: crate::funcdecl::Declared,
    /// Why the run failed: the function's pipeline aborted, or a directive was
    /// refused. It is the document's run-level `error` too.
    pub(crate) failure: Option<String>,
    /// A directive was rejected, which `--assert-strict` makes the verdict.
    pub(crate) rejected: bool,
}

/// Load once, resolve the one selected function and decompile it.
///
/// A function whose pipeline aborted is a failed run here — the caller asked
/// about exactly that function. A failure to load or select keeps the
/// declarations' notes for the document that reports it.
pub(crate) fn decompile_selected(
    args: &AllArgs,
    target: &str,
) -> Result<Selected, (String, crate::funcdecl::Declared)> {
    let mut prog = decompile_all::load_program(args, DriverDefaults::Decompile)
        .map_err(|message| (message, Default::default()))?;
    let declared = crate::funcdecl::Declared::of(&prog);
    let targets = decompile_all::resolve_targets(&prog, args)
        .map_err(|message| (message, declared.clone()))?;
    let interior = crate::interior::selections(&prog, args, &targets);
    if targets.is_empty() {
        // Two different answers, and the caller acts on the difference: a binary
        // that yielded NOTHING is the whole-binary discovery failure (which names
        // a packer when it can see one), while a binary that yielded functions
        // but not this one is the text surface's "no function <name>".
        let message = if prog.function_entries_executable().is_empty() {
            decompile_all::zero_discovery_error(&args.binary)
                .unwrap_or_else(|| format!("no function {target:?} in {}", args.binary))
        } else {
            let hint = prog
                .resolve_entry(&unlace_console::engine::EntrySelector::Name(
                    target.to_string(),
                ))
                .err()
                .and_then(|error| decompile_all::name_miss_hint(&error))
                .unwrap_or_else(|| "for a stripped binary pass an address with --addr".to_string());
            format!("no function {target:?} in {}; {hint}", args.binary)
        };
        return Err((message, declared));
    }

    let funcs = decompile_all::decompile_entries(&mut prog, args, targets, false, true);
    let assertions = prog.assertion_outcomes();
    let mut failure = funcs.iter().find_map(|f| {
        f.error.as_ref().map(|reason| {
            format!(
                "decompilation failed for {} in {}: {reason}",
                f.name, args.binary
            )
        })
    });
    decompile_all::report_unstructured_gotos(&funcs);
    // A rejected assertion is reported and the run continues; `--assert-strict`
    // makes it the run's verdict (see `report_rejected_assertions`).
    let rejected = decompile_all::report_rejected_assertions(&assertions);
    // A directive the pipeline refused is the run's verdict AND belongs in the
    // document: the caller asked for a decompile under that directive and did not
    // get one, so the run-level `error` says so rather than leaving `assertions[]`
    // as the only place a reader could notice.
    if failure.is_none() && decompile_all::any_refused_assertion(&assertions) {
        failure = Some(format!(
            "--assert directive refused by the pipeline in {}",
            args.binary
        ));
    }
    Ok(Selected {
        funcs,
        assertions,
        interior,
        declared,
        failure,
        rejected,
    })
}

/// [`decompile_selected`], rendered as the requested text or JSON document.
///
/// Returns the rendered text plus the failure the caller reports on stderr and exits
/// `1` on, so `--json` cannot turn the text surface's non-zero verdict into a
/// success; the reason is in the document too, as the record's `error` and as
/// the run-level one.
fn decompile_one(
    args: &AllArgs,
    target: &str,
) -> Result<(String, Option<String>), (String, crate::funcdecl::Declared)> {
    let Selected {
        funcs,
        assertions,
        interior,
        declared,
        mut failure,
        rejected,
    } = decompile_selected(args, target)?;
    let text = if args.json {
        decompile_all::render_result_json(
            &args.binary,
            &funcs,
            &args.options,
            failure.as_deref(),
            &assertions,
            &interior,
            &declared,
            args.omit,
            args.extra,
        )
    } else {
        funcs
            .iter()
            .filter_map(|function| function.code.as_deref())
            .map(|code| {
                if code.ends_with('\n') {
                    code.to_string()
                } else {
                    format!("{code}\n")
                }
            })
            .collect::<String>()
    };
    if failure.is_none() && args.assert_strict && rejected {
        failure = Some(format!("--assert directive rejected in {}", args.binary));
    }
    Ok((text, failure))
}

#[cfg(test)]
mod tests;
