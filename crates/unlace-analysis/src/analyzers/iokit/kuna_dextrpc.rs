//! (kuna `dextrpc`) DriverKit IORPC dispatch types for a dext.
//!
//! An iig-generated class `C` dispatches every remote call it implements
//! through `static kern_return_t C::_Dispatch(C *self, const IORPC rpc)`: it
//! reads the message id with `IORPCMessageFromMach(rpc.message, false)->msgid`
//! and hands the matching one to `M_Invoke(rpc, self, M_Impl)`, falling back to
//! the superclass's `_Dispatch`; `C::Dispatch(const IORPC rpc)` and
//! `CMetaClass::Dispatch` wrap it. An `IORPC` is 24 bytes, so AAPCS64 passes it
//! by reference to a caller copy. The symbols the dext exports and imports name
//! these functions exactly (`_ZN<n>C9_DispatchEPS_5IORPC`,
//! `_ZN<n>C8DispatchE5IORPC`, `_ZN<n>X<m>M_InvokeE5IORPCP15OSMetaClassBasePF...`),
//! so each gets its prototype by address, with `IORPC`, `IORPCMessage` and an
//! `IORPCMessageID` enum built from the public `IORPC.h` layout.
//!
//! The enum's values come from the class descriptions: an `OSClassDescription`
//! lists the message id of every method the class implements in its
//! method-options table (the n ids, then n option words) and the names in the
//! same order in its method-names table (length-prefixed), and likewise for the
//! meta methods. The value `id` of method `M` of class `C` is `C_M_ID`; an id
//! two classes list keeps the first name.
//!
//! Each class becomes a struct `C` of its `instanceSize`: every iig class adds
//! one `C_IVars *ivars` pointer after its superclass, so `ivars` sits at
//! `instanceSize - 8`, behind the superclass's struct as field `super` when the
//! superclass is a class of the same dext whose size leaves room for it (else
//! the bytes before `ivars` stay untyped). `init`, `free` and every `M_Impl`
//! of a class are instance methods, so their `x0` gets an unlocked `C *this`
//! hint. arm64 images only.

use std::collections::{BTreeMap, HashMap};
use std::rc::Rc;

use object::Architecture;
use object::read::{Object, ObjectSymbol};

use unlace_decomp::dtype::{Datatype, TypeFactory, TypeField, type_metatype};
use unlace_decomp::fspec::PrototypePieces;

use super::osclassinfo::DextClass;
use crate::objc::sections::MachoImage;
use crate::pass::{AnalysisCtx, AnalysisOutput, InputHintFact};

const TABLES: usize = 4 + 2 * 96;
const IVARS: i32 = 8;
const MAX_INSTANCE: i32 = 1 << 24;
const MAX_SUPER_DEPTH: usize = 64;

/// One remote method a class description lists.
#[derive(Debug, PartialEq, Eq)]
pub struct RpcMethod {
    pub name: String,
    pub msgid: u64,
}

