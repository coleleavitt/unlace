//! (unlace `msvceh`) MSVC C++ exception metadata, the `throw` side.
//!
//! An MSVC `throw e;` compiles to `_CxxThrowException(&e, &_TI<n><type>)`. The
//! second argument is a `ThrowInfo` in `.rdata`: attributes, the object's
//! destructor, and a `CatchableTypeArray` listing every `CatchableType` a
//! handler may catch the object as (the thrown type first, then its public
//! bases), each naming an RTTI0 `TypeDescriptor`. A `rethrow` (`throw;`) is
//! `_CxxThrowException(0, 0)`. Without symbols the call reads
//! `_CxxThrowException(&v1, &dat_140004a10)` and nothing says what is thrown.
//!
//! The pass finds the `type_info` vftable every `TypeDescriptor` shares,
//! every descriptor that points at it (any type, `int` included), and walks
//! back through the image's references: descriptor -> `CatchableType`
//! (`pType` at +4) -> `CatchableTypeArray` (first entry at +4) -> `ThrowInfo`
//! (`pCatchableTypeArray` at +12). Each validated record is labelled with the
//! type it describes (`ThrowInfo<std::runtime_error>`), and on x64 each call of
//! the imported `_CxxThrowException` whose `rdx` is loaded with a known
//! `ThrowInfo` (or zeroed with `rcx`, a rethrow) gets an instruction comment in
//! the function `.pdata` places it in. A `CatchableType`'s `copyFunction` is
//! named as its class's copy constructor and a `ThrowInfo`'s `pmfnUnwind` as
//! the thrown class's destructor ([`member_symbols`]). References are image-relative on x64 and
//! absolute on x86 ([`RefKind`]). The x64 catch side (`FuncInfo`, FH4,
//! funclets) is [`super::msvcfuncinfo`], SEH scope tables and x86 C++
//! `FuncInfo` are [`super::msvcseh`], all run from the same pass.

use std::collections::{BTreeMap, BTreeSet};

use object::{BinaryFormat, Object, ObjectSection, SectionKind};
use unlace_decomp::fasthash::{FxHashMap, FxHashSet};

use crate::pass::{
    AnalysisCtx, AnalysisOutput, AnalysisPass, CommentFact, Phase, SymFact, SymKind,
};
use crate::rtti::models::ImageBytes;
use crate::rtti::refkind::{End, RefKind};
use crate::rtti::vftable::TextRanges;

/// Most `CatchableType`s one array may list (the thrown class and its bases).
const MAX_CATCHABLE: u32 = 64;
/// Largest thrown-object size a `CatchableType` is believed to carry.
const MAX_OBJECT_SIZE: u32 = 0x0010_0000;
/// Bytes before a throw call searched for the instruction that loads its
/// `ThrowInfo` argument.
const ARG_WINDOW: usize = 32;
/// Chained `UNWIND_INFO` links followed to a function's primary record.
const MAX_CHAIN: usize = 32;

/// (unlace `msvceh`) `ThrowInfo` labels and throw-site comments on an MSVC PE.
/// Facts are computed at load and committed only under `--option msvceh on`.
pub struct MsvcEhPass;

impl AnalysisPass for MsvcEhPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "msvceh"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        if ctx.file.format() != BinaryFormat::Pe {
            return AnalysisOutput::default();
        }
        collect(ctx.file, ctx.bytes)
    }
}

/// One `CatchableType`: a type a handler may catch the thrown object as.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CatchableType {
    pub addr: u64,
    /// `CT_IsSimpleType` (1), `CT_ByReferenceOnly` (2), `CT_HasVirtualBase` (4), ...
    pub properties: u32,
    /// The RTTI0 `TypeDescriptor`.
    pub type_descriptor: u64,
    /// The type, demangled (`std::runtime_error`, `int`, `char const *`).
    pub name: String,
    /// The class as the `rtti` pass names it (templates dropped), or `None`
    /// for a built-in or pointer type.
    pub class: Option<String>,
    /// `copyFunction`: the type's copy constructor, 0 for a bitwise copy.
    pub copy_function: u64,
}

/// One `ThrowInfo` with the types its `CatchableTypeArray` lists, thrown type first.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ThrowInfo {
    pub addr: u64,
    /// `TI_IsConst` (1), `TI_IsVolatile` (2), `TI_IsUnaligned` (4), ...
    pub attributes: u32,
    /// `pmfnUnwind`: the thrown object's destructor, 0 when it has none.
    pub unwind: u64,
    pub catchable_type_array: u64,
    pub types: Vec<CatchableType>,
}

