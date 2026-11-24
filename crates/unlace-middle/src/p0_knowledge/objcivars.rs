//! (unlace `objcivars`) The load-time half of the instance-layout gate.
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

crate::unlace_flag!(
    /// (unlace `objcivars`) Objective-C instance structs, typed `self` and the ivar offset fold.
    ObjcIvars,
    "objcivars",
    "Objective-C instance layouts",
    unset: true,
    shipped: true
);
