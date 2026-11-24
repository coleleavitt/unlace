//! (unlace `pdbtypes`) The PDB type stream (TPI) mapped onto unlace datatypes.
//!
//! The unlace analog of Ghidra's `PdbApplicator` type half
//! (`CompositeTypeApplier`, `EnumTypeApplier`, `PointerTypeApplier`, `ArrayTypeApplier`, `ProcedureTypeApplier`, `MemberFunctionTypeApplier`).
//! Each CodeView leaf becomes the type the DWARF mapper would build for the same
//! declaration: primitives by width and sign, pointers (references included) at
//! the record's own width, `const`/`volatile` modifiers transparent, arrays
//! flattened to their element, structures, classes and unions with their member
//! offsets taken verbatim, enumerations with their constants, and procedure and
//! member-function types as function types.
//!
//! A forward reference resolves to the definition with the same unique name (the
//! TPI stream keeps one of each), so a pointer to `struct Rect` declared before the
//! structure is complete still reaches its layout. A self-referential aggregate
//! is declared before its members are walked, and a pointer built to the
//! declaration reads the completed record. A class contributes its
//! base classes as `super_<Base>` members and its virtual-function-table pointer
//! as a `__vftable` member at offset 0. A structure's bitfields keep their bit
//! positions; members that overlap an earlier one, members past the stated size
//! and a union's bitfields are left out. A leaf the
//! mapper does not understand maps to nothing, and the caller skips whatever
//! needed it. Every walk is bounded by [`MAX_DEPTH`].

use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;

use pdb::FallibleIterator;
use unlace_base::types::{int4, uint4};
use unlace_decomp::dtype::{Datatype, TypeBitField, TypeFactory, TypeField, type_metatype};
use unlace_decomp::fspec::PrototypePieces;

/// Nesting bound for one type resolution.
const MAX_DEPTH: u32 = 64;

/// Bound on the continuation chain of one field list.
const MAX_FIELD_LISTS: u32 = 64;

/// A procedure type's prototype and the CodeView calling convention it states.
pub(crate) struct ProcType {
    pub pieces: PrototypePieces,
    pub calling_convention: u8,
    /// `true` for a member function with a `this` pointer, which is then the
    /// first of [`PrototypePieces::intypes`].
    pub has_this: bool,
}

/// Resolves TPI type indices to unlace datatypes, memoized per index.
pub(crate) struct TpiMapper<'t, 'f> {
    finder: pdb::TypeFinder<'t>,
    types: &'f dyn TypeFactory,
    word_size: uint4,
    definitions: BTreeMap<Vec<u8>, pdb::TypeIndex>,
    by_name: BTreeMap<String, pdb::TypeIndex>,
    built: BTreeMap<u32, Option<Rc<Datatype>>>,
    active: BTreeSet<u32>,
    shells: BTreeMap<u32, Rc<Datatype>>,
    depth: u32,
}

impl<'t, 'f> TpiMapper<'t, 'f> {
    /// Index every record of `info` and note each complete aggregate's
    /// definition under its unique name.
    pub(crate) fn new(
        info: &'t pdb::TypeInformation<'_>,
        types: &'f dyn TypeFactory,
        word_size: uint4,
    ) -> Self {
        let mut finder = info.finder();
        let mut definitions = BTreeMap::new();
        let mut by_name = BTreeMap::new();
        let mut iter = info.iter();
        while let Ok(Some(item)) = iter.next() {
            finder.update(&iter);
            let Ok(data) = item.parse() else {
                continue;
            };
            let (forward, name, unique) = match &data {
                pdb::TypeData::Class(c) => {
                    (c.properties.forward_reference(), c.name, c.unique_name)
                }
                pdb::TypeData::Union(u) => {
                    (u.properties.forward_reference(), u.name, u.unique_name)
                }
                pdb::TypeData::Enumeration(e) => {
                    (e.properties.forward_reference(), e.name, e.unique_name)
                }
                _ => continue,
            };
            if forward {
                continue;
            }
            definitions
                .entry(unique.unwrap_or(name).as_bytes().to_vec())
                .or_insert(item.index());
            by_name
                .entry(name.to_string().into_owned())
                .or_insert(item.index());
        }
        TpiMapper {
            finder,
            types,
            word_size,
            definitions,
            by_name,
            built: BTreeMap::new(),
            active: BTreeSet::new(),
            shells: BTreeMap::new(),
            depth: 0,
        }
    }