impl ThrowInfo {
    /// The thrown type with the qualifiers the attributes give it.
    pub fn thrown_type(&self) -> String {
        let mut t = self
            .types
            .first()
            .map(|c| c.name.clone())
            .unwrap_or_default();
        if self.attributes & 1 != 0 {
            t.push_str(" const");
        }
        if self.attributes & 2 != 0 {
            t.push_str(" volatile");
        }
        t
    }
}

/// What a call of `_CxxThrowException` throws.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ThrowKind {
    /// `throw e;` with the `ThrowInfo` at this address.
    Throw(u64),
    /// `throw;`: both arguments are zero.
    Rethrow,
}

/// One call of `_CxxThrowException` whose argument was recognised.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ThrowSite {
    pub call: u64,
    pub kind: ThrowKind,
}

/// The pass body: labels for every `ThrowInfo` chain, comments at x64 throw sites.
pub fn collect<'a>(file: &'a object::File<'a>, bytes: &[u8]) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    let rk = RefKind::new(file.is_64(), file.relative_address_base(), End::Little);
    let img = ImageBytes::new(file);
    let text = TextRanges::new(file);
    let code = exec_sections(file);
    let targets = throw_targets(file, bytes);
    out.merge(super::msvcfuncinfo::collect(file, bytes, &img));
    out.merge(super::msvcseh::collect(file, bytes, &img, &code));
    let infos = find_throw_infos(&img, &rk, &text);
    if infos.is_empty() && targets.is_empty() {
        return out;
    }
    out.symbols.extend(label_symbols(&infos));
    out.symbols.extend(member_symbols(&infos));
    if file.architecture() == object::Architecture::X86_64 && !targets.is_empty() {
        let by_addr: FxHashMap<u64, &ThrowInfo> = infos.iter().map(|ti| (ti.addr, ti)).collect();
        let sites = find_throw_sites(&code, true, &targets, &by_addr.keys().copied().collect());
        let owners = pdata_owners(bytes, &img, rk.image_base);
        for site in sites {
            let Some(func_addr) = owner_of(&owners, site.call) else {
                continue;
            };
            let note = match site.kind {
                ThrowKind::Throw(ti) => match by_addr.get(&ti) {
                    Some(info) => format!("throw {}", info.thrown_type()),
                    None => continue,
                },
                ThrowKind::Rethrow => "rethrow".to_string(),
            };
            out.comments.push(CommentFact {
                func_addr,
                addr: site.call,
                text: note,
            });
        }
    }
    out
}

/// Every executable section as `(vma, bytes)`.
pub(crate) fn exec_sections<'a>(file: &'a object::File<'a>) -> Vec<(u64, &'a [u8])> {
    let mut v = Vec::new();
    for sec in file.sections() {
        let exec = sec.kind() == SectionKind::Text
            || matches!(
                sec.flags(),
                object::SectionFlags::Coff { characteristics }
                    if characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0
            );
        if !exec || sec.address() == 0 {
            continue;
        }
        if let Ok(data) = sec.data() {
            v.push((sec.address(), data));
        }
    }
    v.sort_by_key(|&(a, _)| a);
    v
}

/// The import slots and thunks of `_CxxThrowException`.
fn throw_targets(file: &object::File, bytes: &[u8]) -> FxHashSet<u64> {
    crate::loader::pe_iat::resolve_pe_imports(file, bytes)
        .into_iter()
        .filter(|s| matches!(s.kind, crate::loader::format::ImportSymKind::Import))
        .filter(|s| is_throw_name(&s.name))
        .map(|s| s.addr)
        .collect()
}

/// `_CxxThrowException`, with or without its x86 decoration.
pub fn is_throw_name(name: &[u8]) -> bool {
    let Ok(s) = std::str::from_utf8(name) else {
        return false;
    };
    let s = s.trim_start_matches('_');
    s.split('@').next() == Some("CxxThrowException")
}

