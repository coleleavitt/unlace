//! (unlace `delphi`) Borland/Delphi RTTI: the class VMTs, class and method
//! names, type-info records and interface tables of a Delphi PE.
//!
//! Every Delphi class has a VMT in the image. The VMT pointer an object holds
//! points at the first user virtual method; the words before it are fixed
//! fields: a pointer back to the VMT itself, the interface, auto, init, field,
//! method and dynamic tables, the type info, the class name (a ShortString),
//! the instance size, the parent and the standard virtuals of `TObject`
//! (`Destroy`, `FreeInstance`, ...). Three layouts exist:
//!
//! - Delphi 2009 and later: 22 slots, with `Equals`, `GetHashCode` and
//!   `ToString` (`vmtSelfPtr` -88 on x86, -176 on x64);
//! - Delphi 3 to 2007: 19 slots (`vmtSelfPtr` -76);
//! - Delphi 2: 13 slots, no interface or auto table, a parent that is the
//!   parent VMT itself rather than a pointer to it, and a self pointer the
//!   compiler leaves 0.
//!
//! VMTs are found by their self pointer (a word equal to its own address plus
//! the layout's self offset) and checked: a ShortString identifier for the
//! name, a sane instance size and every standard virtual in code. Delphi 2 has
//! no self pointer, so its classes are found from the `TObject` VMT (named
//! `TObject`, no parent) down the parent links. Each class yields:
//!
//! - `<Class>::vmt` at the VMT and labels for its tables and type info;
//! - its standard virtuals and positive virtual slots (`<Class>::vfunc_<i>`),
//!   each named for the ancestor that first holds that address in that slot,
//!   and left unnamed when unrelated slots share it (`@AbstractError`);
//! - its published methods from the method table (`TForm1::Button1Click`);
//! - its dynamic methods and message handlers from the dynamic table
//!   (`<Class>::dynamic_<n>`, `<Class>::message_WM_PAINT`);
//! - the vtable of each implemented interface
//!   (`<Class>::vtable_for_IStream`), the interface named by the GUID of its
//!   `tkInterface` type info, and the `IInterface` thunks of that vtable.
//!
//! Every type-info record carries a pointer to itself in the word before it
//! (the `PPTypeInfo` a reference goes through), followed by a kind byte and a
//! ShortString name; each such record is labelled `<Name>::typeinfo`, so a
//! call such as `@DynArrayClear(&a, &TArray<System.Byte>::typeinfo)` names the
//! type it manages.
//!
//! PE only, and only on an image that holds the `TObject` class name. The
//! facts are committed when `--option delphi on` (default off).

pub mod delphiabiimports;
#[cfg(test)]
mod tests;

use std::collections::{BTreeMap, BTreeSet};

use object::BinaryFormat;
use object::read::{Object, ObjectSection};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase, SymFact, SymKind};

/// The largest instance size taken as real.
const MAX_INSTANCE_SIZE: u64 = 1 << 24;

/// The most positive virtual slots one VMT is walked for.
const MAX_VIRTUALS: u64 = 4096;

/// The deepest parent chain followed.
const MAX_DEPTH: usize = 256;

/// The most entries a method, dynamic or interface table is read for.
const MAX_TABLE: u64 = 4096;

/// `tkClass` and `tkInterface`, the same in every Delphi version.
const TK_CLASS: u8 = 7;
const TK_INTERFACE: u8 = 15;

/// The last `TTypeKind` (`tkMRecord`, Delphi 10.4).
const TK_LAST: u8 = 22;

const MODERN_STD: [&str; 11] = [
    "Equals",
    "GetHashCode",
    "ToString",
    "SafeCallException",
    "AfterConstruction",
    "BeforeDestruction",
    "Dispatch",
    "DefaultHandler",
    "NewInstance",
    "FreeInstance",
    "Destroy",
];
const CLASSIC_STD: [&str; 8] = [
    "SafeCallException",
    "AfterConstruction",
    "BeforeDestruction",
    "Dispatch",
    "DefaultHandler",
    "NewInstance",
    "FreeInstance",
    "Destroy",
];
const DELPHI2_STD: [&str; 4] = ["DefaultHandler", "NewInstance", "FreeInstance", "Destroy"];

/// The `IInterface` methods every Delphi interface vtable starts with.
const IINTERFACE: [&str; 3] = ["QueryInterface", "_AddRef", "_Release"];

