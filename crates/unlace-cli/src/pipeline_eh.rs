//! pipeline: eh.

use super::*;

/// The LSDA of the function starting at `addr`, from the compiled code's
/// `.eh_frame` and `.gcc_except_table` sections.
///
/// The FDE's initial_address is what populates `function_start`, which
/// matches `FunctionEntry::addr` for entries discovered from the symbol
/// table or DWARF.
pub(super) fn function_lsda(image: &BinaryImage, addr: u64) -> Option<unlace_loader::FunctionLsda> {
    let eh = unlace_loader::parse_eh_frame(image)
        .ok()
        .filter(|eh| !eh.lsda_entries.is_empty())?;
    let mut info = unlace_loader::parse_gcc_except_table(image, &eh.lsda_entries).ok()?;
    info.functions.remove(&addr)
}

/// The handlers the unwinder can enter in the function starting at
/// `addr`, for [`unlace_struct::install_eh_dispatch`]: the landing pads of
/// its LSDA call-site table (Itanium C++), or the `__except` bodies of its
/// `__C_specific_handler` scope table (PE).
///
/// An LSDA pad is a catch pad when some call site that unwinds to it names
/// a catch clause (positive type filter), and a cleanup pad otherwise. The
/// try start is the first call site that unwinds to the pad.
pub(super) fn landing_pads(image: &BinaryImage, addr: u64) -> Vec<unlace_struct::LandingPad> {
    let Some(lsda) = function_lsda(image, addr) else {
        return seh_except_pads(image, addr);
    };
    let mut by_pad: BTreeMap<u64, Vec<&unlace_loader::TryRegion>> = BTreeMap::new();
    for region in &lsda.try_regions {
        if let Some(pad) = region.landing_pad {
            by_pad.entry(pad).or_default().push(region);
        }
    }
    by_pad
        .into_iter()
        .map(|(pad, regions)| {
            let try_start = regions
                .iter()
                .map(|r| r.pc_range.start)
                .min()
                .unwrap_or(pad);
            let catches = regions
                .iter()
                .any(|r| r.type_filters.iter().any(|&f| f > 0));
            let kind = if catches {
                let selector = match regions[0].type_filters.as_slice() {
                    &[filter]
                        if filter > 0 && regions.iter().all(|r| r.type_filters == [filter]) =>
                    {
                        Some(filter as u64)
                    }
                    _ => None,
                };
                unlace_struct::LandingPadKind::Catch { selector }
            } else {
                unlace_struct::LandingPadKind::Cleanup
            };
            unlace_struct::LandingPad {
                addr: pad,
                try_start,
                kind,
            }
        })
        .collect()
}

/// The `__except` bodies of the PE function starting at `addr`, from its
/// `__C_specific_handler` scope table. A `__finally` scope has no body in
/// this function (its funclet is outlined) and is not a pad.
pub(super) fn seh_except_pads(image: &BinaryImage, addr: u64) -> Vec<unlace_struct::LandingPad> {
    let Some(function) = image.seh.as_ref().and_then(|seh| seh.function_at(addr)) else {
        return Vec::new();
    };
    function
        .scopes
        .iter()
        .filter_map(|scope| match scope.handler {
            unlace_loader::seh::SehScopeHandler::Except { filter, target } => {
                Some(unlace_struct::LandingPad {
                    addr: target,
                    try_start: scope.begin,
                    kind: unlace_struct::LandingPadKind::SehExcept { filter },
                })
            }
            unlace_loader::seh::SehScopeHandler::Finally { .. } => None,
        })
        .collect()
}

