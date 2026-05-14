//! Plugin registry with semver enforcement (t437).
//!
//! A cargo-style registry that manages plugin discovery, version
//! compatibility checking, and dependency resolution between plugins.

use std::collections::BTreeMap;

/// Semantic version for a plugin.
#[derive(Debug, Clone, PartialEq, Eq, PartialOrd, Ord)]
pub struct SemVer {
    pub major: u32,
    pub minor: u32,
    pub patch: u32,
}

impl SemVer {
    pub fn new(major: u32, minor: u32, patch: u32) -> Self {
        Self { major, minor, patch }
    }

    /// Parse "X.Y.Z" format.
    pub fn parse(s: &str) -> Option<Self> {
        let parts: Vec<&str> = s.split('.').collect();
        if parts.len() != 3 { return None; }
        Some(Self {
            major: parts[0].parse().ok()?,
            minor: parts[1].parse().ok()?,
            patch: parts[2].parse().ok()?,
        })
    }

    /// Check if this version is compatible with a requirement (^major.minor).
    pub fn is_compatible_with(&self, req: &SemVer) -> bool {
        if req.major == 0 {
            // Pre-1.0: minor must match exactly
            self.major == 0 && self.minor == req.minor && self.patch >= req.patch
        } else {
            // Post-1.0: same major, >= minor.patch
            self.major == req.major && (self.minor > req.minor || (self.minor == req.minor && self.patch >= req.patch))
        }
    }
}

impl std::fmt::Display for SemVer {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{}.{}.{}", self.major, self.minor, self.patch)
    }
}

/// A plugin manifest in the registry.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PluginManifest {
    pub name: String,
    pub version: SemVer,
    pub description: String,
    pub min_host_version: SemVer,
    pub dependencies: Vec<(String, SemVer)>,
}

/// The plugin registry: indexes available plugins by name.
#[derive(Debug, Default, Clone)]
pub struct PluginRegistry {
    plugins: BTreeMap<String, Vec<PluginManifest>>,
}

impl PluginRegistry {
    pub fn new() -> Self { Self::default() }

    /// Register a plugin manifest.
    pub fn register(&mut self, manifest: PluginManifest) {
        self.plugins.entry(manifest.name.clone()).or_default().push(manifest);
    }

    /// Find the latest compatible version of a plugin.
    pub fn resolve(&self, name: &str, min_version: &SemVer) -> Option<&PluginManifest> {
        self.plugins.get(name)?
            .iter()
            .filter(|m| m.version.is_compatible_with(min_version))
            .max_by(|a, b| a.version.cmp(&b.version))
    }

    /// List all registered plugin names.
    pub fn list_plugins(&self) -> Vec<&str> {
        self.plugins.keys().map(|s| s.as_str()).collect()
    }

    /// Total number of registered versions across all plugins.
    pub fn total_versions(&self) -> usize {
        self.plugins.values().map(|v| v.len()).sum()
    }

    /// Check if a plugin's dependencies can be satisfied.
    pub fn check_dependencies(&self, manifest: &PluginManifest) -> Vec<String> {
        let mut missing = Vec::new();
        for (dep_name, dep_ver) in &manifest.dependencies {
            if self.resolve(dep_name, dep_ver).is_none() {
                missing.push(format!("{} >= {}", dep_name, dep_ver));
            }
        }
        missing
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn semver_parse() {
        assert_eq!(SemVer::parse("1.2.3"), Some(SemVer::new(1, 2, 3)));
        assert_eq!(SemVer::parse("bad"), None);
    }

    #[test]
    fn semver_compatibility() {
        let v = SemVer::new(1, 5, 0);
        assert!(v.is_compatible_with(&SemVer::new(1, 3, 0)));
        assert!(v.is_compatible_with(&SemVer::new(1, 5, 0)));
        assert!(!v.is_compatible_with(&SemVer::new(2, 0, 0)));
        assert!(!v.is_compatible_with(&SemVer::new(1, 6, 0)));
    }

    #[test]
    fn registry_resolve() {
        let mut reg = PluginRegistry::new();
        reg.register(PluginManifest {
            name: "yara".into(), version: SemVer::new(1, 0, 0),
            description: "Yara scanner".into(), min_host_version: SemVer::new(0, 1, 0),
            dependencies: vec![],
        });
        reg.register(PluginManifest {
            name: "yara".into(), version: SemVer::new(1, 2, 0),
            description: "Yara scanner v2".into(), min_host_version: SemVer::new(0, 1, 0),
            dependencies: vec![],
        });
        let resolved = reg.resolve("yara", &SemVer::new(1, 0, 0)).unwrap();
        assert_eq!(resolved.version, SemVer::new(1, 2, 0));
    }

    #[test]
    fn missing_dependency() {
        let reg = PluginRegistry::new();
        let manifest = PluginManifest {
            name: "my-plugin".into(), version: SemVer::new(0, 1, 0),
            description: "test".into(), min_host_version: SemVer::new(0, 1, 0),
            dependencies: vec![("missing-dep".into(), SemVer::new(1, 0, 0))],
        };
        let missing = reg.check_dependencies(&manifest);
        assert_eq!(missing.len(), 1);
        assert!(missing[0].contains("missing-dep"));
    }

    #[test]
    fn list_plugins() {
        let mut reg = PluginRegistry::new();
        reg.register(PluginManifest { name: "a".into(), version: SemVer::new(1,0,0), description: String::new(), min_host_version: SemVer::new(0,1,0), dependencies: vec![] });
        reg.register(PluginManifest { name: "b".into(), version: SemVer::new(1,0,0), description: String::new(), min_host_version: SemVer::new(0,1,0), dependencies: vec![] });
        assert_eq!(reg.list_plugins().len(), 2);
    }
}