/// The Borland/Delphi RTTI pass (gate id `delphi`). Default-off, PE only.
#[derive(Default)]
pub struct DelphiPass;

impl AnalysisPass for DelphiPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "delphi"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        if ctx.file.format() != BinaryFormat::Pe {
            return AnalysisOutput::default();
        }
        recover(&Image::new(ctx.file))
    }
}

/// The loaded sections of an image, its executable ranges and its pointer width.
pub(crate) struct Image<'a> {
    sections: Vec<(u64, &'a [u8])>,
    code: Vec<(u64, u64)>,
    ptr: u64,
}

impl<'a> Image<'a> {
    fn new(file: &object::File<'a>) -> Self {
        let mut sections = Vec::new();
        let mut code = Vec::new();
        for sec in file.sections() {
            let addr = sec.address();
            if addr == 0 {
                continue;
            }
            let exec = sec.kind() == object::SectionKind::Text
                || matches!(
                    sec.flags(),
                    object::SectionFlags::Coff { characteristics }
                        if characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0
                );
            if exec && sec.size() != 0 {
                code.push((addr, addr.saturating_add(sec.size())));
            }
            if let Ok(data) = sec.data() {
                if !data.is_empty() {
                    sections.push((addr, data));
                }
            }
        }
        let ptr = if file.is_64() { 8 } else { 4 };
        Self::from_spans(sections, code, ptr)
    }

    pub(crate) fn from_spans(
        mut sections: Vec<(u64, &'a [u8])>,
        mut code: Vec<(u64, u64)>,
        ptr: u64,
    ) -> Self {
        sections.sort_by_key(|&(a, _)| a);
        code.sort_unstable();
        Image {
            sections,
            code,
            ptr,
        }
    }

    fn read(&self, vma: u64, len: usize) -> Option<&'a [u8]> {
        for &(base, data) in &self.sections {
            if vma < base {
                continue;
            }
            let off = usize::try_from(vma - base).ok()?;
            let end = off.checked_add(len)?;
            if end <= data.len() {
                return Some(&data[off..end]);
            }
        }
        None
    }

    fn word(&self, vma: u64) -> Option<u64> {
        let b = self.read(vma, self.ptr as usize)?;
        Some(word_of(b))
    }

    fn u16_at(&self, vma: u64) -> Option<u16> {
        let b = self.read(vma, 2)?;
        Some(u16::from_le_bytes([b[0], b[1]]))
    }

    fn u32_at(&self, vma: u64) -> Option<u32> {
        let b = self.read(vma, 4)?;
        Some(u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
    }

    fn is_code(&self, vma: u64) -> bool {
        self.code.iter().any(|&(s, e)| vma >= s && vma < e)
    }

    /// Every aligned pointer-width word, as `(slot vma, value)`.
    fn for_each_word(&self, mut f: impl FnMut(u64, u64)) {
        let ps = self.ptr as usize;
        for &(base, data) in &self.sections {
            let mut off = 0usize;
            while off + ps <= data.len() {
                f(base + off as u64, word_of(&data[off..off + ps]));
                off += ps;
            }
        }
    }

    /// The start of every occurrence of `needle`.
    fn find_bytes(&self, needle: &[u8]) -> Vec<u64> {
        let mut hits = Vec::new();
        let Some(&first) = needle.first() else {
            return hits;
        };
        for &(base, data) in &self.sections {
            if data.len() < needle.len() {
                continue;
            }
            for i in memchr::memchr_iter(first, &data[..=data.len() - needle.len()]) {
                if &data[i..i + needle.len()] == needle {
                    hits.push(base + i as u64);
                }
            }
        }
        hits
    }

    /// The ShortString at `vma` when it is a type or class name: a letter or
    /// `_` first, then letters, digits, `_` and the `.<>,` of nested and
    /// generic names.
    fn type_name(&self, vma: u64) -> Option<String> {
        let len = *self.read(vma, 1)?.first()? as usize;
        if len == 0 {
            return None;
        }
        let s = self.read(vma + 1, len)?;
        if !(s[0].is_ascii_alphabetic() || s[0] == b'_') {
            return None;
        }
        if !s
            .iter()
            .all(|&c| c.is_ascii_alphanumeric() || matches!(c, b'_' | b'.' | b'<' | b'>' | b','))
        {
            return None;
        }
        std::str::from_utf8(s).ok().map(str::to_string)
    }

    /// The ShortString at `vma` when it is a plain identifier.
    fn ident(&self, vma: u64) -> Option<String> {
        let name = self.type_name(vma)?;
        name.bytes()
            .all(|c| c.is_ascii_alphanumeric() || c == b'_')
            .then_some(name)
    }
}

fn word_of(b: &[u8]) -> u64 {
    let mut w = [0u8; 8];
    w[..b.len()].copy_from_slice(b);
    u64::from_le_bytes(w)
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Flavor {
    /// Delphi 2009 and later.
    Modern,
    /// Delphi 3 to 2007.
    Classic,
    /// Delphi 2.
    Delphi2,
}

/// Where each VMT field sits, in pointer-width slots before the VMT pointer
/// (0: the layout has no such field).
#[derive(Clone, Copy, Debug)]
struct Layout {
    flavor: Flavor,
    ptr: u64,
    self_ptr: u64,
    intf: u64,
    auto: u64,
    init: u64,
    typeinfo: u64,
    field: u64,
    method: u64,
    dynamic: u64,
    name: u64,
    size: u64,
    parent: u64,
    std: &'static [&'static str],
}

impl Layout {
    fn new(flavor: Flavor, ptr: u64) -> Self {
        let (s, std): ([u64; 12], &'static [&'static str]) = match flavor {
            Flavor::Modern => ([22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 0], &MODERN_STD),
            Flavor::Classic => ([19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 0], &CLASSIC_STD),
            Flavor::Delphi2 => ([13, 0, 0, 12, 11, 10, 9, 8, 7, 6, 5, 0], &DELPHI2_STD),
        };
        Layout {
            flavor,
            ptr,
            self_ptr: s[0],
            intf: s[1],
            auto: s[2],
            init: s[3],
            typeinfo: s[4],
            field: s[5],
            method: s[6],
            dynamic: s[7],
            name: s[8],
            size: s[9],
            parent: s[10],
            std,
        }
    }

