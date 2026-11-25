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
mod tests;
