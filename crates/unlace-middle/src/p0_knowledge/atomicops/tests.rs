use super::*;
use crate::optionset::UnlaceOption;

#[test]
fn options_parse_and_ship_on() {
    assert_eq!(Atomics::unset(), Atomics::Off);
    assert_eq!(Atomics::shipped(), Atomics::Auto);
    assert!(LlscFold::shipped().0);
    for mode in [
        Atomics::Off,
        Atomics::Auto,
        Atomics::Msvc,
        Atomics::Gcc,
        Atomics::C11,
    ] {
        assert_eq!(Atomics::parse(mode.as_str()).unwrap().0, mode);
    }
    assert!(!LlscFold::parse("off").unwrap().0.0);
    assert!(Atomics::parse("on").is_err());
}

#[test]
fn auto_spells_msvc_only_on_windows() {
    assert!(Atomics::Auto.msvc(true));
    assert!(!Atomics::Auto.msvc(false));
    assert!(Atomics::Msvc.msvc(false));
    assert!(!Atomics::Gcc.msvc(true));
    assert!(!Atomics::Off.on());
}

#[test]
fn unknown_language_has_no_atomics() {
    let none = AtomicUserops::default();
    assert!(!none.enabled());
    let riscv = AtomicUserops {
        unmarked: true,
        ..AtomicUserops::default()
    };
    assert!(riscv.enabled());
    let x86 = AtomicUserops {
        lock: Some((1, 2)),
        ..AtomicUserops::default()
    };
    assert!(x86.enabled());
    let arm = AtomicUserops {
        monitor: Some((3, None)),
        ..AtomicUserops::default()
    };
    assert!(!arm.enabled());
    assert!(arm.builtins());
}
