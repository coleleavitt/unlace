//! Live batch progress on stderr.
//!
//! The bar position counts finished functions, so the rate and ETA measure
//! decompilation throughput, not how fast rayon hands out work. The message
//! names the function a worker started most recently.

use std::fmt::Write as _;
use std::io::IsTerminal;
use std::sync::Mutex;
use std::sync::atomic::{AtomicUsize, Ordering};
use std::time::Duration;

use indicatif::{ProgressBar, ProgressDrawTarget, ProgressState, ProgressStyle};

use crate::args::BatchProgressStyle;
use crate::pipeline::FunctionEntry;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum RenderMode {
    Plain,
    Color,
}

impl RenderMode {
    /// Progress is drawn only on a terminal stderr; `auto` follows the
    /// stderr color conventions (`NO_COLOR`, `CLICOLOR`, `CLICOLOR_FORCE`).
    fn resolve(
        style: BatchProgressStyle,
        stderr_terminal: bool,
        stderr_colors: bool,
    ) -> Option<Self> {
        if !stderr_terminal {
            return None;
        }
        match style {
            BatchProgressStyle::Off => None,
            BatchProgressStyle::Plain => Some(Self::Plain),
            BatchProgressStyle::Color => Some(Self::Color),
            BatchProgressStyle::Auto if stderr_colors => Some(Self::Color),
            BatchProgressStyle::Auto => Some(Self::Plain),
        }
    }

    fn template(self) -> &'static str {
        match self {
            Self::Color => {
                "{prefix:.bold} {elapsed_precise:.dim} [{bar:30.cyan/blue}] {pos}/{len} \
                 {percent:>3}% {rate:.green} ETA {eta:.yellow} {wide_msg}"
            }
            Self::Plain => {
                "{prefix} {elapsed_precise} [{bar:30}] {pos}/{len} \
                 {percent:>3}% {rate} ETA {eta} {wide_msg}"
            }
        }
    }

    fn style(self) -> ProgressStyle {
        ProgressStyle::with_template(self.template())
            .expect("batch progress templates are valid")
            .with_key(
                "rate",
                |state: &ProgressState, w: &mut dyn std::fmt::Write| {
                    let _ = write!(w, "{:.1} fn/s", state.per_sec());
                },
            )
            .progress_chars("=>-")
    }
}

/// One progress bar for one batch stage (`batch`, `interproc-phase1`, ...).
pub(super) struct BatchProgress {
    bar: Option<ProgressBar>,
    active: AtomicUsize,
    failed: AtomicUsize,
    current: Mutex<String>,
}

impl BatchProgress {
    pub(super) fn new(stage: &'static str, style: BatchProgressStyle, total: usize) -> Self {
        let mode = RenderMode::resolve(
            style,
            std::io::stderr().is_terminal(),
            console::colors_enabled_stderr(),
        );
        let bar = mode.map(|mode| {
            if mode == RenderMode::Color {
                // indicatif applies template colors through console's *stdout*
                // switch, and batch stdout is usually a redirected C file.
                console::set_colors_enabled(true);
            }
            let pb = ProgressBar::with_draw_target(
                Some(total as u64),
                ProgressDrawTarget::stderr_with_hz(4),
            );
            pb.set_style(mode.style());
            pb.set_prefix(format!("[unlace {stage}]"));
            pb.enable_steady_tick(Duration::from_millis(250));
            pb
        });
        Self {
            bar,
            active: AtomicUsize::new(0),
            failed: AtomicUsize::new(0),
            current: Mutex::new(String::new()),
        }
    }

    /// A worker picked up `entry`.
    pub(super) fn started(&self, entry: &FunctionEntry) {
        let Some(pb) = &self.bar else { return };
        self.active.fetch_add(1, Ordering::Relaxed);
        let mut current = self.current.lock().unwrap_or_else(|e| e.into_inner());
        *current = format!("{}@0x{:x}", entry.name, entry.addr);
        pb.set_message(self.message(&current));
    }

    /// A worker finished its function; `succeeded` is false when it errored.
    pub(super) fn completed(&self, succeeded: bool) {
        let Some(pb) = &self.bar else { return };
        self.active.fetch_sub(1, Ordering::Relaxed);
        if !succeeded {
            self.failed.fetch_add(1, Ordering::Relaxed);
        }
        let current = self.current.lock().unwrap_or_else(|e| e.into_inner());
        pb.set_message(self.message(&current));
        pb.inc(1);
    }

    pub(super) fn finish(&self) {
        let Some(pb) = &self.bar else { return };
        let failed = self.failed.load(Ordering::Relaxed);
        pb.finish_with_message(format!("done, {failed} failed"));
    }

    fn message(&self, current: &str) -> String {
        progress_message(
            self.active.load(Ordering::Relaxed),
            self.failed.load(Ordering::Relaxed),
            current,
        )
    }
}

fn progress_message(active: usize, failed: usize, current: &str) -> String {
    let mut message = format!("{active} active");
    if failed > 0 {
        let _ = write!(message, ", {failed} failed");
    }
    if !current.is_empty() {
        let _ = write!(message, " | {current}");
    }
    message
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn render_mode_needs_a_terminal_and_follows_the_style() {
        use BatchProgressStyle::*;
        assert_eq!(RenderMode::resolve(Color, false, true), None);
        assert_eq!(RenderMode::resolve(Off, true, true), None);
        assert_eq!(
            RenderMode::resolve(Plain, true, true),
            Some(RenderMode::Plain)
        );
        assert_eq!(
            RenderMode::resolve(Color, true, false),
            Some(RenderMode::Color)
        );
        assert_eq!(
            RenderMode::resolve(Auto, true, true),
            Some(RenderMode::Color)
        );
        assert_eq!(
            RenderMode::resolve(Auto, true, false),
            Some(RenderMode::Plain)
        );
    }

    #[test]
    fn templates_parse() {
        RenderMode::Color.style();
        RenderMode::Plain.style();
    }

    #[test]
    fn message_names_the_current_function() {
        assert_eq!(
            progress_message(3, 0, "main@0x1000"),
            "3 active | main@0x1000"
        );
        assert_eq!(progress_message(1, 2, ""), "1 active, 2 failed");
    }
}
