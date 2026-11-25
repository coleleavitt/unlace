//! (unlace `comcfg`) A `clsid.cfg` file of extra COM ids for the `com` pass.
//!
//! The file is the format of IDA's `cfg/clsid.cfg`: one id per line,
//! `guid {00000000-0000-0000-C000-000000000046} IUnknown`, `;` starting a
//! comment. The `com` pass reads it at the analysis commit, after the
//! `option` lines, so the choice is an ordinary registered option and needs no
//! load-time bridge.

use std::path::PathBuf;

/// The value of the `comcfg` option: the file, or none.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct ComCfg(pub Option<PathBuf>);

impl ComCfg {
    /// Parse an option value: `off` (or empty), or the path of a file.
    pub fn parse(value: &str) -> Result<ComCfg, String> {
        let v = value.trim();
        if v.is_empty() || v.eq_ignore_ascii_case("off") {
            return Ok(ComCfg(None));
        }
        let path = PathBuf::from(v);
        if !path.is_file() {
            return Err(format!(
                "comcfg: expected `off` or a clsid.cfg file, got {v:?}"
            ));
        }
        Ok(ComCfg(Some(path)))
    }

    /// The value as the option spells it.
    pub fn as_str(&self) -> String {
        match &self.0 {
            Some(p) => p.display().to_string(),
            None => "off".to_string(),
        }
    }
}

impl crate::optionset::UnlaceOption for ComCfg {
    const NAME: &'static str = "comcfg";
    crate::unlace_option_id!();

    fn unset() -> Self {
        ComCfg(None)
    }

    fn shipped() -> Self {
        ComCfg(None)
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let choice = ComCfg::parse(value).map_err(unlace_base::error::UnlaceError::parse)?;
        let msg = match &choice.0 {
            Some(p) => format!("COM ids also read from {}", p.display()),
            None => "COM id file off".to_string(),
        };
        Ok((choice, msg))
    }
}

#[cfg(test)]
mod tests;
