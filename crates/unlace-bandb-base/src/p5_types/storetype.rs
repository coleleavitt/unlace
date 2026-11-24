//! (kuna `storetype`) Type a global from the values stored into it.
//!
//! A global that only ever receives one kind of value has that value's type.
//! `gBS = SystemTable->BootServices` makes `gBS` an `EFI_BOOT_SERVICES *`, but
//! the store's own function is the only one that knows: every function that
//! READS the global sees an untyped word and renders each boot-services call as
//! an offset off it. On a whole-program batch this ledger records, after each
//! decompile, the type every written global took in that function and which
//! functions refer to each global. After the batch a global is typed where every
//! store agrees on one pointer to a named, complete structure (under `uefi`, a
//! structure whose name starts with `EFI_`), and the functions that refer to it
//! are decompiled again against the typed symbol.

use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;

use unlace_base::space::spacetype;

use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// Which stored types may type a global.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum StoreTypeMode {
    Off,
    /// Only pointers to `EFI_*` structures.
    #[default]
    Uefi,
    /// Any pointer to a named, complete structure or union.
    All,
}

impl StoreTypeMode {
    pub fn parse(value: &str) -> Result<Self, String> {
        match value {
            "off" => Ok(Self::Off),
            "uefi" => Ok(Self::Uefi),
            "all" => Ok(Self::All),
            other => Err(format!("storetype takes off|uefi|all, not {other:?}")),
        }
    }

    pub fn as_str(self) -> &'static str {
        match self {
            Self::Off => "off",
            Self::Uefi => "uefi",
            Self::All => "all",
        }
    }
}

/// What a batch learned about its globals.
#[derive(Default)]
pub struct Ledger {
    pub recording: bool,
    stores: BTreeMap<u64, Vec<(i32, Rc<Datatype>)>>,
    refs: BTreeMap<u64, BTreeSet<u64>>,
    decided: BTreeSet<u64>,
}

impl Ledger {
    pub fn start(&mut self, mode: StoreTypeMode) {
        *self = Ledger {
            recording: mode != StoreTypeMode::Off,
            ..Ledger::default()
        };
    }

    pub fn stop(&mut self) {
        *self = Ledger::default();
    }

    /// The globals every store types alike, with that type, not decided before.
    pub fn decide(&mut self, mode: StoreTypeMode) -> Vec<(u64, Rc<Datatype>)> {
        let mut out = Vec::new();
        for (&addr, stores) in &self.stores {
            if self.decided.contains(&addr) {
                continue;
            }
            let Some((size, first)) = stores.first() else {
                continue;
            };
            let agree = stores
                .iter()
                .all(|(s, t)| s == size && type_key(t) == type_key(first));
            if unlace_base::env::var_os("UNLACE_STORETYPE_TRACE").is_some() {
                let keys: Vec<_> = stores.iter().map(|(s, t)| (s, type_key(t).1)).collect();
                eprintln!("[storetype] {addr:#x} agree={agree} {keys:?}");
            }
            if agree && *size == first.get_size() && qualifies(first, mode) {
                out.push((addr, Rc::clone(first)));
            }
        }
        self.decided.extend(out.iter().map(|(a, _)| *a));
        out
    }

    /// The functions that refer to any of `globals`.
    pub fn readers(&self, globals: &[u64]) -> BTreeSet<u64> {
        globals
            .iter()
            .filter_map(|g| self.refs.get(g))
            .flatten()
            .copied()
            .collect()
    }
}

fn type_key(ty: &Datatype) -> (type_metatype, String) {
    let pointee = ty
        .get_ptr_to()
        .map(|p| p.get_name().to_string())
        .unwrap_or_default();
    (ty.get_metatype(), format!("{}*{pointee}", ty.get_name()))
}

fn qualifies(ty: &Datatype, mode: StoreTypeMode) -> bool {
    if ty.get_metatype() != type_metatype::TYPE_PTR {
        return false;
    }
    let Some(pointee) = ty.get_ptr_to() else {
        return false;
    };
    if !matches!(
        pointee.get_metatype(),
        type_metatype::TYPE_STRUCT | type_metatype::TYPE_UNION
    ) || pointee.is_incomplete()
    {
        return false;
    }
    let name = pointee.get_name();
    match mode {
        StoreTypeMode::Off => false,
        StoreTypeMode::Uefi => name.starts_with("EFI_"),
        StoreTypeMode::All => {
            !name.is_empty() && !name.starts_with("struct_") && !name.starts_with("anon_")
        }
    }
}

/// File what `data` stored into and read from its globals.
pub fn record(ledger: &mut Ledger, data: &Funcdata) {
    if !ledger.recording {
        return;
    }
    let func = data.get_address().get_offset();
    for id in data.vbank().iter_loc() {
        let Some(v) = data.vbank().get(id) else {
            continue;
        };
        if !v.is_persist() || v.get_space().get_type() != spacetype::IPTR_PROCESSOR {
            continue;
        }
        let addr = v.get_addr().get_offset();
        ledger.refs.entry(addr).or_default().insert(func);
        let stored = v
            .get_def()
            .and_then(|op| data.obank().get(op))
            .is_some_and(|op| match op.code() {
                OpCode::CPUI_INDIRECT | OpCode::CPUI_MULTIEQUAL => false,
                OpCode::CPUI_COPY => op
                    .get_in(0)
                    .and_then(|i| data.vbank().get(i))
                    .is_none_or(|src| src.get_addr() != v.get_addr()),
                _ => true,
            });
        if stored {
            ledger
                .stores
                .entry(addr)
                .or_default()
                .push((v.get_size(), Rc::clone(v.get_type())));
        }
    }
}

/// The name an EFI service-table global carries in EDK2.
pub fn efi_global_name(ty: &Datatype) -> Option<&'static str> {
    let pointee = ty.get_ptr_to()?;
    Some(match pointee.get_name() {
        "EFI_BOOT_SERVICES" => "gBS",
        "EFI_SYSTEM_TABLE" => "gST",
        "EFI_RUNTIME_SERVICES" => "gRT",
        "EFI_DXE_SERVICES" => "gDS",
        _ => return None,
    })
}

impl crate::optionset::KunaOption for StoreTypeMode {
    const NAME: &'static str = "storetype";
    crate::kuna_option_id!();

    fn unset() -> Self {
        crate::storetype::StoreTypeMode::Off
    }

    fn shipped() -> Self {
        crate::storetype::StoreTypeMode::Uefi
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        Ok(crate::storetype::StoreTypeMode::parse(value.trim())
            .map_err(unlace_base::error::KunaError::parse)
            .map(|mode| {
                (
                    mode,
                    format!("global typing from stored values set to {}", mode.as_str()),
                )
            })?)
    }
}

crate::kuna_arch_table!(Ledger);