    /// The address of the field `slots` words before `vmt`.
    fn at(&self, vmt: u64, slots: u64) -> Option<u64> {
        vmt.checked_sub(slots.checked_mul(self.ptr)?)
    }

    /// The pointer the field `slots` words before `vmt` holds, when present.
    fn field(&self, img: &Image, vmt: u64, slots: u64) -> Option<u64> {
        if slots == 0 {
            return None;
        }
        img.word(self.at(vmt, slots)?).filter(|&p| p != 0)
    }
}

/// One recovered class.
#[derive(Clone, Debug)]
struct Class {
    name: String,
    parent: Option<u64>,
    /// The standard virtuals, in `Layout::std` order.
    std: Vec<u64>,
    /// The positive virtual slots.
    virtuals: Vec<u64>,
}

/// The class name at `vmt` when the VMT checks out under `lay`.
fn class_at(img: &Image, lay: &Layout, vmt: u64) -> Option<String> {
    let name = img.type_name(lay.field(img, vmt, lay.name)?)?;
    let size = img.word(lay.at(vmt, lay.size)?)?;
    if size < img.ptr || size > MAX_INSTANCE_SIZE {
        return None;
    }
    for i in 1..=lay.std.len() as u64 {
        if !img.is_code(img.word(lay.at(vmt, i)?)?) {
            return None;
        }
    }
    Some(name)
}

/// The VMTs whose self pointer holds their own address.
fn scan_self_ptrs(img: &Image, lay: &Layout) -> BTreeMap<u64, String> {
    let mut out = BTreeMap::new();
    let delta = lay.self_ptr * lay.ptr;
    img.for_each_word(|slot, value| {
        if slot.checked_add(delta) == Some(value) {
            if let Some(name) = class_at(img, lay, value) {
                out.insert(value, name);
            }
        }
    });
    out
}

/// The Delphi 2 VMTs: `TObject`'s, then every VMT whose parent is a known one.
fn scan_parent_chain(img: &Image, lay: &Layout) -> BTreeMap<u64, String> {
    let mut out = BTreeMap::new();
    let names: BTreeSet<u64> = img.find_bytes(b"\x07TObject").into_iter().collect();
    let name_delta = lay.name * lay.ptr;
    let mut roots = Vec::new();
    img.for_each_word(|slot, value| {
        if names.contains(&value) {
            roots.push(slot + name_delta);
        }
    });
    for vmt in roots {
        let parent = lay.at(vmt, lay.parent).and_then(|a| img.word(a));
        if parent == Some(0) && class_at(img, lay, vmt).as_deref() == Some("TObject") {
            out.insert(vmt, "TObject".to_string());
        }
    }
    let parent_delta = lay.parent * lay.ptr;
    for _ in 0..MAX_DEPTH {
        let mut found = Vec::new();
        img.for_each_word(|slot, value| {
            if out.contains_key(&value) {
                let vmt = slot + parent_delta;
                if !out.contains_key(&vmt) {
                    found.push(vmt);
                }
            }
        });
        let mut grew = false;
        for vmt in found {
            if let Some(name) = class_at(img, lay, vmt) {
                grew |= out.insert(vmt, name).is_none();
            }
        }
        if !grew {
            break;
        }
    }
    out
}

