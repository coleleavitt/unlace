//! (kuna `machobinds`) Mach-O pointer slots a bind fills, named for their import.
//!
//! The indirect-symbol table names the stubs and the typed `__got` /
//! `__la_symbol_ptr` slots. Any other pointer slot dyld fills from an import - a
//! C function or data pointer initialized to an import, an arm64e `__auth_ptr`,
//! a vtable or Swift witness entry - is recorded only by a bind: a chained-fixup
//! bind or a classic `LC_DYLD_INFO` bind opcode. This pass names each such slot
//! for its import and paints it `externref`, the channel `elfgotimports` uses for
//! ELF GOT slots: a symbol-table name `query_function` resolves for a call or a
//! read through the slot, never a function-inventory entry. A bind with an addend
//! is skipped (the slot holds `&sym + addend`), and so are `__objc_*` and
//! `__cfstring`, whose own passes name their slots.

use object::read::{Object, ObjectSection};

use crate::loader::format::macho::{resolve_chained_fixups, resolve_dyld_info_bind_slots};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// `(slot, import name)` for every bound slot the indirect-symbol table does
/// not already name, leading underscore stripped, sorted by slot.
pub(crate) fn bound_slots(file: &object::File, bytes: &[u8]) -> Vec<(u64, String)> {
    if file.format() != object::BinaryFormat::MachO {
        return Vec::new();
    }
    let owned: Vec<(u64, u64)> = file
        .sections()
        .filter(|s| s.name().is_ok_and(|n| n.starts_with("__objc_") || n == "__cfstring"))
        .map(|s| (s.address(), s.address() + s.size()))
        .collect();
    let named: std::collections::HashSet<u64> =
        super::macho_stubs::resolve_macho_imports(file, bytes).into_iter().map(|i| i.addr).collect();
    let chained = resolve_chained_fixups(file, bytes);
    let classic = resolve_dyld_info_bind_slots(file, bytes);
    let mut binds: Vec<(u64, &str)> = chained
        .named_binds()
        .filter(|&(slot, _)| chained.bind(slot).is_some_and(|(_, addend)| addend == 0))
        .chain(classic.iter().filter(|(_, (_, addend))| *addend == 0).map(|(&slot, (name, _))| (slot, name.as_ref())))
        .filter(|&(slot, _)| !named.contains(&slot) && !owned.iter().any(|&(lo, hi)| slot >= lo && slot < hi))
        .collect();
    binds.sort_unstable();
    binds.dedup_by_key(|b| b.0);
    binds
        .into_iter()
        .map(|(slot, name)| (slot, name.strip_prefix('_').unwrap_or(name).to_string()))
        .collect()
}

/// Names each bound slot for its import and paints it `externref`. Its output
/// is committed only when `machobinds` is on.
pub struct MachoBindSlotsPass;

impl AnalysisPass for MachoBindSlotsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "machobinds"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        let width = if ctx.file.is_64() { 8 } else { 4 };
        for (slot, name) in bound_slots(ctx.file, ctx.bytes) {
            out.externref.push((slot, slot + width));
            out.import_slot_names.push((slot, name));
        }
        out
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_fixture_binds_name_their_data_pointers() {
        let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/macho_bindslots_arm64");
        let bytes = std::fs::read(path).unwrap();
        let file = object::File::parse(bytes.as_slice()).unwrap();
        assert_eq!(
            bound_slots(&file, &bytes),
            [(0x1_0000_4000, "ext_handler".to_string()), (0x1_0000_4008, "ext_counter".to_string())]
        );
    }
}
