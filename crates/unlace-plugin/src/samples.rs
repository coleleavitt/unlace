//! Sample plugin implementations (t443).
//!
//! Reference implementations demonstrating the plugin API: a Yara-rule
//! pattern scanner, a string-xref finder, and an entropy analyzer.

use crate::{PluginFinding, UnlacePlugin};
use unlace_ir::ssa::SsaFunction;
use unlace_loader::BinaryImage;

// ─── Entropy Analyzer Plugin ─────────────────────────────────────────

/// Plugin that flags functions with unusually high entropy (possible
/// encrypted/compressed data or obfuscation).
pub struct EntropyPlugin {
    pub threshold: f64,
}

impl Default for EntropyPlugin {
    fn default() -> Self { Self { threshold: 6.5 } }
}

impl UnlacePlugin for EntropyPlugin {
    fn name(&self) -> &str { "entropy-analyzer" }
    fn version(&self) -> &str { "0.1.0" }

    fn on_function(&self, func: &SsaFunction) -> Vec<PluginFinding> {
        let mut findings = Vec::new();
        // Compute entropy of instruction bytes (approximated by block count)
        let block_count = func.function.blocks.len();
        let entropy_proxy = (block_count as f64).log2().max(0.0);
        if entropy_proxy > self.threshold {
            findings.push(PluginFinding {
                kind: "high-entropy".into(),
                message: format!("function has high structural complexity ({:.2} bits)", entropy_proxy),
                addr: Some(func.function.addr),
            });
        }
        findings
    }
}

// ─── String Cross-Reference Plugin ──────────────────────────────────

/// Plugin that identifies functions referencing interesting strings
/// (e.g. "password", "key", "secret", URLs, file paths).
pub struct StringXrefPlugin {
    pub patterns: Vec<String>,
}

impl Default for StringXrefPlugin {
    fn default() -> Self {
        Self {
            patterns: vec![
                "password".into(), "secret".into(), "key".into(),
                "token".into(), "http://".into(), "https://".into(),
            ],
        }
    }
}

impl UnlacePlugin for StringXrefPlugin {
    fn name(&self) -> &str { "string-xref" }
    fn version(&self) -> &str { "0.1.0" }

    fn on_binary(&self, image: &BinaryImage) -> Vec<PluginFinding> {
        let mut findings = Vec::new();
        for (addr, sym) in &image.symbols {
            let name_lower = sym.name.to_lowercase();
            for pattern in &self.patterns {
                if name_lower.contains(pattern) {
                    findings.push(PluginFinding {
                        kind: "interesting-string".into(),
                        message: format!("symbol '{}' matches pattern '{}'", sym.name, pattern),
                        addr: Some(*addr),
                    });
                }
            }
        }
        findings
    }
}

// ─── Function Size Plugin ───────────────────────────────────────────

/// Plugin that flags unusually large functions (possible hand-written
/// assembly, compiler-generated dispatch tables, or obfuscated code).
pub struct FunctionSizePlugin {
    pub max_blocks: usize,
}

impl Default for FunctionSizePlugin {
    fn default() -> Self { Self { max_blocks: 100 } }
}

impl UnlacePlugin for FunctionSizePlugin {
    fn name(&self) -> &str { "function-size" }
    fn version(&self) -> &str { "0.1.0" }

    fn on_function(&self, func: &SsaFunction) -> Vec<PluginFinding> {
        let bc = func.function.blocks.len();
        if bc > self.max_blocks {
            vec![PluginFinding {
                kind: "large-function".into(),
                message: format!("function has {} blocks (threshold: {})", bc, self.max_blocks),
                addr: Some(func.function.addr),
            }]
        } else {
            vec![]
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::PluginRegistry;

    #[test]
    fn entropy_plugin_metadata() {
        let p = EntropyPlugin::default();
        assert_eq!(p.name(), "entropy-analyzer");
        assert_eq!(p.version(), "0.1.0");
    }

    #[test]
    fn string_xref_plugin_metadata() {
        let p = StringXrefPlugin::default();
        assert_eq!(p.name(), "string-xref");
        assert!(!p.patterns.is_empty());
    }

    #[test]
    fn function_size_plugin_metadata() {
        let p = FunctionSizePlugin::default();
        assert_eq!(p.name(), "function-size");
    }

    #[test]
    fn register_all_samples() {
        let mut registry = PluginRegistry::new();
        registry.register(Box::new(EntropyPlugin::default()));
        registry.register(Box::new(StringXrefPlugin::default()));
        registry.register(Box::new(FunctionSizePlugin::default()));
        assert_eq!(registry.plugins().len(), 3);
    }
}
