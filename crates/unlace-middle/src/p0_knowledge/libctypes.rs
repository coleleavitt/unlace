//! (unlace `libctypes`) The named-libc-aggregate gate — spell a libc/POSIX
//! aggregate pointer in the built-in prototype tables (`FILE *`, `stat *`,
//! `DIR *`, `option *`, …) instead of the width-stable `void *` those slots
//! carry today.
//!
//! The prototype tables' [`Ty`](../../../unlace_analysis/protos) vocabulary is
//! deliberately width-stable, so every aggregate pointer in them is a `void *`.
//! That is honest about the width and silent about the pointee: a `fopen`
//! result, a `fclose` argument and an `__uflow` parameter are all `void *`, and
//! nothing downstream can tell them apart. The table entry is the only place the
//! pointee is known — `int fclose(FILE *)` is not an inference, it is the
//! declaration — so this gate teaches the table to say so.
//!
//! ## Why this is an env-var bridge, not an `Architecture` flag
//!
//! The named shells are interned into the type factory by the analysis pass at
//! `load file`, which runs **upstream of every `option` command** and, in
//! `unlace decompile-all`, upstream of `apply_runtime_options`: an
//! `Architecture` bool read inside the pass would see the constructor default
//! whatever the user asked for. So the gate is a load option
//! (`LoadOptions::libctypes`), read by the pass and by the declared-name lookup
//! from the options in force. The CLI and the console carry the user's value
//! into a load through [`LIBCTYPES_ENV`]; the console's `option libctypes …` arm
//! changes only the options of the program it names. The companion
//! registered [`LibcTypesLayout`] value keeps the option catalog-visible and
//! makes `phase catalog`'s live `current` field reflect it.
//!
//! With the gate off the pass does not run at all, so not one named shell is
//! interned and the output is byte-identical to the `void *` tables alone.
//!
//! ## The third value
//!
//! `glibc` additionally installs the PUBLISHED x86-64 field layouts of the nine
//! aggregates whose members are part of the platform's API (`FILE`, `stat`,
//! `timespec`, `timeval`, `tm`, `passwd`, `group`, `option`, `dirent`), so a
//! field access renders under its own name and the loaded value carries the
//! field's type. The pass installs them only on a target the layouts are true of
//! — an x86-64 ELF whose `.dynstr` names glibc — and keeps the `opaque` shells
//! everywhere else.
//!
//! Default **streams**: `opaque` for every named aggregate, plus FILE's published
//! fields on glibc x86-64 (the stdio slots carry the stream globals). The 675
//! datatest assertions are structurally untouched (no datatest loads a file);
//! the evidence for the default is the corpus sweep recorded in
//! `docs/features/libctypes/record.json`. `--option libctypes off` restores the
//! byte-identical `void *` tables.

/// Environment variable that gates the named libc aggregate types (read by
/// `unlace-analysis::analyzers::protos::libctypes`). Absent or any value
/// other than the off-tokens ⇒ **enabled**; set to `off`/`0`/`false` ⇒ disabled
/// (the `void *` tables); set to `glibc` ⇒ enabled with the published field
/// layouts (see [`LibcTypesLayout`]).
pub const LIBCTYPES_ENV: &str = "UNLACE_LIBCTYPES";

/// How much of an aggregate the table says.
///
/// The two enabled values differ only in what is inside the shell, never in
/// which slots are named: `opaque` interns a sized, fieldless, incomplete
/// struct, so `f->_IO_read_ptr` renders as `f->field_0x8`; `glibc` fills the
/// nine aggregates whose layout is PUBLIC in the installed headers with their
/// real x86-64 fields, so the same access renders under its own name and the
/// loaded value carries the field's type.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub enum LibcTypesLayout {
    /// The `void *` tables, untouched — the pass does not run.
    Off,
    /// FILE and the stream globals only: the stdio slots, with FILE's published
    /// fields on glibc x86-64 and no other aggregate named.
    Streams,
    /// Named, sized, fieldless shells.
    Opaque,
    /// Named shells plus the published glibc x86-64 field layouts, on a target
    /// the layouts are true of (the decision is the analysis pass's:
    /// `libctypes::glibc::target_is_glibc_x86_64`).
    Glibc,
}

/// The layout this process asks for, from [`LIBCTYPES_ENV`]. Unset ⇒
/// [`LibcTypesLayout::Streams`] (the shipped default); an unrecognised token is
/// read as `Streams` rather than refused, because this is a bridge, not the
/// validator — `Architecture::set_unlace_option` rejects a bad value at the
/// `option` line, where the operator can see it.
pub fn libctypes_layout() -> LibcTypesLayout {
    crate::loadoptions::scoped(|o| o.libctypes).unwrap_or_else(crate::loadoptions::env::libctypes)
}

