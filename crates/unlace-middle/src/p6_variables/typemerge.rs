//! Which variables `ActionMergeType` may join (option `typemerge`).
//!
//! `Merge::mergeByDatatype` (`merge.cc:359-401`) joins any two variables of
//! one data-type whose lifetimes do not overlap, wherever each is stored, so two
//! distinct source variables that happen to share a type print as one reused
//! local. `on` keeps that (upstream). `storage`, the shipped default, joins
//! two only when they share a register or stack slot: some instance of one sits
//! where some instance of the other does. `off` joins none by type and keeps
//! only the prior-decompile variable groups.

use unlace_base::address::Address;
use unlace_base::error::{KunaError, KunaResult};
use unlace_base::types::int4;

use crate::context::HighVariableId;
use crate::merge::MergeContext;

/// (kuna) `typemerge on|storage|off`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum TypeMergeMode {
    /// Any two same-typed variables with disjoint lifetimes (upstream).
    #[default]
    On,
    /// Only same-typed variables held in one and the same storage.
    Storage,
    /// No speculative merge by data-type.
    Off,
}

impl TypeMergeMode {
    /// The option token for this mode.
    pub fn as_str(self) -> &'static str {
        match self {
            TypeMergeMode::On => "on",
            TypeMergeMode::Storage => "storage",
            TypeMergeMode::Off => "off",
        }
    }

    /// The storage key `merge_by_datatype` compares under this mode: `None` for
    /// `on` and `off`, which do not look at storage.
    pub fn storage_key(
        self,
        ctx: &dyn MergeContext,
        high: HighVariableId,
    ) -> Option<Vec<(Address, int4)>> {
        match self {
            TypeMergeMode::Storage => storages(ctx, high),
            TypeMergeMode::On | TypeMergeMode::Off => None,
        }
    }

    /// May a same-typed candidate with storage `other` join the group whose
    /// head has storage `head`? Under `storage` they must share one storage
    /// location: a high an earlier merge already spread over several registers
    /// still joins a high held in any one of them.
    pub fn joins(
        self,
        head: &Option<Vec<(Address, int4)>>,
        other: &Option<Vec<(Address, int4)>>,
    ) -> bool {
        match self {
            TypeMergeMode::On => true,
            TypeMergeMode::Off => false,
            TypeMergeMode::Storage => match (head, other) {
                (Some(h), Some(o)) => h.iter().any(|s| o.contains(s)),
                _ => false,
            },
        }
    }
}

/// Every storage an instance of `high` sits in, sorted and without repeats, or
/// `None` when the context cannot say for one of them.
pub fn storages(ctx: &dyn MergeContext, high: HighVariableId) -> Option<Vec<(Address, int4)>> {
    let mut found: Vec<(Address, int4)> = Vec::new();
    for i in 0..ctx.high_num_instances(high) {
        let s = ctx.vn_storage(ctx.high_get_instance(high, i))?;
        if !found.contains(&s) {
            found.push(s);
        }
    }
    found.sort();
    (!found.is_empty()).then_some(found)
}

/// The storage every instance of `high` shares, or `None` when they differ or
/// the context cannot say.
pub fn single_storage(ctx: &dyn MergeContext, high: HighVariableId) -> Option<(Address, int4)> {
    let mut found: Option<(Address, int4)> = None;
    for i in 0..ctx.high_num_instances(high) {
        let vn = ctx.high_get_instance(high, i);
        let s = ctx.vn_storage(vn)?;
        match &found {
            None => found = Some(s),
            Some(f) if *f == s => {}
            Some(_) => return None,
        }
    }
    found
}

/// (kuna) Parse `option typemerge on|storage|off`.
pub struct OptionTypeMerge;

impl OptionTypeMerge {
    /// The option name.
    pub const NAME: &'static str = "typemerge";

    /// Parse and validate the value.
    pub fn apply(&self, p1: &str) -> KunaResult<(TypeMergeMode, String)> {
        let mode = match p1 {
            "on" => TypeMergeMode::On,
            "storage" => TypeMergeMode::Storage,
            "off" => TypeMergeMode::Off,
            other => {
                return Err(KunaError::parse(format!(
                    "Unknown typemerge value: {other} (expected on|storage|off)"
                )));
            }
        };
        Ok((
            mode,
            format!("Merging by data-type set to {}", mode.as_str()),
        ))
    }
}

impl crate::optionset::KunaOption for TypeMergeMode {
    const NAME: &'static str = "typemerge";
    crate::kuna_option_id!();

    fn unset() -> Self {
        TypeMergeMode::On
    }

    fn shipped() -> Self {
        TypeMergeMode::Storage
    }

    fn parse(value: &str) -> KunaResult<(Self, String)> {
        OptionTypeMerge.apply(value)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_every_value_and_rejects_others() {
        for (tok, mode) in [
            ("on", TypeMergeMode::On),
            ("storage", TypeMergeMode::Storage),
            ("off", TypeMergeMode::Off),
        ] {
            let (m, msg) = OptionTypeMerge.apply(tok).unwrap();
            assert_eq!(m, mode);
            assert_eq!(m.as_str(), tok);
            assert!(msg.ends_with(tok));
        }
        assert!(OptionTypeMerge.apply("bogus").is_err());
    }

    #[test]
    fn shipped_default_is_storage() {
        use crate::optionset::KunaOption;
        assert_eq!(TypeMergeMode::shipped(), TypeMergeMode::Storage);
        assert_eq!(TypeMergeMode::unset(), TypeMergeMode::On);
    }

    #[test]
    fn joins_follows_the_mode() {
        let a = Some(vec![(Address::default(), 4)]);
        let b = Some(vec![(Address::default(), 8)]);
        let ab = Some(vec![(Address::default(), 4), (Address::default(), 8)]);
        assert!(TypeMergeMode::On.joins(&None, &None));
        assert!(TypeMergeMode::Storage.joins(&ab, &b));
        assert!(TypeMergeMode::Storage.joins(&a, &ab));
        assert!(!TypeMergeMode::Off.joins(&a, &a));
        assert!(TypeMergeMode::Storage.joins(&a, &a));
        assert!(!TypeMergeMode::Storage.joins(&a, &b));
        assert!(!TypeMergeMode::Storage.joins(&None, &None));
        assert!(!TypeMergeMode::Storage.joins(&a, &None));
    }
}
