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
