//! (unlace `goitabcalls`) Go interface method calls by name: the option, and the
//! record vocabulary the `gotypes` harvest, the Go DWARF signatures and the
//! printer share.
//!
//! A Go interface value is two words, an itab pointer and a data pointer, and a
//! method call through it loads `itab.Fun[i]` and calls it with the data word
//! as the receiver. The `gotypes` harvest interns one record per non-empty
//! interface, `go.itab.<interface>` (the interface spelled as the linker spells
//! it, `go.itab.io.Writer`): the `internal/abi.ITab` header followed by one
//! function-pointer slot per method, in the interface's own (sorted) method
//! order, each named after its method, with a [`LangFacet::GoItab`] facet
//! naming the interface. With the option on, an interface formal the DWARF
//! signatures recover keeps its two ABI words with the table typed as a pointer
//! to that record, and an indirect call through one of its method slots prints
//! as `Interface.Method(receiver, ...)`.
//!
//! [`LangFacet::GoItab`]: crate::langfacet::LangFacet::GoItab

/// The record-name prefix of a per-interface itab layout.
pub const ITAB_RECORD_PREFIX: &str = "go.itab.";

/// The byte offset of `ITab.Fun[0]` on a 64-bit target: `Inter`, `Type`,
/// `Hash` (4 bytes) and 4 bytes of alignment padding come first.
pub const ITAB_FUN_OFFSET_64: i32 = 24;

/// The record name of `interface`'s itab layout (`go.itab.main.Shape`).
pub fn itab_record_name(interface: &str) -> String {
    format!("{ITAB_RECORD_PREFIX}{interface}")
}

crate::unlace_flag!(
    /// (unlace) `option goitabcalls`: type a Go interface formal's table word by
    /// its interface's itab record and print a call through one of its method
    /// slots as `Interface.Method(receiver, ...)`. Shipped on.
    GoItabCalls,
    "goitabcalls",
    "Go interface method calls",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn record_names_carry_the_linker_spelling() {
        assert_eq!(itab_record_name("main.Shape"), "go.itab.main.Shape");
        assert_eq!(
            itab_record_name("internal/bisect.Writer"),
            "go.itab.internal/bisect.Writer"
        );
        assert!(itab_record_name("error").starts_with(ITAB_RECORD_PREFIX));
    }

    #[test]
    fn the_option_ships_on() {
        use crate::optionset::UnlaceOption;
        assert!(!GoItabCalls::unset().0);
        assert!(GoItabCalls::shipped().0);
        assert!(GoItabCalls::parse("on").unwrap().0.0);
    }
}
