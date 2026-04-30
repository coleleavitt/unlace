use std::path::PathBuf;

#[derive(Debug, thiserror::Error)]
pub enum PluginError {
    #[error("failed to load plugin library '{}': {source}", path.display())]
    LoadFailed {
        path: PathBuf,
        source: libloading::Error,
    },

    #[error("entry point '{}' not found in '{}': {source}", crate::PLUGIN_ENTRY, path.display())]
    EntryPointNotFound {
        path: PathBuf,
        source: libloading::Error,
    },

    #[error("plugin entry point in '{}' returned null", path.display())]
    NullPlugin { path: PathBuf },

    #[error("plugin directory '{}' does not exist", path.display())]
    DirNotFound { path: PathBuf },

    #[error("failed to read plugin directory '{}': {source}", path.display())]
    DirReadError {
        path: PathBuf,
        source: std::io::Error,
    },
}
