//! Freeze caller-return evidence from a complete object, before target selection.

use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;

use object::{Object, ObjectSection, ObjectSegment, ObjectSymbol};

use unlace_decomp::callwide::{CodeRegion, Declaration, DeclarationSource};
use unlace_decomp::fspec::{ProtoModel, PrototypePieces};

use crate::engine::ConsoleProgram;

const MAX_OBJECT_BYTES: usize = 8 * 1024 * 1024;
const MAX_CODE_BYTES: usize = 65_536;
const MAX_ENTRIES: usize = 16_384;
const MAX_NAMES: usize = 65_536;
const MAX_NAME_BYTES: usize = 1_048_576;

pub struct InventoryEntry {
    pub address: u64,
    pub size: u64,
    pub name: String,
    pub aliases: Vec<String>,
}

#[derive(Default)]
pub(crate) struct State {
    image: Option<Vec<u8>>,
    declarations: Vec<Record>,
    inventory: Option<Vec<InventoryEntry>>,
    frozen: bool,
    unavailable: Option<&'static str>,
    declaration_names: usize,
    declaration_bytes: usize,
}

enum Target {
    Entry(u64),
    Named(String),
}

struct Record {
    target: Target,
    pieces: PrototypePieces,
    model: Rc<ProtoModel>,
    source: DeclarationSource,
}

impl State {
    pub(crate) fn supported(&self) -> bool {
        self.image.is_some()
    }

    pub(crate) fn object(bytes: &[u8]) -> Self {
        let eligible = bytes.len() <= MAX_OBJECT_BYTES
            && unlace_analysis::loadimage_object::parse_object(bytes).is_ok_and(|file| {
                file.format() == object::BinaryFormat::Elf
                    && !file.is_64()
                    && !file.is_little_endian()
                    && file.kind() == object::ObjectKind::Executable
                    && file.architecture() == object::Architecture::Mips
            });
        Self {
            image: eligible.then(|| bytes.to_vec()),
            ..Self::default()
        }
    }

    pub(crate) fn changed(&mut self) {
        self.frozen = false;
    }

    pub(crate) fn unavailable(&mut self, reason: &'static str) {
        self.frozen = false;
        self.unavailable = Some(reason);
    }
}

/// External declarations are recorded at ingestion; recovered prototype locks do not enter here.
pub(crate) fn declaration(
    prog: &mut ConsoleProgram,
    entry: u64,
    pieces: &PrototypePieces,
    model: Option<Rc<ProtoModel>>,
    source: DeclarationSource,
) {
    record(prog, Target::Entry(entry), pieces, model, source);
}

fn record(
    prog: &mut ConsoleProgram,
    target: Target,
    pieces: &PrototypePieces,
    model: Option<Rc<ProtoModel>>,
    source: DeclarationSource,
) {
    if !prog.callwide.supported() {
        return;
    }
    let (name_count, name_bytes) = record_cost(&target, pieces);
    if pieces.intypes.len() > 256
        || pieces.input_storage.len() > 256
        || prog.callwide.declaration_names.saturating_add(name_count) > MAX_NAMES
        || prog.callwide.declaration_bytes.saturating_add(name_bytes) > MAX_NAME_BYTES
    {
        prog.callwide_unavailable("declaration provenance exceeds the image bound");
        return;
    }
    let model = model
        .or_else(|| unlace_decomp::typedcallabi::undeclared_model_for(prog.arch(), pieces))
        .or_else(|| prog.arch().default_fp().cloned());
    prog.callwide_changed();
    if let Some(model) = model {
        if prog.callwide.declarations.len() >= MAX_ENTRIES {
            prog.callwide_unavailable("declaration provenance exceeds the image bound");
            return;
        }
        prog.callwide.declaration_names += name_count;
        prog.callwide.declaration_bytes += name_bytes;
        prog.callwide.declarations.push(Record {
            target,
            pieces: pieces.clone(),
            model,
            source,
        });
    } else {
        prog.callwide_unavailable("declaration has no established ABI model");
    }
}

fn record_cost(target: &Target, pieces: &PrototypePieces) -> (usize, usize) {
    let name_count = pieces.innames.len().saturating_add(2);
    let name_bytes = pieces
        .name
        .len()
        .saturating_add(match target {
            Target::Entry(_) => 0,
            Target::Named(name) => name.len(),
        })
        .saturating_add(pieces.innames.iter().map(String::len).sum::<usize>());
    (name_count, name_bytes)
}

pub(crate) fn named_declaration(
    prog: &mut ConsoleProgram,
    name: &str,
    pieces: &PrototypePieces,
    model: Option<Rc<ProtoModel>>,
    source: DeclarationSource,
) {
    record(prog, Target::Named(name.to_owned()), pieces, model, source);
}