    /// The type factory the mapper interns into.
    pub(crate) fn factory(&self) -> &'f dyn TypeFactory {
        self.types
    }

    /// The datatype for `index`, or `None` when it cannot be built.
    pub(crate) fn map(&mut self, index: pdb::TypeIndex) -> Option<Rc<Datatype>> {
        if let Some(done) = self.built.get(&index.0) {
            return done.clone();
        }
        if self.active.contains(&index.0) {
            let def = self.definition_of(index).unwrap_or(index);
            return self.shells.get(&def.0).cloned();
        }
        if self.depth >= MAX_DEPTH {
            return None;
        }
        self.active.insert(index.0);
        self.depth += 1;
        let out = self.map_uncached(index);
        self.depth -= 1;
        self.active.remove(&index.0);
        self.built.insert(index.0, out.clone());
        out
    }

    fn parse(&self, index: pdb::TypeIndex) -> Option<pdb::TypeData<'t>> {
        self.finder.find(index).ok()?.parse().ok()
    }

    fn map_uncached(&mut self, index: pdb::TypeIndex) -> Option<Rc<Datatype>> {
        match self.parse(index)? {
            pdb::TypeData::Primitive(p) => self.primitive(p),
            pdb::TypeData::Pointer(p) => self.pointer(&p),
            pdb::TypeData::Modifier(m) => self.map(m.underlying_type),
            pdb::TypeData::Bitfield(b) => self.map(b.underlying_type),
            pdb::TypeData::Array(a) => self.array(&a),
            pdb::TypeData::Class(c) => self.aggregate(
                index,
                c.name,
                c.unique_name,
                c.properties.forward_reference(),
                c.size,
                c.fields,
                false,
            ),
            pdb::TypeData::Union(u) => self.aggregate(
                index,
                u.name,
                u.unique_name,
                u.properties.forward_reference(),
                u.size,
                Some(u.fields),
                true,
            ),
            pdb::TypeData::Enumeration(e) => self.enumeration(index, &e),
            pdb::TypeData::Procedure(_) | pdb::TypeData::MemberFunction(_) => {
                let proc = self.procedure(index)?;
                self.types.get_type_code_proto(&proc.pieces).ok()
            }
            _ => None,
        }
    }

    fn base(&self, size: int4, meta: type_metatype) -> Option<Rc<Datatype>> {
        self.types.get_base(size, meta).ok()
    }

    fn primitive(&mut self, p: pdb::PrimitiveType) -> Option<Rc<Datatype>> {
        use pdb::PrimitiveKind as K;
        use type_metatype::{TYPE_BOOL, TYPE_FLOAT, TYPE_INT, TYPE_UINT};
        let t = self.types;
        let base = match p.kind {
            K::NoType | K::Void => t.get_type_void().ok(),
            K::Char | K::RChar => t.get_type_char(1).ok(),
            K::UChar => t.get_type_char_signed("unsigned char", TYPE_UINT).ok(),
            K::WChar | K::RChar16 => t.get_type_char(2).ok(),
            K::RChar32 => t.get_type_char(4).ok(),
            K::I8 => self.base(1, TYPE_INT),
            K::U8 => self.base(1, TYPE_UINT),
            K::Short | K::I16 => self.base(2, TYPE_INT),
            K::UShort | K::U16 => self.base(2, TYPE_UINT),
            K::Long | K::I32 | K::HRESULT => self.base(4, TYPE_INT),
            K::ULong | K::U32 => self.base(4, TYPE_UINT),
            K::Quad | K::I64 => self.base(8, TYPE_INT),
            K::UQuad | K::U64 => self.base(8, TYPE_UINT),
            K::Octa | K::I128 => self.base(16, TYPE_INT),
            K::UOcta | K::U128 => self.base(16, TYPE_UINT),
            K::F16 => self.base(2, TYPE_FLOAT),
            K::F32 | K::F32PP => self.base(4, TYPE_FLOAT),
            K::F64 => self.base(8, TYPE_FLOAT),
            K::F80 => self.base(10, TYPE_FLOAT),
            K::F128 => self.base(16, TYPE_FLOAT),
            K::Bool8 => self.base(1, TYPE_BOOL),
            K::Bool16 => self.base(2, TYPE_BOOL),
            K::Bool32 => self.base(4, TYPE_BOOL),
            K::Bool64 => self.base(8, TYPE_BOOL),
            _ => None,
        };
        let Some(indirection) = p.indirection else {
            return base;
        };
        let size = match indirection {
            pdb::Indirection::Near32 | pdb::Indirection::Far32 => 4,
            pdb::Indirection::Near64 => 8,
            _ => return None,
        };
        let pointee = base.or_else(|| t.get_type_void().ok())?;
        t.get_type_pointer(size, pointee, self.word_size).ok()
    }

    fn pointer(&mut self, p: &pdb::PointerType) -> Option<Rc<Datatype>> {
        let size = match p.attributes.size() {
            0 => self.types.get_size_of_pointer(),
            s => int4::from(s),
        };
        if p.attributes.pointer_to_member() {
            return self.base(size, type_metatype::TYPE_UNKNOWN);
        }
        let pointee = self
            .map(p.underlying_type)
            .or_else(|| self.types.get_type_void().ok())?;
        self.types
            .get_type_pointer(size, pointee, self.word_size)
            .ok()
    }

    fn array(&mut self, a: &pdb::ArrayType) -> Option<Rc<Datatype>> {
        let elem = self.map(a.element_type)?;
        let elem_size = u64::try_from(elem.get_size()).ok().filter(|&s| s > 0)?;
        let total = u64::from(*a.dimensions.iter().max()?);
        let count = int4::try_from(total / elem_size).ok().filter(|&c| c > 0)?;
        self.types.get_type_array(count, elem).ok()
    }

    /// A display name for an aggregate or enumeration; the compiler's
    /// placeholders for an anonymous one get a name of their own.
    fn type_name(name: pdb::RawString<'_>, index: pdb::TypeIndex, kind: &str) -> String {
        let text = name.to_string();
        let anonymous = text.is_empty()
            || text.contains("<unnamed-")
            || text.contains("<anonymous-")
            || text.contains("__unnamed");
        if anonymous {
            format!("anon_{kind}_{:x}", index.0)
        } else {
            text.into_owned()
        }
    }

    #[allow(clippy::too_many_arguments)]
    fn aggregate(
        &mut self,
        index: pdb::TypeIndex,
        name: pdb::RawString<'t>,
        unique: Option<pdb::RawString<'t>>,
        forward: bool,
        size: u64,
        fields: Option<pdb::TypeIndex>,
        union: bool,
    ) -> Option<Rc<Datatype>> {
        let want = if union {
            type_metatype::TYPE_UNION
        } else {
            type_metatype::TYPE_STRUCT
        };
        if forward {
            let key = unique.unwrap_or(name);
            if let Some(&def) = self.definitions.get(key.as_bytes()) {
                if def != index {
                    return self.map(def);
                }
            }
        }
        let mut text = Self::type_name(name, index, if union { "union" } else { "struct" });
        let existing = match self.types.find_by_name(&text) {
            Ok(Some(t)) if t.get_metatype() == want => Some(t),
            Ok(Some(_)) => {
                text = format!("{text}_{:x}", index.0);
                match self.types.find_by_name(&text) {
                    Ok(Some(t)) if t.get_metatype() == want => Some(t),
                    Ok(None) => None,
                    _ => return None,
                }
            }
            Ok(None) => None,
            Err(_) => return None,
        };
        if let Some(t) = &existing {
            if !t.is_incomplete() {
                return Some(Rc::clone(t));
            }
        }
        let shell = match existing {
            Some(t) => t,
            None => {
                // A declared record: a pointer built to the shell while the
                // members are walked (a self-reference, or the same structure
                // reached first through a global) reads the completed layout.
                let built = self.types.unlace_declare_record(&text, union);
                built.ok().filter(|t| t.get_metatype() == want)?
            }
        };
        let size = int4::try_from(size).ok().filter(|&s| s > 0);
        let (Some(size), false) = (size, forward) else {
            return Some(shell);
        };
        self.shells.insert(index.0, Rc::clone(&shell));
        let (members, bits) = self.members(fields, size, union);
        self.shells.remove(&index.0);
        let align = alignment(size, &members, &bits);
        let done = if union {
            self.types
                .set_fields_union_raw(&shell, members, size, align)
        } else {
            let extra = if bits.is_empty() {
                0
            } else {
                unlace_decomp::dtype::flags::has_bitfields
            };
            self.types
                .set_fields_struct_raw(&shell, members, bits, size, align, extra)
        };
        Some(done.unwrap_or(shell))
    }

    /// The members of a field list (and its continuations) that fit the
    /// aggregate: sorted by offset, inside `size`, and for a structure not
    /// overlapping the member before them; and a structure's bitfields, each in
    /// the smallest byte span that covers it (PE images are little-endian).
    fn members(
        &mut self,
        fields: Option<pdb::TypeIndex>,
        size: int4,
        union: bool,
    ) -> (Vec<TypeField>, Vec<TypeBitField>) {
        let mut raw: Vec<(int4, String, Rc<Datatype>)> = Vec::new();
        let mut bits: Vec<TypeBitField> = Vec::new();
        let mut next = fields;
        let mut hops = 0;
        while let Some(list) = next {
            hops += 1;
            if hops > MAX_FIELD_LISTS {
                break;
            }
            let Some(pdb::TypeData::FieldList(list)) = self.parse(list) else {
                break;
            };
            for field in &list.fields {
                match field {
                    pdb::TypeData::Member(m) => {
                        if let Some(pdb::TypeData::Bitfield(b)) = self.parse(m.field_type) {
                            if !union {
                                let name = m.name.to_string().into_owned();
                                bits.extend(self.bitfield(m.offset, &b, size, name));
                            }
                            continue;
                        }
                        let (Ok(offset), Some(t)) =
                            (int4::try_from(m.offset), self.map(m.field_type))
                        else {
                            continue;
                        };
                        raw.push((offset, m.name.to_string().into_owned(), t));
                    }
                    pdb::TypeData::BaseClass(b) => {
                        let (Ok(offset), Some(t)) =
                            (int4::try_from(b.offset), self.map(b.base_class))
                        else {
                            continue;
                        };
                        raw.push((offset, format!("super_{}", short_name(t.get_name())), t));
                    }
                    pdb::TypeData::VirtualFunctionTablePointer(_) => {
                        if let Some(t) = self.vftable_pointer() {
                            raw.push((0, "__vftable".to_string(), t));
                        }
                    }
                    _ => {}
                }
            }
            next = list.continuation;
        }
        raw.sort_by_key(|(offset, _, _)| *offset);
        let mut out = Vec::new();
        let mut end: int4 = 0;
        for (offset, name, t) in raw {
            let fsize = t.get_size();
            let Some(fend) = offset.checked_add(fsize) else {
                continue;
            };
            if fsize <= 0 || offset < 0 || fend > size || (!union && offset < end) {
                continue;
            }
            end = end.max(fend);
            let ident = out.len() as int4;
            out.push(TypeField::new(ident, offset, name, t));
        }
        for (i, b) in bits.iter_mut().enumerate() {
            b.ident = (out.len() + i) as int4;
        }
        (out, bits)
    }

    /// The bitfield a member at byte `offset` of LF_BITFIELD `b` declares, when it
    /// lies inside the structure.
    fn bitfield(
        &mut self,
        offset: u64,
        b: &pdb::BitfieldType,
        size: int4,
        name: String,
    ) -> Option<TypeBitField> {
        let t = self.map(b.underlying_type)?;
        let num_bits = int4::from(b.length);
        let start = i64::try_from(offset)
            .ok()?
            .checked_mul(8)?
            .checked_add(i64::from(b.position))?;
        let byte_offset = int4::try_from(start / 8).ok()?;
        let least_sig_bit = (start % 8) as int4;
        let byte_size = (least_sig_bit + num_bits + 7) / 8;
        if num_bits <= 0 || byte_offset.checked_add(byte_size)? > size {
            return None;
        }
        let mut field = TypeBitField::new(0, num_bits, false, name, t);
        field.byte_offset = byte_offset;
        field.byte_size = byte_size;
        field.least_sig_bit = least_sig_bit;
        Some(field)
    }

    /// `void (**)()` at the target's pointer width: a pointer to the table of
    /// code pointers.
    pub(crate) fn vftable_pointer(&self) -> Option<Rc<Datatype>> {
        let ptr = self.types.get_size_of_pointer();
        let slot = self.code_pointer()?;
        self.types.get_type_pointer(ptr, slot, self.word_size).ok()
    }

    /// A pointer to code at the target's pointer width.
    pub(crate) fn code_pointer(&self) -> Option<Rc<Datatype>> {
        let ptr = self.types.get_size_of_pointer();
        let code = self.types.get_type_code().ok()?;
        self.types.get_type_pointer(ptr, code, self.word_size).ok()
    }

    fn enumeration(
        &mut self,
        index: pdb::TypeIndex,
        e: &pdb::EnumerationType<'t>,
    ) -> Option<Rc<Datatype>> {
        if e.properties.forward_reference() {
            let key = e.unique_name.unwrap_or(e.name);
            if let Some(&def) = self.definitions.get(key.as_bytes()) {
                if def != index {
                    return self.map(def);
                }
            }
        }
        let under = self.map(e.underlying_type)?;
        let size = under.get_size();
        if !(1..=8).contains(&size) {
            return Some(under);
        }
        let mask: u64 = if size >= 8 {
            u64::MAX
        } else {
            (1u64 << (size * 8)) - 1
        };
        let mut nmap: BTreeMap<u64, String> = BTreeMap::new();
        if let Some(pdb::TypeData::FieldList(list)) = self.parse(e.fields) {
            for field in &list.fields {
                if let pdb::TypeData::Enumerate(c) = field {
                    let name = c.name.to_string();
                    if !name.is_empty() {
                        nmap.entry(variant_bits(&c.value) & mask)
                            .or_insert_with(|| name.into_owned());
                    }
                }
            }
        }
        if nmap.is_empty() {
            return Some(under);
        }
        let name = Self::type_name(e.name, index, "enum");
        if let Ok(Some(existing)) = self.types.find_by_name(&name) {
            return Some(if existing.is_enum_type() && existing.get_size() == size {
                existing
            } else {
                under
            });
        }
        let meta = if under.get_metatype() == type_metatype::TYPE_INT {
            type_metatype::TYPE_ENUM_INT
        } else {
            type_metatype::TYPE_ENUM_UINT
        };
        let Ok(ct) = self.types.get_type_enum_sized(&name, size, meta) else {
            return Some(under);
        };
        Some(self.types.set_enum_values(&ct, nmap).unwrap_or(under))
    }

    /// The prototype a procedure or member-function type states, with every
    /// parameter name empty. A trailing `...` marks the prototype variadic.
    pub(crate) fn procedure(&mut self, index: pdb::TypeIndex) -> Option<ProcType> {
        let (ret, this, args, cc) = match self.parse(index)? {
            pdb::TypeData::Procedure(p) => (
                p.return_type,
                None,
                p.argument_list,
                p.attributes.calling_convention(),
            ),
            pdb::TypeData::MemberFunction(m) => (
                Some(m.return_type),
                m.this_pointer_type,
                m.argument_list,
                m.attributes.calling_convention(),
            ),
            _ => return None,
        };
        let outtype = match ret {
            Some(r) => self.map(r)?,
            None => self.types.get_type_void().ok()?,
        };
        let mut intypes = Vec::new();
        let has_this = this.is_some();
        if let Some(this) = this {
            intypes.push(self.map(this)?);
        }
        let mut first_var_arg_slot: int4 = -1;
        let arguments = match self.parse(args)? {
            pdb::TypeData::ArgumentList(list) => list.arguments,
            _ => return None,
        };
        for (i, arg) in arguments.iter().enumerate() {
            if arg.0 == 0 && i + 1 == arguments.len() {
                // A lone `T_NOTYPE` is MSVC's `int f()` in C: no parameters
                // stated, not a variadic one.
                if i > 0 {
                    first_var_arg_slot = intypes.len() as int4;
                }
                break;
            }
            let t = self.map(*arg)?;
            if t.get_metatype() == type_metatype::TYPE_VOID {
                return None;
            }
            intypes.push(t);
        }
        let innames = vec![String::new(); intypes.len()];
        Some(ProcType {
            pieces: PrototypePieces {
                name: String::new(),
                outtype: Some(outtype),
                intypes,
                innames,
                first_var_arg_slot,
                output_storage: None,
                input_storage: Vec::new(),
                unlace_library_names: None,
            },
            calling_convention: cc,
            has_this,
        })
    }

    /// How many slots the virtual function table of the class named `name` has:
    /// one past the highest slot any virtual it introduces, or its primary base
    /// introduces, occupies. `None` when the class is unknown or has no
    /// virtuals.
    pub(crate) fn vftable_slots(&mut self, name: &str) -> Option<u32> {
        let index = *self.by_name.get(name)?;
        let ptr = u32::try_from(self.types.get_size_of_pointer())
            .ok()
            .filter(|&p| p > 0)?;
        let mut best: Option<u32> = None;
        let mut current = Some(index);
        let mut hops = 0;
        while let Some(class) = current.take() {
            hops += 1;
            if hops > MAX_DEPTH {
                break;
            }
            let Some(pdb::TypeData::Class(c)) = self.parse(class) else {
                break;
            };
            let mut next = c.fields;
            let mut lists = 0;
            while let Some(list) = next {
                lists += 1;
                if lists > MAX_FIELD_LISTS {
                    break;
                }
                let Some(pdb::TypeData::FieldList(list)) = self.parse(list) else {
                    break;
                };
                for field in &list.fields {
                    match field {
                        pdb::TypeData::Method(m) => {
                            if let Some(off) = m.vtable_offset {
                                best = best.max(Some(off / ptr + 1));
                            }
                        }
                        pdb::TypeData::OverloadedMethod(o) => {
                            if let Some(pdb::TypeData::MethodList(ml)) = self.parse(o.method_list) {
                                for m in &ml.methods {
                                    if let Some(off) = m.vtable_offset {
                                        best = best.max(Some(off / ptr + 1));
                                    }
                                }
                            }
                        }
                        pdb::TypeData::BaseClass(b) if b.offset == 0 && current.is_none() => {
                            current = self.resolve_definition(b.base_class);
                        }
                        _ => {}
                    }
                }
                next = list.continuation;
            }
        }
        best
    }

    /// The definition a forward-referenced class, union or enumeration names.
    fn definition_of(&self, index: pdb::TypeIndex) -> Option<pdb::TypeIndex> {
        let (name, unique) = match self.parse(index)? {
            pdb::TypeData::Class(c) if c.properties.forward_reference() => (c.name, c.unique_name),
            pdb::TypeData::Union(u) if u.properties.forward_reference() => (u.name, u.unique_name),
            pdb::TypeData::Enumeration(e) if e.properties.forward_reference() => {
                (e.name, e.unique_name)
            }
            _ => return None,
        };
        self.definitions
            .get(unique.unwrap_or(name).as_bytes())
            .copied()
    }

    /// A class type index with its forward reference resolved.
    fn resolve_definition(&self, index: pdb::TypeIndex) -> Option<pdb::TypeIndex> {
        match self.parse(index)? {
            pdb::TypeData::Class(c) if c.properties.forward_reference() => self
                .definitions
                .get(c.unique_name.unwrap_or(c.name).as_bytes())
                .copied(),
            pdb::TypeData::Class(_) => Some(index),
            _ => None,
        }
    }
}

