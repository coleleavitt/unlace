//! (unlace `dwarfenumtypedef`) Name an anonymous DWARF enumeration after its typedef.
//!
//! C headers usually spell an enum `typedef enum { A, B } name_t;`, so its
//! `DW_TAG_enumeration_type` has no `DW_AT_name` and only the typedef in front of it
//! names it. The enum arm of the type mapper built a real enum only for a named DIE
//! and flattened the anonymous one to its underlying integer, so a parameter of type
//! `gnutls_close_request_t` took `1` where the header has `GNUTLS_SHUT_WR`. With
//! the option on (the default), an anonymous enumeration reached through a typedef is interned
//! under the typedef's name, as an anonymous aggregate already is. A load-time env
//! bridge (`UNLACE_DWARFENUMTYPEDEF`), read while the DWARF pass builds its types.

use super::DieSnap;

/// The load-time environment variable the CLI and the console set from the option.
pub const DWARFENUMTYPEDEF_ENV: &str = "UNLACE_DWARFENUMTYPEDEF";

/// Is the option on? On unless the bridge says `off`.
pub fn enabled() -> bool {
    unlace_base::env::var(DWARFENUMTYPEDEF_ENV).map_or(true, |v| {
        !matches!(
            v.trim().to_ascii_lowercase().as_str(),
            "off" | "0" | "false"
        )
    })
}

/// The name an enumeration DIE is interned under: its own, or with the option on
/// the typedef it was reached through.
pub(super) fn name<'a>(die: &'a DieSnap, alias: Option<&'a str>) -> Option<&'a str> {
    if !die.name.is_empty() {
        return Some(&die.name);
    }
    alias.filter(|a| !a.is_empty() && enabled())
}
