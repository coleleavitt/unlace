//! (kuna `objcivars`) The load-time half of the instance-layout gate.
//!
//! The commit decides whether `self` is typed and the offset variables fold
//! (the registered [`ObjcIvars`] value); the pass that builds the structs runs
//! while the loader snapshots the image, upstream of every console `option`,
//! so the same switch also travels as a process environment variable the way
//! `sourcelang` does. Off, no class struct is interned at all.

/// Environment variable carrying the `objcivars` choice into the load path.
/// Unset means on.
pub const OBJCIVARS_ENV: &str = "UNLACE_OBJCIVARS";

/// Whether the pass builds the instance layouts.
pub fn objcivars_enabled() -> bool {
    crate::loadoptions::scoped(|o| o.objcivars).unwrap_or_else(crate::loadoptions::env::objcivars)
}

/// Bridge a `set_kuna_option("objcivars", val)` choice to [`OBJCIVARS_ENV`] so
/// a later `load file` in the same process sees it.
pub fn set_objcivars_env(on: bool) {
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(OBJCIVARS_ENV, if on { "on" } else { "off" }) };
}

crate::kuna_flag!(
    /// (kuna `objcivars`) Objective-C instance structs, typed `self` and the ivar offset fold.
    ObjcIvars,
    "objcivars",
    "Objective-C instance layouts",
    unset: true,
    shipped: true
);
