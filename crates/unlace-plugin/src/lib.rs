//! Plugin SDK trait model: out-of-tree analyses implement [`UnlacePlugin`], return
//! [`PluginFinding`]s, and are aggregated by a [`PluginRegistry`].
//!
//! Ported from the archived master's `unlace-plugin`, trait model and finding type only. The
//! dynamic loader (`libloading`) and the wasm sandbox are not ported: loading native shared
//! libraries is a separate trust decision and needs its own design.
//!
//! ## Options
//!
//! A plugin's findings are gated by a named option. Every plugin names one with
//! [`UnlacePlugin::option`], and [`PluginRegistry`] runs a plugin only when the caller passes
//! that option name in `enabled`. A plugin cannot add a catalog row at runtime: the option must
//! already be defined by the host's `phases.toml`, so the option catalog stays static.

use unlace_middle::funcdata::Funcdata;
use unlace_sleigh::loadimage::LoadImage;

/// A single observation produced by a plugin.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PluginFinding {
    /// Short tag categorising the finding (e.g. `"crypto"`, `"hardening"`).
    pub kind: String,
    /// Human-readable explanation shown to the analyst.
    pub message: String,
    /// Optional virtual address the finding is anchored at.
    pub addr: Option<u64>,
}

/// Trait implemented by every Unlace plugin.
///
/// The event hooks default to no findings, so a plugin overrides only the hooks it uses. The
/// trait is object-safe; the registry stores plugins as `Box<dyn UnlacePlugin>`. Hooks take
/// shared references, so a plugin cannot mutate host state and must be deterministic.
pub trait UnlacePlugin: Send + Sync {
    /// Short identifier (e.g. `"my-pass"`). Used for logging and diagnostics.
    fn name(&self) -> &str;

    /// SemVer version string for the plugin.
    fn version(&self) -> &str;

    /// The host option (a `phases.toml` row) that gates this plugin's findings.
    fn option(&self) -> &str;

    /// Called once per recovered function.
    fn on_function(&self, _func: &Funcdata) -> Vec<PluginFinding> {
        vec![]
    }

    /// Called once with the loaded image.
    fn on_binary(&self, _image: &dyn LoadImage) -> Vec<PluginFinding> {
        vec![]
    }
}

/// Owns a set of plugins and dispatches host events to each enabled one.
pub struct PluginRegistry {
    plugins: Vec<Box<dyn UnlacePlugin>>,
}

impl PluginRegistry {
    /// Create an empty registry.
    pub fn new() -> Self {
        Self {
            plugins: Vec::new(),
        }
    }

    /// Register an additional plugin. Plugins run in registration order; later
    /// registrations cannot mask earlier findings.
    pub fn register(&mut self, plugin: Box<dyn UnlacePlugin>) {
        self.plugins.push(plugin);
    }

    /// Number of registered plugins.
    pub fn len(&self) -> usize {
        self.plugins.len()
    }

    /// `true` if no plugins have been registered.
    pub fn is_empty(&self) -> bool {
        self.plugins.is_empty()
    }

    /// Borrow the registered plugins (useful for diagnostics).
    pub fn plugins(&self) -> &[Box<dyn UnlacePlugin>] {
        &self.plugins
    }

    /// Run every enabled plugin's [`UnlacePlugin::on_function`] hook and collect the
    /// concatenated findings in registration order.
    pub fn run_all_on_function(&self, func: &Funcdata, enabled: &[&str]) -> Vec<PluginFinding> {
        self.collect(enabled, |plugin| plugin.on_function(func))
    }

    /// Run every enabled plugin's [`UnlacePlugin::on_binary`] hook and collect the
    /// concatenated findings in registration order.
    pub fn run_all_on_binary(&self, image: &dyn LoadImage, enabled: &[&str]) -> Vec<PluginFinding> {
        self.collect(enabled, |plugin| plugin.on_binary(image))
    }

    fn collect<F>(&self, enabled: &[&str], mut hook: F) -> Vec<PluginFinding>
    where
        F: FnMut(&dyn UnlacePlugin) -> Vec<PluginFinding>,
    {
        let mut findings = Vec::new();
        for plugin in &self.plugins {
            if enabled.contains(&plugin.option()) {
                findings.extend(hook(plugin.as_ref()));
            }
        }
        findings
    }
}

impl Default for PluginRegistry {
    fn default() -> Self {
        Self::new()
    }
}

/// Reference plugin: implements only the required methods, so every hook is empty.
pub struct NoopPlugin;

impl UnlacePlugin for NoopPlugin {
    fn name(&self) -> &str {
        "noop"
    }

    fn version(&self) -> &str {
        "0.1.0"
    }

    fn option(&self) -> &str {
        "noop"
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct Named(&'static str, &'static str);

    impl UnlacePlugin for Named {
        fn name(&self) -> &str {
            self.0
        }

        fn version(&self) -> &str {
            "0.1.0"
        }

        fn option(&self) -> &str {
            self.1
        }
    }

    fn finding(plugin: &dyn UnlacePlugin) -> Vec<PluginFinding> {
        vec![PluginFinding {
            kind: plugin.name().into(),
            message: "m".into(),
            addr: None,
        }]
    }

    fn kinds(findings: &[PluginFinding]) -> Vec<&str> {
        findings.iter().map(|f| f.kind.as_str()).collect()
    }

    #[test]
    fn new_registry_is_empty() {
        let registry = PluginRegistry::default();
        assert!(registry.is_empty());
        assert_eq!(registry.len(), 0);
    }

    #[test]
    fn register_keeps_registration_order() {
        let mut registry = PluginRegistry::new();
        registry.register(Box::new(Named("a", "opt-a")));
        registry.register(Box::new(NoopPlugin));
        let names: Vec<&str> = registry.plugins().iter().map(|p| p.name()).collect();
        assert_eq!(names, ["a", "noop"]);
    }

    #[test]
    fn disabled_option_runs_nothing() {
        let mut registry = PluginRegistry::new();
        registry.register(Box::new(Named("a", "opt-a")));
        assert!(registry.collect(&[], finding).is_empty());
        assert!(registry.collect(&["opt-b"], finding).is_empty());
    }

    #[test]
    fn only_enabled_plugins_contribute_in_order() {
        let mut registry = PluginRegistry::new();
        registry.register(Box::new(Named("a", "opt-a")));
        registry.register(Box::new(Named("b", "opt-b")));
        registry.register(Box::new(Named("c", "opt-a")));
        assert_eq!(kinds(&registry.collect(&["opt-a"], finding)), ["a", "c"]);
        assert_eq!(
            kinds(&registry.collect(&["opt-b", "opt-a"], finding)),
            ["a", "b", "c"]
        );
    }
}
