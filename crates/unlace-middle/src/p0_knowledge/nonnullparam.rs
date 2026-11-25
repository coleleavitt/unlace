//! (unlace `nonnullparam`) The option that adds a `non-null` comment to a parameter
//! the function dereferences on entry. The printer reads it in
//! `nonnullparamhint`; it is off by default because the claim assumes the
//! dereference traps on NULL.

crate::unlace_flag!(
    /// (unlace) `option nonnullparam`: a parameter dereferenced before any branch
    /// gets a `non-null` comment above its first use. Comment only. Shipped off.
    NonNullParam,
    "nonnullparam",
    "non-null parameter comments",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests;
