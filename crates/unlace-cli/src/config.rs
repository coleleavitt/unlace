//! The `unlace` configuration file: one TOML document composed of the option
//! structs owned by each pipeline crate.
//!
//! Lookup order: `--config <path>`, `./unlace.toml`,
//! `$XDG_CONFIG_HOME/unlace/config.toml` (or `~/.config/unlace/config.toml`),
//! then built-in defaults. Command-line flags override file values.

use std::path::{Path, PathBuf};

use anyhow::{Context, Result};
use serde::{Deserialize, Serialize};
use unlace_output::PrintConfig;
use unlace_passes::PassOptions;
use unlace_struct::StructureOptions;

use crate::engine::EngineConfig;

/// Effective configuration for one `unlace` invocation.
#[derive(Clone, Debug, Default, PartialEq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct Config {
    pub passes: PassOptions,
    pub structure: StructureOptions,
    pub printer: PrintConfig,
    pub batch: BatchOptions,
    pub py: PyOptions,
    pub linkscope: LinkscopeOptions,
    pub engine: EngineConfig,
}

/// Resource budgets for `unlace batch` and the parallel analyze driver.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct BatchOptions {
    /// Stack size of each analysis worker thread, in MiB.
    pub worker_stack_mb: usize,
    /// Functions at least this many bytes long are analyzed one at a time
    /// after the parallel phase. `0` disables the serial lane.
    pub large_function_serial_bytes: u64,
    /// Function count above which `--interproc` warns about peak memory.
    /// Interproc holds every function's SSA at once; around 4096 functions a
    /// release build's map passes ~2 GiB on the project's larger fixtures.
    pub interproc_max_functions: usize,
}

impl Default for BatchOptions {
    fn default() -> Self {
        Self {
            worker_stack_mb: 512,
            large_function_serial_bytes: 8 * 1024,
            interproc_max_functions: 4096,
        }
    }
}

impl BatchOptions {
    pub fn worker_stack_bytes(&self) -> usize {
        self.worker_stack_mb.max(1).saturating_mul(1024 * 1024)
    }
}

/// Options for `unlace py`.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct PyOptions {
    /// Functions pre-analyzed into the session before the script runs.
    pub max_staged_functions: usize,
}

impl Default for PyOptions {
    fn default() -> Self {
        Self {
            max_staged_functions: 64,
        }
    }
}

/// Linkscope wall-clock profiling of the pipeline phases.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct LinkscopeOptions {
    /// Record phase timings and counters.
    pub enabled: bool,
    /// Additionally record a call tree of trace frames and events.
    pub trace: LinkscopeTrace,
    /// Write the profile as JSON to this path on exit.
    pub json: Option<PathBuf>,
    /// Write the profile as a Mermaid flowchart to this path on exit.
    pub mermaid: Option<PathBuf>,
    /// Print the profile report to stderr on exit.
    pub report: bool,
    /// Print a profile snapshot to stderr every N seconds.
    pub report_interval_secs: Option<u64>,
}

impl Default for LinkscopeOptions {
    fn default() -> Self {
        Self {
            enabled: false,
            trace: LinkscopeTrace::Off,
            json: None,
            mermaid: None,
            report: true,
            report_interval_secs: None,
        }
    }
}

impl LinkscopeOptions {
    /// Whether any setting asks for profiling to run.
    pub fn active(&self) -> bool {
        self.enabled
            || self.trace != LinkscopeTrace::Off
            || self.json.is_some()
            || self.mermaid.is_some()
    }
}

/// How much of the linkscope call tree to record.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "kebab-case")]
pub enum LinkscopeTrace {
    #[default]
    Off,
    /// Trace frames and events.
    Events,
    /// Events plus a captured backtrace per frame.
    Stack,
    /// Events plus high-volume detail events.
    Detail,
    /// Backtraces and detail events.
    StackDetail,
}

impl Config {
    /// Load the configuration selected by the lookup order in the module docs.
    pub fn load(explicit: Option<&Path>) -> Result<Self> {
        match explicit {
            Some(path) => Self::from_file(path),
            None => match discover() {
                Some(path) => Self::from_file(&path),
                None => Ok(Self::default()),
            },
        }
    }

    pub fn from_file(path: &Path) -> Result<Self> {
        let text = std::fs::read_to_string(path)
            .with_context(|| format!("reading config {}", path.display()))?;
        toml::from_str(&text).with_context(|| format!("decoding config {}", path.display()))
    }

    /// Render the configuration as a TOML document.
    pub fn to_toml(&self) -> Result<String> {
        toml::to_string_pretty(self).context("serializing config")
    }
}

fn discover() -> Option<PathBuf> {
    let local = PathBuf::from("unlace.toml");
    if local.is_file() {
        return Some(local);
    }
    let config_home = std::env::var_os("XDG_CONFIG_HOME")
        .filter(|dir| !dir.is_empty())
        .map(PathBuf::from)
        .or_else(|| std::env::var_os("HOME").map(|home| PathBuf::from(home).join(".config")))?;
    let user = config_home.join("unlace").join("config.toml");
    user.is_file().then_some(user)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn empty_document_is_default() {
        assert_eq!(toml::from_str::<Config>("").unwrap(), Config::default());
    }

    #[test]
    fn rendered_defaults_round_trip() {
        let text = Config::default().to_toml().unwrap();
        assert_eq!(toml::from_str::<Config>(&text).unwrap(), Config::default());
    }

    #[test]
    fn nested_override_keeps_sibling_defaults() {
        let config: Config = toml::from_str("[passes.sccp]\nmax_work = 7\n").unwrap();
        assert_eq!(config.passes.sccp.max_work, 7);
        assert_eq!(
            config.passes.sccp.max_vars,
            unlace_passes::SccpLimits::default().max_vars
        );
    }

    #[test]
    fn unknown_keys_are_rejected() {
        assert!(toml::from_str::<Config>("[passes]\nmax_wrok = 1\n").is_err());
    }

    #[test]
    fn example_config_matches_defaults() {
        let text = include_str!("../../../unlace.example.toml");
        assert_eq!(toml::from_str::<Config>(text).unwrap(), Config::default());
    }
}