/// Every validated `ThrowInfo` in the image, sorted by address.
pub fn find_throw_infos(img: &ImageBytes, rk: &RefKind, text: &TextRanges) -> Vec<ThrowInfo> {
    let Some(type_info_vftable) = type_info_vftable(img, rk) else {
        return Vec::new();
    };
    let mut tds = FxHashMap::<u64, String>::default();
    for td in img.find_ptrs(rk, type_info_vftable) {
        if let Some(name) = descriptor_name(img, rk, td) {
            tds.insert(td, name);
        }
    }
    let mut cts = FxHashMap::<u64, CatchableType>::default();
    for (td, refs) in img.scan_refs(rk, &tds.keys().copied().collect()) {
        for r in refs {
            let Some(addr) = r.checked_sub(4) else {
                continue;
            };
            if let Some(ct) = read_catchable_type(img, rk, text, addr, &tds)
                && ct.type_descriptor == td
            {
                cts.insert(addr, ct);
            }
        }
    }
    let mut ctas = FxHashMap::<u64, Vec<u64>>::default();
    for (_, refs) in img.scan_refs(rk, &cts.keys().copied().collect()) {
        for r in refs {
            let Some(addr) = r.checked_sub(4) else {
                continue;
            };
            if let Some(list) = read_catchable_type_array(img, rk, addr, &cts) {
                ctas.insert(addr, list);
            }
        }
    }
    let mut out = Vec::new();
    let mut seen = FxHashSet::<u64>::default();
    for (_, refs) in img.scan_refs(rk, &ctas.keys().copied().collect()) {
        for r in refs {
            let Some(addr) = r.checked_sub(12) else {
                continue;
            };
            if !seen.insert(addr) {
                continue;
            }
            let Some((attributes, unwind, cta)) = read_throw_info_head(img, rk, text, addr) else {
                continue;
            };
            let Some(list) = ctas.get(&cta) else {
                continue;
            };
            out.push(ThrowInfo {
                addr,
                attributes,
                unwind,
                catchable_type_array: cta,
                types: list.iter().filter_map(|a| cts.get(a).cloned()).collect(),
            });
        }
    }
    out.sort_by_key(|ti| ti.addr);
    out
}

/// The pointer most `.?A` type descriptors start with: the `type_info` vftable.
fn type_info_vftable(img: &ImageBytes, rk: &RefKind) -> Option<u64> {
    let mut counts = FxHashMap::<u64, usize>::default();
    for name in img.scan_prefix(b".?A") {
        let Some(td) = name.checked_sub(rk.type_descriptor_name_offset()) else {
            continue;
        };
        let Some(word) = img.read(td, rk.ptr_size()) else {
            continue;
        };
        let v = rk.read_ptr(word);
        if v != 0 {
            *counts.entry(v).or_default() += 1;
        }
    }
    counts
        .into_iter()
        .max_by(|a, b| a.1.cmp(&b.1).then(b.0.cmp(&a.0)))
        .map(|(v, _)| v)
}

/// The decorated name of the `TypeDescriptor` at `td` (`.?AVfoo@@`, `.H`).
fn descriptor_name(img: &ImageBytes, rk: &RefKind, td: u64) -> Option<String> {
    let name = img.read_cstr(td.checked_add(rk.type_descriptor_name_offset())?, 1024)?;
    let ok = name.len() >= 2 && name.starts_with('.') && name.bytes().all(|b| b.is_ascii_graphic());
    ok.then_some(name)
}

fn u32_at(b: &[u8], off: usize) -> u32 {
    u32::from_le_bytes([b[off], b[off + 1], b[off + 2], b[off + 3]])
}

/// A zero reference or one into code.
fn code_ref_or_null(rk: &RefKind, text: &TextRanges, b: &[u8]) -> bool {
    rk.resolve_ref(b).is_none_or(|a| text.contains(a))
}

/// The 28-byte `CatchableType` at `addr`, if its descriptor is one of `tds`.
fn read_catchable_type(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    addr: u64,
    tds: &FxHashMap<u64, String>,
) -> Option<CatchableType> {
    let b = img.read(addr, 28)?;
    let properties = u32_at(b, 0);
    if properties > 0x1f {
        return None;
    }
    let td = rk.resolve_ref(&b[4..8])?;
    let mangled = tds.get(&td)?;
    let size = u32_at(b, 20);
    if size == 0 || size > MAX_OBJECT_SIZE || !code_ref_or_null(rk, text, &b[24..28]) {
        return None;
    }
    Some(CatchableType {
        addr,
        properties,
        type_descriptor: td,
        name: type_name(mangled),
        class: crate::demangle::demangle_rtti_class_name(mangled),
        copy_function: rk.resolve_ref(&b[24..28]).unwrap_or(0),
    })
}

/// The `CatchableTypeArray` at `addr`, if every entry is one of `cts`.
fn read_catchable_type_array(
    img: &ImageBytes,
    rk: &RefKind,
    addr: u64,
    cts: &FxHashMap<u64, CatchableType>,
) -> Option<Vec<u64>> {
    let n = u32_at(img.read(addr, 4)?, 0);
    if n == 0 || n > MAX_CATCHABLE {
        return None;
    }
    let b = img.read(addr + 4, n as usize * 4)?;
    let mut list = Vec::with_capacity(n as usize);
    for i in 0..n as usize {
        let ct = rk.resolve_ref(&b[i * 4..i * 4 + 4])?;
        if !cts.contains_key(&ct) {
            return None;
        }
        list.push(ct);
    }
    Some(list)
}