/// Record the catch types of each landing pad of `entry` in
/// [`SsaFunction::eh_landing_pad_catches`], from the LSDA call-site table
/// the C++ personality routine reads at runtime. Cleanup-only pads catch
/// nothing and are not recorded.
///
/// Several `catch (T1) / catch (T2)` clauses that share one landing pad
/// keep their action-chain types as distinct HIR catch arms.
pub(super) fn populate_eh_landing_pads(
    image: &BinaryImage,
    entry: &FunctionEntry,
    ssa: &mut SsaFunction,
    rtti: Option<&unlace_loader::RttiInfo>,
) {
    let Some(lsda) = function_lsda(image, entry.addr) else {
        return;
    };

    for region in &lsda.try_regions {
        let Some(lp) = region.landing_pad else {
            continue;
        };
        let catch_types = lsda_region_catch_types(image, region, rtti);
        if catch_types.is_empty() {
            continue;
        }
        let entry = ssa.eh_landing_pad_catches.entry(lp).or_default();
        for ty in catch_types {
            if !entry.contains(&ty) {
                entry.push(ty);
            }
        }
    }

    if !ssa.eh_landing_pad_catches.is_empty() {
        profiling::diagnostic(
            "trace",
            "populated EH landing pads from LSDA",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::count("count", ssa.eh_landing_pad_catches.len() as u64),
            ],
        );
    }
}

pub(super) fn lsda_region_catch_types(
    image: &BinaryImage,
    region: &unlace_loader::TryRegion,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Vec<Type> {
    region
        .caught_typeinfo_addrs
        .iter()
        .map(|&addr| cxx_catch_type_for_typeinfo_addr(image, addr, rtti))
        .collect()
}

pub(super) fn cxx_catch_type_for_typeinfo_addr(
    image: &BinaryImage,
    typeinfo_addr: u64,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Type {
    if typeinfo_addr == 0 {
        return Type::Primitive(PrimitiveType::Unknown);
    }

    if let Some(cls) = rtti.and_then(|info| info.classes.get(&typeinfo_addr)) {
        return Type::Struct {
            name: sanitize_cxx_type_name(&cls.demangled_name),
            fields: Vec::new(),
        };
    }

    // An imported typeinfo (`_ZTISt9exception`) is a relocated slot or a
    // copy relocation; the relocation's symbol names the caught type.
    let imported = image
        .relocations
        .iter()
        .find(|r| r.addr == typeinfo_addr)
        .and_then(|r| unlace_output::demangle(&r.sym_name))
        .and_then(|d| {
            d.full_signature
                .strip_prefix("typeinfo for ")
                .map(str::to_string)
        });
    if let Some(name) = imported {
        return Type::Struct {
            name: sanitize_cxx_type_name(&name),
            fields: Vec::new(),
        };
    }

    Type::Struct {
        name: format!("typeinfo_{typeinfo_addr:x}"),
        fields: Vec::new(),
    }
}

pub(super) fn sanitize_cxx_type_name(name: &str) -> String {
    let mut out = String::with_capacity(name.len().max(1));
    for (idx, ch) in name.chars().enumerate() {
        let valid = ch.is_ascii_alphanumeric() || ch == '_';
        if idx == 0 && ch.is_ascii_digit() {
            out.push('_');
        }
        out.push(if valid { ch } else { '_' });
    }
    if out.is_empty() { "_".to_string() } else { out }
}

pub(super) fn collect_cxx_eh_actions(
    ssa: &SsaFunction,
    symbols: &BTreeMap<u64, String>,
) -> BTreeMap<u64, unlace_passes::cxx_eh::CxxEhAction> {
    let mut calls: BTreeMap<u64, String> = BTreeMap::new();

    for (&bid, block) in &ssa.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Call => {
                    let Some(target) = insn.inputs.first() else {
                        continue;
                    };
                    if target.space != SpaceId::Const {
                        continue;
                    }
                    if let Some(name) = symbols.get(&target.offset) {
                        calls.insert(insn.addr, name.clone());
                    }
                }
                IrOp::Callind => {
                    let Some(target) = ssa.resolved_indirect_calls.get(&(bid, idx)) else {
                        continue;
                    };
                    if let Some(name) = symbols.get(target) {
                        calls.insert(insn.addr, name.clone());
                    }
                }
                _ => {}
            }
        }
    }

    unlace_passes::cxx_eh::collect_eh_sites(&calls)
}