fn declarations(prog: &ConsoleProgram) -> Option<Vec<Declaration>> {
    resolve_declarations(&prog.callwide.declarations, declaration_inventory(prog))
}

fn declaration_inventory(prog: &ConsoleProgram) -> Vec<(u64, String, Vec<String>)> {
    match &prog.callwide.inventory {
        Some(inventory) => inventory
            .iter()
            .map(|entry| (entry.address, entry.name.clone(), entry.aliases.clone()))
            .collect(),
        None => prog
            .function_entries_canonical()
            .into_iter()
            .map(|entry| (entry.addr.get_offset(), entry.name, entry.aliases))
            .collect(),
    }
}

fn resolve_declarations(
    records: &[Record],
    entries: impl IntoIterator<Item = (u64, String, Vec<String>)>,
) -> Option<Vec<Declaration>> {
    let mut names = BTreeMap::new();
    let mut addresses = BTreeSet::new();
    let mut count = 0usize;
    let mut bytes = 0usize;
    for (address, name, aliases) in entries {
        if addresses.len() >= MAX_ENTRIES {
            return None;
        }
        addresses.insert(address);
        for name in std::iter::once(name).chain(aliases) {
            count = count.checked_add(1)?;
            bytes = bytes.checked_add(name.len())?;
            if count > MAX_NAMES || bytes > MAX_NAME_BYTES {
                return None;
            }
            names
                .entry(name)
                .and_modify(|known| {
                    if *known != Some(address) {
                        *known = None;
                    }
                })
                .or_insert(Some(address));
        }
    }
    let mut resolved = BTreeMap::new();
    for record in records
        .iter()
        .filter(|record| record.source == DeclarationSource::Dwarf)
        .chain(
            records
                .iter()
                .filter(|record| record.source != DeclarationSource::Dwarf),
        )
    {
        let entry = match &record.target {
            Target::Entry(entry) if addresses.contains(entry) => *entry,
            Target::Named(name) => names.get(name).copied().flatten()?,
            _ => return None,
        };
        resolved.insert(
            entry,
            Declaration {
                entry,
                pieces: record.pieces.clone(),
                model: record.model.clone(),
                source: record.source,
            },
        );
    }
    Some(resolved.into_values().collect())
}

#[cfg(test)]
mod tests;

pub(crate) fn target_declaration(
    prog: &mut ConsoleProgram,
    target: &crate::assertions::ProtoTarget,
    pieces: &PrototypePieces,
    model: Option<Rc<ProtoModel>>,
    source: DeclarationSource,
) {
    match target {
        crate::assertions::ProtoTarget::At(address, _) => {
            if !address
                .get_space()
                .zip(prog.arch().manage().get_default_code_space())
                .is_some_and(|(actual, code)| Rc::ptr_eq(actual, code))
            {
                prog.callwide_unavailable(
                    "declaration target is outside the established code space",
                );
                return;
            }
            declaration(prog, address.get_offset(), pieces, model, source)
        }
        crate::assertions::ProtoTarget::Named(name) => {
            named_declaration(prog, name, pieces, model, source)
        }
    }
}