/// The layout and the VMTs of a Delphi image, `None` when it holds fewer
/// than two classes.
fn find_vmts(img: &Image) -> Option<(Layout, BTreeMap<u64, String>)> {
    let mut best: Option<(Layout, BTreeMap<u64, String>)> = None;
    for flavor in [Flavor::Modern, Flavor::Classic] {
        let lay = Layout::new(flavor, img.ptr);
        let found = scan_self_ptrs(img, &lay);
        if found.len() > best.as_ref().map_or(0, |(_, b)| b.len()) {
            best = Some((lay, found));
        }
    }
    if best.is_none() && img.ptr == 4 {
        let lay = Layout::new(Flavor::Delphi2, 4);
        best = Some((lay, scan_parent_chain(img, &lay)));
    }
    best.filter(|(_, found)| found.len() >= 2)
}

/// The parent VMT of `vmt`, when it is one of `known`.
fn parent_of(img: &Image, lay: &Layout, vmt: u64, known: &BTreeMap<u64, String>) -> Option<u64> {
    let p = lay.field(img, vmt, lay.parent)?;
    let p = if lay.flavor == Flavor::Delphi2 {
        p
    } else {
        img.word(p)?
    };
    known.contains_key(&p).then_some(p)
}

/// Read every class: its parent, standard virtuals and positive virtual slots.
/// A VMT's virtual slots end at the first word that is not a code pointer, at
/// the next VMT and at any of its own tables placed after it.
fn read_classes(img: &Image, lay: &Layout, vmts: &BTreeMap<u64, String>) -> BTreeMap<u64, Class> {
    let starts: Vec<u64> = vmts
        .keys()
        .filter_map(|&v| lay.at(v, lay.self_ptr))
        .collect();
    let mut out = BTreeMap::new();
    for (&vmt, name) in vmts {
        let mut bound = vmt.saturating_add(MAX_VIRTUALS * lay.ptr);
        if let Some(&next) = starts.iter().find(|&&s| s > vmt) {
            bound = bound.min(next);
        }
        for slots in [
            lay.intf,
            lay.auto,
            lay.init,
            lay.typeinfo,
            lay.field,
            lay.method,
            lay.dynamic,
            lay.name,
        ] {
            if let Some(t) = lay.field(img, vmt, slots) {
                if t > vmt {
                    bound = bound.min(t);
                }
            }
        }
        let mut virtuals = Vec::new();
        let mut a = vmt;
        while a < bound {
            match img.word(a) {
                Some(t) if img.is_code(t) => virtuals.push(t),
                _ => break,
            }
            a += lay.ptr;
        }
        let std = (1..=lay.std.len() as u64)
            .rev()
            .filter_map(|i| lay.at(vmt, i).and_then(|a| img.word(a)))
            .collect();
        out.insert(
            vmt,
            Class {
                name: name.clone(),
                parent: parent_of(img, lay, vmt, vmts),
                std,
                virtuals,
            },
        );
    }
    out
}

/// Which slot of a VMT an address fills.
#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
enum Slot {
    Std(usize),
    Virtual(usize),
}

impl Slot {
    fn of(self, class: &Class) -> Option<u64> {
        match self {
            Slot::Std(i) => class.std.get(i).copied(),
            Slot::Virtual(i) => class.virtuals.get(i).copied(),
        }
    }
}

/// The topmost ancestor of `vmt` that holds `target` in `slot`.
fn owner(classes: &BTreeMap<u64, Class>, vmt: u64, slot: Slot, target: u64) -> u64 {
    let mut o = vmt;
    for _ in 0..MAX_DEPTH {
        let Some(p) = classes.get(&o).and_then(|c| c.parent) else {
            break;
        };
        if classes.get(&p).and_then(|c| slot.of(c)) != Some(target) {
            break;
        }
        o = p;
    }
    o
}