/// The attributes, destructor and array of the 16-byte `ThrowInfo` at `addr`.
fn read_throw_info_head(
    img: &ImageBytes,
    rk: &RefKind,
    text: &TextRanges,
    addr: u64,
) -> Option<(u32, u64, u64)> {
    let b = img.read(addr, 16)?;
    let attributes = u32_at(b, 0);
    if attributes > 0x1f
        || !code_ref_or_null(rk, text, &b[4..8])
        || !code_ref_or_null(rk, text, &b[8..12])
    {
        return None;
    }
    Some((
        attributes,
        rk.resolve_ref(&b[4..8]).unwrap_or(0),
        rk.resolve_ref(&b[12..16])?,
    ))
}

/// A `TypeDescriptor` name as C++: a class through the MSVC demangler, a
/// built-in or a pointer to one from the type codes, anything else verbatim.
pub fn type_name(mangled: &str) -> String {
    let core = mangled.strip_prefix('.').unwrap_or(mangled);
    if core.starts_with("?A") {
        let flags = msvc_demangler::DemangleFlags::NAME_ONLY
            | msvc_demangler::DemangleFlags::NO_MS_KEYWORDS
            | msvc_demangler::DemangleFlags::NO_CLASS_TYPE;
        if let Ok(d) = msvc_demangler::demangle(&format!("??_R0{core}@8"), flags)
            && let Some(class) = d.strip_suffix("::`RTTI Type Descriptor'")
            && !class.is_empty()
        {
            return class.to_string();
        }
        return core.to_string();
    }
    builtin_or_pointer(core).unwrap_or_else(|| core.to_string())
}

fn builtin(code: &str) -> Option<&'static str> {
    Some(match code {
        "C" => "signed char",
        "D" => "char",
        "E" => "unsigned char",
        "F" => "short",
        "G" => "unsigned short",
        "H" => "int",
        "I" => "unsigned int",
        "J" => "long",
        "K" => "unsigned long",
        "M" => "float",
        "N" => "double",
        "O" => "long double",
        "X" => "void",
        "_J" => "__int64",
        "_K" => "unsigned __int64",
        "_N" => "bool",
        "_W" => "wchar_t",
        "_S" => "char16_t",
        "_U" => "char32_t",
        "_Q" => "char8_t",
        _ => return None,
    })
}

/// `H` -> `int`; `PEBD` (x64) / `PBD` (x86) -> `char const *`.
fn builtin_or_pointer(code: &str) -> Option<String> {
    if let Some(b) = builtin(code) {
        return Some(b.to_string());
    }
    let rest = code.strip_prefix('P')?;
    let rest = rest.strip_prefix('E').unwrap_or(rest);
    let (cv, base) = rest.split_at_checked(1)?;
    let pointee = builtin_or_pointer(base)?;
    Some(match cv {
        "A" => format!("{pointee} *"),
        "B" => format!("{pointee} const *"),
        "C" => format!("{pointee} volatile *"),
        "D" => format!("{pointee} const volatile *"),
        _ => return None,
    })
}

/// `ThrowInfo<T>`, `CatchableTypeArray<T>` and `CatchableType<T>` labels, each
/// address once, a repeated name suffixed with its address.
pub fn label_symbols(infos: &[ThrowInfo]) -> Vec<SymFact> {
    let mut out = Vec::new();
    let mut addrs = FxHashSet::<u64>::default();
    let mut names = FxHashSet::<String>::default();
    let mut push = |addr: u64, name: String| {
        if !addrs.insert(addr) {
            return;
        }
        let name = if names.insert(name.clone()) {
            name
        } else {
            format!("{name}_{addr:x}")
        };
        out.push(SymFact {
            addr,
            name,
            kind: SymKind::Data,
        });
    };
    for ti in infos {
        let t = ti.thrown_type();
        push(ti.addr, format!("ThrowInfo<{t}>"));
        let base = ti
            .types
            .first()
            .map(|c| c.name.as_str())
            .unwrap_or_default();
        push(
            ti.catchable_type_array,
            format!("CatchableTypeArray<{base}>"),
        );
        for ct in &ti.types {
            push(ct.addr, format!("CatchableType<{}>", ct.name));
        }
    }
    out
}