/// What an IORPC symbol is, by its mangled name (one leading `_` removed).
#[derive(Debug, PartialEq, Eq)]
pub enum RpcSymbol<'a> {
    /// `static kern_return_t C::_Dispatch(C *self, const IORPC rpc)`.
    StaticDispatch(&'a str),
    /// `kern_return_t C::Dispatch(const IORPC rpc)`.
    Dispatch(&'a str),
    /// `kern_return_t X::M_Invoke(const IORPC rpc, OSMetaClassBase *target,
    /// handler func[, const OSMetaClass *targetActionClass])`, by parameter count.
    Invoke(usize),
    /// An instance method of `C`: `init`, `free` or an `M_Impl`.
    Member(&'a str),
}

/// A `<length><identifier>` source name at the start of `s`, and the rest.
fn source_name(s: &str) -> Option<(&str, &str)> {
    let digits = s.bytes().take_while(u8::is_ascii_digit).count();
    if digits == 0 || digits > 4 {
        return None;
    }
    let len: usize = s[..digits].parse().ok()?;
    let rest = &s[digits..];
    if len == 0 || rest.len() < len || !rest.is_char_boundary(len) {
        return None;
    }
    Some((&rest[..len], &rest[len..]))
}

/// Classify a symbol name (`_ZN...`, one leading underscore removed).
pub fn classify(name: &str) -> Option<RpcSymbol<'_>> {
    let (class, rest) = source_name(name.strip_prefix("_ZN")?)?;
    match rest {
        "9_DispatchEPS_5IORPC" => return Some(RpcSymbol::StaticDispatch(class)),
        "8DispatchE5IORPC" => return Some(RpcSymbol::Dispatch(class)),
        "4initEv" | "4freeEv" => return Some(RpcSymbol::Member(class)),
        _ => {}
    }
    let (method, sig) = source_name(rest)?;
    if method.ends_with("_Invoke") {
        let params = sig.strip_prefix("E5IORPCP15OSMetaClassBasePF")?;
        return if params.ends_with("EPK11OSMetaClass") {
            Some(RpcSymbol::Invoke(4))
        } else if params.ends_with('E') {
            Some(RpcSymbol::Invoke(3))
        } else {
            None
        };
    }
    (method.ends_with("_Impl") && sig.starts_with('E') && !sig.contains("_block_invoke"))
        .then_some(RpcSymbol::Member(class))
}

fn is_identifier(s: &str) -> bool {
    s.chars()
        .next()
        .is_some_and(|c| c.is_ascii_alphabetic() || c == '_')
        && s.chars().all(|c| c.is_ascii_alphanumeric() || c == '_')
}

fn word(desc: &[u8], at: usize) -> Option<usize> {
    let b = desc.get(at..at.checked_add(4)?)?;
    Some(u32::from_le_bytes(b.try_into().ok()?) as usize)
}

/// The `(size, offset)` table whose size word is at `at`.
fn region(desc: &[u8], at: usize) -> Option<&[u8]> {
    let size = word(desc, at)?;
    let off = word(desc, at.checked_add(4)?)?;
    desc.get(off..off.checked_add(size)?)
}

fn pascal_names(raw: &[u8]) -> Option<Vec<String>> {
    let mut names = Vec::new();
    let mut at = 0usize;
    while let Some(&len) = raw.get(at) {
        if len == 0 {
            break;
        }
        let start = at + 1;
        let s = std::str::from_utf8(raw.get(start..start + len as usize)?).ok()?;
        if !is_identifier(s) {
            return None;
        }
        names.push(s.to_string());
        at = start + len as usize;
    }
    Some(names)
}

fn table(desc: &[u8], options_at: usize, names_at: usize) -> Option<Vec<RpcMethod>> {
    let options = region(desc, options_at)?;
    if options.len() % 16 != 0 {
        return None;
    }
    let names = pascal_names(region(desc, names_at)?)?;
    if names.len() != options.len() / 16 {
        return None;
    }
    let mut out = Vec::with_capacity(names.len());
    for (i, name) in names.into_iter().enumerate() {
        let id = options.get(8 * i..8 * i + 8)?;
        out.push(RpcMethod {
            name,
            msgid: u64::from_le_bytes(id.try_into().ok()?),
        });
    }
    Some(out)
}

/// The methods and meta methods an `OSClassDescription` (its whole
/// `descriptionSize` bytes) lists; a table that does not parse adds none.
pub fn rpc_methods(desc: &[u8]) -> Vec<RpcMethod> {
    let mut out = table(desc, TABLES, TABLES + 24).unwrap_or_default();
    out.extend(table(desc, TABLES + 8, TABLES + 32).unwrap_or_default());
    out
}

/// `C_M_ID` for every method id the classes list, first name per id.
fn message_ids(img: &MachoImage, classes: &[DextClass]) -> BTreeMap<u64, String> {
    let mut ids = BTreeMap::new();
    let mut used = std::collections::HashSet::new();
    for c in classes {
        let Some(desc) = img.read(c.description, c.description_size as usize) else {
            continue;
        };
        for m in rpc_methods(desc) {
            let name = format!("{}_{}_ID", c.name, m.name);
            if !ids.contains_key(&m.msgid) && used.insert(name.clone()) {
                ids.insert(m.msgid, name);
            }
        }
    }
    ids
}

/// A struct `name` laid out with `fields`, or the one the program already has
/// under that name when its size agrees.
fn record(
    t: &dyn TypeFactory,
    name: &str,
    fields: Vec<TypeField>,
    size: i32,
    align: i32,
) -> Option<Rc<Datatype>> {
    let shell = t.kuna_declare_record(name, false).ok()?;
    if shell.get_metatype() != type_metatype::TYPE_STRUCT {
        return None;
    }
    if !shell.is_incomplete() {
        return (shell.get_size() == size).then_some(shell);
    }
    t.set_fields_struct_raw(&shell, fields, Vec::new(), size, align, 0)
        .ok()
}

/// A pointer to the struct `name` (declared without a body when new), or
/// `void *` when the name belongs to something else.
fn opaque_ptr(t: &dyn TypeFactory, name: &str, void_ptr: &Rc<Datatype>) -> Rc<Datatype> {
    t.kuna_declare_record(name, false)
        .ok()
        .filter(|s| s.get_metatype() == type_metatype::TYPE_STRUCT)
        .and_then(|s| t.get_type_pointer(8, s, 1).ok())
        .unwrap_or_else(|| Rc::clone(void_ptr))
}

struct Types<'a> {
    t: &'a dyn TypeFactory,
    int: Rc<Datatype>,
    void_ptr: Rc<Datatype>,
    rpc_ptr: Rc<Datatype>,
    message: Option<Rc<Datatype>>,
    classes: HashMap<&'a str, &'a DextClass>,
    built: HashMap<String, Option<Rc<Datatype>>>,
}

