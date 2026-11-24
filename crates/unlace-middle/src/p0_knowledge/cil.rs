//! (unlace) The `cil` option: decode a managed .NET assembly from its CIL method
//! bodies instead of from the native stub of its PE.
//!
//! A managed PE holds one native instruction, the jump to `_CorExeMain`; the
//! program is ECMA-335 metadata and CIL. With `cil on` (the default) an input
//! with a CLI header and at least one method body loads as the
//! `CIL:LE:64:default` language through
//! `unlace_analysis::loadimage_cil`; every other input is untouched. `off` loads
//! the PE as native code, as an explicit `--target` does.
//!
//! The choice is made inside `load file`, before any per-function `option`
//! command, so it is a load-time option ([`crate::loadoptions`]) that the
//! CLI carries in [`CIL_ENV`].

use unlace_base::error::UnlaceResult;

/// Absent or any value other than the off-tokens means enabled.
pub const CIL_ENV: &str = "UNLACE_CIL";

/// Whether a managed assembly loads as CIL for the load in progress.
pub fn cil_enabled() -> bool {
    crate::loadoptions::scoped(|o| o.cil).unwrap_or_else(crate::loadoptions::env::cil)
}

pub fn set_cil_env(on: bool) {
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(CIL_ENV, if on { "on" } else { "off" }) };
}

/// Apply `option cil VALUE`.
pub fn set_cil(value: &str) -> UnlaceResult<String> {
    crate::options::on_or_off(value).map(|on| {
        set_cil_env(on);
        format!(
            "managed .NET assemblies load as {}",
            if on { "CIL" } else { "native code" }
        )
    })
}