/// The constructors and destructors the exception metadata names: a
/// `CatchableType`'s `copyFunction` is its class's copy constructor
/// (`C::C`), and a `ThrowInfo`'s `pmfnUnwind` the thrown class's destructor
/// (`C::~C`). An address two classes claim (an identical-code fold of two
/// copy constructors) is left unnamed.
pub fn member_symbols(infos: &[ThrowInfo]) -> Vec<SymFact> {
    use crate::rtti::itaniumctors::{ctor_name, dtor_name};
    let mut named: BTreeMap<u64, BTreeSet<String>> = BTreeMap::new();
    for ti in infos {
        if let Some(class) = ti.types.first().and_then(|c| c.class.as_deref())
            && ti.unwind != 0
        {
            named.entry(ti.unwind).or_default().insert(dtor_name(class));
        }
        for ct in &ti.types {
            if let Some(class) = ct.class.as_deref()
                && ct.copy_function != 0
            {
                named
                    .entry(ct.copy_function)
                    .or_default()
                    .insert(ctor_name(class));
            }
        }
    }
    named
        .into_iter()
        .filter(|(_, names)| names.len() == 1)
        .filter_map(|(addr, names)| {
            Some(SymFact {
                addr,
                name: names.into_iter().next()?,
                kind: SymKind::Function,
            })
        })
        .collect()
}

/// The calls of a throw target in `code` and what each throws: the `ThrowInfo`
/// a `lea rdx, [rip+d]` (x64) or `push imm32` (x86) before the call loads, or a
/// rethrow when both argument registers (or pushes) are zero right before it.
pub fn find_throw_sites(
    code: &[(u64, &[u8])],
    is64: bool,
    targets: &FxHashSet<u64>,
    infos: &FxHashSet<u64>,
) -> Vec<ThrowSite> {
    let mut out = Vec::new();
    for &(base, data) in code {
        let mut i = 0usize;
        while i + 5 <= data.len() {
            let at = base + i as u64;
            let target = match data[i] {
                0xFF if i + 6 <= data.len() && data[i + 1] == 0x15 => {
                    let d = u32_at(data, i + 2);
                    if is64 {
                        Some((at + 6).wrapping_add(d as i32 as i64 as u64))
                    } else {
                        Some(d as u64)
                    }
                }
                0xE8 => Some((at + 5).wrapping_add(u32_at(data, i + 1) as i32 as i64 as u64)),
                _ => None,
            };
            if let Some(t) = target
                && targets.contains(&t)
                && let Some(kind) = throw_argument(base, data, i, is64, infos)
            {
                out.push(ThrowSite { call: at, kind });
            }
            i += 1;
        }
    }
    out
}

/// What the call at `i` passes: a rethrow when the four bytes before it zero
/// both arguments, else the nearest `ThrowInfo` load in the [`ARG_WINDOW`] bytes.
fn throw_argument(
    base: u64,
    data: &[u8],
    i: usize,
    is64: bool,
    infos: &FxHashSet<u64>,
) -> Option<ThrowKind> {
    let lo = i.saturating_sub(ARG_WINDOW);
    let before = &data[lo..i];
    let tail = &before[before.len().saturating_sub(4)..];
    let zeroed: &[&[u8]] = if is64 {
        &[
            &[0x33, 0xD2, 0x33, 0xC9],
            &[0x33, 0xC9, 0x33, 0xD2],
            &[0x31, 0xD2, 0x31, 0xC9],
            &[0x31, 0xC9, 0x31, 0xD2],
        ]
    } else {
        &[&[0x6A, 0x00, 0x6A, 0x00]]
    };
    if zeroed.contains(&tail) {
        return Some(ThrowKind::Rethrow);
    }
    let (opcode, len): (&[u8], usize) = if is64 {
        (&[0x48, 0x8D, 0x15], 7)
    } else {
        (&[0x68], 5)
    };
    let mut j = before.len();
    while j > 0 {
        j -= 1;
        if j + len > before.len() || !before[j..].starts_with(opcode) {
            continue;
        }
        let d = u32_at(before, j + opcode.len());
        let ti = if is64 {
            (base + (lo + j + len) as u64).wrapping_add(d as i32 as i64 as u64)
        } else {
            d as u64
        };
        if infos.contains(&ti) {
            return Some(ThrowKind::Throw(ti));
        }
    }
    None
}

/// The x64 `RUNTIME_FUNCTION` records as `(begin, end, primary entry)`, sorted;
/// a chained record's primary entry is the record its `UNWIND_INFO` chains to.
fn pdata_owners(bytes: &[u8], img: &ImageBytes, image_base: u64) -> Vec<(u64, u64, u64)> {
    use object::read::pe::PeFile64;
    let Ok(pe) = PeFile64::parse(bytes) else {
        return Vec::new();
    };
    let Some(dir) = pe
        .data_directories()
        .get(object::pe::IMAGE_DIRECTORY_ENTRY_EXCEPTION)
    else {
        return Vec::new();
    };
    let Ok(data) = dir.data(bytes, &pe.section_table()) else {
        return Vec::new();
    };
    let mut out = Vec::new();
    for rec in data.chunks_exact(12) {
        let begin = u32_at(rec, 0) as u64;
        let end = u32_at(rec, 4) as u64;
        if begin == 0 || end <= begin {
            continue;
        }
        let primary = primary_entry(img, image_base, begin, u32_at(rec, 8) as u64);
        out.push((image_base + begin, image_base + end, image_base + primary));
    }
    out.sort_unstable();
    out
}

