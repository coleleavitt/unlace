//! WASM-sandboxed plugin runtime (t440).
//!
//! Provides a capability-limited sandbox for running untrusted plugins
//! compiled to WebAssembly. Plugins communicate via a well-defined ABI
//! of imported/exported functions and cannot access the host filesystem
//! or network directly.

/// Capabilities that can be granted to a WASM plugin.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PluginCapability {
    /// Read function IR data.
    ReadFunctions,
    /// Read binary metadata (sections, symbols).
    ReadMetadata,
    /// Write annotations/findings back to host.
    WriteFindings,
    /// Allocate host memory (bounded).
    Allocate,
}

/// Security policy for a sandboxed plugin.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SandboxPolicy {
    pub capabilities: Vec<PluginCapability>,
    /// Maximum memory pages (64KiB each) the plugin may use.
    pub max_memory_pages: u32,
    /// Maximum execution fuel (instruction count limit).
    pub max_fuel: u64,
    /// Maximum findings the plugin can emit.
    pub max_findings: u32,
}

impl Default for SandboxPolicy {
    fn default() -> Self {
        Self {
            capabilities: vec![
                PluginCapability::ReadFunctions,
                PluginCapability::WriteFindings,
            ],
            max_memory_pages: 256, // 16 MiB
            max_fuel: 10_000_000,
            max_findings: 1000,
        }
    }
}

/// Result of running a WASM plugin.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SandboxResult {
    /// Plugin ran to completion.
    Success { findings_count: u32, fuel_used: u64 },
    /// Plugin exceeded its fuel budget.
    FuelExhausted { fuel_limit: u64 },
    /// Plugin exceeded memory limit.
    MemoryExceeded { pages_requested: u32, limit: u32 },
    /// Plugin attempted an unauthorized operation.
    CapabilityDenied { attempted: PluginCapability },
    /// Plugin trapped (division by zero, unreachable, etc.).
    Trap { message: String },
}

/// Validate a WASM module's imports against a policy.
///
/// Returns the list of capabilities the module requires.
pub fn validate_wasm_imports(import_names: &[&str]) -> Vec<PluginCapability> {
    let mut required = Vec::new();
    for name in import_names {
        match *name {
            "unlace_read_function" | "unlace_get_function_count" => {
                if !required.contains(&PluginCapability::ReadFunctions) {
                    required.push(PluginCapability::ReadFunctions);
                }
            }
            "unlace_read_section" | "unlace_get_symbol" => {
                if !required.contains(&PluginCapability::ReadMetadata) {
                    required.push(PluginCapability::ReadMetadata);
                }
            }
            "unlace_emit_finding" => {
                if !required.contains(&PluginCapability::WriteFindings) {
                    required.push(PluginCapability::WriteFindings);
                }
            }
            "unlace_alloc" if !required.contains(&PluginCapability::Allocate) => {
                required.push(PluginCapability::Allocate);
            }
            _ => {}
        }
    }
    required
}

/// Check if a policy satisfies all required capabilities.
pub fn policy_satisfies(policy: &SandboxPolicy, required: &[PluginCapability]) -> bool {
    required.iter().all(|cap| policy.capabilities.contains(cap))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn default_policy() {
        let p = SandboxPolicy::default();
        assert!(p.capabilities.contains(&PluginCapability::ReadFunctions));
        assert!(p.capabilities.contains(&PluginCapability::WriteFindings));
        assert!(!p.capabilities.contains(&PluginCapability::Allocate));
    }

    #[test]
    fn validate_imports() {
        let imports = &["unlace_read_function", "unlace_emit_finding"];
        let caps = validate_wasm_imports(imports);
        assert!(caps.contains(&PluginCapability::ReadFunctions));
        assert!(caps.contains(&PluginCapability::WriteFindings));
        assert!(!caps.contains(&PluginCapability::Allocate));
    }

    #[test]
    fn policy_check_pass() {
        let policy = SandboxPolicy::default();
        let required = vec![PluginCapability::ReadFunctions];
        assert!(policy_satisfies(&policy, &required));
    }

    #[test]
    fn policy_check_fail() {
        let policy = SandboxPolicy {
            capabilities: vec![PluginCapability::ReadFunctions],
            ..Default::default()
        };
        let required = vec![PluginCapability::Allocate];
        assert!(!policy_satisfies(&policy, &required));
    }

    #[test]
    fn unknown_imports_ignored() {
        let imports = &["unknown_function", "another_unknown"];
        let caps = validate_wasm_imports(imports);
        assert!(caps.is_empty());
    }
}
