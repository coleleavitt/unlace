//! Global and storage-location naming.

use super::*;

/// (unlace) The per-document type-rendering context.
///
/// An alias for [`crate::langtypes::SpellCtx`], which is where it moved when
/// the output-language seam landed: it now also carries the output language, so
/// the free-function declarator family reaches its speller with no new threading.
#[doc(hidden)]
pub type RealTypeCtx = crate::langtypes::SpellCtx;

impl RealTypeCtx {
    pub(super) fn for_function(
        fd: &Funcdata,
        arch: &Architecture,
        lang: crate::lang::OutLang,
    ) -> Self {
        let mut context = Self::from_arch(arch, lang);
        if lang == crate::lang::OutLang::Go && arch.source_lang().is_go() {
            context.go_package =
                crate::gopackage::function_package(fd.get_name()).map(std::rc::Rc::from);
        }
        context
    }

    /// Resolve the context from the live architecture: the `realtypes`/`ctypes`
    /// gates and the target's decoded data organization.
    ///
    /// `lang` is passed rather than read off `arch` because the printer is loaned
    /// out of the architecture for the duration of emission (`with_print`), so
    /// the architecture's copy is a placeholder while this runs. The printer owns
    /// the selection.
    #[doc(hidden)]
    pub fn from_arch(arch: &Architecture, lang: crate::lang::OutLang) -> RealTypeCtx {
        RealTypeCtx {
            lang,
            enabled: arch.unlace_options.get::<crate::printc::Realtypes>().0,
            long_is_8: arch.types().get_size_of_long() == 8,
            ctypes: arch.unlace_options.get::<crate::coreoptions::CTypes>().0,
            model: crate::ctypes::CDataModel {
                char_signed: crate::ctypes::plain_char_signed(&arch.archid, arch.image_apple),
                ..crate::ctypes::CDataModel::from_types(&*arch.types())
            },
            c_type_definition: false,
            cpp_short_names: arch
                .unlace_options
                .get::<crate::cppshortnames::CppShortNames>()
                .0,
            go_package: None,
            go_pair_types: (lang == crate::lang::OutLang::Go
                && arch
                    .unlace_options
                    .get::<crate::analysisgates::Godwarfsig>()
                    .0)
                .then(|| arch.types_rc()),
        }
    }
}

/// (unlace perf) The named highs of one function grouped by name, each group in
/// the bank's own order and built on the first search, so a declaration's
/// search for a same-named sibling visits only that name's highs instead of
/// every high of the function.
pub(super) struct SameNamed<'a> {
    fd: &'a Funcdata,
    by_name: std::cell::OnceCell<
        std::collections::HashMap<&'a str, Vec<crate::context::HighVariableId>>,
    >,
}

impl<'a> SameNamed<'a> {
    pub(super) fn new(fd: &'a Funcdata) -> Self {
        SameNamed {
            fd,
            by_name: std::cell::OnceCell::new(),
        }
    }

    pub(super) fn get(&self, name: &str) -> &[crate::context::HighVariableId] {
        let by_name = self.by_name.get_or_init(|| {
            let mut by_name: std::collections::HashMap<
                &'a str,
                Vec<crate::context::HighVariableId>,
            > = std::collections::HashMap::new();
            for (id, h) in self.fd.high_bank().iter() {
                if let Some(name) = h.unlace_name() {
                    by_name.entry(name).or_default().push(id);
                }
            }
            by_name
        });
        by_name.get(name).map(Vec::as_slice).unwrap_or(&[])
    }
}

/// The highs `ids` names, in order (a [`SameNamed`] group).
pub(super) fn same_named<'a>(
    fd: &'a Funcdata,
    ids: &'a [crate::context::HighVariableId],
) -> impl Iterator<
    Item = (
        crate::context::HighVariableId,
        &'a crate::variable::HighVariable,
    ),
> + 'a {
    ids.iter()
        .filter_map(move |&id| fd.high_bank().get(id).map(|h| (id, h)))
}

/// STUB A helper — the unlace stand-in for C++ `Symbol::getFirstWholeMap() != entry`
/// (printc.cc:2697): is there a *whole-symbol* sibling high (the proto-partial
/// ROOT) sharing `name` whose `unlace_symbol_offset == -1`?  A register-returned
/// struct's per-field pieces are all bound to the root's shared name; the root
/// keeps the `-1` whole-symbol-match offset and is the one entry that declares.
/// Per-function names are unique (the `vN` allocator), so the only sibling with a
/// shared name is the group's root, never an unrelated scalar.  `except` is the
/// piece itself (excluded so a lone whole high is not its own sibling).
pub(super) fn high_name_has_whole_sibling(
    fd: &Funcdata,
    siblings: &[crate::context::HighVariableId],
    except: crate::context::HighVariableId,
    name: &str,
) -> bool {
    same_named(fd, siblings).any(|(id, h)| {
        id != except && h.unlace_symbol_offset() == -1 && h.unlace_name() == Some(name)
    })
}

