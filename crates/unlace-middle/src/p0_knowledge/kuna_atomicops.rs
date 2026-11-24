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
    /// AArch64 `ExclusiveMonitorPass` and `ExclusiveMonitorsStatus`, which a
    /// store-exclusive lifts to (`llscfold`).
    pub monitor: Option<(u32, u32)>,
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
            let monitor = index(b"ExclusiveMonitorPass").zip(index(b"ExclusiveMonitorsStatus"));
            return AtomicUserops {
                lock: None,
                ordering,
                unmarked: true,
                monitor,
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
}

crate::kuna_flag!(
    /// (kuna) Lift one locked x86 read-modify-write, AArch64 LSE atomic or
    /// RISC-V AMO to the `__sync_*` builtin it performs (option `atomics`).
    Atomics,
    "atomics",
    "atomic instructions as __sync builtins",
    unset: false,
    shipped: false
);

crate::kuna_flag!(
    /// (kuna) Fold an AArch64 load-exclusive/store-exclusive retry loop into
    /// the `__sync_*` builtin its successful iteration performs (option
    /// `llscfold`).
    LlscFold,
    "llscfold",
    "load/store-exclusive retry loops as atomic builtins",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
    use super::*;
    use crate::kuna_optionset::KunaOption;

    #[test]
    fn options_parse_and_ship_off() {
        assert!(!Atomics::shipped().0);
        assert!(!LlscFold::shipped().0);
        assert!(Atomics::parse("on").unwrap().0.0);
        assert!(!LlscFold::parse("off").unwrap().0.0);
        assert!(Atomics::parse("maybe").is_err());
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
    }
}