/// A refusal is stable until an external mutation; no selected function can supply a positive fact.
pub fn prepare(prog: &mut ConsoleProgram) {
    if !prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::callwide::CallWide>()
        .0
        || !prog
            .arch()
            .unlace_options
            .get::<unlace_decomp::bejoin::BeJoinMode>()
            .proves()
        || prog.callwide.frozen
    {
        return;
    }
    unlace_decomp::mipsunaligned::paint(prog.arch_mut());
    prog.arch_mut()
        .unlace_tables
        .get_mut::<unlace_decomp::callwide::ProofSlot>()
        .clear();
    ingest_dwarf(prog);
    prog.callwide.frozen = true;
    if let Some(reason) = prog.callwide.unavailable {
        refuse(prog, reason);
        return;
    }
    if !prog.callwide.supported() {
        refuse(prog, "complete object facts are unavailable");
        return;
    }
    if prog.callwide.declarations.is_empty() {
        refuse(prog, "no declaration provenance was supplied");
        return;
    }
    let Some(bytes) = prog.callwide.image.take() else {
        refuse(prog, "complete object facts are unavailable");
        return;
    };
    let facts = facts(prog, &bytes);
    prog.callwide.image = Some(bytes);
    match facts {
        Some(Facts {
            regions,
            functions,
            sites,
            entry,
            observed,
        }) => {
            let Some(declarations) = declarations(prog) else {
                refuse(
                    prog,
                    "declaration has no unique entry in the completed inventory",
                );
                return;
            };
            if !prog.arch().default_fp().is_some_and(|model| {
                prog.arch()
                    .eval_fp_current()
                    .is_some_and(|current| Rc::ptr_eq(model, current))
                    && declarations
                        .iter()
                        .all(|declaration| Rc::ptr_eq(model, &declaration.model))
            }) {
                refuse(
                    prog,
                    "declaration ABI differs from the current default model",
                );
                return;
            }
            let Some(space) = prog.arch().manage().get_default_code_space().cloned() else {
                return;
            };
            if unlace_decomp::callwide::publish_mips(
                prog.arch_mut(),
                &regions,
                &functions,
                entry,
                &observed,
                &sites,
                &declarations,
            ) == 0
            {
                return;
            }
            let Some(verdict) = prog
                .arch()
                .unlace_tables
                .get::<unlace_decomp::callwide::ProofSlot>()
                .verdict()
            else {
                return;
            };
            let needed: Vec<_> = declarations
                .iter()
                .filter(|declaration| {
                    prog.arch()
                        .unlace_tables
                        .get::<unlace_decomp::callwide::ProofSlot>()
                        .needed_declaration(declaration.entry)
                })
                .cloned()
                .collect();
            for declaration in &needed {
                let address = unlace_base::address::Address::new(space.clone(), declaration.entry);
                let name = prog
                    .arch()
                    .symboltab
                    .function_display_name_across_scopes(&address)
                    .unwrap_or_else(|| declaration.pieces.name.clone());
                let target = crate::assertions::ProtoTarget::At(address, name);
                crate::assertions::park_prototype(
                    prog,
                    &target,
                    &mut declaration.pieces.clone(),
                    Some(&declaration.model),
                );
            }
            if prog
                .arch()
                .unlace_tables
                .get::<unlace_decomp::callwide::ProofSlot>()
                .is_empty()
            {
                unlace_decomp::callwide::publish_mips(
                    prog.arch_mut(),
                    &regions,
                    &functions,
                    entry,
                    &observed,
                    &sites,
                    &declarations,
                );
            }
            if !prog
                .arch()
                .unlace_tables
                .get::<unlace_decomp::callwide::ProofSlot>()
                .same_verdict(&verdict)
            {
                prog.arch_mut()
                    .unlace_tables
                    .get_mut::<unlace_decomp::callwide::ProofSlot>()
                    .clear();
                refuse(prog, "declaration replay changed the frozen proof");
            }
        }
        None => refuse(
            prog,
            "complete code, ownership, caller, or ABI evidence was refused",
        ),
    }
}

fn ingest_dwarf(prog: &mut ConsoleProgram) {
    prog.callwide
        .declarations
        .retain(|record| record.source != DeclarationSource::Dwarf);
    let (names, bytes) =
        prog.callwide
            .declarations
            .iter()
            .fold((0usize, 0usize), |(names, bytes), record| {
                let (count, size) = record_cost(&record.target, &record.pieces);
                (names.saturating_add(count), bytes.saturating_add(size))
            });
    prog.callwide.declaration_names = names;
    prog.callwide.declaration_bytes = bytes;
    if !prog
        .arch()
        .unlace_options
        .get::<unlace_decomp::analysisgates::Dwarf>()
        .0
        || !prog.callwide.supported()
        || prog.callwide.unavailable.is_some()
    {
        return;
    }
    let entries = declaration_inventory(prog);
    let declarations = prog
        .callwide
        .image
        .as_deref()
        .and_then(|bytes| unlace_analysis::loadimage_object::parse_object(bytes).ok())
        .and_then(|file| {
            unlace_analysis::dwarf::callwide_declarations(&file, prog.arch(), &entries)
        });
    match declarations {
        Some(declarations) => {
            for (entry, pieces) in declarations {
                declaration(prog, entry, &pieces, None, DeclarationSource::Dwarf);
            }
        }
        None => prog
            .callwide_unavailable("strict DWARF declaration evidence was incomplete or ambiguous"),
    }
}

fn refuse(prog: &ConsoleProgram, reason: &str) {
    unlace_base::notes::say_once(
        prog.description(),
        &format!("[unlace callwide] no promotion: {reason}"),
    );
}

struct Facts {
    regions: Vec<CodeRegion>,
    functions: Vec<(u64, u64)>,
    sites: BTreeMap<u64, Vec<u64>>,
    entry: u64,
    observed: BTreeSet<(u64, u64)>,
}

