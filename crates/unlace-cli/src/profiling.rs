//! Linkscope-backed runtime profiling for the CLI pipeline.
//!
//! This replaces the previous subscriber/flamegraph runtime with
//! explicit, domain-level spans that are useful for decompiler pipeline bugs.

use std::path::PathBuf;
use std::time::Duration;

use crate::config::{LinkscopeOptions, LinkscopeTrace};

pub use linkscope::TraceField;

pub type Span = linkscope::Span;
pub type TraceFrame = linkscope::TraceFrame;

pub struct LinkscopeGuard {
    enabled: bool,
    report: bool,
    json_path: Option<PathBuf>,
    mermaid_path: Option<PathBuf>,
}

/// Start linkscope profiling as configured. The guard writes and prints the
/// configured outputs when dropped.
pub fn init(options: &LinkscopeOptions) -> LinkscopeGuard {
    let enabled = options.active();
    if enabled {
        match options.trace {
            LinkscopeTrace::Off => linkscope::enable(),
            LinkscopeTrace::Events => linkscope::trace_enable(),
            LinkscopeTrace::Stack => linkscope::trace_stack_enable(),
            LinkscopeTrace::Detail => linkscope::trace_detail_enable(),
            LinkscopeTrace::StackDetail => linkscope::trace_stack_detail_enable(),
        }
        linkscope::record_rss("startup");
        let trace = options.trace != LinkscopeTrace::Off;
        eprintln!(
            "[unlace linkscope] enabled trace={} stack={} detail={} json={} mermaid={}",
            trace,
            matches!(
                options.trace,
                LinkscopeTrace::Stack | LinkscopeTrace::StackDetail
            ),
            matches!(
                options.trace,
                LinkscopeTrace::Detail | LinkscopeTrace::StackDetail
            ),
            options
                .json
                .as_ref()
                .map(|path| path.display().to_string())
                .unwrap_or_else(|| "-".to_string()),
            options
                .mermaid
                .as_ref()
                .map(|path| path.display().to_string())
                .unwrap_or_else(|| "-".to_string()),
        );

        if let Some(interval) = options
            .report_interval_secs
            .filter(|secs| *secs > 0)
            .map(Duration::from_secs)
        {
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
        report: enabled && options.report,
        json_path: options.json.clone(),
        mermaid_path: options.mermaid.clone(),
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
                "warning: linkscope.json write to '{}' failed: {e}",
                path.display()
            );
        }
        if let Some(path) = self.mermaid_path.as_ref()
            && let Err(e) = std::fs::write(path, linkscope::to_mermaid_markdown())
        {
            eprintln!(
                "warning: linkscope.mermaid write to '{}' failed: {e}",
                path.display()
            );
        }
        if self.report {
            linkscope::report();
        }
    }
}
