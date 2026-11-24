//! The Objective-C **type-encoding** decoder (design §5 PR-O2).
//!
//! ObjC method/ivar metadata carries a compact, ASCII *type encoding* string
//! (the `@encode(...)` form). A method's `types` field is the return type
//! followed by every argument type, each optionally trailed by a decimal **frame
//! offset** the runtime uses for `objc_msgSend` marshaling. For
//! `-(int)greet:(int)n` the encoding is `i20@0:8i16`:
//!
//! ```text
//!   i 20   → return int, frame size 20
//!   @ 0    → id   self   (arg 0 at frame offset 0)
//!   : 8    → SEL  _cmd   (arg 1 at frame offset 8)
//!   i 16   → int  n      (arg 2 at frame offset 16)
//! ```
//!
//! This is the unlace analog of Ghidra's `ObjectiveC1_TypeEncodings` /
//! `ObjectiveC2_DecompilerMessageAnalyzer` encoding parser (the *naming-tier*
//! subset). It is **not a demangler** — selectors are plain ASCII; this only maps
//! the single-character primitive type codes (+ a pointer/struct fallback) to a
//! unlace [`Datatype`] so an IMP gets a typed `PrototypePieces` (`id self, SEL
//! _cmd, int n`) and an ivar gets its element type.
//!
//! ## Scope (design §3.2 LOSS)
//!
//! Primitive codes (`c i s l q f d B v *`, signed/unsigned), `@` → `id`, `#` →
//! `Class`, `:` → `SEL`, `^T` → a pointer, `[n T]` → an array, and `{...}` /
//! `(...)` → the struct or union the encoding spells ([`struct_type`]), which
//! the calling convention then places like any other record. Protocol
//! qualifiers (`r`/`n`/`N`/`o`/`O`/`R`/`V`) and the GC `!` are skipped. An
//! unparseable or empty encoding, or one passing a record whose layout is not
//! spelled, yields `None` (the IMP is still *named* `-[Class sel]` — only the
//! typed prototype is dropped), never a failure.

use std::cell::{Cell, RefCell};
use std::collections::{HashMap, HashSet};
use std::rc::Rc;

use unlace_decomp::dtype::{Datatype, TypeFactory, TypeField, type_metatype};
use unlace_decomp::fspec::PrototypePieces;

/// Decode one ObjC method type encoding into a [`PrototypePieces`] named `name`
/// (the `-[Class sel]` label). The encoding is the return type followed by each
/// argument type; the first two arguments of every ObjC method are the implicit
/// `id self` (`@`) and `SEL _cmd` (`:`), which we name accordingly.
///
/// `None` for an empty / unparseable encoding (the IMP keeps its name, only the
/// typed prototype is dropped). `ptr_size` / `word_size` come from
/// `Architecture::data_org`.
pub fn decode_method(
    name: &str,
    encoding: &str,
    tctx: &TypeCtx,
    self_type: Option<&Rc<Datatype>>,
) -> Option<PrototypePieces> {
    let mut p = Parser::new(encoding);

    // Return type first (a null/void return is still `Some(void)`).
    let outtype = Some(p.next_type(tctx).filter(|t| !t.is_incomplete())?);

    let mut intypes: Vec<Rc<Datatype>> = Vec::new();
    let mut innames: Vec<String> = Vec::new();
    let mut idx = 0usize;
    while !p.at_end() {
        let Some(ty) = p.next_type(tctx) else { break };
        // The first two ObjC arguments are always the implicit receiver + selector.
        let nm = match idx {
            0 => "self".to_string(),
            1 => "_cmd".to_string(),
            _ => format!("arg{}", idx - 1),
        };
        let ty = match (idx, self_type) {
            (0, Some(st)) => Rc::clone(st),
            _ => by_value(ty, tctx)?,
        };
        intypes.push(ty);
        innames.push(nm);
        idx += 1;
    }

    Some(PrototypePieces {
        name: name.to_string(),
        outtype,
        intypes,
        innames,
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    })
}

/// The type an argument of encoded type `ty` is passed as: an array is a
/// pointer to its first element, as C passes it. `None` for a type with no
/// value to pass (`void`, a record whose layout is not known).
fn by_value(ty: Rc<Datatype>, tctx: &TypeCtx) -> Option<Rc<Datatype>> {
    if ty.get_metatype() == type_metatype::TYPE_ARRAY {
        return tctx
            .types
            .get_type_pointer(tctx.ptr_size, ty.get_depend(0)?, tctx.word_size)
            .ok();
    }
    (ty.get_size() > 0 && !ty.is_incomplete() && ty.get_metatype() != type_metatype::TYPE_VOID)
        .then_some(ty)
}

/// Split a method encoding into its raw return and argument encodings, frame
/// offsets stripped: `v24@0:8{CGRect=dddd}16` → `("v", ["@", ":", "{CGRect=dddd}"])`.
/// `None` for an empty or unparseable encoding.
pub fn split_method(encoding: &str) -> Option<(String, Vec<String>)> {
    let mut p = Parser::new(encoding);
    let ret = p.next_type_text()?;
    let mut args = Vec::new();
    while !p.at_end() {
        args.push(p.next_type_text()?);
    }
    Some((ret, args))
}

/// The struct or union a by-value encoding spells (`{CGRect={CGPoint=dd}{CGSize=dd}}`,
/// `(Word=qf)`), built once per name with the layout the C compiler gives its
/// members: each at its natural alignment, a run of bit-fields as one unsigned
/// field over the bytes it packs into, a union's members all at offset zero. A
/// struct nested in a struct is laid out as one member and then listed as its
/// own fields (`x, y, width, height`), since a field of a field is what the
/// printer renders worst. A member named in the encoding (`"state"Q`) keeps that
/// name. An encoding with no name (`{?=qiIq}`) gets one made from its member
/// codes. `{Name}` with no layout, a layout that does not parse or one past the
/// bounds below is the incomplete record of that name: a pointer to it reads, a
/// value of it does not. `None` for a name some other kind of type already holds.
pub fn struct_type(encoding: &str, tctx: &TypeCtx) -> Option<Rc<Datatype>> {
    let union = encoding.starts_with('(');
    let body = if union {
        encoding.strip_prefix('(')?.strip_suffix(')')?
    } else {
        encoding.strip_prefix('{')?.strip_suffix('}')?
    };
    let (tag, members) = match body.split_once('=') {
        Some((tag, members)) => (tag, Some(members)),
        None => (body, None),
    };
    let name = if tag.is_empty() || tag == "?" {
        unnamed_record_name(members?, union)
    } else {
        tag.to_string()
    };
    if let Some(t) = tctx.structs.borrow().get(&name) {
        return Some(Rc::clone(t));
    }
    let types = tctx.types;
    let want = if union {
        type_metatype::TYPE_UNION
    } else {
        type_metatype::TYPE_STRUCT
    };
    let shell = match types.find_by_name(&name).ok().flatten() {
        Some(t) if t.get_metatype() != want => return None,
        Some(t) if !t.is_incomplete() => {
            tctx.structs.borrow_mut().insert(name, Rc::clone(&t));
            return Some(t);
        }
        Some(t) => t,
        None => types.unlace_declare_record(&name, union).ok()?,
    };
    let Some(members) = members else {
        return Some(shell);
    };
    let Some(_nested) = tctx.nest() else {
        return Some(shell);
    };
    if !tctx.unbuilt.borrow_mut().insert(name.clone()) {
        return Some(shell);
    }
    let Some((fields, size, align)) = record_layout(members, union, &name, tctx) else {
        return Some(shell);
    };
    let done = if union {
        types.set_fields_union_raw(&shell, fields, size, align)
    } else {
        types.set_fields_struct_raw(&shell, fields, Vec::new(), size, align, 0)
    };
    let Ok(done) = done else {
        return Some(shell);
    };
    tctx.unbuilt.borrow_mut().remove(&name);
    tctx.structs.borrow_mut().insert(name, Rc::clone(&done));
    Some(done)
}

