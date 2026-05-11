use std::path::Path;

use unlace_ir::ssa::SsaFunction;
use unlace_loader::BinaryImage;

use crate::{PLUGIN_ENTRY, PluginCreateFn, PluginError, PluginFinding, UnlacePlugin};

pub struct PluginManager {
    plugins: Vec<Box<dyn UnlacePlugin>>,
    /// Kept alive so plugin code stays mapped in memory.
    _libraries: Vec<libloading::Library>,
}

impl PluginManager {
    pub fn new() -> Self {
        Self {
            plugins: Vec::new(),
            _libraries: Vec::new(),
        }
    }

    /// Scan `dir` for shared libraries and load each as a plugin.
    ///
    /// Returns the number of plugins successfully loaded. Failures are logged
    /// and skipped.
    pub fn load_from_dir(&mut self, dir: &Path) -> Result<usize, PluginError> {
        if !dir.exists() {
            return Err(PluginError::DirNotFound {
                path: dir.to_path_buf(),
            });
        }

        let entries = std::fs::read_dir(dir).map_err(|e| PluginError::DirReadError {
            path: dir.to_path_buf(),
            source: e,
        })?;

        let mut loaded = 0usize;
        for entry in entries {
            let entry = match entry {
                Ok(e) => e,
                Err(e) => {
                    tracing::warn!(err = %e, dir = %dir.display(), "skipping unreadable dir entry");
                    continue;
                }
            };

            let path = entry.path();
            if !is_shared_library(&path) {
                continue;
            }

            match self.load_library(&path) {
                Ok(()) => {
                    loaded += 1;
                }
                Err(e) => {
                    tracing::warn!(path = %path.display(), err = %e, "skipping plugin");
                }
            }
        }

        Ok(loaded)
    }

    /// Load a single shared library as a plugin.
    ///
    /// # Safety
    ///
    /// Loading a shared library executes arbitrary code (constructors, etc.).
    /// Only load libraries you trust.
    pub fn load_library(&mut self, path: &Path) -> Result<(), PluginError> {
        // SAFETY: Caller is responsible for only loading trusted libraries.
        let lib =
            unsafe { libloading::Library::new(path) }.map_err(|e| PluginError::LoadFailed {
                path: path.to_path_buf(),
                source: e,
            })?;

        let create_fn: libloading::Symbol<'_, PluginCreateFn> = unsafe {
            lib.get(PLUGIN_ENTRY.as_bytes())
        }
        .map_err(|e| PluginError::EntryPointNotFound {
            path: path.to_path_buf(),
            source: e,
        })?;

        let raw = unsafe { create_fn() };
        if raw.is_null() {
            return Err(PluginError::NullPlugin {
                path: path.to_path_buf(),
            });
        }

        // SAFETY: Plugin contract requires pointer from `Box::into_raw`.
        let plugin = unsafe { Box::from_raw(raw) };

        tracing::info!(
            name = plugin.name(),
            version = plugin.version(),
            path = %path.display(),
            "loaded plugin",
        );

        self._libraries.push(lib);
        self.plugins.push(plugin);
        Ok(())
    }

    /// Dispatch [`UnlacePlugin::on_function`] across every loaded plugin,
    /// concatenating findings in registration order.
    pub fn run_all_on_function(&self, function: &SsaFunction) -> Vec<PluginFinding> {
        let mut findings = Vec::new();
        for plugin in &self.plugins {
            tracing::debug!(name = plugin.name(), "running plugin on_function");
            findings.extend(plugin.on_function(function));
        }
        findings
    }

    /// Dispatch [`UnlacePlugin::on_binary`] across every loaded plugin,
    /// concatenating findings in registration order.
    pub fn run_all_on_binary(&self, image: &BinaryImage) -> Vec<PluginFinding> {
        let mut findings = Vec::new();
        for plugin in &self.plugins {
            tracing::debug!(name = plugin.name(), "running plugin on_binary");
            findings.extend(plugin.on_binary(image));
        }
        findings
    }

    pub fn plugins(&self) -> &[Box<dyn UnlacePlugin>] {
        &self.plugins
    }
}

impl Default for PluginManager {
    fn default() -> Self {
        Self::new()
    }
}

fn is_shared_library(path: &Path) -> bool {
    let Some(ext) = path.extension() else {
        return false;
    };
    matches!(ext.to_str(), Some("so" | "dylib" | "dll"))
}
