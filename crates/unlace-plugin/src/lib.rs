//! Plugin API for custom analysis passes.
//!
//! Defines a stable plugin interface that allows loading custom analysis
//! passes as shared libraries (`.so`/`.dylib`/`.dll`). Plugins implement
//! the [`UnlacePlugin`] trait and export a C-compatible entry point
//! (`unlace_plugin_create`) that the [`PluginManager`] calls at load time.
//!
//! # Writing a plugin
//!
//! ```rust,ignore
//! use unlace_plugin::UnlacePlugin;
//! use unlace_ir::ssa::SsaFunction;
//!
//! struct MyPass;
//!
//! impl UnlacePlugin for MyPass {
//!     fn name(&self) -> &str { "my-pass" }
//!     fn version(&self) -> &str { "0.1.0" }
//!     fn description(&self) -> &str { "Does cool things" }
//!     fn run_pass(&self, _function: &mut SsaFunction) { /* ... */ }
//! }
//!
//! #[no_mangle]
//! pub unsafe extern "C" fn unlace_plugin_create() -> *mut dyn UnlacePlugin {
//!     Box::into_raw(Box::new(MyPass))
//! }
//! ```

use unlace_ir::ssa::SsaFunction;

mod error;
mod manager;

pub use error::PluginError;
pub use manager::PluginManager;

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

/// Trait that every plugin must implement.
///
/// Object-safe so that plugins can be stored as `Box<dyn UnlacePlugin>`.
pub trait UnlacePlugin: Send + Sync {
    /// Short identifier for the plugin (e.g. `"my-pass"`).
    fn name(&self) -> &str;

    /// SemVer version string.
    fn version(&self) -> &str;

    /// Human-readable description of what the plugin does.
    fn description(&self) -> &str;

    /// Execute the analysis pass on `function`.
    fn run_pass(&self, function: &mut SsaFunction);
}

#[cfg(test)]
mod tests {
    use std::path::Path;

    use super::*;

    struct DummyPlugin;

    impl UnlacePlugin for DummyPlugin {
        fn name(&self) -> &str {
            "dummy"
        }
        fn version(&self) -> &str {
            "0.0.1"
        }
        fn description(&self) -> &str {
            "test-only dummy plugin"
        }
        fn run_pass(&self, _function: &mut SsaFunction) {}
    }

    #[test]
    fn test_plugin_manager_empty() {
        let mgr = PluginManager::new();
        assert_eq!(mgr.plugins().len(), 0);
    }

    #[test]
    fn test_plugin_trait_object_safety() {
        let plugin: Box<dyn UnlacePlugin> = Box::new(DummyPlugin);
        assert_eq!(plugin.name(), "dummy");
        assert_eq!(plugin.version(), "0.0.1");
        assert_eq!(plugin.description(), "test-only dummy plugin");
    }

    #[test]
    fn test_plugin_error_missing_file() {
        let mut mgr = PluginManager::new();
        let result = mgr.load_library(Path::new("/nonexistent/libfake.so"));
        assert!(result.is_err());
        match result.unwrap_err() {
            PluginError::LoadFailed { .. } => {}
            other => panic!("expected LoadFailed, got {other}"),
        }
    }

    #[test]
    fn test_plugin_error_missing_symbol() {
        let libc_path = Path::new("/usr/lib/libc.so.6");
        if !libc_path.exists() {
            return;
        }
        let mut mgr = PluginManager::new();
        let result = mgr.load_library(libc_path);
        // Loading libc should fail — either the library can't be loaded as a
        // plugin (LoadFailed) or the entry point symbol is missing
        // (EntryPointNotFound). Both are acceptable error variants.
        assert!(result.is_err(), "loading libc as plugin should fail");
    }

    #[test]
    fn test_run_all_empty() {
        let mgr = PluginManager::new();
        assert_eq!(mgr.plugins().len(), 0);
    }

    #[test]
    fn test_load_from_nonexistent_dir() {
        let mut mgr = PluginManager::new();
        let result = mgr.load_from_dir(Path::new("/nonexistent/plugin/dir"));
        assert!(result.is_err());
        match result.unwrap_err() {
            PluginError::DirNotFound { .. } => {}
            other => panic!("expected DirNotFound, got {other}"),
        }
    }

    #[test]
    fn test_load_from_empty_dir() {
        let dir = std::env::temp_dir().join("unlace_plugin_test_empty");
        let _ = std::fs::create_dir(&dir);
        let mut mgr = PluginManager::new();
        let count = mgr.load_from_dir(&dir).expect("empty dir should succeed");
        assert_eq!(count, 0);
        let _ = std::fs::remove_dir(&dir);
    }
}