/// The name of a record whose encoding gives none: its member codes when they
/// are a few plain letters (`{?=qiIq}` → `struct_qiIq`), else a hash of them,
/// so one layout is one type wherever it is spelled. Quoted member names are
/// not part of it: an ivar's spelling and a method's name the same record.
fn unnamed_record_name(members: &str, union: bool) -> String {
    let codes: String = members.split('"').step_by(2).collect();
    let kind = if union { "union" } else { "struct" };
    if !codes.is_empty() && codes.len() <= 12 && codes.bytes().all(|b| b.is_ascii_alphanumeric()) {
        return format!("{kind}_{codes}");
    }
    let hash = codes.bytes().fold(0xcbf2_9ce4_8422_2325u64, |h, b| {
        (h ^ u64::from(b)).wrapping_mul(0x0000_0100_0000_01b3)
    });
    format!("{kind}_{hash:016x}")
}

/// The fields, size and alignment of a record with the member encodings
/// `members`. `None` when a member does not decode, has no size, or the record
/// passes [`MAX_RECORD_SIZE`] or [`MAX_RECORD_FIELDS`].
fn record_layout(
    members: &str,
    union: bool,
    name: &str,
    tctx: &TypeCtx,
) -> Option<(Vec<TypeField>, i32, i32)> {
    let mut rec = Record {
        union,
        known: member_names(name),
        fields: Vec::new(),
        used: HashSet::new(),
        end: 0,
        size: 0,
        align: 1,
    };
    let mut bits = 0i32;
    let mut p = Parser::new(members);
    p.named = members.starts_with('"');
    loop {
        let quoted = p.member_name();
        if p.peek() == Some(b'b') {
            p.pos += 1;
            let digits = p.pos;
            p.skip_frame_offset();
            let width: i32 = members[digits..p.pos].parse().ok().filter(|w| *w <= 64)?;
            bits = bits.checked_add(width)?;
            continue;
        }
        if bits > 0 {
            rec.bit_run(bits, tctx)?;
            bits = 0;
        }
        if p.at_end() {
            break;
        }
        if members[p.pos..].starts_with("[0")
            && !members[p.pos + 2..].starts_with(|c: char| c.is_ascii_digit())
        {
            p.pos += 1;
            p.skip_balanced(b'[', b']');
            continue;
        }
        let flatten = !union && p.peek() == Some(b'{');
        let ty = p.next_type(tctx)?;
        rec.member(ty, quoted.as_deref(), flatten)?;
    }
    let size = rec.size.checked_add(rec.align - 1)? / rec.align * rec.align;
    (size > 0 && size <= MAX_RECORD_SIZE && !rec.fields.is_empty())
        .then_some((rec.fields, size, rec.align))
}

/// A record's layout while its members are placed.
struct Record {
    union: bool,
    known: &'static [&'static str],
    fields: Vec<TypeField>,
    used: HashSet<String>,
    end: i32,
    size: i32,
    align: i32,
}

impl Record {
    /// One field at `at`, named `label` when that is free, else by
    /// [`member_names`], else `field_<index>`.
    fn place(&mut self, ty: Rc<Datatype>, at: i32, label: Option<String>) -> Option<()> {
        let k = self.fields.len();
        if k >= MAX_RECORD_FIELDS {
            return None;
        }
        let label = label
            .filter(|l| !self.used.contains(l))
            .or_else(|| {
                self.known
                    .get(k)
                    .map(|n| n.to_string())
                    .filter(|l| !self.used.contains(l))
            })
            .unwrap_or_else(|| format!("field_{k}"));
        self.used.insert(label.clone());
        self.size = self.size.max(at.checked_add(ty.get_size())?);
        let (id, offset) = if self.union { (k as i32, 0) } else { (at, at) };
        self.fields.push(TypeField::new(id, offset, label, ty));
        (self.size <= MAX_RECORD_SIZE).then_some(())
    }

    /// A run of `bits` bits of bit-fields: one unsigned field over the bytes
    /// the run packs into, starting at the next free byte. The encoding drops a
    /// bit-field's declared type, so the run is taken as `unsigned int` units,
    /// `unsigned long long` once it passes 32 bits.
    fn bit_run(&mut self, bits: i32, tctx: &TypeCtx) -> Option<()> {
        let types = tctx.types;
        let bytes = (bits + 7) / 8;
        let ty = match bytes {
            1 | 2 | 4 | 8 => types.get_base(bytes, type_metatype::TYPE_UINT).ok()?,
            _ => types
                .get_type_array(bytes, types.get_base(1, type_metatype::TYPE_UINT).ok()?)
                .ok()?,
        };
        self.align = self
            .align
            .max(if bits > 32 { 8 } else { 4 }.min(tctx.ptr_size));
        self.place(ty, self.end, None)?;
        self.end = if self.union {
            0
        } else {
            self.end.checked_add(bytes)?
        };
        Some(())
    }

