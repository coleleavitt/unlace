//! (unlace `antidebug`) Name a call to a well-known anti-debugging API.
//!
//! `IsDebuggerPresent()`, `ptrace(PTRACE_TRACEME, ...)`, the timing probes
//! (`rdtsc`, `QueryPerformanceCounter`, `GetTickCount`) and
//! `OutputDebugStringA` used as a debugger test all print as ordinary calls. The
//! C says nothing about why the program makes them. This pass recognises the
//! callee by name, from the call spec the flow pass recorded, and buffers one
//! warning per call site. It changes no statement, no type and no control flow.
//!
//! The output is a reviewable signal that evasion logic is present, not proof
//! that the binary is malicious: a legitimate licence check or a game's cheat
//! detection calls the same APIs.
//!
//! Ported from the archived master's `crates/unlace-passes/src/anti_debug_detect.rs`
//! (ROADMAP Phase E.4.3), which was declared there and never called. The roster
//! is the master's, unchanged, so it stays auditable as one match.
//!
//! `option antidebug off|warn`, default `off`: a heuristic scanner ships behind an
//! option. `off` leaves the flow pass untouched.

use unlace_base::error::{UnlaceError, UnlaceResult};

use crate::context::OpId;
use crate::funcdata::Funcdata;

/// Category of anti-debugging technique recognised at a call site.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum AntiDebugKind {
    /// Direct debugger-presence query (`IsDebuggerPresent`, ...).
    DebuggerCheck,
    /// Self-trace via `ptrace(PTRACE_TRACEME, ...)`.
    PtraceSelf,
    /// Timing-based detection (`rdtsc`, `QueryPerformanceCounter`, ...).
    TimingCheck,
    /// Debugger-channel side effect (`OutputDebugStringA`).
    OutputDebug,
}

impl AntiDebugKind {
    /// The words the warning uses for this category.
    pub fn label(self) -> &'static str {
        match self {
            AntiDebugKind::DebuggerCheck => "debugger check",
            AntiDebugKind::PtraceSelf => "ptrace self-trace",
            AntiDebugKind::TimingCheck => "timing probe",
            AntiDebugKind::OutputDebug => "debugger channel",
        }
    }
}

/// Classify a callee name as an anti-debug technique, or `None`. An explicit
/// match, so the roster stays auditable. Names are compared exactly, as the
/// flow pass records them.
pub fn classify_anti_debug(name: &str) -> Option<AntiDebugKind> {
    match name {
        "IsDebuggerPresent"
        | "CheckRemoteDebuggerPresent"
        | "NtQueryInformationProcess"
        | "NtSetInformationThread" => Some(AntiDebugKind::DebuggerCheck),
        "ptrace" => Some(AntiDebugKind::PtraceSelf),
        "rdtsc" | "GetTickCount" | "GetTickCount64" | "QueryPerformanceCounter" => {
            Some(AntiDebugKind::TimingCheck)
        }
        "OutputDebugStringA" | "OutputDebugStringW" => Some(AntiDebugKind::OutputDebug),
        _ => None,
    }
}

/// The warning text buffered at a matched call site.
pub fn warning_text(kind: AntiDebugKind, api: &str) -> String {
    format!("anti-debug probe: {api} ({})", kind.label())
}

/// (unlace `antidebug`) `antidebug off|warn` -- whether a call to an anti-debug
/// API is named.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum AntiDebugMode {
    /// Upstream: the call prints as any other call.
    #[default]
    Off,
    /// Buffer one warning per call site naming the probe.
    Warn,
}

impl crate::optionset::UnlaceOption for AntiDebugMode {
    const NAME: &'static str = "antidebug";
    crate::unlace_option_id!();

    fn unset() -> Self {
        AntiDebugMode::Off
    }

    fn shipped() -> Self {
        AntiDebugMode::Off
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        OptionAntiDebug.apply(value)
    }
}

impl AntiDebugMode {
    /// Is a warning buffered at a matched call site?
    pub fn warns(self) -> bool {
        matches!(self, AntiDebugMode::Warn)
    }
}

/// Parses the `off`/`warn` value of `option antidebug`.
#[derive(Debug, Clone, Copy, Default)]
pub struct OptionAntiDebug;

impl OptionAntiDebug {
    /// The option name.
    pub const NAME: &'static str = "antidebug";

    /// Parse and validate the `off`/`warn` value.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(AntiDebugMode, String)> {
        let mode = match p1 {
            "off" => AntiDebugMode::Off,
            "warn" => AntiDebugMode::Warn,
            other => {
                return Err(UnlaceError::parse(format!(
                    "Unknown antidebug value: {other} (expected off|warn)"
                )));
            }
        };
        Ok((mode, format!("anti-debug probe naming set to {p1}")))
    }
}

/// The anti-debug probe a call op is, when the option is on and the callee's
/// recorded name is on the roster: the category and the name as recorded.
pub fn probe_site(data: &Funcdata, op: OpId) -> Option<(AntiDebugKind, String)> {
    if !data
        .get_arch()
        .unlace_options
        .get::<AntiDebugMode>()
        .warns()
    {
        return None;
    }
    let idx = data.get_call_specs_index(op)?;
    let name = data.get_call_specs(idx).get_name();
    let kind = classify_anti_debug(name)?;
    Some((kind, name.to_string()))
}

/// Buffer the warning for a direct call that is an anti-debug probe. Called by
/// the flow pass once the call spec, and so the callee name, exists.
pub fn warn_probe(data: &mut Funcdata, op: OpId) {
    let Some((kind, api)) = probe_site(data, op) else {
        return;
    };
    let Some(addr) = data.obank().get(op).map(|o| o.get_addr().clone()) else {
        return;
    };
    data.warning(&warning_text(kind, &api), &addr);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn classifies_the_roster() {
        assert_eq!(
            classify_anti_debug("IsDebuggerPresent"),
            Some(AntiDebugKind::DebuggerCheck)
        );
        assert_eq!(
            classify_anti_debug("ptrace"),
            Some(AntiDebugKind::PtraceSelf)
        );
        assert_eq!(
            classify_anti_debug("QueryPerformanceCounter"),
            Some(AntiDebugKind::TimingCheck)
        );
        assert_eq!(
            classify_anti_debug("OutputDebugStringA"),
            Some(AntiDebugKind::OutputDebug)
        );
    }

    #[test]
    fn ignores_benign_and_near_miss_names() {
        assert_eq!(classify_anti_debug("malloc"), None);
        assert_eq!(classify_anti_debug("ptrace_detach"), None);
        assert_eq!(classify_anti_debug("isdebuggerpresent"), None);
    }

    #[test]
    fn option_values_parse() {
        let (mode, _) = OptionAntiDebug.apply("warn").expect("warn parses");
        assert_eq!(mode, AntiDebugMode::Warn);
        assert!(mode.warns());
        let (off, _) = OptionAntiDebug.apply("off").expect("off parses");
        assert!(!off.warns());
        assert!(OptionAntiDebug.apply("halt").is_err());
    }

    #[test]
    fn warning_names_the_probe() {
        assert_eq!(
            warning_text(AntiDebugKind::DebuggerCheck, "IsDebuggerPresent"),
            "anti-debug probe: IsDebuggerPresent (debugger check)"
        );
    }
}