/// Function names by address. A higher rank wins: published methods, then the
/// standard virtuals, then dynamic and message handlers and interface thunks,
/// then virtual slot indexes.
#[derive(Default)]
struct Names {
    by_addr: BTreeMap<u64, (u8, String)>,
    entries: BTreeSet<u64>,
}

impl Names {
    fn put(&mut self, addr: u64, rank: u8, name: String) {
        self.entries.insert(addr);
        match self.by_addr.get(&addr) {
            Some((r, _)) if *r >= rank => {}
            _ => {
                self.by_addr.insert(addr, (rank, name));
            }
        }
    }
}

const RANK_SLOT: u8 = 0;
const RANK_HANDLER: u8 = 1;
const RANK_STD: u8 = 2;
const RANK_PUBLISHED: u8 = 3;

/// Name the standard and positive virtual slots after the class that defines
/// them; an address two different slots hold stays unnamed.
fn name_virtuals(lay: &Layout, classes: &BTreeMap<u64, Class>, names: &mut Names) {
    let mut owners: BTreeMap<u64, BTreeSet<(u64, Slot)>> = BTreeMap::new();
    for (&vmt, class) in classes {
        let slots = (0..class.std.len())
            .map(Slot::Std)
            .chain((0..class.virtuals.len()).map(Slot::Virtual));
        for slot in slots {
            let Some(target) = slot.of(class) else {
                continue;
            };
            let o = owner(classes, vmt, slot, target);
            owners.entry(target).or_default().insert((o, slot));
        }
    }
    for (target, set) in owners {
        if set.len() != 1 {
            names.entries.insert(target);
            continue;
        }
        let Some(&(o, slot)) = set.iter().next() else {
            continue;
        };
        let class = &classes[&o].name;
        match slot {
            Slot::Std(i) => {
                if let Some(m) = lay.std.get(i) {
                    names.put(target, RANK_STD, format!("{class}::{m}"));
                }
            }
            Slot::Virtual(i) => names.put(target, RANK_SLOT, format!("{class}::vfunc_{i}")),
        }
    }
}

/// The published methods of the method table at `table`: a `Word` count,
/// then per method its entry size (`Word`), code pointer and ShortString name.
fn published_methods(img: &Image, table: u64) -> Vec<(u64, String)> {
    let mut out = Vec::new();
    let Some(count) = img.u16_at(table) else {
        return out;
    };
    let mut a = table + 2;
    for _ in 0..u64::from(count).min(MAX_TABLE) {
        let Some(size) = img.u16_at(a) else {
            break;
        };
        let (Some(code), Some(name)) = (img.word(a + 2), img.ident(a + 2 + img.ptr)) else {
            break;
        };
        if u64::from(size) < 2 + img.ptr + 1 + name.len() as u64 || !img.is_code(code) {
            break;
        }
        out.push((code, name));
        a += u64::from(size);
    }
    out
}

/// The dynamic table at `table`: a `Word` count, the indexes, then the code
/// pointers. An index of 0xC000 and up is a dynamic method (`-index`), any
/// other a Windows or VCL message number.
fn dynamic_methods(img: &Image, table: u64) -> Vec<(u64, String)> {
    let mut out = Vec::new();
    let Some(count) = img.u16_at(table).map(u64::from) else {
        return out;
    };
    if count > MAX_TABLE {
        return out;
    }
    let addrs = table + 2 + 2 * count;
    for i in 0..count {
        let (Some(id), Some(code)) = (img.u16_at(table + 2 + 2 * i), img.word(addrs + i * img.ptr))
        else {
            break;
        };
        if !img.is_code(code) {
            continue;
        }
        let name = if id >= 0xC000 {
            format!("dynamic_{}", 0x1_0000 - u32::from(id))
        } else {
            format!("message_{}", message_name(id))
        };
        out.push((code, name));
    }
    out
}

/// `WM_PAINT` for 0x000F, `CN_COMMAND` for 0xBD11 (VCL's `CN_BASE` + a
/// `WM_` number), else the number in hex.
fn message_name(id: u16) -> String {
    if let Some(n) = wm_name(id) {
        return n.to_string();
    }
    if let Some(n) = id.checked_sub(0xBC00).and_then(wm_name) {
        return format!("CN_{}", &n[3..]);
    }
    format!("{id:04x}")
}