    /// One member at its natural alignment; with `flatten`, a struct member's
    /// own fields in its place, a name already taken prefixed with `quoted`.
    fn member(&mut self, ty: Rc<Datatype>, quoted: Option<&str>, flatten: bool) -> Option<()> {
        if ty.get_size() <= 0 || ty.is_incomplete() || ty.get_metatype() == type_metatype::TYPE_VOID
        {
            return None;
        }
        let a = ty.get_alignment().max(1);
        self.align = self.align.max(a);
        let at = if self.union {
            0
        } else {
            self.end.checked_add(a - 1)? / a * a
        };
        if flatten && ty.get_metatype() == type_metatype::TYPE_STRUCT {
            for i in 0..ty.num_depend() {
                let f = ty.get_field(i)?;
                let inner = Some(f.name.clone()).filter(|n| !n.starts_with("field_"));
                let label = match (&inner, quoted) {
                    (Some(n), Some(outer)) if self.used.contains(n) => Some(format!("{outer}_{n}")),
                    _ => inner,
                };
                self.place(Rc::clone(&f.field_type), at.checked_add(f.offset)?, label)?;
            }
        } else {
            self.place(Rc::clone(&ty), at, quoted.map(str::to_string))?;
        }
        let stop = at.checked_add(ty.get_size())?;
        self.size = self.size.max(stop);
        self.end = if self.union { 0 } else { stop };
        Some(())
    }
}

/// The name of a struct encoding (`CGRect` of `{CGRect=…}`), `None` when it
/// has none (`{?=dd}`).
pub fn struct_name(encoding: &str) -> Option<&str> {
    let body = encoding.strip_prefix('{')?.strip_suffix('}')?;
    let (name, _) = body.split_once('=')?;
    (!name.is_empty() && name != "?").then_some(name)
}

/// The leaf member encodings of a struct encoding, nested structs flattened:
/// `{CGRect={CGPoint=dd}{CGSize=dd}}` → `d d d d`. A pointer member is one
/// member whatever it points to (`{S=^{T=ii}q}` → `^{T=ii} q`). `None` for a
/// malformed layout or one nested deeper than [`MAX_STRUCT_DEPTH`].
pub fn struct_members(encoding: &str) -> Option<Vec<String>> {
    Some(
        struct_fields_at(encoding, 0)?
            .into_iter()
            .map(|(_, code)| code)
            .collect(),
    )
}

/// [`struct_members`] with the name each leaf member carries in the encoding
/// (`{S="count"q"items"^@}`), if any.
fn struct_fields_at(encoding: &str, level: usize) -> Option<Vec<(Option<String>, String)>> {
    if level > MAX_STRUCT_DEPTH {
        return None;
    }
    let body = encoding.strip_prefix('{')?.strip_suffix('}')?;
    let (_, members) = body.split_once('=')?;
    let mut out = Vec::new();
    let mut p = Parser::new(members);
    p.named = members.starts_with('"');
    while !p.at_end() {
        let name = p.member_name();
        if p.peek() == Some(b'{') {
            let start = p.pos;
            p.pos += 1;
            p.skip_balanced(b'{', b'}');
            out.extend(struct_fields_at(&members[start..p.pos], level + 1)?);
        } else {
            out.push((name, p.type_text()?));
        }
    }
    (!out.is_empty()).then_some(out)
}

/// The leaf member names of the CoreGraphics / Foundation geometry structs,
/// whose encodings carry none.
pub fn member_names(name: &str) -> &'static [&'static str] {
    match name {
        "CGPoint" => &["x", "y"],
        "CGSize" => &["width", "height"],
        "CGVector" => &["dx", "dy"],
        "CGRect" => &["x", "y", "width", "height"],
        "_NSRange" | "NSRange" => &["location", "length"],
        "UIOffset" => &["horizontal", "vertical"],
        "UIEdgeInsets" => &["top", "left", "bottom", "right"],
        "NSDirectionalEdgeInsets" => &["top", "leading", "bottom", "trailing"],
        "CGAffineTransform" => &["a", "b", "c", "d", "tx", "ty"],
        _ => &[],
    }
}

/// Decode a single ivar type encoding (the element's `@encode` string) into its
/// [`Datatype`]. Used for the `<Class>::ivar` typing (design §5 PR-O2). `None`
/// for an empty / unparseable encoding.
pub fn decode_ivar_type(encoding: &str, tctx: &TypeCtx) -> Option<Rc<Datatype>> {
    Parser::new(encoding)
        .next_type(tctx)
        .filter(|t| !t.is_incomplete())
}

/// The type-mapping context a method or ivar encoding is decoded against: the
/// architecture's [`TypeFactory`] plus its pointer size / word size
/// (`data_org`), and a cache of the named opaque pointer types the decoder
/// hands out (`objc_object *`, `objc_selector *`, `NSString *`). The factory
/// finds a type by name with a linear scan of every type it holds, and an
/// image with thousands of classes asks for `objc_object *` once per method
/// argument, so the cache is what keeps the walk linear in the metadata.
pub struct TypeCtx<'a> {
    pub types: &'a dyn TypeFactory,
    pub ptr_size: i32,
    pub word_size: u32,
    opaque: RefCell<HashMap<String, Rc<Datatype>>>,
    /// The by-value records [`struct_type`] built, by name.
    structs: RefCell<HashMap<String, Rc<Datatype>>>,
    /// The records being built, and those whose layout was refused.
    unbuilt: RefCell<HashSet<String>>,
    /// How many records and arrays deep the decoder is.
    depth: Cell<usize>,
}

/// One level of record or array nesting, left when dropped.
struct Nest<'a>(&'a Cell<usize>);

impl Drop for Nest<'_> {
    fn drop(&mut self) {
        self.0.set(self.0.get() - 1);
    }
}

impl<'a> TypeCtx<'a> {
    pub fn new(types: &'a dyn TypeFactory, ptr_size: i32, word_size: u32) -> TypeCtx<'a> {
        TypeCtx {
            types,
            ptr_size,
            word_size,
            opaque: RefCell::new(HashMap::new()),
            structs: RefCell::new(HashMap::new()),
            unbuilt: RefCell::new(HashSet::new()),
            depth: Cell::new(0),
        }
    }

    /// Enter one more record or array, `None` past [`MAX_STRUCT_DEPTH`].
    fn nest(&self) -> Option<Nest<'_>> {
        if self.depth.get() >= MAX_STRUCT_DEPTH {
            return None;
        }
        self.depth.set(self.depth.get() + 1);
        Some(Nest(&self.depth))
    }