/// Follow `UNW_FLAG_CHAININFO` from the record `(begin, unwind)` to its start.
fn primary_entry(img: &ImageBytes, image_base: u64, begin: u64, unwind: u64) -> u64 {
    let (mut begin, mut unwind) = (begin, unwind);
    for _ in 0..MAX_CHAIN {
        let Some(head) = img.read(image_base + unwind, 4) else {
            break;
        };
        if (head[0] >> 3) & 0x4 == 0 {
            break;
        }
        let codes = (head[2] as u64 + 1) & !1;
        let Some(chained) = img.read(image_base + unwind + 4 + codes * 2, 12) else {
            break;
        };
        begin = u32_at(chained, 0) as u64;
        unwind = u32_at(chained, 8) as u64;
    }
    begin
}

/// The primary entry of the record covering `addr`.
pub fn owner_of(owners: &[(u64, u64, u64)], addr: u64) -> Option<u64> {
    let i = owners.partition_point(|&(b, _, _)| b <= addr);
    let &(b, e, p) = owners.get(i.checked_sub(1)?)?;
    (addr >= b && addr < e).then_some(p)
}

#[cfg(test)]
mod tests {
    use super::*;

    const BASE: u64 = 0x1_4000_0000;
    const RDATA: u64 = BASE + 0x3000;
    const TEXT: u64 = BASE + 0x1000;
    const SLOT: u64 = BASE + 0x6000;

    fn put(buf: &mut [u8], off: u64, bytes: &[u8]) {
        let o = (off - RDATA) as usize;
        buf[o..o + bytes.len()].copy_from_slice(bytes);
    }

    fn rva(a: u64) -> [u8; 4] {
        ((a - BASE) as u32).to_le_bytes()
    }

    fn descriptor(buf: &mut [u8], at: u64, name: &str) {
        put(buf, at, &(BASE + 0x5000).to_le_bytes());
        let mut n = name.as_bytes().to_vec();
        n.push(0);
        put(buf, at + 16, &n);
    }

    fn catchable(buf: &mut [u8], at: u64, props: u32, td: u64, size: u32) {
        put(buf, at, &props.to_le_bytes());
        put(buf, at + 4, &rva(td));
        put(buf, at + 12, &(-1i32).to_le_bytes());
        put(buf, at + 20, &size.to_le_bytes());
    }

    fn rdata() -> Vec<u8> {
        let mut b = vec![0u8; 0x200];
        descriptor(&mut b, RDATA, ".?AVruntime_error@std@@");
        descriptor(&mut b, RDATA + 0x40, ".?AVexception@std@@");
        descriptor(&mut b, RDATA + 0x80, ".H");
        catchable(&mut b, RDATA + 0x100, 0, RDATA, 0x18);
        catchable(&mut b, RDATA + 0x120, 0, RDATA + 0x40, 0x18);
        put(&mut b, RDATA + 0x140, &2u32.to_le_bytes());
        put(&mut b, RDATA + 0x144, &rva(RDATA + 0x100));
        put(&mut b, RDATA + 0x148, &rva(RDATA + 0x120));
        put(&mut b, RDATA + 0x15c, &rva(RDATA + 0x140));
        catchable(&mut b, RDATA + 0x160, 1, RDATA + 0x80, 4);
        put(&mut b, RDATA + 0x180, &1u32.to_le_bytes());
        put(&mut b, RDATA + 0x184, &rva(RDATA + 0x160));
        put(&mut b, RDATA + 0x190, &1u32.to_le_bytes());
        put(&mut b, RDATA + 0x19c, &rva(RDATA + 0x180));
        b
    }

    fn infos(data: &[u8]) -> Vec<ThrowInfo> {
        let img = ImageBytes::from_spans(vec![(RDATA, data)]);
        let rk = RefKind::new(true, BASE, End::Little);
        find_throw_infos(
            &img,
            &rk,
            &TextRanges::for_test(vec![(TEXT, TEXT + 0x1000)]),
        )
    }

