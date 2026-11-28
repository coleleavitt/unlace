//! (unlace) The `kernelcache-boot` option: where `load file` finds the kernel
//! collections an Auxiliary or System collection was linked against.
//!
//! Such a collection points into the boot collection (and an Auxiliary one into
//! the System collection) with chained fixups that are offsets from the other
//! file's base, so the loader has to read that file. Loading happens before any
//! per-function `option` command, so the live gate is the
//! [`KERNELCACHE_BOOT_ENV`] environment variable, exported by the `unlace` CLI
//! and bridged from the console `option` command.

use std::path::PathBuf;

use unlace_base::error::{UnlaceError, UnlaceResult};

pub const KERNELCACHE_BOOT_ENV: &str = "UNLACE_KERNELCACHE_BOOT";

/// `auto` searches the directory of the input; a path names one collection file
/// or a directory to search instead; `off` reads no other file.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub enum KernelcacheBoot {
    Off,
    #[default]
    Auto,
    Path(PathBuf),
}

impl KernelcacheBoot {
    pub fn parse(value: &str) -> Self {
        let token = value.trim();
        match token.to_ascii_lowercase().as_str() {
            "" | "auto" | "on" => Self::Auto,
            "off" | "0" | "false" => Self::Off,
            _ => Self::Path(PathBuf::from(token)),
        }
    }

    pub fn as_str(&self) -> std::borrow::Cow<'_, str> {
        match self {
            Self::Off => "off".into(),
            Self::Auto => "auto".into(),
            Self::Path(path) => path.to_string_lossy(),
        }
    }

    /// The choice of the load in progress (`LoadOptions::kernelcache_boot`,
    /// else [`KERNELCACHE_BOOT_ENV`]).
    pub fn in_force() -> Self {
        crate::loadoptions::scoped(|o| o.kernelcache_boot.clone())
            .unwrap_or_else(crate::loadoptions::env::kernelcache_boot)
    }

    /// The choice [`KERNELCACHE_BOOT_ENV`] states; unset is `auto`. Reads only
    /// the environment; a load in progress reads [`Self::in_force`].
    pub fn from_env() -> Self {
        unlace_base::env::var(KERNELCACHE_BOOT_ENV)
            .map(|v| Self::parse(&v))
            .unwrap_or_default()
    }
}

/// Parse a `kernelcache-boot` option value. A path that does not exist is
/// refused.
pub fn parse_kernelcache_boot(value: &str) -> UnlaceResult<(KernelcacheBoot, String)> {
    let choice = KernelcacheBoot::parse(value);
    if let KernelcacheBoot::Path(path) = &choice
        && !path.exists() {
            return Err(UnlaceError::parse(format!(
                "kernelcache-boot expects auto, off, or the path of a kernel collection or its directory; {value:?} does not exist"
            )));
        }
    let msg = format!("Linked kernel collections set to {}", choice.as_str());
    Ok((choice, msg))
}

#[cfg(test)]
mod tests;
