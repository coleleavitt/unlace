//! (unlace) The `ifuncfpret` option gate — name the x86-64 `.plt.sec`/`.iplt`
//! **IFUNC** (`R_X86_64_IRELATIVE`) PLT stubs so a tail `jmp` to one is recovered
//! as a tail call (`tailcalljump`) and the callee's return type flows out.
//!
//! ## Why this is an env-var bridge, not an `Architecture` flag
//!
//! This is a **loader-tier**
//! change: the stub naming lives in `unlace-analysis`
//! (`loader/elf_plt.rs::resolve_plt_imports`), which is baked into the
//! `ObjectLoadImage` at `load file` — **upstream of every per-function `option`
//! command**. An `Architecture` bool would be read too late. So the gate is a
//! process environment variable ([`IFUNCFPRET_ENV`]), consulted by the loader at
//! decode time and set by the CLI on the `decomp_dbg` subprocess before it loads
//! the file. The companion registered [`IfuncFpRet`] value exists only
//! so the option is catalog-visible and `phase catalog`'s live `current` field
//! reflects it.
//!
//! ## Default **on**
//!
//! An IFUNC IRELATIVE slot carries no symbol, so a wrapper that tail-jumps to its
//! stub (a glibc `log`/`memcpy`/`strlen` dispatcher) would flow into the stub and
//! render `(*dat_...)(...)`, losing the callee. The stub the naming creates is a
//! *synthetic* `ifunc_<resolver>` entry with no real prototype; the return-type
//! recovery it unblocks is the rest of the `ifuncfpret` chain. Only an x86-64
//! ELF with `R_X86_64_IRELATIVE` relocations is touched.

/// Environment variable that gates the x86-64 IFUNC PLT-stub naming (read by
/// `unlace-analysis::loader::elf_plt::resolve_plt_imports`). Absent or an on-token
/// ⇒ enabled; an off-token ⇒ disabled.
pub const IFUNCFPRET_ENV: &str = "UNLACE_IFUNCFPRET";

/// Whether IFUNC PLT-stub naming is enabled for this process (the loader gate).
/// Default **on**: only an explicit off-token in [`IFUNCFPRET_ENV`] disables it.
pub fn ifuncfpret_enabled() -> bool {
    crate::loadoptions::scoped(|o| o.ifuncfpret).unwrap_or_else(crate::loadoptions::env::ifuncfpret)
}

crate::unlace_flag!(
    /// (unlace `ifuncfpret`) The requested state of the load-time IFUNC PLT-stub naming; the catalog's live `current` field reads it.
    IfuncFpRet,
    "ifuncfpret",
    "IFUNC PLT-stub naming",
    unset: true,
    shipped: true
);

#[cfg(test)]
mod tests;