/// A class name's last component as an identifier: `std::_String_alloc<std::
/// _String_base_types<wchar_t,std::allocator<wchar_t> > >` is `_String_alloc`.
/// Template arguments are dropped (a `::` inside them is not a scope) and any
/// other character that cannot appear in an identifier becomes `_`.
fn short_name(name: &str) -> String {
    let mut depth = 0usize;
    let mut start = 0usize;
    let bytes = name.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        match bytes[i] {
            b'<' => depth += 1,
            b'>' => depth = depth.saturating_sub(1),
            b':' if depth == 0 && bytes.get(i + 1) == Some(&b':') => {
                start = i + 2;
                i += 1;
            }
            _ => {}
        }
        i += 1;
    }
    let last = &name[start.min(name.len())..];
    let base = last.split('<').next().unwrap_or(last);
    base.chars()
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '_' {
                c
            } else {
                '_'
            }
        })
        .collect()
}

/// The aggregate's alignment: the widest member alignment, as a power of two no
/// wider than the aggregate.
fn alignment(size: int4, fields: &[TypeField], bits: &[TypeBitField]) -> int4 {
    let derived = fields
        .iter()
        .map(|f| f.field_type.get_alignment())
        .chain(bits.iter().map(|b| b.field_type.get_alignment()))
        .max()
        .unwrap_or(1)
        .max(1);
    let mut a = 1;
    while a * 2 <= derived && a * 2 <= size {
        a *= 2;
    }
    a
}