    #[test]
    fn throw_info_chains_are_found_and_named() {
        let data = rdata();
        let tis = infos(&data);
        assert_eq!(tis.len(), 2, "{tis:#x?}");
        assert_eq!(tis[0].addr, RDATA + 0x150);
        assert_eq!(tis[0].thrown_type(), "std::runtime_error");
        assert_eq!(tis[0].types.len(), 2);
        assert_eq!(tis[0].types[1].name, "std::exception");
        assert_eq!(tis[1].addr, RDATA + 0x190);
        assert_eq!(tis[1].thrown_type(), "int const");
        let names: Vec<String> = label_symbols(&tis).into_iter().map(|s| s.name).collect();
        assert!(names.contains(&"ThrowInfo<std::runtime_error>".to_string()));
        assert!(names.contains(&"ThrowInfo<int const>".to_string()));
        assert!(names.contains(&"CatchableType<std::exception>".to_string()));
        assert!(names.contains(&"CatchableTypeArray<int>".to_string()));
    }

    /// A `CatchableType`'s copy function is its class's copy constructor and
    /// a `ThrowInfo`'s unwind function the thrown class's destructor; one
    /// address two classes claim is left alone.
    #[test]
    fn copy_constructors_and_destructors_are_named() {
        let mut data = rdata();
        put(&mut data, RDATA + 0x100 + 24, &rva(TEXT + 0x100));
        put(&mut data, RDATA + 0x120 + 24, &rva(TEXT + 0x140));
        put(&mut data, RDATA + 0x154, &rva(TEXT + 0x200));
        let names: Vec<(u64, String)> = member_symbols(&infos(&data))
            .into_iter()
            .map(|s| (s.addr, s.name))
            .collect();
        assert_eq!(
            names,
            [
                (
                    TEXT + 0x100,
                    "std::runtime_error::runtime_error".to_string()
                ),
                (TEXT + 0x140, "std::exception::exception".to_string()),
                (
                    TEXT + 0x200,
                    "std::runtime_error::~runtime_error".to_string()
                ),
            ]
        );
        put(&mut data, RDATA + 0x120 + 24, &rva(TEXT + 0x100));
        let folded: Vec<u64> = member_symbols(&infos(&data))
            .into_iter()
            .map(|s| s.addr)
            .collect();
        assert_eq!(folded, [TEXT + 0x200]);
    }

    #[test]
    fn a_broken_array_entry_drops_the_throw_info() {
        let mut data = rdata();
        put(&mut data, RDATA + 0x148, &rva(RDATA + 0x1f0));
        let tis = infos(&data);
        assert_eq!(tis.len(), 1);
        assert_eq!(tis[0].thrown_type(), "int const");
    }

    #[test]
    fn x64_throw_and_rethrow_sites() {
        let ti = RDATA + 0x150;
        let mut code = vec![0x90u8; 0x40];
        let lea_at = TEXT + 4;
        code[4..7].copy_from_slice(&[0x48, 0x8D, 0x15]);
        code[7..11].copy_from_slice(&((ti - (lea_at + 7)) as u32).to_le_bytes());
        let call1 = TEXT + 0x10;
        code[0x10..0x12].copy_from_slice(&[0xFF, 0x15]);
        code[0x12..0x16].copy_from_slice(&((SLOT - (call1 + 6)) as u32).to_le_bytes());
        code[0x20..0x24].copy_from_slice(&[0x33, 0xD2, 0x33, 0xC9]);
        let call2 = TEXT + 0x24;
        code[0x24..0x26].copy_from_slice(&[0xFF, 0x15]);
        code[0x26..0x2a].copy_from_slice(&((SLOT - (call2 + 6)) as u32).to_le_bytes());
        let targets: FxHashSet<u64> = [SLOT].into_iter().collect();
        let tis: FxHashSet<u64> = [ti].into_iter().collect();
        let sites = find_throw_sites(&[(TEXT, code.as_slice())], true, &targets, &tis);
        assert_eq!(
            sites,
            vec![
                ThrowSite {
                    call: call1,
                    kind: ThrowKind::Throw(ti)
                },
                ThrowSite {
                    call: call2,
                    kind: ThrowKind::Rethrow
                },
            ]
        );
    }

    #[test]
    fn x86_push_of_a_throw_info() {
        let ti = 0x0040_3150u64;
        let slot = 0x0040_6000u64;
        let mut code = vec![0x90u8; 0x20];
        code[2] = 0x68;
        code[3..7].copy_from_slice(&(ti as u32).to_le_bytes());
        code[0x0c..0x0e].copy_from_slice(&[0xFF, 0x15]);
        code[0x0e..0x12].copy_from_slice(&(slot as u32).to_le_bytes());
        let targets: FxHashSet<u64> = [slot].into_iter().collect();
        let tis: FxHashSet<u64> = [ti].into_iter().collect();
        let sites = find_throw_sites(&[(0x0040_1000, code.as_slice())], false, &targets, &tis);
        assert_eq!(sites.len(), 1);
        assert_eq!(sites[0].kind, ThrowKind::Throw(ti));
    }