/// A global's high: a `&symbol` reference resolved through the global scope, or
/// one with persistent storage.  Never declared in the body, never an owner.
pub(super) fn high_is_global(fd: &Funcdata, high: crate::context::HighVariableId) -> bool {
    fd.high_bank().get(high).is_some_and(|h| {
        h.unlace_global()
            || (0..h.num_instances()).any(|i| {
                fd.vbank()
                    .get(h.get_instance(i))
                    .is_some_and(|v| v.is_persist())
            })
    })
}

/// The same-named, non-global high in `except`'s VariableGroup that satisfies
/// `whole`: the declaration a skipped piece is printed through.
pub(super) fn owner_in_group(
    fd: &Funcdata,
    siblings: &[crate::context::HighVariableId],
    except: crate::context::HighVariableId,
    name: &str,
    whole: impl Fn(&Funcdata, &crate::variable::HighVariable) -> bool,
) -> Option<crate::context::HighVariableId> {
    same_named(fd, siblings)
        .find(|(id, h)| {
            *id != except
                && h.unlace_name() == Some(name)
                && whole(fd, h)
                && fd.high_bank().is_same_group(*id, except)
                && !high_is_global(fd, *id)
        })
        .map(|(id, _)| id)
}

/// The non-global storage high that declares the Symbol an `&symbol` reference
/// high points at, among the same-named siblings the declaration walk skipped it
/// for.  A reference with no recorded local Symbol has no owner.
pub(super) fn reference_owner(
    fd: &Funcdata,
    siblings: &[crate::context::HighVariableId],
    high: crate::context::HighVariableId,
    name: &str,
) -> Option<crate::context::HighVariableId> {
    let sym = fd.high_bank().get(high)?.unlace_ref_symbol()?;
    same_named(fd, siblings)
        .find(|(id, h)| {
            *id != high
                && h.unlace_name() == Some(name)
                && (0..h.num_instances()).any(|i| {
                    fd.vbank()
                        .get(h.get_instance(i))
                        .is_some_and(|v| !v.is_constant())
                })
                && !high_is_global(fd, *id)
                && (h.unlace_link_symbol() == Some(sym)
                    || decl_rep_varnode(fd, *id)
                        .and_then(|vn| fd.vbank().get(vn))
                        .and_then(|v| {
                            fd.get_scope_local()?
                                .containing_symbol_for_storage(v.get_addr())
                        })
                        .is_some_and(|(s, _)| s == sym))
        })
        .map(|(id, _)| id)
}

/// Does `h` cover a whole scalar Symbol: storage at offset 0 of exactly the
/// mapped type's size (the C++ `getFirstWholeMap()` entry)?
pub(super) fn is_scalar_whole(fd: &Funcdata, h: &crate::variable::HighVariable) -> bool {
    let Some(sym_size) = h.unlace_symbol_type().map(|t| t.get_size()) else {
        return false;
    };
    h.unlace_symbol_offset() == 0
        && h.num_instances() > 0
        && fd
            .vbank()
            .get(h.get_instance(0))
            .is_some_and(|v| !v.is_constant() && v.get_size() == sym_size)
}

/// Does another HighVariable share `name` and represent the WHOLE scalar Symbol —
/// a non-constant storage rep at offset 0 whose size equals the mapped scalar symbol type's size
/// (the C++ `getFirstWholeMap()` entry that emits the single declaration)?  Used by
/// the decl walk to suppress the per-partial declarations of a tied scalar local
/// (LOSS-245: `int8 local` accessed as int4/int2 sub-fields) without affecting a
/// lone partial that has no whole cover.
pub(super) fn high_name_has_scalar_whole_sibling(
    fd: &Funcdata,
    siblings: &[crate::context::HighVariableId],
    except: crate::context::HighVariableId,
    name: &str,
) -> bool {
    same_named(fd, siblings)
        .any(|(id, h)| id != except && h.unlace_name() == Some(name) && is_scalar_whole(fd, h))
}

/// Whether `spc` should use the unlace angr-style `dat_<addr>` global naming (a
/// RAM/data space, not the stack).  (unlace) `unlaceAngrNaming` gate, printc.cc:1961.
pub(super) fn unlace_global_naming(spc: &std::rc::Rc<unlace_base::space::AddrSpace>) -> bool {
    use unlace_base::space::spacetype;
    matches!(spc.get_type(), spacetype::IPTR_PROCESSOR)
}

/// (unlace) `unlaceGlobalDataName(Address)` — `dat_<hex offset>`; ghidra-mode
/// (`name_style_ghidra`) prints the Ghidra GUI convention `DAT_%08x` instead
/// (what Java's `isDynamicSymbolName` recognizes as dynamic).
#[doc(hidden)]
pub fn unlace_global_data_name(style: crate::database::UnlaceNameStyle, off: u64) -> String {
    if style == crate::database::UnlaceNameStyle::Ghidra {
        return format!("DAT_{off:08x}");
    }
    format!("dat_{off:x}")
}