    /// A pointer to the named struct (`objc_object*` for `id`, `objc_class*` for
    /// `Class`, `objc_selector*` for `SEL`, `Foo*` for `@"Foo"`, a Swift class
    /// under its shown name): the struct of that name when one exists, else a declared record so a pointer built
    /// before the class's layout lands (`unlace_objcivars`) reads the completion
    /// afterwards; a plain `void*` if the record cannot be created (the name
    /// already belongs to a type that is not a struct).
    pub(super) fn opaque_ptr(&self, struct_name: &str) -> Option<Rc<Datatype>> {
        if let Some(t) = self.opaque.borrow().get(struct_name) {
            return Some(Rc::clone(t));
        }
        let shown = super::display_class_name(struct_name);
        let pointee = self
            .types
            .find_by_name(&shown)
            .ok()
            .flatten()
            .filter(|t| t.get_metatype() == type_metatype::TYPE_STRUCT)
            .or_else(|| self.types.unlace_declare_record(&shown, false).ok())
            .or_else(|| self.types.get_type_void().ok())?;
        let ptr = self
            .types
            .get_type_pointer(self.ptr_size, pointee, self.word_size)
            .ok()?;
        self.opaque
            .borrow_mut()
            .insert(struct_name.to_string(), Rc::clone(&ptr));
        Some(ptr)
    }
}

/// A cursor over an ObjC type-encoding string. `next_type` consumes one type code
/// (skipping protocol qualifiers and the trailing decimal frame offset).
struct Parser<'a> {
    bytes: &'a [u8],
    pos: usize,
    /// Pointer nesting (`^^^…`) entered so far; a hostile depth is refused.
    depth: usize,
    /// Reading struct members that carry `"name"`s.
    named: bool,
}

/// The deepest `^` nesting decoded; a real encoding is two or three deep.
const MAX_POINTER_DEPTH: usize = 32;

/// The deepest record and array nesting built; `CGRect` is two deep.
const MAX_STRUCT_DEPTH: usize = 32;

/// The largest record built, in bytes, and the most fields one holds.
const MAX_RECORD_SIZE: i32 = 1 << 20;
const MAX_RECORD_FIELDS: usize = 1 << 12;

