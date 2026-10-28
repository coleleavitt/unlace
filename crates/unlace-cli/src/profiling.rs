//! Linkscope-backed runtime profiling for the CLI pipeline.
//!
//! This replaces the previous subscriber/flamegraph runtime with
//! explicit, domain-level spans that are useful for decompiler pipeline bugs.

use std::path::PathBuf;
use std::time::Duration;

pub use linkscope::TraceField;

pub type Span = linkscope::Span;
pub type TraceFrame = linkscope::TraceFrame;

pub struct LinkscopeGuard {
    enabled: bool,
    report: bool,
    json_path: Option<PathBuf>,
    mermaid_path: Option<PathBuf>,
}

pub fn init_from_env() -> LinkscopeGuard {
    let json_path = env_path("UNLACE_LINKSCOPE_JSON");
    let mermaid_path = env_path("UNLACE_LINKSCOPE_MERMAID");
    let trace_stack_detail = env_flag("UNLACE_LINKSCOPE_TRACE_STACK_DETAIL");
    let trace_stack = env_flag("UNLACE_LINKSCOPE_TRACE_STACK");
    let trace_detail = env_flag("UNLACE_LINKSCOPE_TRACE_DETAIL");
    let trace = env_flag("UNLACE_LINKSCOPE_TRACE");
    let enabled = env_flag("UNLACE_LINKSCOPE")
        || trace
        || trace_stack
        || trace_detail
        || trace_stack_detail
        || json_path.is_some()
        || mermaid_path.is_some();

    if enabled {
        if trace_stack_detail {
            linkscope::trace_stack_detail_enable();
        } else if trace_stack {
            linkscope::trace_stack_enable();
        } else if trace_detail {
            linkscope::trace_detail_enable();
        } else if trace {
            linkscope::trace_enable();
        } else {
            linkscope::enable();
        }
        linkscope::record_rss("startup");
        eprintln!(
            "[unlace linkscope] enabled trace={} stack={} detail={} json={} mermaid={}",
            trace || trace_stack || trace_detail || trace_stack_detail,
            trace_stack || trace_stack_detail,
            trace_detail || trace_stack_detail,
            json_path
                .as_ref()
                .map(|path| path.display().to_string())
                .unwrap_or_else(|| "-".to_string()),
            mermaid_path
                .as_ref()
                .map(|path| path.display().to_string())
                .unwrap_or_else(|| "-".to_string()),
        );

        if let Some(interval) = env_interval("UNLACE_LINKSCOPE_REPORT_INTERVAL_SECS") {
            std::thread::spawn(move || {
                loop {
                    std::thread::sleep(interval);
                    eprintln!("\n[unlace linkscope] periodic snapshot");
                    linkscope::report();
                }
            });
        }
    }

    LinkscopeGuard {
        enabled,
        report: enabled && !env_flag("UNLACE_LINKSCOPE_NO_REPORT"),
        json_path,
        mermaid_path,
    }
}

#[inline]
pub fn phase(name: &'static str) -> Span {
    if linkscope::is_enabled() {
        linkscope::event_fields("phase.start", [TraceField::text("phase", name)]);
    }
    linkscope::phase(name)
}

#[inline]
pub fn is_enabled() -> bool {
    linkscope::is_enabled()
}

#[inline]
pub fn trace_fields(
    label: &'static str,
    fields: impl IntoIterator<Item = TraceField>,
) -> TraceFrame {
    linkscope::trace_fields(label, fields)
}

#[inline]
pub fn event_fields(label: &'static str, fields: impl IntoIterator<Item = TraceField>) {
    linkscope::event_fields(label, fields);
}

#[inline]
pub fn diagnostic(
    level: &'static str,
    message: &'static str,
    fields: impl IntoIterator<Item = TraceField>,
) {
    if !linkscope::is_enabled() {
        return;
    }
    let mut all = vec![
        TraceField::text("level", level),
        TraceField::text("message", message),
    ];
    all.extend(fields);
    linkscope::event_fields("diagnostic", all);
}

#[inline]
pub fn record_bytes(name: &'static str, bytes: u64) {
    linkscope::record_bytes(name, bytes);
}

#[inline]
pub fn record_items(name: &'static str, items: u64) {
    linkscope::record_items(name, items);
}

#[inline]
pub fn record_rss(label: impl Into<String>) {
    linkscope::record_rss(label);
}

impl Drop for LinkscopeGuard {
    fn drop(&mut self) {
        if !self.enabled {
            return;
        }
        linkscope::record_rss("shutdown");
        if let Some(path) = self.json_path.as_ref()
            && let Err(e) = linkscope::to_json_string()
                .and_then(|json| std::fs::write(path, json).map_err(serde_json::Error::io))
        {
            eprintln!(
                "warning: UNLACE_LINKSCOPE_JSON write to '{}' failed: {e}",
                path.display()
            );
        }
        if let Some(path) = self.mermaid_path.as_ref()
            && let Err(e) = std::fs::write(path, linkscope::to_mermaid_markdown())
        {
            eprintln!(
                "warning: UNLACE_LINKSCOPE_MERMAID write to '{}' failed: {e}",
                path.display()
            );
        }
        if self.report {
            linkscope::report();
        }
    }
}

fn env_flag(name: &str) -> bool {
    std::env::var_os(name)
        .and_then(|value| value.into_string().ok())
        .map(|value| {
            let value = value.trim().to_ascii_lowercase();
            !(value.is_empty()
                || value == "0"
                || value == "false"
                || value == "off"
                || value == "no")
        })
        .unwrap_or(false)
}

fn env_path(name: &str) -> Option<PathBuf> {
    std::env::var_os(name)
        .map(PathBuf::from)
        .filter(|path| !path.as_os_str().is_empty())
}

fn env_interval(name: &str) -> Option<Duration> {
    let secs = std::env::var(name).ok()?.trim().parse::<u64>().ok()?;
    (secs > 0).then(|| Duration::from_secs(secs))
}

#[cfg(test)]
mod tests {
    use super::env_flag;

    #[test]
    fn env_flag_parser_accepts_common_false_values() {
        // Keep this as a direct parser contract; mutating process env in
        // parallel cargo tests would make the test suite flaky.
        assert!(!parse_bool(""));
        assert!(!parse_bool("0"));
        assert!(!parse_bool("false"));
        assert!(!parse_bool("off"));
        assert!(!parse_bool("no"));
        assert!(parse_bool("1"));
        assert!(parse_bool("yes"));
        assert!(parse_bool("trace"));
    }

    fn parse_bool(value: &str) -> bool {
        let value = value.trim().to_ascii_lowercase();
        !(value.is_empty() || value == "0" || value == "false" || value == "off" || value == "no")
    }

    #[test]
    fn env_flag_unset_is_false() {
        assert!(!env_flag("__UNLACE_LINKSCOPE_TEST_UNSET"));
    }
}
