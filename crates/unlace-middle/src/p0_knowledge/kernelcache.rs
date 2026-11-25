//! (unlace) The `kernelcache` option: whether `load file` unwraps Apple firmware
//! containers (IMG4 / IM4P, LZFSE, `complzss`) and which `LC_FILESET_ENTRY` of an
//! `MH_FILESET` kernel collection it loads.
//!
//! Loading happens before any per-function `option` command, so the live gate is
//! the [`KERNELCACHE_ENV`] environment variable, exported by the `unlace` CLI and
//! bridged from the console `option` command.

use unlace_base::error::{UnlaceError, UnlaceResult};

pub const KERNELCACHE_ENV: &str = "UNLACE_KERNELCACHE";

/// `auto` unwraps containers and loads the kernel (`MH_EXECUTE`) entry of a
/// fileset; a bundle id loads that entry instead; `off` passes bytes through.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub enum KernelcacheChoice {
    Off,
    #[default]
    Auto,
    Entry(String),
}

impl KernelcacheChoice {
    pub fn parse(value: &str) -> Option<Self> {
        let token = value.trim();
        match token.to_ascii_lowercase().as_str() {
            "" | "auto" | "on" => Some(Self::Auto),
            "off" | "0" | "false" => Some(Self::Off),
            _ if token.chars().any(|c| c.is_whitespace() || c.is_control()) => None,
            _ => Some(Self::Entry(token.to_string())),
        }
    }

    pub fn as_str(&self) -> &str {
        match self {
            Self::Off => "off",
            Self::Auto => "auto",
            Self::Entry(id) => id,
        }
    }

    /// The choice of the load in progress (`LoadOptions::kernelcache`, else
    /// [`KERNELCACHE_ENV`]).
    pub fn in_force() -> Self {
        crate::loadoptions::scoped(|o| o.kernelcache.clone())
            .unwrap_or_else(crate::loadoptions::env::kernelcache)
    }

    /// The choice [`KERNELCACHE_ENV`] states; an unset or unparsable value is
    /// `auto`. Reads only the environment; a load in progress reads
    /// [`Self::in_force`].
    pub fn from_env() -> Self {
        unlace_base::env::var(KERNELCACHE_ENV)
            .ok()
            .and_then(|v| Self::parse(&v))
            .unwrap_or_default()
    }
}

pub fn parse_kernelcache(value: &str) -> UnlaceResult<(KernelcacheChoice, String)> {
    let choice = KernelcacheChoice::parse(value).ok_or_else(|| {
        UnlaceError::parse(format!(
            "kernelcache expects auto, off, or a fileset entry id, got {value:?}"
        ))
    })?;
    let msg = format!("Apple kernelcache loading set to {}", choice.as_str());
    Ok((choice, msg))
}

#[cfg(test)]
mod tests;