/// The varnode a dereferenced `PTRSUB` reads (the `LOAD` output) or writes
/// (the `STORE` input), and whether it is written.
pub(super) fn ptrsub_value_access(
    fd: &Funcdata,
    op: OpId,
    value: bool,
) -> Option<(VarnodeId, bool)> {
    let out = fd.obank().get(op)?.get_out().filter(|_| value)?;
    fd.vbank().get(out)?.descend_iter().find_map(|user| {
        let u = fd.obank().get(user)?;
        match u.code() {
            OpCode::CPUI_LOAD if u.get_in(1) == Some(out) => Some((u.get_out()?, false)),
            OpCode::CPUI_STORE if u.get_in(1) == Some(out) => Some((u.get_in(2)?, true)),
            _ => None,
        }
    })
}

/// (unlace `cfstrings`) The character type a `__cfstring` entry's seeded string is
/// read with, when `val` is the address of one.
pub(super) fn cfstring_char(
    arch: &Architecture,
    val: uintb,
) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
    if !arch.cfstring_entries.contains(&val) {
        return None;
    }
    arch.types().get_type_char(1).ok()
}

/// C++ `TypeSpacebase::getAddress` (type.cc:3542): the storage a
/// `PTRSUB(spacebase, in1const)` names.  A global spacebase (invalid localframe)
/// must be a full pointer encoding, which the C++ signals by suppressing the
/// size.
pub(super) fn spacebase_unnamed_address(
    arch: &Architecture,
    fd: &Funcdata,
    op: OpId,
    sb_type: &std::rc::Rc<crate::dtype::Datatype>,
    in1const: uintb,
    ptr_size: int4,
) -> Option<unlace_base::address::Address> {
    let (spaceid, localframe) = sb_type.spacebase_parts()?;
    let spc = spaceid?;
    let sz = if localframe.is_invalid() {
        -1
    } else {
        ptr_size
    };
    let point = fd
        .obank()
        .get(op)
        .map(|o| o.get_addr().clone())
        .unwrap_or_default();
    let mut full_encoding: uintb = 0;
    arch.resolve_constant(&spc, in1const, sz, &point, &mut full_encoding)
        .ok()
}

/// C++ `PrintC::pushUnnamedLocation` (printc.cc:1957-1974) reduced to its name:
/// the register name covering `(loc, size)`, else the unlace angr-style
/// `dat_<addr>` for a data space, else the capitalized `Space<hex>` leaf.
///
/// Shared by the Varnode leaf (`push_symbol_detail_ir`'s tail) and the
/// symbol-less SPACEBASE arm of [`PrintC::op_ptrsub_ir`], which both need the
/// same "no Symbol covers this storage" identifier.  `None` only for an
/// address with no space.
pub(super) fn unlace_unnamed_location_name(
    arch: &Architecture,
    loc: &unlace_base::address::Address,
    size: int4,
) -> Option<String> {
    let spc = loc.get_space()?;
    let regname = arch
        .translate()
        .get_register_name(spc, loc.get_offset(), size);
    if !regname.is_empty() {
        return Some(regname);
    }
    if unlace_global_naming(spc) {
        return Some(crate::stringglobalnames::global_name(
            arch,
            loc.get_offset(),
        ));
    }
    let mut s = String::new();
    let sn = spc.get_name();
    let mut chars = sn.chars();
    if let Some(c0) = chars.next() {
        s.extend(c0.to_uppercase());
        s.push_str(chars.as_str());
    }
    use std::fmt::Write;
    let _ = write!(
        s,
        "{:0width$x}",
        loc.get_offset(),
        width = (2 * spc.get_addr_size()) as usize
    );
    Some(s)
}

/// The name of a global with no bound Symbol that `ActionMapGlobals` covered,
/// or that starts at a smaller Symbol: that Symbol's name with a leading `_`
/// (C++ `PrintC::pushMismatchSymbol`).
pub(super) fn global_overlap_name(
    fd: &Funcdata,
    loc: &unlace_base::address::Address,
    size: int4,
) -> Option<String> {
    if !unlace_global_naming(loc.get_space()?) {
        return None;
    }
    if let Some((_, csize, name)) = fd.global_covers().iter().find(|(a, _, _)| a == loc) {
        return match csize.cmp(&size) {
            std::cmp::Ordering::Equal => Some(name.clone()),
            std::cmp::Ordering::Less => Some(format!("_{name}")),
            std::cmp::Ordering::Greater => None,
        };
    }
    let (start, ssize, name) = fd.get_arch().global_data_symbol_at(loc)?;
    (start == loc.get_offset() && ssize < size).then(|| format!("_{name}"))
}

/// Spell an address as storage, without treating a covering register name as a
/// source-level identifier.
pub(super) fn unlace_storage_location_name(loc: &unlace_base::address::Address) -> Option<String> {
    let spc = loc.get_space()?;
    let mut s = String::new();
    let sn = spc.get_name();
    let mut chars = sn.chars();
    if let Some(c0) = chars.next() {
        s.extend(c0.to_uppercase());
        s.push_str(chars.as_str());
    }
    use std::fmt::Write;
    let _ = write!(
        s,
        "{:0width$x}",
        loc.get_offset(),
        width = (2 * spc.get_addr_size()) as usize
    );
    Some(s)
}
