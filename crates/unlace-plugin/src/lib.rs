//! Plugin SDK foundation (t437) + dynamic-library loader.
//!
//! ## SDK surface
//!
//! Out-of-tree analyses implement the [`UnlacePlugin`] trait, return
//! [`PluginFinding`]s, and are aggregated by a [`PluginRegistry`]:
//!
//! ```
//! use unlace_plugin::{PluginFinding, PluginRegistry, UnlacePlugin};
//! use unlace_ir::ssa::SsaFunction;
//!
//! struct HelloPlugin;
//!
//! impl UnlacePlugin for HelloPlugin {
//!     fn name(&self) -> &str { "hello" }
//!     fn version(&self) -> &str { "0.1.0" }
//!
//!     fn on_function(&self, func: &SsaFunction) -> Vec<PluginFinding> {
//!         vec![PluginFinding {
//!             kind: "hello".into(),
//!             message: format!("saw {}", func.function.name),
//!             addr: Some(func.function.addr),
//!         }]
//!     }
//! }
//!
//! let mut registry = PluginRegistry::new();
//! registry.register(Box::new(HelloPlugin));
//! ```
//!
//! ## Dynamic loading
//!
//! Trusted shared libraries can be loaded at runtime via [`PluginManager`].
//! Each library must export a C entry point named [`PLUGIN_ENTRY`]
//! (`unlace_plugin_create`) that returns a `*mut dyn UnlacePlugin`
//! produced by `Box::into_raw`.

use unlace_ir::ssa::SsaFunction;
use unlace_loader::BinaryImage;

mod error;
mod manager;

pub use error::PluginError;
pub use manager::PluginManager;
npub mod samples;

/// Entry point symbol name that every plugin shared library must export.
pub const PLUGIN_ENTRY: &str = "unlace_plugin_create";

/// Function pointer type for the plugin entry point.
///
/// # Safety
///
/// The returned pointer must have been produced by `Box::into_raw(Box::new(..))`.
/// The plugin manager takes ownership via `Box::from_raw`.
// Trait objects are not FFI-safe per the compiler, but the entry point is only
// called by Rust code — `extern "C"` is used for ABI stability across dylibs.
#[allow(improper_ctypes_definitions)]
pub type PluginCreateFn = unsafe extern "C" fn() -> *mut dyn UnlacePlugin;

/// A single observation produced by a plugin.
///
/// Plugins return one [`PluginFinding`] per piece of evidence they want
/// surfaced (suspicious construct, recovered structure, security issue,
/// etc.). The host UI / CLI is responsible for rendering them.
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
/// All event callbacks have empty default implementations so plugin
/// authors only override the hooks they care about. The trait is
/// object-safe; the registry stores plugins as `Box<dyn UnlacePlugin>`.
pub trait UnlacePlugin: Send + Sync {
    /// Short identifier (e.g. `"my-pass"`). Used for logging and CLI flags.
    fn name(&self) -> &str;

    /// SemVer version string for the plugin.
    fn version(&self) -> &str;

    /// Called once per recovered SSA function.
    fn on_function(&self, _func: &SsaFunction) -> Vec<PluginFinding> {
        vec![]
    }

    /// Called once with the fully-loaded binary image.
    fn on_binary(&self, _image: &BinaryImage) -> Vec<PluginFinding> {
        vec![]
    }
}

/// Owns a set of plugins and dispatches host events to each one.
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

    /// Register an additional plugin. Plugins are invoked in registration
    /// order; later registrations cannot mask earlier findings.
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

    /// Run every plugin's [`UnlacePlugin::on_function`] hook and collect
    /// the concatenated findings in registration order.
    pub fn run_all_on_function(&self, func: &SsaFunction) -> Vec<PluginFinding> {
        let mut findings = Vec::new();
        for plugin in &self.plugins {
            findings.extend(plugin.on_function(func));
        }
        findings
    }

    /// Run every plugin's [`UnlacePlugin::on_binary`] hook and collect
    /// the concatenated findings in registration order.
    pub fn run_all_on_binary(&self, image: &BinaryImage) -> Vec<PluginFinding> {
        let mut findings = Vec::new();
        for plugin in &self.plugins {
            findings.extend(plugin.on_binary(image));
        }
        findings
    }
}

impl Default for PluginRegistry {
    fn default() -> Self {
        Self::new()
    }
}

/// Reference plugin used in tests and as a copy-paste starting point.
///
/// Implements only the required trait methods; both event callbacks
/// fall through to the empty defaults.
pub struct NoopPlugin;

impl UnlacePlugin for NoopPlugin {
    fn name(&self) -> &str {
        "noop"
    }
    fn version(&self) -> &str {
        "0.1.0"
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn empty_ssa() -> SsaFunction {
        let mut func = Function::new("noop_test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1000,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn noop_plugin_identity() {
        let p = NoopPlugin;
        assert_eq!(p.name(), "noop");
        assert_eq!(p.version(), "0.1.0");
    }

    #[test]
    fn noop_plugin_on_function_is_empty() {
        let ssa = empty_ssa();
        let findings = NoopPlugin.on_function(&ssa);
        assert!(findings.is_empty());
    }

    #[test]
    fn registry_register_increments_len() {
        let mut reg = PluginRegistry::new();
        assert!(reg.is_empty());
        reg.register(Box::new(NoopPlugin));
        assert_eq!(reg.len(), 1);
        reg.register(Box::new(NoopPlugin));
        assert_eq!(reg.len(), 2);
    }

    #[test]
    fn registry_run_all_on_function_with_noop_yields_no_findings() {
        let ssa = empty_ssa();
        let mut reg = PluginRegistry::new();
        reg.register(Box::new(NoopPlugin));
        reg.register(Box::new(NoopPlugin));
        let findings = reg.run_all_on_function(&ssa);
        assert!(findings.is_empty(), "NoopPlugin must not produce findings");
    }
}