fn wm_name(id: u16) -> Option<&'static str> {
    Some(match id {
        0x0001 => "WM_CREATE",
        0x0002 => "WM_DESTROY",
        0x0003 => "WM_MOVE",
        0x0005 => "WM_SIZE",
        0x0006 => "WM_ACTIVATE",
        0x0007 => "WM_SETFOCUS",
        0x0008 => "WM_KILLFOCUS",
        0x000A => "WM_ENABLE",
        0x000B => "WM_SETREDRAW",
        0x000C => "WM_SETTEXT",
        0x000D => "WM_GETTEXT",
        0x000E => "WM_GETTEXTLENGTH",
        0x000F => "WM_PAINT",
        0x0010 => "WM_CLOSE",
        0x0011 => "WM_QUERYENDSESSION",
        0x0014 => "WM_ERASEBKGND",
        0x0015 => "WM_SYSCOLORCHANGE",
        0x0016 => "WM_ENDSESSION",
        0x0018 => "WM_SHOWWINDOW",
        0x001A => "WM_SETTINGCHANGE",
        0x001C => "WM_ACTIVATEAPP",
        0x001D => "WM_FONTCHANGE",
        0x001E => "WM_TIMECHANGE",
        0x001F => "WM_CANCELMODE",
        0x0020 => "WM_SETCURSOR",
        0x0021 => "WM_MOUSEACTIVATE",
        0x0022 => "WM_CHILDACTIVATE",
        0x0024 => "WM_GETMINMAXINFO",
        0x0028 => "WM_NEXTDLGCTL",
        0x002B => "WM_DRAWITEM",
        0x002C => "WM_MEASUREITEM",
        0x002D => "WM_DELETEITEM",
        0x0030 => "WM_SETFONT",
        0x0031 => "WM_GETFONT",
        0x0037 => "WM_QUERYDRAGICON",
        0x0039 => "WM_COMPAREITEM",
        0x003D => "WM_GETOBJECT",
        0x0046 => "WM_WINDOWPOSCHANGING",
        0x0047 => "WM_WINDOWPOSCHANGED",
        0x004A => "WM_COPYDATA",
        0x004E => "WM_NOTIFY",
        0x0053 => "WM_HELP",
        0x007B => "WM_CONTEXTMENU",
        0x007C => "WM_STYLECHANGING",
        0x007D => "WM_STYLECHANGED",
        0x007E => "WM_DISPLAYCHANGE",
        0x007F => "WM_GETICON",
        0x0080 => "WM_SETICON",
        0x0081 => "WM_NCCREATE",
        0x0082 => "WM_NCDESTROY",
        0x0083 => "WM_NCCALCSIZE",
        0x0084 => "WM_NCHITTEST",
        0x0085 => "WM_NCPAINT",
        0x0086 => "WM_NCACTIVATE",
        0x0087 => "WM_GETDLGCODE",
        0x00A0 => "WM_NCMOUSEMOVE",
        0x00A1 => "WM_NCLBUTTONDOWN",
        0x00A2 => "WM_NCLBUTTONUP",
        0x00A3 => "WM_NCLBUTTONDBLCLK",
        0x0100 => "WM_KEYDOWN",
        0x0101 => "WM_KEYUP",
        0x0102 => "WM_CHAR",
        0x0103 => "WM_DEADCHAR",
        0x0104 => "WM_SYSKEYDOWN",
        0x0105 => "WM_SYSKEYUP",
        0x0106 => "WM_SYSCHAR",
        0x010D => "WM_IME_STARTCOMPOSITION",
        0x010E => "WM_IME_ENDCOMPOSITION",
        0x010F => "WM_IME_COMPOSITION",
        0x0110 => "WM_INITDIALOG",
        0x0111 => "WM_COMMAND",
        0x0112 => "WM_SYSCOMMAND",
        0x0113 => "WM_TIMER",
        0x0114 => "WM_HSCROLL",
        0x0115 => "WM_VSCROLL",
        0x0116 => "WM_INITMENU",
        0x0117 => "WM_INITMENUPOPUP",
        0x011F => "WM_MENUSELECT",
        0x0120 => "WM_MENUCHAR",
        0x0121 => "WM_ENTERIDLE",
        0x0127 => "WM_CHANGEUISTATE",
        0x0128 => "WM_UPDATEUISTATE",
        0x0129 => "WM_QUERYUISTATE",
        0x0132 => "WM_CTLCOLORMSGBOX",
        0x0133 => "WM_CTLCOLOREDIT",
        0x0134 => "WM_CTLCOLORLISTBOX",
        0x0135 => "WM_CTLCOLORBTN",
        0x0136 => "WM_CTLCOLORDLG",
        0x0137 => "WM_CTLCOLORSCROLLBAR",
        0x0138 => "WM_CTLCOLORSTATIC",
        0x0200 => "WM_MOUSEMOVE",
        0x0201 => "WM_LBUTTONDOWN",
        0x0202 => "WM_LBUTTONUP",
        0x0203 => "WM_LBUTTONDBLCLK",
        0x0204 => "WM_RBUTTONDOWN",
        0x0205 => "WM_RBUTTONUP",
        0x0206 => "WM_RBUTTONDBLCLK",
        0x0207 => "WM_MBUTTONDOWN",
        0x0208 => "WM_MBUTTONUP",
        0x0209 => "WM_MBUTTONDBLCLK",
        0x020A => "WM_MOUSEWHEEL",
        0x020E => "WM_MOUSEHWHEEL",
        0x0210 => "WM_PARENTNOTIFY",
        0x0211 => "WM_ENTERMENULOOP",
        0x0212 => "WM_EXITMENULOOP",
        0x0214 => "WM_SIZING",
        0x0215 => "WM_CAPTURECHANGED",
        0x0216 => "WM_MOVING",
        0x0219 => "WM_DEVICECHANGE",
        0x0222 => "WM_MDIACTIVATE",
        0x0231 => "WM_ENTERSIZEMOVE",
        0x0232 => "WM_EXITSIZEMOVE",
        0x0233 => "WM_DROPFILES",
        0x0282 => "WM_IME_NOTIFY",
        0x02A1 => "WM_MOUSEHOVER",
        0x02A3 => "WM_MOUSELEAVE",
        0x02E0 => "WM_DPICHANGED",
        0x0300 => "WM_CUT",
        0x0301 => "WM_COPY",
        0x0302 => "WM_PASTE",
        0x0303 => "WM_CLEAR",
        0x0304 => "WM_UNDO",
        0x030F => "WM_QUERYNEWPALETTE",
        0x0311 => "WM_PALETTECHANGED",
        0x0312 => "WM_HOTKEY",
        0x0317 => "WM_PRINT",
        0x0318 => "WM_PRINTCLIENT",
        0x0319 => "WM_APPCOMMAND",
        0x031A => "WM_THEMECHANGED",
        _ => return None,
    })
}