impl<'a> Types<'a> {
    fn new(
        t: &'a dyn TypeFactory,
        ids: BTreeMap<u64, String>,
        classes: &'a [DextClass],
    ) -> Option<Types<'a>> {
        let u32_ = t.get_base(4, type_metatype::TYPE_UINT).ok()?;
        let u64_ = t.get_base(8, type_metatype::TYPE_UINT).ok()?;
        let void_ptr = t.get_type_pointer(8, t.get_type_void().ok()?, 1).ok()?;
        let mach = opaque_ptr(t, "IORPCMessageMach", &void_ptr);
        let rpc = record(
            t,
            "IORPC",
            vec![
                TypeField::new(0, 0, "message", Rc::clone(&mach)),
                TypeField::new(1, 8, "reply", Rc::clone(&mach)),
                TypeField::new(2, 0x10, "sendSize", Rc::clone(&u32_)),
                TypeField::new(3, 0x14, "replySize", u32_),
            ],
            0x18,
            8,
        )?;
        let mut by_name = HashMap::new();
        for c in classes {
            by_name.entry(c.name.as_str()).or_insert(c);
        }
        let msgid = Self::message_id_enum(t, ids).unwrap_or_else(|| Rc::clone(&u64_));
        let message = record(
            t,
            "IORPCMessage",
            vec![
                TypeField::new(0, 0, "msgid", msgid),
                TypeField::new(1, 8, "flags", Rc::clone(&u64_)),
                TypeField::new(2, 0x10, "objectRefs", u64_),
            ],
            0x18,
            4,
        );
        Some(Types {
            t,
            int: t.get_base(4, type_metatype::TYPE_INT).ok()?,
            rpc_ptr: t.get_type_pointer(8, rpc, 1).ok()?,
            void_ptr,
            message,
            classes: by_name,
            built: HashMap::new(),
        })
    }

    /// `IORPCMessageID`, an 8-byte enum of `ids`, or the 8-byte enum the program
    /// already has under that name.
    fn message_id_enum(t: &dyn TypeFactory, ids: BTreeMap<u64, String>) -> Option<Rc<Datatype>> {
        if ids.is_empty() {
            return None;
        }
        match t.find_by_name("IORPCMessageID").ok()? {
            Some(e) => (e.is_enum_type() && e.get_size() == 8).then_some(e),
            None => {
                let shell = t
                    .get_type_enum_sized("IORPCMessageID", 8, type_metatype::TYPE_ENUM_UINT)
                    .ok()?;
                t.set_enum_values(&shell, ids).ok()
            }
        }
    }

    /// The struct of the dext's class `name`: its superclass's struct as
    /// `super` when that is a class of the dext and fits, then `ivars`.
    fn class(&mut self, name: &str, depth: usize) -> Option<Rc<Datatype>> {
        if let Some(done) = self.built.get(name) {
            return done.clone();
        }
        let c = *self.classes.get(name)?;
        if depth > MAX_SUPER_DEPTH {
            return None;
        }
        self.built.insert(name.to_string(), None);
        let size = i32::try_from(c.instance_size)
            .ok()
            .filter(|&s| (IVARS..=MAX_INSTANCE).contains(&s) && s % 8 == 0)?;
        let mut fields = Vec::new();
        if c.super_name != c.name {
            if let Some(sup) = self.class(&c.super_name, depth + 1) {
                if sup.get_size() <= size - IVARS {
                    fields.push(TypeField::new(0, 0, "super", sup));
                }
            }
        }
        let ivars = opaque_ptr(self.t, &format!("{name}_IVars"), &self.void_ptr);
        fields.push(TypeField::new(
            fields.len() as i32,
            size - IVARS,
            "ivars",
            ivars,
        ));
        let built = record(self.t, name, fields, size, 8);
        self.built.insert(name.to_string(), built.clone());
        built
    }

    fn class_ptr(&mut self, name: &str) -> Option<Rc<Datatype>> {
        let c = self.class(name, 0)?;
        self.t.get_type_pointer(8, c, 1).ok()
    }

    fn pieces(&self, name: &str, intypes: Vec<Rc<Datatype>>, innames: &[&str]) -> PrototypePieces {
        PrototypePieces {
            name: name.to_string(),
            outtype: Some(Rc::clone(&self.int)),
            innames: innames.iter().map(|n| n.to_string()).collect(),
            intypes,
            first_var_arg_slot: -1,
            output_storage: None,
            input_storage: Vec::new(),
            kuna_library_names: None,
        }
    }

    fn message_from_mach(&self) -> Option<PrototypePieces> {
        let message = self.message.clone()?;
        let mach = opaque_ptr(self.t, "IORPCMessageMach", &self.void_ptr);
        Some(PrototypePieces {
            name: "IORPCMessageFromMach".to_string(),
            outtype: Some(self.t.get_type_pointer(8, message, 1).ok()?),
            intypes: vec![mach, self.t.get_base(1, type_metatype::TYPE_BOOL).ok()?],
            innames: vec!["msg".to_string(), "reply".to_string()],
            first_var_arg_slot: -1,
            output_storage: None,
            input_storage: Vec::new(),
            kuna_library_names: None,
        })
    }
}

