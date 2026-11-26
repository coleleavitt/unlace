//! The entry point of a firmware module, named and typed by its FFS file type
//! (option `uefientry`). The PI specification's file types name the entry: a
//! PEIM and a combined PEIM driver enter as `PeimEntryPoint`, the PEI core as
//! `PeiCore`, the DXE core as `DxeMain`, a standalone MM module as
//! `StandaloneMmEntryPoint`, and every other module as `ModuleEntryPoint`. A
//! combined file is labelled with the kinds it combines.

use super::flow::Kind;

/// The name, prototype and optional label of a module's entry point.
pub(super) struct EntryName {
    pub(super) name: &'static str,
    pub(super) decl: &'static str,
    pub(super) label: Option<&'static str>,
}

/// The entry of a module of FFS file type `file_type`, entered as `kind`;
/// `None` for a file type this pass does not name.
pub(super) fn named(file_type: u8, kind: Kind) -> Option<EntryName> {
    let (name, label) = match file_type {
        0x04 => ("PeiCore", None),
        0x05 => ("DxeMain", None),
        0x06 => ("PeimEntryPoint", None),
        0x08 => ("PeimEntryPoint", Some("COMBINED_PEIM_DRIVER")),
        0x07 | 0x09 | 0x0a | 0x0d => ("ModuleEntryPoint", None),
        0x0c => ("ModuleEntryPoint", Some("COMBINED_MM_DXE")),
        0x0e | 0x0f => ("StandaloneMmEntryPoint", None),
        _ => return None,
    };
    let decl = match file_type {
        0x04 => "VOID(VOID* SecCoreData, VOID* PpList)",
        0x05 => "VOID(VOID* HobStart)",
        _ => kind.entry_decl(),
    };
    Some(EntryName { name, decl, label })
}

#[cfg(test)]
mod tests;
