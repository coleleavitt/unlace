//! Structured optimization remarks: why a pass fired, or refused, at a site.
//!
//! (unlace) Each pass traces its decisions through its own environment variable,
//! so no single record says which rule fired at a site or why another was refused.
//! A `RemarkSink` is one record per function run: a pass pushes `(pass, kind,
//! site, reason)` and the CLI reads the list back. A sink is off by default and a
//! push into a disabled sink does nothing, so the remarks are diagnostics only and
//! never reach the decompiled output.

/// Whether a remark reports a rule that applied, one that was refused, or a fact the pass found.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum RemarkKind {
    Passed,
    Missed,
    Analysis,
}

impl RemarkKind {
    /// The lowercase name a remark prints as.
    pub fn as_str(self) -> &'static str {
        match self {
            RemarkKind::Passed => "passed",
            RemarkKind::Missed => "missed",
            RemarkKind::Analysis => "analysis",
        }
    }
}

/// One decision: `pass` made it at `site` (an address, a varnode or a call site, as the pass names it).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct OptimizationRemark {
    pub pass: String,
    pub kind: RemarkKind,
    pub site: String,
    pub reason: String,
}

/// The remarks of one function run, in the order the passes pushed them.
#[derive(Clone, Debug, Default)]
pub struct RemarkSink {
    enabled: bool,
    remarks: Vec<OptimizationRemark>,
}

impl RemarkSink {
    /// A sink that records remarks.
    pub fn enabled() -> Self {
        RemarkSink {
            enabled: true,
            remarks: Vec::new(),
        }
    }

    /// Whether pushes are recorded.
    pub fn is_enabled(&self) -> bool {
        self.enabled
    }

    /// Record `remark` if this sink is enabled.
    pub fn push(&mut self, remark: OptimizationRemark) {
        if self.enabled {
            self.remarks.push(remark);
        }
    }

    /// The recorded remarks, in push order.
    pub fn remarks(&self) -> &[OptimizationRemark] {
        &self.remarks
    }
}

#[cfg(test)]
mod tests;