/// The deferred `dextrpc` run (`crate::passes::run_dextrpc`): nothing for an
/// image without `__osclassinfo`, else [`emit`] over its classes. It runs at
/// the commit point, not inside the load-time `osclassinfo` pass, because the
/// load-time architecture carries the constructor defaults, not the run's
/// `--option dextrpc on`, and because it builds types.
pub fn run(ctx: &AnalysisCtx) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    if ctx.file.format() != object::BinaryFormat::MachO
        || ctx.file.section_by_name("__osclassinfo").is_none()
    {
        return out;
    }
    let img = MachoImage::with_fixups(
        ctx.file,
        crate::loader::format::macho::resolve_chained_fixups(ctx.file, ctx.bytes),
    );
    let classes = super::osclassinfo::classes(ctx.file, &img);
    emit(ctx, &img, &classes, &mut out);
    out
}

/// Prototypes, types and `this` hints for the IORPC symbols of a dext whose
/// `__osclassinfo` lists `classes`.
pub(super) fn emit(
    ctx: &AnalysisCtx,
    img: &MachoImage,
    classes: &[DextClass],
    out: &mut AnalysisOutput,
) {
    if ctx.file.architecture() != Architecture::Aarch64 || ctx.arch.data_org().0 != 8 {
        return;
    }
    let mut symbols: Vec<(u64, String)> = ctx
        .file
        .symbols()
        .filter(|s| s.is_definition() && s.address() != 0)
        .filter_map(|s| {
            let name = s.name().ok()?;
            Some((
                s.address(),
                name.strip_prefix('_').unwrap_or(name).to_string(),
            ))
        })
        .collect();
    symbols.extend(
        crate::loader::macho_stubs::resolve_macho_imports(ctx.file, ctx.bytes)
            .into_iter()
            .map(|i| (i.addr, String::from_utf8_lossy(&i.name).into_owned())),
    );
    let Some(mut types) = Types::new(ctx.arch.types(), message_ids(img, classes), classes) else {
        return;
    };
    let from_mach = types.message_from_mach();
    for (addr, name) in &symbols {
        if name == "IORPCMessageFromMach" {
            if let Some(p) = &from_mach {
                out.prototypes_at.push((*addr, p.clone()));
            }
            continue;
        }
        let Some(kind) = classify(name) else {
            continue;
        };
        let rpc = Rc::clone(&types.rpc_ptr);
        let void_ptr = Rc::clone(&types.void_ptr);
        let pieces = match kind {
            RpcSymbol::StaticDispatch(c) => {
                let this = types.class_ptr(c).unwrap_or(void_ptr);
                types.pieces(name, vec![this, rpc], &["self", "rpc"])
            }
            RpcSymbol::Dispatch(c) => {
                let this = types.class_ptr(c).unwrap_or(void_ptr);
                types.pieces(name, vec![this, rpc], &["this", "rpc"])
            }
            RpcSymbol::Invoke(n) => {
                let mut intypes = vec![rpc];
                intypes.extend((1..n).map(|_| Rc::clone(&void_ptr)));
                let innames = ["rpc", "target", "func", "targetActionClass"];
                types.pieces(name, intypes, &innames[..n])
            }
            RpcSymbol::Member(c) => {
                if let Some(this) = types.class_ptr(c) {
                    out.dext_this_hints.push(InputHintFact {
                        func_addr: *addr,
                        reg: "x0",
                        name: "this".to_string(),
                        type_: Some(this),
                    });
                }
                continue;
            }
        };
        out.prototypes_at.push((*addr, pieces));
    }
}