pub fn replay_inventory(prog: &mut ConsoleProgram, inventory: Vec<InventoryEntry>) {
    prog.callwide_changed();
    let count: usize = inventory
        .iter()
        .map(|entry| entry.aliases.len().saturating_add(1))
        .sum();
    let bytes: usize = inventory
        .iter()
        .flat_map(|entry| std::iter::once(&entry.name).chain(&entry.aliases))
        .map(String::len)
        .sum();
    if inventory.len() > MAX_ENTRIES || count > MAX_NAMES || bytes > MAX_NAME_BYTES {
        prog.callwide_unavailable("complete worker inventory exceeds the image bound");
        return;
    }
    prog.callwide.inventory = Some(inventory);
}

fn facts(prog: &ConsoleProgram, bytes: &[u8]) -> Option<Facts> {
    let file = unlace_analysis::loadimage_object::parse_object(bytes).ok()?;
    if file.architecture() != object::Architecture::Mips
        || !supported_language(&prog.arch().archid)
        || !mips_container(bytes, &file)
    {
        return None;
    }
    let mut regions = Vec::new();
    let mut total = 0usize;
    for segment in file.segments() {
        let object::SegmentFlags::Elf { p_flags } = segment.flags() else {
            return None;
        };
        if p_flags & 1 == 0 {
            continue;
        }
        let original = segment.data().ok()?;
        total = total.checked_add(original.len())?;
        if original.is_empty()
            || original.len() as u64 != segment.size()
            || total > MAX_CODE_BYTES
            || p_flags & 2 != 0
        {
            return None;
        }
        let effective = prog.read_bytes(segment.address(), original.len())?;
        if effective != original {
            return None;
        }
        regions.push(CodeRegion {
            address: segment.address(),
            bytes: effective,
        });
    }
    if regions.is_empty() {
        return None;
    }
    for section in file.sections() {
        if let object::SectionFlags::Elf { sh_flags } = section.flags() {
            if sh_flags & 2 != 0 && section.kind() != object::SectionKind::UninitializedData {
                let data = section.data().ok()?;
                if data.len() as u64 != section.size() {
                    return None;
                }
            }
        }
    }
    let entries = prog.function_entries_canonical();
    if entries.is_empty() || entries.len() > MAX_ENTRIES {
        return None;
    }
    if !prog.arch().error_noreturn_callsites.is_empty()
        || entries.iter().any(|entry| {
            let db = &prog.arch().symboltab;
            (db.function_is_no_return_across_scopes(&entry.addr)
                && entry.addr.get_offset() != file.entry())
                || db.function_is_inline_across_scopes(&entry.addr)
                || db.function_inject_id_across_scopes(&entry.addr) >= 0
        })
    {
        return None;
    }
    let functions: Vec<_> = match &prog.callwide.inventory {
        Some(inventory) => {
            let actual: BTreeSet<_> = entries
                .iter()
                .map(|entry| entry.addr.get_offset())
                .collect();
            if actual != inventory.iter().map(|entry| entry.address).collect() {
                return None;
            }
            inventory
                .iter()
                .map(|entry| (entry.address, entry.size))
                .collect()
        }
        None => entries
            .iter()
            .map(|entry| (entry.addr.get_offset(), entry.size))
            .collect(),
    };
    if functions.iter().any(|(entry, size)| {
        *size == 0
            || !regions.iter().any(|region| {
                region.address <= *entry
                    && entry
                        .checked_add(*size)
                        .zip(region.address.checked_add(region.bytes.len() as u64))
                        .is_some_and(|(end, last)| end <= last)
            })
    }) {
        return None;
    }
    let seeds: Vec<_> = functions.iter().map(|(entry, _)| *entry).collect();
    let wanted: BTreeSet<_> = seeds.iter().copied().collect();
    let mut stored_addresses = BTreeSet::new();
    for segment in file.segments() {
        for window in segment.data().ok()?.windows(4) {
            let value = u64::from(u32::from_be_bytes(window.try_into().ok()?));
            if wanted.contains(&value) {
                stored_addresses.insert(value);
            }
        }
    }
    let owners: BTreeMap<_, _> = functions.iter().copied().collect();
    if owners.len() != functions.len() {
        return None;
    }
    let mut last = None;
    for (&entry, &size) in &owners {
        if last.is_some_and(|end| entry < end) {
            return None;
        }
        last = Some(entry.checked_add(size)?);
    }
    let index =
        unlace_analysis::listing::xrefs::build(&file, prog.arch(), prog.arch().translate(), &seeds);
    let owner = |at: u64| {
        let (&entry, &size) = owners.range(..=at).next_back()?;
        (at < entry.checked_add(size)?).then_some(entry)
    };
    if seeds.iter().any(|entry| index.has_indirect_calls(*entry)) {
        return None;
    }
    let mut observed = BTreeSet::new();
    let mut open = stored_addresses;
    open.insert(file.entry());
    for &entry in &seeds {
        for r in index.refs_to(entry) {
            if r.kind == unlace_analysis::listing::xrefs::XrefKind::Call && owner(r.from).is_some()
            {
                observed.insert((r.from, entry));
            } else {
                open.insert(entry);
            }
        }
    }
    for symbol in file.dynamic_symbols() {
        if symbol.is_definition() {
            open.insert(symbol.address());
        }
    }
    for export in file.exports().ok()? {
        open.insert(export.address());
    }
    let mut sites =
        unlace_decomp::callwide::mips::closed_image(file.entry(), &regions, &functions, &observed)?;
    sites.retain(|entry, _| !open.contains(entry));
    Some(Facts {
        regions,
        functions,
        sites,
        entry: file.entry(),
        observed,
    })
}