/// Every type-info record: a pointer to itself in the word before it, a kind
/// byte and a ShortString name. As `(address, kind, name)`.
fn scan_type_infos(img: &Image) -> Vec<(u64, u8, String)> {
    let mut out = Vec::new();
    let ptr = img.ptr;
    img.for_each_word(|slot, value| {
        if slot.checked_add(ptr) != Some(value) {
            return;
        }
        let Some(&kind) = img.read(value, 1).and_then(|b| b.first()) else {
            return;
        };
        if kind == 0 || kind > TK_LAST {
            return;
        }
        if let Some(name) = img.type_name(value + 1) {
            out.push((value, kind, name));
        }
    });
    out
}

/// The interface names by GUID, from the `tkInterface` records whose flags
/// say they carry one (`ifHasGuid`). The type data after the name is the
/// parent `PPTypeInfo`, the flags byte, then the GUID.
fn interface_guids(img: &Image, infos: &[(u64, u8, String)]) -> BTreeMap<[u8; 16], String> {
    let mut out = BTreeMap::new();
    for (addr, kind, name) in infos {
        if *kind != TK_INTERFACE {
            continue;
        }
        let data = addr + 2 + name.len() as u64;
        let Some(flags) = img.read(data + img.ptr, 1).and_then(|b| b.first().copied()) else {
            continue;
        };
        if flags & 1 == 0 {
            continue;
        }
        let Some(guid) = img.read(data + img.ptr + 1, 16) else {
            continue;
        };
        let mut g = [0u8; 16];
        g.copy_from_slice(guid);
        if g != [0u8; 16] {
            out.entry(g).or_insert_with(|| name.clone());
        }
    }
    out
}

