//! (kuna `atomics`, `llscfold`) The user operations an atomic instruction of a
//! language carries, resolved once per program, and the two options that turn
//! atomic instructions and load/store-exclusive retry loops into `__sync_*`
//! builtins (`kuna_atomics`, `docs/spec/02-lift-and-flow.md`).

use crate::userop::UserOpManage;

/// The user operations an instruction of this language may carry: the x86 lock
/// envelope or the AArch64 ordering markers, resolved once per program.
/// `unmarked` is set for AArch64 and RISC-V, whose atomics carry no envelope
/// and which have no other instruction that loads and stores one location.
#[derive(Clone, Debug, Default)]
pub struct AtomicUserops {
    pub lock: Option<(u32, u32)>,
    pub ordering: Vec<u32>,
    pub unmarked: bool,
    /// The user operation a store-exclusive tests the monitor with and the one
    /// that yields its status, if the status is not a plain constant
    /// (`llscfold`): AArch64 `ExclusiveMonitorPass` and
    /// `ExclusiveMonitorsStatus`, ARM `hasExclusiveAccess` alone.
    pub monitor: Option<(u32, Option<u32>)>,
    /// The AArch64 acquire and release markers (`LOAcquire`, `LORelease`), for
    /// the memory order `atomics c11` spells.
    pub acquire: Option<u32>,
    pub release: Option<u32>,
}

impl AtomicUserops {
    pub fn resolve(archid: &str, userops: &UserOpManage) -> AtomicUserops {
        let index = |name: &[u8]| {
            userops
                .get_op_by_name(name)
                .filter(|u| u.get_inject_id().is_none())
                .map(|u| u.get_index() as u32)
        };
        if archid.starts_with("x86:") {
            return AtomicUserops {
                lock: index(b"LOCK").zip(index(b"UNLOCK")),
                ..AtomicUserops::default()
            };
        }
        if archid.starts_with("AARCH64:") {
            let ordering = [&b"LOAcquire"[..], b"LORelease"]
                .into_iter()
                .filter_map(index)
                .collect();
            let monitor = index(b"ExclusiveMonitorPass")
                .zip(index(b"ExclusiveMonitorsStatus"))
                .map(|(pass, status)| (pass, Some(status)));
            return AtomicUserops {
                lock: None,
                ordering,
                unmarked: true,
                monitor,
                acquire: index(b"LOAcquire"),
                release: index(b"LORelease"),
            };
        }
        if archid.starts_with("ARM:") {
            return AtomicUserops {
                ordering: index(b"ExclusiveAccess").into_iter().collect(),
                monitor: index(b"hasExclusiveAccess").map(|pass| (pass, None)),
                ..AtomicUserops::default()
            };
        }
        if archid.starts_with("RISCV:") {
            return AtomicUserops {
                unmarked: true,
                ..AtomicUserops::default()
            };
        }
        AtomicUserops::default()
    }

    /// Whether this language has atomic instructions `kuna_atomics` recognizes.
    pub fn enabled(&self) -> bool {
        self.lock.is_some() || self.unmarked
    }

    /// Whether atomic builtins can appear at all: from single instructions or
    /// from folded load/store-exclusive loops (ARM has only the latter).
    pub fn builtins(&self) -> bool {
        self.enabled() || self.monitor.is_some()
    }
}

/// What `option atomics` does with an atomic instruction, and how its builtin
/// is spelled.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum Atomics {
    /// Leave the SLEIGH p-code: `LOCK(); ...; UNLOCK();` or a plain load and
    /// store.
    #[default]
    Off,
    /// MSVC intrinsics (`_InterlockedExchangeAdd`) on a Windows image, the GCC
    /// `__sync` builtins elsewhere.
    Auto,
    /// Always the MSVC intrinsics.
    Msvc,
    /// Always the GCC/Clang `__sync` builtins.
    Gcc,
    /// The C11 `<stdatomic.h>` functions: `atomic_fetch_add(p, v)` for a
    /// sequentially consistent update, `atomic_fetch_add_explicit(p, v,
    /// memory_order_relaxed)` for the order an AArch64 instruction encodes. A
    /// compare-and-swap stays `__sync_val_compare_and_swap`, which returns the
    /// old value where C11's returns a flag.
    C11,
}

impl Atomics {
    pub fn as_str(self) -> &'static str {
        match self {
            Atomics::Off => "off",
            Atomics::Auto => "auto",
            Atomics::Msvc => "msvc",
            Atomics::Gcc => "gcc",
            Atomics::C11 => "c11",
        }
    }

    /// Whether the builtins take the C11 spelling.
    pub fn c11(self) -> bool {
        self == Atomics::C11
    }

    /// Whether atomic instructions are rewritten at all.
    pub fn on(self) -> bool {
        self != Atomics::Off
    }

    /// Whether the builtins take their MSVC spelling, given whether the image
    /// is a Windows one (a Windows compiler spec or a Windows user-mode PE).
    pub fn msvc(self, windows: bool) -> bool {
        match self {
            Atomics::Msvc => true,
            Atomics::Auto => windows,
            Atomics::Off | Atomics::Gcc | Atomics::C11 => false,
        }
    }
}

impl crate::optionset::KunaOption for Atomics {
    const NAME: &'static str = "atomics";
    crate::kuna_option_id!();

    fn unset() -> Self {
        Atomics::Off
    }

    fn shipped() -> Self {
        Atomics::Auto
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let mode = match value {
            "off" => Atomics::Off,
            "auto" => Atomics::Auto,
            "msvc" => Atomics::Msvc,
            "gcc" => Atomics::Gcc,
            "c11" => Atomics::C11,
            other => {
                return Err(unlace_base::error::KunaError::parse(format!(
                    "Unknown atomics value: {other} (expected auto|msvc|gcc|c11|off)"
                )));
            }
        };
        Ok((mode, format!("Atomic builtins set to {}", mode.as_str())))
    }
}

crate::kuna_flag!(
    /// (kuna) Fold an AArch64 load-exclusive/store-exclusive retry loop into
    /// the `__sync_*` builtin its successful iteration performs (option
    /// `llscfold`).
    LlscFold,
    "llscfold",
    "load/store-exclusive retry loops as atomic builtins",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests {
    use super::*;
    use crate::optionset::KunaOption;

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
}
