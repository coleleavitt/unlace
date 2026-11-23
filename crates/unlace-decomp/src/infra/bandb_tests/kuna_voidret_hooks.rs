//! Tests moved out of `kuna_voidret` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `kuna_voidret` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::architecture::Architecture;
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use crate::kuna_narrowret::FuncdataNarrowretExt;
    pub(super) use std::collections::{BTreeMap, BTreeSet};
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::space::spacetype;
    pub(super) use unlace_base::types::{int4, uintb};
}
use crate::kuna_voidret::*;
use module_scope::*;
use unlace_base::error::{KunaError, KunaResult};
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;

// Tests for the `voidret` ledger.

use unlace_base::address::Address;

struct NoImage;

impl LoadImage for NoImage {
    fn get_file_name(&self) -> &str {
        "none"
    }
    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> KunaResult<()> {
        Err(KunaError::data_unavail("none"))
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}

fn arch() -> Architecture {
    Architecture::new(
        "test:LE:32",
        Sleigh::new(Box::new(NoImage), Box::new(ContextInternal::new())),
    )
}

#[test]
fn a_displaced_float_return_is_withdrawn_once_its_forced_decompile_is_discarded() {
    let mut arch = arch();
    let (put, main) = ((1, 0x1270), (1, 0x1080));
    arch.kuna_tables
        .get_mut::<crate::kuna_voidret::Ledger>()
        .returns
        .insert(put, Returns::Float);
    arch.kuna_tables
        .get_mut::<crate::kuna_voidret::Ledger>()
        .float_refused
        .entry(put)
        .or_default()
        .insert(main);
    arch.kuna_tables
        .get_mut::<crate::kuna_voidret::Ledger>()
        .displacing
        .insert(put);
    assert!(
        withdrawals(&mut arch).is_empty(),
        "withdrawn before its forced decompile ran"
    );
    restore(&mut arch, put, Some(Returns::Float), None);
    assert!(
        !arch
            .kuna_tables
            .get::<crate::kuna_voidret::Ledger>()
            .displacing
            .contains(&put)
    );
    assert_eq!(withdrawals(&mut arch), BTreeSet::from([put]));
}