/// Whether the named libc aggregate types are enabled for this process.
/// Default **on**: only an explicit off-token in [`LIBCTYPES_ENV`] disables it.
pub fn libctypes_enabled() -> bool {
    libctypes_layout() != LibcTypesLayout::Off
}

/// Every aggregate the table may name, under the spelling it is interned and
/// printed with, plus `_IO_FILE`: glibc's own tag for `FILE`, which an image's
/// debug info defines and the table adopts. Kept in step with the widths in
/// `unlace_analysis`'s `NAMED_AGGREGATES` by a test there.
pub const AGGREGATE_NAMES: &[&str] = &[
    "DIR",
    "FILE",
    "_IO_FILE",
    "dirent",
    "group",
    "lconv",
    "mbstate_t",
    "obstack",
    "option",
    "passwd",
    "pthread_mutex_t",
    "re_pattern_buffer",
    "sigaction",
    "sigset_t",
    "sockaddr",
    "spwd",
    "stat",
    "statfs",
    "termios",
    "timespec",
    "timeval",
    "tm",
    "utmp",
    "utmpx",
];

impl crate::optionset::UnlaceOption for LibcTypesLayout {
    const NAME: &'static str = "libctypes";
    crate::unlace_option_id!();

    fn unset() -> Self {
        LibcTypesLayout::Off
    }

    fn shipped() -> Self {
        LibcTypesLayout::Streams
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let layout = match value.trim().to_ascii_lowercase().as_str() {
            "streams" | "on" | "1" | "true" => LibcTypesLayout::Streams,
            "opaque" => LibcTypesLayout::Opaque,
            "glibc" => LibcTypesLayout::Glibc,
            "off" | "0" | "false" => LibcTypesLayout::Off,
            other => {
                return Err(unlace_base::error::UnlaceError::lowlevel(format!(
                    "libctypes: expected `off`, `streams`, `opaque` or `glibc`, got `{other}`"
                )));
            }
        };
        let state = match layout {
            LibcTypesLayout::Off => "off",
            LibcTypesLayout::Streams => "on (streams)",
            LibcTypesLayout::Opaque => "on (opaque)",
            LibcTypesLayout::Glibc => "on (glibc layouts)",
        };
        Ok((layout, format!("Named libc aggregate types turned {state}")))
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::loadoptions::{LoadOptions, Vars, read};
    use std::collections::BTreeMap;

    /// What the gate reads when its variable holds `value` (`None` = unset).
    fn read_with(value: Option<&str>) -> LibcTypesLayout {
        let overrides = BTreeMap::from([(LIBCTYPES_ENV, value.map(str::to_string))]);
        read::libctypes(&Vars::with(&overrides))
    }

    /// The gate defaults on (unset variable), only the off-tokens disable it, and
    /// `glibc` is the one token that asks for the field layouts.
    #[test]
    fn libctypes_env_gate() {
        assert_eq!(
            read_with(None),
            LibcTypesLayout::Streams,
            "unset => streams"
        );
        for off in ["off", "0", "false", "OFF", " off "] {
            assert_eq!(
                read_with(Some(off)),
                LibcTypesLayout::Off,
                "`{off}` should disable"
            );
        }
        for on in ["streams", "on", "1", "true", "STREAMS", " on "] {
            assert_eq!(
                read_with(Some(on)),
                LibcTypesLayout::Streams,
                "`{on}` is the default"
            );
        }
        for opaque in ["opaque", "OPAQUE", " opaque "] {
            assert_eq!(
                read_with(Some(opaque)),
                LibcTypesLayout::Opaque,
                "`{opaque}` is the opaque shells"
            );
        }
        for unknown in ["", "bogus"] {
            assert_eq!(
                read_with(Some(unknown)),
                LibcTypesLayout::Streams,
                "`{unknown}` is not a layout, read as the default"
            );
        }
        for g in ["glibc", "GLIBC", " glibc "] {
            assert_eq!(
                read_with(Some(g)),
                LibcTypesLayout::Glibc,
                "`{g}` asks for layouts"
            );
        }
        for layout in [
            LibcTypesLayout::Off,
            LibcTypesLayout::Streams,
            LibcTypesLayout::Opaque,
            LibcTypesLayout::Glibc,
        ] {
            let _scope = LoadOptions {
                libctypes: layout,
                ..LoadOptions::default()
            }
            .enter();
            assert_eq!(libctypes_layout(), layout);
            assert_eq!(libctypes_enabled(), layout != LibcTypesLayout::Off);
        }
    }
}