/// The interface table at `table`: an `Integer` count (padded to a pointer
/// on x64), then per interface its IID, its vtable, the `Integer` offset of
/// the interface field (padded on x64) and the implementation getter. As
/// `(vtable, interface name)`, the name `None` when no type info has the IID.
fn interface_entries(
    img: &Image,
    table: u64,
    guids: &BTreeMap<[u8; 16], String>,
) -> Vec<(u64, Option<String>)> {
    let mut out = Vec::new();
    let Some(count) = img.u32_at(table).map(u64::from) else {
        return out;
    };
    if count > MAX_TABLE {
        return out;
    }
    let entry_size = 16 + 3 * img.ptr;
    let first = table + img.ptr;
    for i in 0..count {
        let e = first + i * entry_size;
        let (Some(iid), Some(vtable)) = (img.read(e, 16), img.word(e + 16)) else {
            break;
        };
        if vtable == 0 || img.read(vtable, 1).is_none() {
            continue;
        }
        let mut g = [0u8; 16];
        g.copy_from_slice(iid);
        out.push((vtable, guids.get(&g).cloned()));
    }
    out
}

/// Whether `file` holds Delphi classes: the `TObject` name and at least two
/// VMTs under one layout. Read by the `delphiabi` language selection.
pub fn is_delphi_image(file: &object::File) -> bool {
    let img = Image::new(file);
    !img.find_bytes(b"\x07TObject").is_empty() && find_vmts(&img).is_some()
}

/// Recover every Delphi fact the image holds.
pub(crate) fn recover(img: &Image) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    if img.find_bytes(b"\x07TObject").is_empty() {
        return out;
    }
    let Some((lay, vmts)) = find_vmts(img) else {
        return out;
    };
    let classes = read_classes(img, &lay, &vmts);
    let mut data: BTreeMap<u64, String> = BTreeMap::new();
    let mut names = Names::default();
    name_virtuals(&lay, &classes, &mut names);

    let infos = if lay.flavor == Flavor::Delphi2 {
        Vec::new()
    } else {
        scan_type_infos(img)
    };
    let guids = interface_guids(img, &infos);

    for (&vmt, class) in &classes {
        let c = &class.name;
        data.entry(vmt).or_insert_with(|| format!("{c}::vmt"));
        if let Some(ti) = lay.field(img, vmt, lay.typeinfo) {
            let kind = img.read(ti, 1).and_then(|b| b.first().copied());
            if kind == Some(TK_CLASS) && img.type_name(ti + 1).as_deref() == Some(c.as_str()) {
                data.entry(ti).or_insert_with(|| format!("{c}::typeinfo"));
            }
        }
        for (slots, label) in [
            (lay.intf, "interface_table"),
            (lay.auto, "auto_table"),
            (lay.init, "init_table"),
            (lay.field, "field_table"),
            (lay.method, "method_table"),
            (lay.dynamic, "dynamic_table"),
        ] {
            if let Some(t) = lay.field(img, vmt, slots) {
                if img.read(t, 1).is_some() {
                    data.entry(t).or_insert_with(|| format!("{c}::{label}"));
                }
            }
        }
        if let Some(t) = lay.field(img, vmt, lay.method) {
            for (code, m) in published_methods(img, t) {
                names.put(code, RANK_PUBLISHED, format!("{c}::{m}"));
            }
        }
        if let Some(t) = lay.field(img, vmt, lay.dynamic) {
            for (code, m) in dynamic_methods(img, t) {
                names.put(code, RANK_HANDLER, format!("{c}::{m}"));
            }
        }
        if let Some(t) = lay.field(img, vmt, lay.intf) {
            for (i, (vtable, iface)) in interface_entries(img, t, &guids).into_iter().enumerate() {
                let label = match &iface {
                    Some(n) => format!("{c}::vtable_for_{n}"),
                    None => format!("{c}::interface_vtable_{i}"),
                };
                data.entry(vtable).or_insert(label);
                let Some(n) = iface else {
                    continue;
                };
                for (j, m) in IINTERFACE.iter().enumerate() {
                    let Some(thunk) = img.word(vtable + j as u64 * img.ptr) else {
                        break;
                    };
                    if !img.is_code(thunk) {
                        break;
                    }
                    names.put(thunk, RANK_HANDLER, format!("{c}::{n}.{m}"));
                }
            }
        }
    }
    for (addr, _, name) in &infos {
        data.entry(*addr)
            .or_insert_with(|| format!("{name}::typeinfo"));
    }

    for (addr, (_, name)) in names.by_addr {
        out.symbols.push(SymFact {
            addr,
            name,
            kind: SymKind::Function,
        });
    }
    for (addr, name) in data {
        if names.entries.contains(&addr) {
            continue;
        }
        out.symbols.push(SymFact {
            addr,
            name,
            kind: SymKind::Data,
        });
    }
    out.entries.extend(names.entries);
    out
}