/// An enumerator's value as the bits a constant of its type carries.
fn variant_bits(v: &pdb::Variant) -> u64 {
    match *v {
        pdb::Variant::U8(x) => u64::from(x),
        pdb::Variant::U16(x) => u64::from(x),
        pdb::Variant::U32(x) => u64::from(x),
        pdb::Variant::U64(x) => x,
        pdb::Variant::I8(x) => x as i64 as u64,
        pdb::Variant::I16(x) => x as i64 as u64,
        pdb::Variant::I32(x) => x as i64 as u64,
        pdb::Variant::I64(x) => x as u64,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_decomp::dtype::TypeFactoryImpl;

    fn factory() -> TypeFactoryImpl {
        let types = TypeFactoryImpl::new();
        types.set_default_alignment_map();
        types.set_max_basetype_size(8);
        types.setup_sizes(Some(8), 8, 4);
        let _ = types.cache_core_types();
        types
    }

    fn fields(t: &Datatype) -> Vec<(int4, String)> {
        (0..t.num_depend())
            .filter_map(|i| t.get_field(i))
            .map(|f| (f.offset, f.name.clone()))
            .collect()
    }

    fn open(name: &str) -> pdb::PDB<'static, std::fs::File> {
        let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
        let file = std::fs::File::open(path).expect("open the fixture pdb");
        pdb::PDB::open(file).expect("parse the fixture pdb")
    }

    /// The structure behind a forward reference gets its layout, members in
    /// order and at the compiler's offsets, including a pointer to itself.
    #[test]
    fn forward_reference_resolves_to_the_layout() {
        let types = factory();
        let mut pdb = open("pdb_types_x86_64.pdb");
        let info = pdb.type_information().expect("TPI stream");
        let mut tpi = TpiMapper::new(&info, &types, 8);
        // 0x1002 is the forward reference to geo::Rect (llvm-pdbutil dump --types).
        let rect = tpi.map(pdb::TypeIndex(0x1002)).expect("geo::Rect maps");
        assert_eq!(rect.get_name(), "geo::Rect");
        assert_eq!(rect.get_size(), 32);
        assert_eq!(
            fields(&rect),
            [
                (0, "origin".to_string()),
                (8, "extent".to_string()),
                (16, "color".to_string()),
                (20, "tag".to_string()),
                (24, "next".to_string()),
            ]
        );
    }

    /// An enumeration keeps its constants, and a union both its members.
    #[test]
    fn enum_and_union() {
        let types = factory();
        let mut pdb = open("pdb_types_x86_64.pdb");
        let info = pdb.type_information().expect("TPI stream");
        let mut tpi = TpiMapper::new(&info, &types, 8);
        let color = tpi.map(pdb::TypeIndex(0x1008)).expect("geo::Color maps");
        assert!(color.is_enum_type());
        assert_eq!(color.get_size(), 4);
        let word = tpi.map(pdb::TypeIndex(0x1009)).expect("geo::Word maps");
        assert_eq!(word.get_metatype(), type_metatype::TYPE_UNION);
        assert_eq!(word.get_size(), 4);
        assert_eq!(fields(&word).len(), 2);
    }

    /// A class with virtuals gets its table pointer at offset 0 and a derived
    /// class its base as a member; the table has one slot per introduced virtual.
    #[test]
    fn classes_carry_their_vftable() {
        let types = factory();
        let mut pdb = open("pdb_types_x86_64.pdb");
        let info = pdb.type_information().expect("TPI stream");
        let mut tpi = TpiMapper::new(&info, &types, 8);
        let shape = tpi.map(pdb::TypeIndex(0x101B)).expect("geo::Shape maps");
        let names: Vec<String> = fields(&shape).into_iter().map(|(_, n)| n).collect();
        assert_eq!(names, ["__vftable", "id"]);
        let square = tpi.map(pdb::TypeIndex(0x1016)).expect("geo::Square maps");
        let names: Vec<String> = fields(&square).into_iter().map(|(_, n)| n).collect();
        assert_eq!(names, ["super_Shape", "side"]);
        assert_eq!(tpi.vftable_slots("geo::Shape"), Some(2));
        assert_eq!(tpi.vftable_slots("geo::Square"), Some(2));
    }

    /// A structure's bitfields keep their bit positions in the smallest byte span
    /// covering each, and its plain members stay fields.
    #[test]
    fn bitfields_keep_their_bits() {
        let types = factory();
        let mut pdb = open("pdb_bitfields.pdb");
        let info = pdb.type_information().expect("TPI stream");
        let mut tpi = TpiMapper::new(&info, &types, 8);
        // 0x1006 is the field list of `Flags` (llvm-pdbutil dump --types).
        let (plain, bits) = tpi.members(Some(pdb::TypeIndex(0x1006)), 12, false);
        let plain: Vec<(int4, String)> = plain.iter().map(|f| (f.offset, f.name.clone())).collect();
        assert_eq!(plain, [(8, "d".to_string())]);
        let bits: Vec<(String, int4, int4, int4, int4)> = bits
            .iter()
            .map(|b| {
                (
                    b.name.clone(),
                    b.byte_offset,
                    b.byte_size,
                    b.least_sig_bit,
                    b.num_bits,
                )
            })
            .collect();
        assert_eq!(
            bits,
            [
                ("a".to_string(), 0, 1, 0, 3),
                ("b".to_string(), 0, 1, 3, 5),
                ("c".to_string(), 4, 2, 0, 9),
            ]
        );
        let flags = tpi.map(pdb::TypeIndex(0x1002)).expect("Flags maps");
        assert_eq!(flags.get_size(), 12);
    }

    #[test]
    fn base_class_member_names() {
        assert_eq!(short_name("geo::Shape"), "Shape");
        assert_eq!(
            short_name(
                "std::_String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t> > >"
            ),
            "_String_alloc"
        );
        assert_eq!(short_name("ns::Outer<int>::Inner"), "Inner");
        assert_eq!(short_name("operator<"), "operator");
    }

    /// A member function's prototype leads with its `this` pointer.
    #[test]
    fn member_function_prototype_has_this() {
        let types = factory();
        let mut pdb = open("pdb_types_x86_64.pdb");
        let info = pdb.type_information().expect("TPI stream");
        let mut tpi = TpiMapper::new(&info, &types, 8);
        let area = tpi.procedure(pdb::TypeIndex(0x101F)).expect("Square::area");
        assert!(area.has_this);
        assert_eq!(area.pieces.intypes.len(), 1);
        let rect_area = tpi.procedure(pdb::TypeIndex(0x1005)).expect("rect_area");
        assert!(!rect_area.has_this);
        assert_eq!(rect_area.pieces.intypes.len(), 2);
        assert_eq!(rect_area.pieces.first_var_arg_slot, -1);
    }
}
