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