impl<'a> Parser<'a> {
    fn new(s: &'a str) -> Parser<'a> {
        Parser {
            bytes: s.as_bytes(),
            pos: 0,
            depth: 0,
            named: false,
        }
    }

    /// At (or past) the end of the encoding.
    fn at_end(&self) -> bool {
        self.pos >= self.bytes.len()
    }

    fn peek(&self) -> Option<u8> {
        self.bytes.get(self.pos).copied()
    }

    /// Skip the ObjC method-encoding protocol qualifiers + GC markers that may
    /// prefix a type code (`r`const `n`in `N`inout `o`out `O`bycopy `R`byref
    /// `V`oneway, `!` GC-invisible).
    fn skip_qualifiers(&mut self) {
        while let Some(c) = self.peek() {
            if matches!(c, b'r' | b'n' | b'N' | b'o' | b'O' | b'R' | b'V' | b'!') {
                self.pos += 1;
            } else {
                break;
            }
        }
    }

    /// The `"Name"` an ivar encoding appends to `@` (`@"NSString"`, also
    /// `@"<Proto>"` for a protocol-qualified `id`, which names no class),
    /// consumed when present. Among named struct members (`"a"@"next"Q`) a
    /// quoted string is the class only when another name or the end follows it.
    fn quoted_class_name(&mut self) -> Option<String> {
        if self.peek()? != b'"' {
            return None;
        }
        let rest = &self.bytes[self.pos + 1..];
        let end = rest.iter().position(|&b| b == b'"')?;
        if self.named && rest.get(end + 1).is_some_and(|&b| b != b'"') {
            return None;
        }
        let name = std::str::from_utf8(&rest[..end]).ok()?;
        self.pos += end + 2;
        let class = name.split('<').next().unwrap_or("");
        (!class.is_empty()
            && class
                .bytes()
                .all(|b| b.is_ascii_alphanumeric() || b == b'_' || b == b'$'))
        .then(|| class.to_string())
    }

    /// The `"name"` a struct member's encoding may carry before its type
    /// (`{S="count"q}`), consumed when present.
    fn member_name(&mut self) -> Option<String> {
        if self.peek()? != b'"' {
            return None;
        }
        let rest = &self.bytes[self.pos + 1..];
        let end = rest.iter().position(|&b| b == b'"')?;
        let name = std::str::from_utf8(&rest[..end]).ok()?.to_string();
        self.pos += end + 2;
        (!name.is_empty() && name.bytes().all(|b| b.is_ascii_alphanumeric() || b == b'_'))
            .then_some(name)
    }

    /// Skip the decimal frame-offset digits trailing a type code in a *method*
    /// encoding (`i16` → skip `16`). An ivar/standalone encoding has no trailing
    /// number, so this is a no-op there.
    fn skip_frame_offset(&mut self) {
        while let Some(c) = self.peek() {
            if c.is_ascii_digit() {
                self.pos += 1;
            } else {
                break;
            }
        }
    }

    /// Consume one type code and map it to a [`Datatype`]. Returns `None` at the
    /// end of the string or on an unparseable code.
    fn next_type(&mut self, tctx: &TypeCtx) -> Option<Rc<Datatype>> {
        let (types, ptr_size, word_size) = (tctx.types, tctx.ptr_size, tctx.word_size);
        self.skip_qualifiers();
        let c = self.peek()?;
        self.pos += 1;

        let ty = match c {
            // --- primitive scalar codes (Apple `Type Encodings` table) ---
            b'c' => types.get_type_char(1).ok()?, // char / BOOL (signed)
            b'C' => types.get_base(1, type_metatype::TYPE_UINT).ok()?, // unsigned char
            b's' => types.get_base(2, type_metatype::TYPE_INT).ok()?, // short
            b'S' => types.get_base(2, type_metatype::TYPE_UINT).ok()?, // unsigned short
            b'i' => types.get_base(4, type_metatype::TYPE_INT).ok()?, // int
            b'I' => types.get_base(4, type_metatype::TYPE_UINT).ok()?, // unsigned int
            b'l' => types.get_base(4, type_metatype::TYPE_INT).ok()?, // long (32-bit ABI int)
            b'L' => types.get_base(4, type_metatype::TYPE_UINT).ok()?,
            b'q' => types.get_base(8, type_metatype::TYPE_INT).ok()?, // long long / 64-bit long
            b'Q' => types.get_base(8, type_metatype::TYPE_UINT).ok()?,
            b'f' => types.get_base(4, type_metatype::TYPE_FLOAT).ok()?, // float
            b'd' => types.get_base(8, type_metatype::TYPE_FLOAT).ok()?, // double
            b'B' => types.get_base(1, type_metatype::TYPE_BOOL).ok()?,  // C99 _Bool
            b'v' => types.get_type_void().ok()?,                        // void
            // `*` = char* (a C string).
            b'*' => {
                let ch = types.get_type_char(1).ok()?;
                types.get_type_pointer(ptr_size, ch, word_size).ok()?
            }
            // `@` = id (object pointer) → an opaque `objc_object*`; an ivar's
            // `@"NSString"` names the class, so the pointee is that opaque type;
            // `@?` is a block, modelled as `void*`.
            b'@' => {
                if self.peek() == Some(b'?') {
                    self.pos += 1;
                    let v = types.get_type_void().ok()?;
                    types.get_type_pointer(ptr_size, v, word_size).ok()?
                } else {
                    match self.quoted_class_name() {
                        Some(class) => tctx.opaque_ptr(&class)?,
                        None => tctx.opaque_ptr("objc_object")?,
                    }
                }
            }
            // `#` = Class → an opaque `objc_class*`.
            b'#' => tctx.opaque_ptr("objc_class")?,
            // `:` = SEL → an opaque `objc_selector*`.
            b':' => tctx.opaque_ptr("objc_selector")?,
            // `^T` = pointer to T: decode the pointee, a named struct with its
            // layout (`^{S=Q^@}`) included; void* on an opaque/unparseable pointee.
            b'^' => {
                self.depth += 1;
                if self.depth > MAX_POINTER_DEPTH {
                    return None;
                }
                let pointee = if self.peek() == Some(b'{') {
                    let start = self.pos;
                    self.pos += 1;
                    self.skip_balanced(b'{', b'}');
                    let text = std::str::from_utf8(&self.bytes[start..self.pos]).ok()?;
                    struct_type(text, tctx)
                } else {
                    self.next_type(tctx)
                };
                if self.depth > MAX_POINTER_DEPTH {
                    return None;
                }
                self.depth -= 1;
                let pointee = pointee.or_else(|| types.get_type_void().ok())?;
                types.get_type_pointer(ptr_size, pointee, word_size).ok()?
            }
            // `{name=...}` struct, `(name=...)` union: the record the encoding
            // spells; one that names nothing buildable stays an opaque void.
            b'{' | b'(' => {
                let start = self.pos - 1;
                self.skip_balanced(c, if c == b'{' { b'}' } else { b')' });
                let text = std::str::from_utf8(&self.bytes[start..self.pos]).ok()?;
                struct_type(text, tctx).or_else(|| types.get_type_void().ok())?
            }
            // `[<n><type>]`: an array of n elements.
            b'[' => {
                let start = self.pos;
                self.skip_balanced(b'[', b']');
                if self.pos == start || self.bytes[self.pos - 1] != b']' {
                    return None;
                }
                let inner = std::str::from_utf8(&self.bytes[start..self.pos - 1]).ok()?;
                let digits = inner.bytes().take_while(u8::is_ascii_digit).count();
                let count: i32 = inner[..digits].parse().ok()?;
                let _nested = tctx.nest()?;
                let elem = Parser::new(&inner[digits..]).next_type(tctx)?;
                if count <= 0
                    || elem.get_size() <= 0
                    || count
                        .checked_mul(elem.get_size())
                        .is_none_or(|n| n > 1 << 20)
                {
                    return None;
                }
                types.get_type_array(count, elem).ok()?
            }
            b'b' => {
                // bitfield `b<width>`: consume the width digits, model as uint.
                self.skip_frame_offset();
                types.get_base(4, type_metatype::TYPE_UINT).ok()?
            }
            // `?` = unknown (e.g. a function pointer / block); model as void*.
            b'?' => {
                let v = types.get_type_void().ok()?;
                types.get_type_pointer(ptr_size, v, word_size).ok()?
            }
            // Anything else: unparseable — stop.
            _ => return None,
        };

        // Consume the trailing decimal frame offset a *method* encoding appends.
        self.skip_frame_offset();
        Some(ty)
    }

    /// Advance over one type encoding without building a type, returning its
    /// text with the frame offset stripped (`{CGRect=dddd}` for a struct by
    /// value, `@"UIView"` for a class pointer). `None` at the end or on an
    /// unknown code.
    fn next_type_text(&mut self) -> Option<String> {
        let text = self.type_text()?;
        self.skip_frame_offset();
        Some(text)
    }

    /// One type encoding's text, the frame offset left in place.
    fn type_text(&mut self) -> Option<String> {
        self.skip_qualifiers();
        let start = self.pos;
        let c = self.peek()?;
        self.pos += 1;
        match c {
            b'^' => {
                self.depth += 1;
                if self.depth > MAX_POINTER_DEPTH {
                    return None;
                }
                self.type_text()?;
                self.depth -= 1;
            }
            b'{' => self.skip_balanced(b'{', b'}'),
            b'(' => self.skip_balanced(b'(', b')'),
            b'[' => self.skip_balanced(b'[', b']'),
            b'b' => self.skip_frame_offset(),
            b'@' => {
                if self.quoted_class_name().is_none() && self.peek() == Some(b'?') {
                    self.pos += 1;
                }
            }
            b'c' | b'C' | b's' | b'S' | b'i' | b'I' | b'l' | b'L' | b'q' | b'Q' | b'f' | b'd'
            | b'B' | b'v' | b'*' | b'#' | b':' | b'?' => {}
            _ => return None,
        }
        Some(
            std::str::from_utf8(&self.bytes[start..self.pos])
                .ok()?
                .to_string(),
        )
    }

    /// Skip a balanced `open`…`close` run (for `{...}` / `(...)` / `[...]`),
    /// honoring nesting. Leaves `pos` just past the closing delimiter.
    fn skip_balanced(&mut self, open: u8, close: u8) {
        let mut depth = 1usize;
        while let Some(c) = self.peek() {
            self.pos += 1;
            if c == open {
                depth += 1;
            } else if c == close {
                depth -= 1;
                if depth == 0 {
                    return;
                }
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_decomp::dtype::TypeFactoryImpl;

    /// A configured [`TypeFactory`] (the dtype-test recipe + the core-type cache):
    /// default alignment map, max base size 8, a 64-bit `setup_sizes`, and the
    /// cached core types (`char`/`void`/`code`) — enough for every
    /// `get_base`/`get_type_char`/`get_type_void`/`get_type_pointer` path. The
    /// encoding decoder is arch-neutral, so an 8-byte-pointer factory suffices
    /// (pointer width is passed explicitly via `ptr_size`).
    fn factory() -> TypeFactoryImpl {
        let f = TypeFactoryImpl::new();
        f.set_default_alignment_map();
        f.set_max_basetype_size(8);
        // 64-bit sizes (sp=8 ⇒ int=4, long=8, ptr=8) + the core-type cache so
        // get_type_char / get_type_void resolve.
        f.setup_sizes(Some(8), 8, 4);
        let _ = f.cache_core_types();
        f
    }

    /// `-(int)greet:(int)n` → `i20@0:8i16`: return `int`, then `id self`,
    /// `SEL _cmd`, `int n` (the implicit receiver/selector + the one real arg).
    #[test]
    fn decode_greet_method() {
        let f = factory();
        let (ptr, ws): (i32, u32) = (8, 1);
        let p = decode_method(
            "-[Greeter greet:]",
            "i20@0:8i16",
            &TypeCtx::new(&f, ptr, ws),
            None,
        )
        .expect("the greet: encoding decodes");
        assert_eq!(p.name, "-[Greeter greet:]");
        assert_eq!(p.intypes.len(), 3, "self + _cmd + n");
        assert_eq!(p.innames, vec!["self", "_cmd", "arg1"]);
        // Return is a 4-byte int.
        assert_eq!(p.outtype.as_ref().unwrap().get_size(), 4);
        // self/_cmd are pointer-sized (id/SEL); n is a 4-byte int.
        assert_eq!(p.intypes[0].get_size(), ptr, "id self is a pointer");
        assert_eq!(p.intypes[1].get_size(), ptr, "SEL _cmd is a pointer");
        assert_eq!(p.intypes[2].get_size(), 4, "int n");
    }

    /// `-(void)set:(double)` style `v` return + a `d` double arg; and the
    /// frame-offset digits are consumed (not mis-parsed as a type).
    #[test]
    fn decode_void_return_double_arg() {
        let f = factory();
        let (ptr, ws): (i32, u32) = (8, 1);
        let p = decode_method("-[C set:]", "v24@0:8d16", &TypeCtx::new(&f, ptr, ws), None).unwrap();
        assert_eq!(
            p.outtype.as_ref().unwrap().get_size(),
            0,
            "void is the size-0 void type"
        );
        assert_eq!(p.intypes.len(), 3);
        assert_eq!(p.intypes[2].get_size(), 8, "double arg");
    }

    /// An ivar encoding (no trailing frame offset): `q` → a signed 8-byte int.
    #[test]
    fn decode_ivar_long() {
        let f = factory();
        let ty = decode_ivar_type("q", &TypeCtx::new(&f, 8, 1)).unwrap();
        assert_eq!(ty.get_size(), 8);
    }

    /// `^i` (int*) and `^v` (void*) decode to pointer-sized types. (The char-cache
    /// the `*` char* path needs is populated by the real `Architecture` bootstrap,
    /// not by this minimal test factory, so the char* case is covered by the
    /// end-to-end console test rather than here.)
    #[test]
    fn decode_pointers() {
        let f = factory();
        assert_eq!(
            decode_ivar_type("^i", &TypeCtx::new(&f, 8, 1))
                .unwrap()
                .get_size(),
            8,
            "int*"
        );
        assert_eq!(
            decode_ivar_type("^v", &TypeCtx::new(&f, 8, 1))
                .unwrap()
                .get_size(),
            8,
            "void*"
        );
    }

    /// An empty / garbage encoding yields `None` — the IMP keeps its name, only the
    /// typed prototype is dropped.
    #[test]
    fn empty_encoding_is_none() {
        let f = factory();
        assert!(decode_method("-[C x]", "", &TypeCtx::new(&f, 8, 1), None).is_none());
        assert!(decode_ivar_type("", &TypeCtx::new(&f, 8, 1)).is_none());
    }

    /// An ivar's `@"NSString"` names its class: the pointee is the opaque struct
    /// `NSString`, and a protocol-qualified `@"<Proto>"` falls back to `objc_object`.
    #[test]
    fn decode_ivar_quoted_class() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let t = decode_ivar_type("@\"NSString\"", &tctx).unwrap();
        assert_eq!(t.get_metatype(), type_metatype::TYPE_PTR);
        assert_eq!(t.get_ptr_to().unwrap().get_name(), "NSString");
        let t = decode_ivar_type("@\"<Greeter>\"", &tctx).unwrap();
        assert_eq!(t.get_ptr_to().unwrap().get_name(), "objc_object");
    }

    /// A class name another kind of type already holds is not that class:
    /// `@"Foo"` beside an enum `Foo` is a `void *`, never a pointer to the enum.
    #[test]
    fn a_same_named_non_struct_is_not_the_class() {
        let f = factory();
        f.get_type_enum("Foo").unwrap();
        let t = decode_ivar_type("@\"Foo\"", &TypeCtx::new(&f, 8, 1)).unwrap();
        assert_eq!(
            t.get_ptr_to().unwrap().get_metatype(),
            type_metatype::TYPE_VOID
        );
    }

    /// A block (`@?`) is one pointer, and pointer nesting is bounded.
    #[test]
    fn blocks_are_one_type_and_nesting_is_bounded() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let p = decode_method("-[C a:]", "v24@0:8@?16", &tctx, None).unwrap();
        assert_eq!(
            p.intypes.len(),
            3,
            "the block is one argument, not `@` then `?`"
        );
        let deep = format!("{}i", "^".repeat(MAX_POINTER_DEPTH + 1));
        assert!(decode_ivar_type(&deep, &tctx).is_none());
        assert!(decode_ivar_type("^^i", &tctx).is_some());
    }

    /// A struct by value is the struct the encoding spells; an array is an array.
    #[test]
    fn by_value_aggregates_are_types() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let t = decode_ivar_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap();
        assert_eq!(t.get_name(), "CGRect");
        assert_eq!(t.get_size(), 32);
        let leaves = struct_fields_at("{Pair=\"lo\"{Half=\"a\"i\"b\"i}\"hi\"q}", 0).unwrap();
        assert_eq!(
            leaves,
            vec![
                (Some("a".into()), "i".into()),
                (Some("b".into()), "i".into()),
                (Some("hi".into()), "q".into())
            ]
        );
        assert_eq!(
            struct_members(
                "{CGRect=\"origin\"{CGPoint=\"x\"d\"y\"d}\"size\"{CGSize=\"width\"d\"height\"d}}"
            )
            .unwrap(),
            vec!["d".to_string(); 4]
        );
        let a = decode_ivar_type("[4i]", &tctx).unwrap();
        assert_eq!(a.get_metatype(), type_metatype::TYPE_ARRAY);
        assert_eq!(a.get_size(), 16);
        let p = decode_method("-[C setFrame:]", "v48@0:8{CGRect=dddd}16", &tctx, None).unwrap();
        assert_eq!(p.intypes[2].get_name(), "CGRect");
        assert!(decode_ivar_type("[0i]", &tctx).is_none());
        assert!(
            decode_ivar_type("[", &tctx).is_none(),
            "an unterminated array"
        );
        assert!(decode_ivar_type("[4", &tctx).is_none());
    }

    #[test]
    fn split_method_keeps_struct_and_class_text() {
        let (ret, args) = split_method("v40@0:8{CGRect=dddd}16@\"UIView\"32^v40@?48").unwrap();
        assert_eq!(ret, "v");
        assert_eq!(args, ["@", ":", "{CGRect=dddd}", "@\"UIView\"", "^v", "@?"]);
        assert!(split_method("").is_none());
        assert!(split_method("v@:!").is_none());
    }

    /// A binary-controlled encoding a million `^` or `{` deep is refused at
    /// the depth caps instead of recursing once per level; a real depth parses.
    #[test]
    fn hostile_nesting_is_refused_not_recursed() {
        let n = 1_000_000;
        assert!(split_method(&format!("v@:{}i", "^".repeat(n))).is_none());
        assert_eq!(split_method("^^^i16@0:8").unwrap().0, "^^^i");
        let nested = format!("{}i{}", "{S=".repeat(n), "}".repeat(n));
        assert_eq!(struct_members(&nested), None);
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        assert!(decode_method("-[C a:]", &format!("v@:{nested}"), &tctx, None).is_none());
        let arrays = format!("{}i{}", "[1".repeat(n), "]".repeat(n));
        assert!(decode_ivar_type(&arrays, &tctx).is_none());
        let wide = format!("{{Wide={}}}", "q".repeat(MAX_RECORD_FIELDS + 1));
        assert!(decode_ivar_type(&wide, &tctx).is_none());
        assert!(decode_ivar_type("{Big=[65536[65536q]]}", &tctx).is_none());
        assert!(
            split_method(&format!("v@:{nested}")).is_some(),
            "a by-value struct is skipped linearly"
        );
        let deep = format!("{}d{}", "{S=".repeat(8), "}".repeat(8));
        assert_eq!(struct_members(&deep), Some(vec!["d".to_string()]));
    }

    #[test]
    fn struct_type_builds_nested_geometry() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let rect = struct_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap();
        assert_eq!((rect.get_name(), rect.get_size()), ("CGRect", 32));
        assert_eq!(
            struct_members("{CGRect={CGPoint=dd}{CGSize=dd}}"),
            Some(vec!["d".to_string(); 4])
        );
        assert_eq!(struct_members("{CGRect=dd"), None);
        let range = struct_type("{_NSRange=QQ}", &tctx).unwrap();
        assert_eq!(range.get_size(), 16);
        assert!(Rc::ptr_eq(
            &rect,
            &struct_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap()
        ));
    }