fn supported_language(archid: &str) -> bool {
    archid == "MIPS:BE:32:default:default"
}

fn mips_container(bytes: &[u8], file: &object::File) -> bool {
    let Some(header) = bytes.get(..52) else {
        return false;
    };
    let word = |at| u32::from_be_bytes(header[at..at + 4].try_into().unwrap());
    let half = |at| u16::from_be_bytes(header[at..at + 2].try_into().unwrap());
    let flags = word(36);
    if !matches!(flags & 0xf000_0000, 0x5000_0000 | 0x7000_0000)
        || !matches!(flags & 0x0000_f000, 0 | 0x1000)
        || flags & !0xf000_1001 != 0
        || half(42) != 32
    {
        return false;
    }
    let phoff = word(28) as usize;
    for index in 0..usize::from(half(44)) {
        let Some(at) = index
            .checked_mul(32)
            .and_then(|offset| phoff.checked_add(offset))
        else {
            return false;
        };
        let Some(phdr) = at.checked_add(32).and_then(|end| bytes.get(at..end)) else {
            return false;
        };
        let kind = u32::from_be_bytes(phdr[..4].try_into().unwrap());
        let flags = u32::from_be_bytes(phdr[24..28].try_into().unwrap());
        if matches!(kind, 2 | 3 | 7) || (kind == 0x6474_e551 && flags & 1 != 0) {
            return false;
        }
    }
    if half(46) != 40 || half(48) == 0 {
        return false;
    }
    let shoff = word(32) as usize;
    for index in 0..usize::from(half(48)) {
        let Some(at) = index
            .checked_mul(40)
            .and_then(|offset| shoff.checked_add(offset))
        else {
            return false;
        };
        let Some(shdr) = at.checked_add(40).and_then(|end| bytes.get(at..end)) else {
            return false;
        };
        if matches!(
            u32::from_be_bytes(shdr[4..8].try_into().unwrap()),
            4 | 9 | 14..=16 | 19
        ) {
            return false;
        }
    }
    if !file.imports().is_ok_and(|imports| imports.is_empty()) {
        return false;
    }
    if !file.exports().is_ok_and(|exports| exports.is_empty()) {
        return false;
    }
    for symbol in file.symbols().chain(file.dynamic_symbols()) {
        if let object::SymbolFlags::Elf { st_info, st_other } = symbol.flags() {
            if st_info & 15 == 10
                || st_other & !3 != 0
                || (st_info & 15 == 2 && symbol.address() & 1 != 0)
            {
                return false;
            }
            if symbol.is_definition()
                && matches!(st_info >> 4, 1 | 2)
                && matches!(st_other & 3, 0 | 3)
                && !(st_info & 15 == 2 && symbol.address() == file.entry())
            {
                return false;
            }
        } else {
            return false;
        }
    }
    for section in file.sections() {
        if section.name().is_ok_and(|name| {
            [
                ".init",
                ".fini",
                ".preinit_array",
                ".init_array",
                ".fini_array",
                ".ctors",
                ".dtors",
            ]
            .iter()
            .any(|prefix| name == *prefix || name.starts_with(&format!("{prefix}.")))
        }) {
            return false;
        }
        if matches!(
            section.name(),
            Ok(".dynamic" | ".interp" | ".got" | ".got.plt")
        ) && section.size() != 0
        {
            return false;
        }
        if matches!(section.flags(), object::SectionFlags::Elf { sh_flags } if sh_flags & 0x1000_0000 != 0)
        {
            return false;
        }
        if section.relocations().next().is_some() {
            return false;
        }
    }
    true
}