    #[test]
    fn type_names() {
        assert_eq!(type_name(".?AVruntime_error@std@@"), "std::runtime_error");
        assert_eq!(type_name(".H"), "int");
        assert_eq!(type_name(".PEBD"), "char const *");
        assert_eq!(type_name(".PAD"), "char *");
        assert_eq!(type_name(".PEAX"), "void *");
        assert_eq!(type_name(".?"), "?");
    }

    #[test]
    fn throw_import_names() {
        assert!(is_throw_name(b"_CxxThrowException"));
        assert!(is_throw_name(b"_CxxThrowException@8"));
        assert!(!is_throw_name(b"_CxxFrameHandler3"));
    }

    /// The clang-cl fixture: three throws, a rethrow in a catch funclet, and a
    /// try with three handlers.
    #[test]
    fn clang_cl_fixture() {
        let path = format!(
            "{}/tests/fixtures/msvceh_x64.exe",
            env!("CARGO_MANIFEST_DIR")
        );
        let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
        let file = object::File::parse(&bytes[..]).expect("parse");
        let out = collect(&file, &bytes);
        let sym = |a: u64| {
            out.symbols
                .iter()
                .find(|s| s.addr == a)
                .map(|s| s.name.clone())
                .unwrap_or_default()
        };
        assert!(sym(0x1_4000_2198).starts_with("ThrowInfo<") && sym(0x1_4000_2198).contains("Err"));
        assert!(sym(0x1_4000_2200).contains("Derived"));
        assert_eq!(sym(0x1_4000_2238), "ThrowInfo<int>");
        let comment = |a: u64| {
            out.comments
                .iter()
                .find(|c| c.addr == a)
                .map(|c| (c.func_addr, c.text.clone()))
        };
        assert_eq!(
            comment(0x1_4000_102c),
            Some((0x1_4000_1000, "throw int".to_string()))
        );
        assert_eq!(
            comment(0x1_4000_1161),
            Some((0x1_4000_114f, "rethrow".to_string()))
        );
        let tries: Vec<&str> = out
            .header_comments
            .iter()
            .filter(|c| c.func_addr == 0x1_4000_109f && c.text.starts_with("eh: try"))
            .map(|c| c.text.as_str())
            .collect();
        assert_eq!(tries.len(), 1, "{tries:?}");
        assert!(
            tries[0].contains("catch (...) -> 0x14000110d"),
            "{}",
            tries[0]
        );
        assert!(
            out.header_comments
                .iter()
                .any(|c| c.func_addr == 0x1_4000_10c7 && c.text.contains("handler of 0x14000109f"))
        );
        let renamed = |a: u64| {
            out.fid_names
                .iter()
                .find(|m| m.addr == a)
                .map(|m| m.name.clone())
        };
        assert_eq!(
            renamed(0x1_4000_10c7).as_deref(),
            Some("sub_14000109f$catch$0")
        );
        assert_eq!(
            renamed(0x1_4000_110d).as_deref(),
            Some("sub_14000109f$catch$2")
        );
        assert_eq!(
            renamed(0x1_4000_114f).as_deref(),
            Some("sub_14000112f$catch$0")
        );
        let site = out
            .msvc_eh_sites
            .iter()
            .find(|s| s.pad == 0x1_4000_10c7)
            .expect("catch (Err &) record");
        assert_eq!((site.start, site.end), (0x1_4000_10b8, 0x1_4000_10be));
        assert_eq!(
            out.msvc_eh_sites
                .iter()
                .filter(|s| s.start == 0x1_4000_10b8)
                .count(),
            3
        );
        let funclet = out
            .msvc_funclets
            .iter()
            .find(|f| f.pad == 0x1_4000_10c7)
            .expect("catch funclet");
        assert_eq!(funclet.frame_reg.as_deref(), Some("RBP"));
        assert_eq!(funclet.frame_offset, 0x40);
        assert_eq!(funclet.returns, vec![(0x1_4000_10ea, 0x1_4000_10be)]);
        assert!(
            out.msvc_funclets
                .iter()
                .any(|f| f.pad == 0x1_4000_114f && f.returns.is_empty())
        );
        for f in [0x1_4000_10c7, 0x1_4000_10eb, 0x1_4000_110d, 0x1_4000_114f] {
            assert!(out.entries.contains(&f), "{f:#x} not discovered");
        }
    }

    #[test]
    fn owners_by_pdata_range() {
        let owners = [(0x1000, 0x1040, 0x1000), (0x1080, 0x10c0, 0x1000)];
        assert_eq!(owner_of(&owners, 0x1010), Some(0x1000));
        assert_eq!(owner_of(&owners, 0x1090), Some(0x1000));
        assert_eq!(owner_of(&owners, 0x1050), None);
        assert_eq!(owner_of(&owners, 0x0fff), None);
    }
}
