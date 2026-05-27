//! Alias and mod/ref query layer.
//!
//! Passes should ask this API instead of open-coding
//! `MemoryLocation::{must_alias,must_not_alias}` decisions. It is conservative
//! today and can later be backed by stack-slot facts, type info, and
//! interprocedural mod/ref summaries.

use unlace_ir::memory_ssa::MemoryLocation;

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum AliasRelation {
    NoAlias,
    MayAlias,
    MustAlias,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum ModRef {
    NoModRef,
    Ref,
    Mod,
    ModRef,
}

impl ModRef {
    pub fn can_mod(self) -> bool {
        matches!(self, Self::Mod | Self::ModRef)
    }

    pub fn can_ref(self) -> bool {
        matches!(self, Self::Ref | Self::ModRef)
    }
}

#[derive(Copy, Clone, Debug, Default)]
pub struct AliasAnalysis;

impl AliasAnalysis {
    pub fn new() -> Self {
        Self
    }

    pub fn alias(&self, a: &MemoryLocation, b: &MemoryLocation) -> AliasRelation {
        if a.must_alias(b) {
            AliasRelation::MustAlias
        } else if a.must_not_alias(b) {
            AliasRelation::NoAlias
        } else {
            AliasRelation::MayAlias
        }
    }

    pub fn must_alias(&self, a: &MemoryLocation, b: &MemoryLocation) -> bool {
        self.alias(a, b) == AliasRelation::MustAlias
    }

    pub fn no_alias(&self, a: &MemoryLocation, b: &MemoryLocation) -> bool {
        self.alias(a, b) == AliasRelation::NoAlias
    }

    /// Conservative mod/ref answer for an opaque call-like operation.
    pub fn call_modref(&self, readonly: bool, writeonly: bool) -> ModRef {
        match (readonly, writeonly) {
            (true, false) => ModRef::Ref,
            (false, true) => ModRef::Mod,
            (true, true) => ModRef::NoModRef,
            (false, false) => ModRef::ModRef,
        }
    }
}

#[cfg(test)]
mod tests {
    use unlace_ir::memory_ssa::MemoryLocation;

    use super::*;

    #[test]
    fn classifies_basic_memory_locations() {
        let aa = AliasAnalysis::new();
        let a = MemoryLocation::stack(-8, 4);
        let b = MemoryLocation::stack(-8, 4);
        let c = MemoryLocation::stack(-4, 4);
        let d = MemoryLocation::unknown();

        assert_eq!(aa.alias(&a, &b), AliasRelation::MustAlias);
        assert_eq!(aa.alias(&a, &c), AliasRelation::NoAlias);
        assert_eq!(aa.alias(&a, &d), AliasRelation::MayAlias);
    }

    #[test]
    fn classifies_call_modref_conservatively() {
        let aa = AliasAnalysis::new();

        assert_eq!(aa.call_modref(true, false), ModRef::Ref);
        assert_eq!(aa.call_modref(false, true), ModRef::Mod);
        assert_eq!(aa.call_modref(false, false), ModRef::ModRef);
        assert_eq!(aa.call_modref(true, true), ModRef::NoModRef);
    }
}