    /// A pointer member is one field the size of a pointer, not its pointee's
    /// codes laid out as further members.
    #[test]
    fn a_pointer_member_is_one_pointer_field() {
        assert_eq!(struct_members("{S=^i}"), Some(vec!["^i".to_string()]));
        assert_eq!(
            struct_members("{S=^{T=ii}q@\"NSString\"}"),
            Some(vec![
                "^{T=ii}".to_string(),
                "q".to_string(),
                "@\"NSString\"".to_string()
            ])
        );
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let s = struct_type("{PtrPair=^ii}", &tctx).unwrap();
        assert_eq!(s.get_size(), 16);
        let first = s.get_field(0).unwrap();
        assert_eq!(first.field_type.get_metatype(), type_metatype::TYPE_PTR);
        assert_eq!(s.get_field(1).unwrap().offset, 8);
        assert!(s.get_field(2).is_none());
    }

    /// A pointer to a named struct layout is a pointer to that struct, with
    /// the member names the encoding carries and `[N T]` members as arrays; a
    /// quoted string after `@` is a class only when another name follows it.
    #[test]
    fn a_pointer_to_a_struct_layout_points_to_the_struct() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let ptr = decode_ivar_type(
            "^{State=\"state\"Q\"items\"^@\"owner\"@\"Bag\"\"mutations\"^Q\"extra\"[5Q]}",
            &tctx,
        )
        .unwrap();
        let s = ptr.get_ptr_to().unwrap();
        assert_eq!((s.get_name(), s.get_size()), ("State", 72));
        let fields: Vec<(String, i32, i32)> = (0..5)
            .map(|k| s.get_field(k).unwrap())
            .map(|f| (f.name.clone(), f.offset, f.field_type.get_size()))
            .collect();
        assert_eq!(
            fields,
            [
                ("state", 0, 8),
                ("items", 8, 8),
                ("owner", 16, 8),
                ("mutations", 24, 8),
                ("extra", 32, 40)
            ]
            .map(|(n, o, z)| (n.to_string(), o, z))
        );
        assert_eq!(
            s.get_field(4).unwrap().field_type.get_metatype(),
            type_metatype::TYPE_ARRAY
        );
        assert_eq!(
            s.get_field(1).unwrap().field_type.get_metatype(),
            type_metatype::TYPE_PTR
        );
        let anonymous = decode_ivar_type("^{?=QQ}", &tctx).unwrap();
        assert_eq!(anonymous.get_ptr_to().unwrap().get_name(), "struct_QQ");
        let opaque = decode_ivar_type("^{__Opaque=}", &tctx).unwrap();
        let pointee = opaque.get_ptr_to().unwrap();
        assert_eq!(
            (pointee.get_name(), pointee.is_incomplete()),
            ("__Opaque", true),
            "an empty layout is the incomplete record"
        );
    }

    /// Members sit at their C offsets: a nested struct is padded to its own
    /// alignment before the next member, and a struct of 4-byte members is not
    /// padded to a pointer.
    #[test]
    fn struct_layout_follows_c_alignment() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let outer = decode_ivar_type("^{Outer={Inner=iC}Ci}", &tctx)
            .unwrap()
            .get_ptr_to()
            .unwrap();
        let offsets: Vec<i32> = (0..4).map(|k| outer.get_field(k).unwrap().offset).collect();
        assert_eq!((offsets, outer.get_size()), (vec![0, 4, 8, 12], 16));
        assert_eq!(struct_type("{Tri=iii}", &tctx).unwrap().get_size(), 12);
        assert_eq!(struct_type("{Three=CCC}", &tctx).unwrap().get_size(), 3);
        assert_eq!(
            struct_type("{Tagged=Cd}", &tctx)
                .unwrap()
                .get_field(1)
                .unwrap()
                .offset,
            8
        );
        let rect = struct_type("{CGRect={CGPoint=dd}{CGSize=dd}}", &tctx).unwrap();
        assert_eq!(
            (rect.get_size(), rect.get_field(3).unwrap().offset),
            (32, 24)
        );
        let packed = decode_ivar_type("^{Packed=b8b4b20[8S]}", &tctx).unwrap();
        assert_eq!(
            packed.get_ptr_to().unwrap().get_size(),
            20,
            "a 32-bit run of bit-fields is one 4-byte field"
        );
    }

    /// A struct reached through a chain of pointers deeper than the cap stops
    /// at a `void *` instead of recursing.
    #[test]
    fn a_hostile_pointer_chain_is_cut() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let mut enc = "Q".to_string();
        for k in 0..200 {
            enc = format!("^{{S{k}=\"p\"{enc}}}");
        }
        assert!(decode_ivar_type(&enc, &tctx).is_some());
        let nested = format!("{}Q{}", "[1".repeat(10_000), "]".repeat(10_000));
        assert!(decode_ivar_type(&format!("{{Deep=\"a\"{nested}}}"), &tctx).is_none());
    }

    fn layout(t: &Datatype) -> Vec<(i32, String, i32)> {
        (0..t.num_depend())
            .map(|i| t.get_field(i).unwrap())
            .map(|f| (f.offset, f.name.clone(), f.field_type.get_size()))
            .collect()
    }

    /// Members sit at their natural alignment, a nested struct as a unit, and
    /// the record is padded to its own.
    #[test]
    fn records_follow_the_c_layout() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let s = decode_ivar_type("{Outer=C{Inner=Cq}C}", &tctx).unwrap();
        assert_eq!((s.get_size(), s.get_alignment()), (32, 8));
        assert_eq!(
            layout(&s).iter().map(|f| f.0).collect::<Vec<_>>(),
            [0, 8, 16, 24]
        );
        let m = decode_ivar_type("{Mixed=i[4d]C}", &tctx).unwrap();
        assert_eq!(m.get_size(), 48);
        assert_eq!(
            layout(&m),
            [
                (0, "field_0".into(), 4),
                (8, "field_1".into(), 32),
                (40, "field_2".into(), 1)
            ]
        );
        let c = decode_ivar_type("{Chars=[16C]i}", &tctx).unwrap();
        assert_eq!((c.get_size(), c.get_alignment()), (20, 4));
        let z = decode_ivar_type("{Tail=q[0C]C}", &tctx).unwrap();
        assert_eq!(layout(&z).iter().map(|f| f.0).collect::<Vec<_>>(), [0, 8]);
    }

    /// A union's members share offset zero; a run of bit-fields is one field.
    #[test]
    fn unions_and_bit_fields_are_laid_out() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let u = decode_ivar_type("(Word=qf)", &tctx).unwrap();
        assert_eq!(
            (u.get_metatype(), u.get_size()),
            (type_metatype::TYPE_UNION, 8)
        );
        assert_eq!(
            layout(&u),
            [(0, "field_0".into(), 8), (0, "field_1".into(), 4)]
        );
        let b = decode_ivar_type("{Flags=b3b5S}", &tctx).unwrap();
        assert_eq!(b.get_size(), 4);
        assert_eq!(
            layout(&b),
            [(0, "field_0".into(), 1), (2, "field_1".into(), 2)]
        );
        let w = decode_ivar_type("{?=(?={?=b1b1b1b1b1b32b1b1b1}Q)}", &tctx).unwrap();
        assert_eq!(w.get_size(), 8);
        let l = decode_ivar_type("{Long=^vQb63b1}", &tctx).unwrap();
        assert_eq!(l.get_size(), 24);
        let p = decode_method("-[C word:]", "q24@0:8(Word=qf)16", &tctx, None).unwrap();
        assert_eq!(p.intypes[2].get_name(), "Word");
    }

    /// A record with no name is one type per layout, whatever names an ivar
    /// quotes; a flattened name that repeats takes its member's name.
    #[test]
    fn unnamed_records_are_named_by_their_members() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let t = decode_ivar_type("{?=qiIq}", &tctx).unwrap();
        assert_eq!((t.get_name(), t.get_size()), ("struct_qiIq", 24));
        let quoted =
            decode_ivar_type("{?=\"value\"q\"timescale\"i\"flags\"I\"epoch\"q}", &tctx).unwrap();
        assert!(Rc::ptr_eq(&t, &quoted));
        let range = decode_ivar_type(
            "{?=\"start\"{Stamp=\"value\"q\"scale\"i}\"duration\"{Stamp=\"value\"q\"scale\"i}}",
            &tctx,
        )
        .unwrap();
        let names: Vec<String> = layout(&range).into_iter().map(|f| f.1).collect();
        assert_eq!(
            names,
            ["value", "scale", "duration_value", "duration_scale"]
        );
        assert_eq!(range.get_size(), 32);
        assert!(range.get_name().starts_with("struct_"));
        assert_eq!(
            decode_ivar_type("(?=dq)", &tctx).unwrap().get_name(),
            "union_dq"
        );
    }

    /// `{Name}` spells no layout: a pointer to it reads, a value of it does
    /// not, and neither does a record holding itself or an empty one.
    #[test]
    fn a_record_without_a_layout_is_not_a_value() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let p = decode_ivar_type("^{Opaque}", &tctx).unwrap();
        assert_eq!(p.get_ptr_to().unwrap().get_name(), "Opaque");
        assert!(decode_ivar_type("{Opaque}", &tctx).is_none());
        assert!(decode_method("-[C a:]", "v24@0:8{Opaque}16", &tctx, None).is_none());
        assert!(decode_method("-[C a]", "{Opaque}16@0:8", &tctx, None).is_none());
        assert!(decode_ivar_type("{Self={Self=i}}", &tctx).is_none());
        assert!(decode_ivar_type("{Empty=}", &tctx).is_none());
        assert!(decode_ivar_type("(?=)", &tctx).is_none());
        assert!(decode_ivar_type("{?=[4]}", &tctx).is_none());
        let node = decode_ivar_type("{Node=q^{Node}}", &tctx).unwrap();
        assert_eq!(node.get_size(), 16);
        assert!(Rc::ptr_eq(
            &node.get_field(1).unwrap().field_type.get_ptr_to().unwrap(),
            &node
        ));
    }

    /// An array argument is the pointer C passes.
    #[test]
    fn an_array_argument_is_a_pointer() {
        let f = factory();
        let tctx = TypeCtx::new(&f, 8, 1);
        let p = decode_method("-[C fill:]", "v24@0:8[10Q]16", &tctx, None).unwrap();
        assert_eq!(p.intypes[2].get_metatype(), type_metatype::TYPE_PTR);
        assert_eq!(p.intypes[2].get_ptr_to().unwrap().get_size(), 8);
    }
}
