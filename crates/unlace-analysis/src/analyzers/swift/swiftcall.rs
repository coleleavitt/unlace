//! (kuna `swiftcall`) Swift's calling convention on the functions the
//! metadata and the symbol table name, with their `self` typed.
//!
//! Swift passes a method's `self` in the `swiftself` register (x20 on
//! arm64, r13 on x86-64) when it is one pointer: a class instance, the
//! address of an `inout` (mutating) or indirect value, or a thick
//! metatype; a non-mutating method of a loadable struct gets its `self`
//! exploded into the trailing argument registers instead. A throwing
//! function hands its error back in the `swifterror` register (x21 / r12),
//! which a caller zeroes before the call and tests after it. Neither
//! register is a parameter under the platform's C model, so the `self` a
//! method reads is an unnamed register read, and a call drops the `self`
//! it passes.
//!
//! The engine derives `__swiftcall` from the compiler spec's default model
//! (`unlace_decomp::swiftcall`): the C model with `swiftself` added as an
//! input resource section of its own, so recovery declares `self` exactly
//! when the body reads it and never forces the argument registers around
//! it; `__swiftcall_throws` also returns the error register to the caller.
//! This arm binds one of them to every function it can place in a type,
//! with no signature (the arity stays recovered), and hints its `self`:
//!
//! - a class's vtable slots and overrides: `Class *` for an instance member,
//!   `swift.class_metadata *` for a class member or allocating initializer;
//! - a conformance's witnesses: the address of the value, `T *` for a
//!   struct and `Class **` for a class (`Class *` under a class-bound
//!   protocol, which passes the reference itself), or the metadata for a
//!   static requirement; a protocol's default implementations take the
//!   model only;
//! - a symbol the demangler places in a class or struct (an image that kept
//!   its symbols): a method, accessor, property observer, initializer or
//!   deinitializer, with
//!   `throws` read off its function type;
//! - an import whose symbol demangles to such a member, at the stub a call
//!   enters: the model alone, so a call to `String.append(_:)` passes the
//!   string it appends to; a struct member's `self` is passed only when the
//!   caller set the register for that call;
//! - an import stub of another image's Swift function that throws, a
//!   protocol requirement's dispatch thunk included: `__swiftcall_throws`
//!   only, so a caller that hands on its own error register reads the
//!   callee's error.
//!
//! Only `self` is typed, and only when the body reads the register at its
//! full width; a struct method whose `self` is exploded declares no `self`.

use std::collections::{BTreeMap, HashSet};
use std::rc::Rc;

use unlace_decomp::dtype::Datatype;
use unlace_decomp::swiftcall::{
    SWIFTASYNCCALL, SWIFTASYNCCALL_THROWS, SWIFTCALL, SWIFTCALL_THROWS,
};

use super::descriptors::{ContextKind, Target, TypeRef};
use super::swifttypes::{Registers, Types};
use crate::demangle::swift::node::{Kind, Node, NodeRef};
use crate::demangle::swift::print::print_full;
use crate::demangle::swift::{demangle_swift_name, demangle_swift_tree};
use crate::pass::{AnalysisOutput, InputHintFact, ModelFact};

#[derive(Default, Debug)]
pub struct Stats {
    pub bound: usize,
    pub typed_self: usize,
    pub throws: usize,
    pub asyncs: usize,
    pub declared: usize,
}

/// What a function's `self` is.
#[derive(Clone, Copy, PartialEq, Eq)]
enum SelfIs {
    Instance,
    Witness,
    Metatype,
}

struct Binding {
    model: &'static str,
    self_t: Option<Rc<Datatype>>,
    maybe_self: bool,
    /// Two bindings named different `self` types.
    conflicted: bool,
}

/// A Swift argument label as a C identifier: a label that is a C keyword
/// (`for`, `default`, `while`) gets a trailing underscore.
fn c_identifier(label: &str) -> String {
    const C_KEYWORDS: &[&str] = &[
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else",
        "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", "register",
        "restrict", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
        "union", "unsigned", "void", "volatile", "while",
    ];
    if C_KEYWORDS.contains(&label) {
        format!("{label}_")
    } else {
        label.to_string()
    }
}

/// A symbol-named member's declared signature, for the prototype: the
/// regular parameters, the trailing ones a witness takes (the `Self`
/// metadata and the witness table), the return type, and the `self` that
/// rides in `swiftself` when the member takes one there.
pub struct Declared {
    pub params: Vec<(String, Rc<Datatype>)>,
    pub ret: Rc<Datatype>,
    pub swiftself: Option<Rc<Datatype>>,
    /// A struct instance member's `self` by value, the form it takes when
    /// the body does not read `swiftself` first.
    pub exploded_self: Option<Rc<Datatype>>,
}

struct Binder<'t, 'a> {
    types: &'t Types<'a>,
    bound: BTreeMap<u64, Binding>,
    declared: BTreeMap<u64, (Declared, &'static str)>,
    /// Dotted paths of the local class-bound protocols.
    class_bound: HashSet<String>,
    /// Functions a symbol names as Swift functions of a module, no type's
    /// members: they take no `self` and leave the register alone.
    free: Vec<u64>,
    /// The stubs a call to an import enters.
    stubs: HashSet<u64>,
}

impl Binder<'_, '_> {
    /// The image's stubs of other images' Swift functions that throw (`imports`,
    /// each in a code section): a call to one hands its error back in the
    /// error register. Only the model is bound; the callee's body is not in the
    /// image to type its `self`.
    fn imports(&mut self, imports: &[(u64, String)]) {
        for (addr, name) in imports {
            match throwing_import(name) {
                Some(Imported::Free) => {
                    self.free.push(*addr);
                    self.bind_import(*addr, false);
                }
                Some(Imported::Member { maybe_self }) => self.bind_import(*addr, maybe_self),
                None => {}
            }
        }
    }

    /// Bind `__swiftcall_throws` to the stub at `f`, which lies in a code
    /// section the caller checked (a stub section need not be `Text`).
    fn bind_import(&mut self, f: u64, maybe_self: bool) {
        self.bound.entry(f).or_insert(Binding {
            model: SWIFTCALL_THROWS,
            self_t: None,
            maybe_self,
            conflicted: false,
        });
    }

    fn put(&mut self, f: u64, model: &'static str, self_t: Option<Rc<Datatype>>) {
        self.put_with(f, model, self_t, false);
    }

    fn put_with(
        &mut self,
        f: u64,
        model: &'static str,
        self_t: Option<Rc<Datatype>>,
        maybe_self: bool,
    ) {
        if !self.types.namer.is_code(f) && !self.stubs.contains(&f) {
            return;
        }
        match self.bound.entry(f) {
            std::collections::btree_map::Entry::Vacant(v) => {
                v.insert(Binding {
                    model,
                    self_t,
                    maybe_self,
                    conflicted: false,
                });
            }
            // One body serving members of different types (identical code
            // folding) names no single `self` type.
            std::collections::btree_map::Entry::Occupied(mut o) => {
                let b = o.get_mut();
                match (&b.self_t, self_t) {
                    (Some(a), Some(c)) if a.get_name() != c.get_name() => {
                        b.self_t = None;
                        b.conflicted = true;
                    }
                    (None, Some(c)) if !b.conflicted => b.self_t = Some(c),
                    _ => {}
                }
            }
        }
    }

    /// The type `self` has in a member of the nominal type at `addr`.
    fn self_type(&self, addr: u64, is: SelfIs) -> Option<Rc<Datatype>> {
        let types = self.types;
        let kind = types.md.contexts.get(&addr)?.kind;
        if !matches!(kind, ContextKind::Class | ContextKind::Struct) {
            return None;
        }
        let path = types.unique_path(addr)?;
        match is {
            SelfIs::Instance => types.self_pointer(addr, &path),
            SelfIs::Witness => types.witness_self(addr, &path, false),
            SelfIs::Metatype if kind == ContextKind::Class => {
                types.pointer_to(types.class_metadata_struct()?)
            }
            SelfIs::Metatype => types.pointer_to(types.metadata_struct()?),
        }
    }

    fn classes(&mut self) {
        let md = self.types.md;
        let mut contexts: Vec<_> = md
            .contexts
            .values()
            .filter(|c| c.kind == ContextKind::Class)
            .collect();
        contexts.sort_by_key(|c| c.addr);
        for ctx in contexts {
            for e in &ctx.vtable {
                let Some(f) = e.impl_addr else { continue };
                let is = if e.instance {
                    SelfIs::Instance
                } else {
                    SelfIs::Metatype
                };
                let t = self.self_type(ctx.addr, is);
                self.put(f, SWIFTCALL, t);
            }
            for o in &ctx.overrides {
                let Some(f) = o.impl_addr else { continue };
                let is = match (o.base_class, o.method) {
                    (Target::Direct(b), Target::Direct(m)) => {
                        let Some(e) = md
                            .contexts
                            .get(&b)
                            .and_then(|base| base.vtable.iter().find(|e| e.addr == m))
                        else {
                            continue;
                        };
                        if e.instance {
                            SelfIs::Instance
                        } else {
                            SelfIs::Metatype
                        }
                    }
                    (_, Target::Slot(slot)) => {
                        match self.types.imports.get(&slot).and_then(|n| imported_is(n)) {
                            Some(is) => is,
                            None => continue,
                        }
                    }
                    _ => continue,
                };
                let t = self.self_type(ctx.addr, is);
                self.put(f, SWIFTCALL, t);
            }
        }
    }

    fn conformances(&mut self) {
        let md = self.types.md;
        for c in &md.conformances {
            let TypeRef::Descriptor(Target::Direct(t)) = c.type_ref else {
                continue;
            };
            let local_rows = c.witnesses.is_empty() && c.flags & (1 << 17) == 0;
            let class_bound = match c.protocol {
                Target::Direct(p) => md
                    .contexts
                    .get(&p)
                    .is_some_and(|p| p.is_class_bound_protocol()),
                Target::Slot(_) => false,
            };
            if let (true, Some(w), Target::Direct(p)) = (local_rows, c.witness_table, c.protocol) {
                let Some(proto) = md.contexts.get(&p) else {
                    continue;
                };
                for (k, (req, _)) in proto.requirements.iter().enumerate() {
                    let Some(is) = requirement_is(md.requirement_flags.get(req).copied()) else {
                        continue;
                    };
                    let slot = w.wrapping_add(md.ptr_size * (1 + k as u64));
                    if let Some(&f) = md.words.get(&slot) {
                        let ty = self.self_type(t, witness_is(is, class_bound));
                        self.put(f, SWIFTCALL, ty);
                    }
                }
            }
            for (req, impl_addr) in &c.witnesses {
                let Some(f) = *impl_addr else { continue };
                let is = match *req {
                    Target::Direct(r) => requirement_is(md.requirement_flags.get(&r).copied()),
                    Target::Slot(slot) => {
                        self.types.imports.get(&slot).and_then(|n| imported_is(n))
                    }
                };
                let Some(is) = is else { continue };
                let ty = self.self_type(t, witness_is(is, class_bound));
                self.put(f, SWIFTCALL, ty);
            }
        }
        let mut protocols: Vec<_> = md
            .contexts
            .values()
            .filter(|c| c.kind == ContextKind::Protocol)
            .collect();
        protocols.sort_by_key(|c| c.addr);
        for proto in protocols {
            for (req, default_impl) in &proto.requirements {
                if let (Some(f), Some(_)) = (
                    *default_impl,
                    requirement_is(md.requirement_flags.get(req).copied()),
                ) {
                    self.put(f, SWIFTCALL, None);
                }
            }
        }
    }

    /// `declare` parks the declared signature too; an import's stub body
    /// cannot say whether a struct member takes `self` exploded or in
    /// `swiftself`, so an import gets the model alone.
    fn symbols(&mut self, symbols: &[(u64, String)], declare: bool) {
        for (addr, name) in symbols {
            let Some(tree) = demangle_swift_tree(name) else {
                continue;
            };
            let [entity] = tree.children.as_slice() else {
                continue;
            };
            // An async function's resume partials are the same function
            // split at its suspension points: each takes the context.
            let (entity, partial) = match entity.kind {
                Kind::AsyncAwaitResumePartialFunction | Kind::AsyncSuspendResumePartialFunction => {
                    match entity.first() {
                        Some(inner) => (inner, true),
                        None => continue,
                    }
                }
                _ => (entity, false),
            };
            // A free function: no owner, no `self`.
            if entity.kind == Kind::Function
                && entity.first().is_some_and(|c| c.kind == Kind::Module)
                && !partial
            {
                self.free.push(*addr);
                let throws = throws(entity);
                let model = match (is_async(entity), throws) {
                    (true, true) => SWIFTASYNCCALL_THROWS,
                    (true, false) => SWIFTASYNCCALL,
                    (false, true) => SWIFTCALL_THROWS,
                    (false, false) => SWIFTCALL,
                };
                if declare && !is_async(entity) {
                    if let Some(d) = self.declared(entity, SelfIs::Instance, false, None) {
                        self.declared.insert(*addr, (d, model));
                    }
                }
                continue;
            }
            let Some((owner, is, throws)) = member(entity) else {
                continue;
            };
            let is = if is == SelfIs::Witness && self.is_class_bound_witness(entity) {
                SelfIs::Instance
            } else {
                is
            };
            let model = match (partial || is_async(entity), throws) {
                (true, true) => SWIFTASYNCCALL_THROWS,
                (true, false) => SWIFTASYNCCALL,
                (false, true) => SWIFTCALL_THROWS,
                (false, false) => SWIFTCALL,
            };
            let value_type = matches!(owner_kind(&owner), Some(Kind::Structure | Kind::Enum));
            if value_type && is == SelfIs::Metatype {
                continue;
            }
            let ty = match nominal(&owner) {
                Some(path) => self
                    .types
                    .nominal_at(&path)
                    .and_then(|a| self.self_type(a, is)),
                None => None,
            };
            self.put_with(
                *addr,
                model,
                ty.clone(),
                value_type && is == SelfIs::Instance,
            );
            if declare && !partial && !is_async(entity) {
                if let Some(d) = self.declared(entity, is, value_type, ty) {
                    self.declared.insert(*addr, (d, model));
                }
            }
        }
    }

    /// The declared signature of `entity`, when every type in it is known
    /// and the convention places every part: a class member's `self` in
    /// `swiftself`; a witness's at the value's address, followed by the
    /// `Self` metadata and the witness table; a struct's or enum's instance
    /// member not at all (a non-mutating member of a loadable struct takes
    /// `self` exploded into the argument registers, a mutating one its
    /// address in `swiftself`, and the name does not say which).
    fn declared(
        &self,
        entity: &NodeRef,
        is: SelfIs,
        value_type: bool,
        self_t: Option<Rc<Datatype>>,
    ) -> Option<Declared> {
        let types = self.types;
        let any = |node: &NodeRef| types.kuna_type(node, u32::MAX, 0);
        let (mut params, ret) = match entity.kind {
            Kind::Function | Kind::Allocator | Kind::Constructor => {
                let (params, ret, trailing) = function_signature(entity)?;
                let labels = entity.child_of_kind(Kind::LabelList);
                let mut out = Vec::with_capacity(params.len());
                for (i, p) in params.iter().enumerate() {
                    let label = labels
                        .and_then(|l| l.child(i))
                        .filter(|l| l.kind == Kind::Identifier)
                        .map(|l| c_identifier(l.get_text()))
                        .unwrap_or_else(|| format!("a{i}"));
                    out.push((label, any(p)?));
                }
                // A generic return is written through the indirect result;
                // its type is the caller's, so the prototype stays
                // undeclared.
                if is_dependent(&ret) {
                    return None;
                }
                let ret = if is_void(&ret) {
                    types.tf.get_type_void().ok()?
                } else {
                    any(&ret)?
                };
                // Generic arguments follow the regular ones: the metadata
                // of each type parameter, then the witness table of each
                // conformance requirement.
                let meta_ptr = types.metadata_struct().and_then(|t| {
                    types
                        .tf
                        .get_type_pointer(types.md.ptr_size as i32, t, 1)
                        .ok()
                });
                let void_ptr = types.tf.get_type_void().ok().and_then(|v| {
                    types
                        .tf
                        .get_type_pointer(types.md.ptr_size as i32, v, 1)
                        .ok()
                });
                for (name, is_metadata) in trailing {
                    let t = if is_metadata {
                        meta_ptr.clone()?
                    } else {
                        void_ptr.clone()?
                    };
                    out.push((
                        format!(
                            "{}_{}",
                            if is_metadata { "metadata" } else { "witness" },
                            c_identifier(&name)
                        ),
                        t,
                    ));
                }
                (out, ret)
            }
            Kind::Getter | Kind::Setter => {
                let storage = entity.first()?;
                if storage.kind != Kind::Variable {
                    return None;
                }
                let var_t = storage.child_of_kind(Kind::Type)?;
                if entity.kind == Kind::Getter {
                    (Vec::new(), any(var_t)?)
                } else {
                    (
                        vec![("value".to_string(), any(var_t)?)],
                        types.tf.get_type_void().ok()?,
                    )
                }
            }
            Kind::Destructor | Kind::Deallocator => (Vec::new(), types.tf.get_type_void().ok()?),
            _ => return None,
        };
        // A by-value aggregate: Swift explodes up to four scalar words into
        // registers (the models join them, up to 32 bytes) and passes a
        // larger one, or one with float words, through its address.
        for (_, t) in params.iter_mut() {
            if t.get_metatype() != unlace_decomp::dtype::type_metatype::TYPE_STRUCT {
                continue;
            }
            match eight_byte_words(t) {
                Some(n) if n <= 4 => {}
                Some(_) => {
                    *t = types
                        .tf
                        .get_type_pointer(types.md.ptr_size as i32, Rc::clone(t), 1)
                        .ok()?;
                }
                None => return None,
            }
        }
        // A free function has no `self`; a member without a known type for
        // it declares nothing.
        let free = self_t.is_none()
            && !value_type
            && is == SelfIs::Instance
            && entity.first().is_some_and(|c| c.kind == Kind::Module);
        let swiftself = if free { None } else { Some(self_t?) };
        if is == SelfIs::Witness {
            let meta = types.metadata_struct().and_then(|t| {
                types
                    .tf
                    .get_type_pointer(types.md.ptr_size as i32, t, 1)
                    .ok()
            })?;
            let void = types.tf.get_type_void().ok()?;
            let void_ptr = types
                .tf
                .get_type_pointer(types.md.ptr_size as i32, void, 1)
                .ok()?;
            params.push(("Self".to_string(), meta));
            params.push(("witness_table".to_string(), void_ptr));
        }
        // A struct's instance member: `self` is its address in `swiftself`
        // when the member mutates it or the struct is wider than four words,
        // and the exploded value in the argument registers otherwise; the
        // name does not say which, so the fact carries both forms and the
        // commit asks the body (`self_first`).
        let exploded_self = if value_type && is == SelfIs::Instance {
            let st = swiftself.as_ref()?.get_ptr_to()?;
            match eight_byte_words(&st) {
                Some(n) if n <= 4 => Some(st),
                Some(_) => None,
                None => return None,
            }
        } else {
            None
        };
        Some(Declared {
            params,
            ret,
            swiftself,
            exploded_self,
        })
    }
}

/// The trailing arguments a generic signature adds: one metadata pointer
/// per generic parameter (`T`, `U`, … or `T1` at depth 1), one witness
/// table per conformance requirement.
fn generic_trailing(sig: &NodeRef) -> Vec<(String, bool)> {
    let mut out = Vec::new();
    let mut depth = 0u64;
    for c in &sig.children {
        match c.kind {
            Kind::DependentGenericParamCount => {
                for i in 0..c.get_index() {
                    let name = crate::demangle::swift::parse::generic_parameter_name(depth, i);
                    out.push((name, true));
                }
                depth += 1;
            }
            Kind::DependentGenericConformanceRequirement => {
                let who = c.first().and_then(print_full).unwrap_or_default();
                let proto = c.child(1).and_then(print_full).unwrap_or_default();
                let name = format!("{who}_{}", proto.rsplit('.').next().unwrap_or(""));
                out.push((name, false));
            }
            _ => {}
        }
    }
    out
}

/// The parameter types and the return type of a function entity's type,
/// and the trailing generic arguments of a generic one.
fn function_signature(entity: &NodeRef) -> Option<(Vec<NodeRef>, NodeRef, Vec<(String, bool)>)> {
    let mut t = entity.child_of_kind(Kind::Type)?;
    let mut trailing = Vec::new();
    let func = loop {
        let inner = t.first()?;
        match inner.kind {
            Kind::Type => t = inner,
            Kind::DependentGenericType => {
                trailing = generic_trailing(inner.first()?);
                t = inner.child(1)?;
            }
            Kind::FunctionType | Kind::NoEscapeFunctionType => break inner,
            _ => return None,
        }
    };
    let args = func.child_of_kind(Kind::ArgumentTuple)?.first()?;
    let ret = func.child_of_kind(Kind::ReturnType)?.first()?;
    let params = match args.first() {
        Some(tuple) if tuple.kind == Kind::Tuple => tuple
            .children
            .iter()
            .map(|e| e.children.iter().find(|c| c.kind == Kind::Type).cloned())
            .collect::<Option<Vec<_>>>()?,
        _ => vec![Rc::clone(args)],
    };
    Some((params, Rc::clone(ret), trailing))
}

/// How many eight-byte integer or pointer words a struct is, leaf by leaf
/// (the words Swift explodes it into); `None` when a leaf is anything else
/// (a float, a narrow integer, a nested enum), since those take other
/// registers or pack differently.
fn eight_byte_words(t: &Rc<Datatype>) -> Option<usize> {
    use unlace_decomp::dtype::type_metatype::{TYPE_INT, TYPE_PTR, TYPE_STRUCT, TYPE_UINT};
    match t.get_metatype() {
        TYPE_INT | TYPE_UINT | TYPE_PTR => (t.get_size() == 8).then_some(1),
        TYPE_STRUCT => {
            let mut words = 0;
            let mut i = 0;
            let mut end = 0;
            while let Some(f) = t.get_field(i) {
                if f.offset != end {
                    return None;
                }
                words += eight_byte_words(&f.field_type)?;
                end = f.offset + f.field_type.get_size();
                i += 1;
            }
            (end == t.get_size() && words > 0).then_some(words)
        }
        _ => None,
    }
}

/// A type that is, or holds, a generic parameter.
fn is_dependent(ty: &NodeRef) -> bool {
    ty.kind == Kind::DependentGenericParamType
        || ty.kind == Kind::DependentMemberType
        || ty.children.iter().any(is_dependent)
}

/// `()`, the empty tuple.
fn is_void(ty: &NodeRef) -> bool {
    ty.first()
        .is_some_and(|t| t.kind == Kind::Tuple && t.children.is_empty())
}

impl Binder<'_, '_> {
    /// Is `entity` a protocol witness of a local class-bound protocol?
    fn is_class_bound_witness(&self, entity: &NodeRef) -> bool {
        (entity.kind == Kind::ProtocolWitness)
            .then(|| entity.first()?.child(1))
            .flatten()
            .and_then(print_full)
            .is_some_and(|p| self.class_bound.contains(&p))
    }
}

/// `self` of a requirement implemented by a witness: `Class **` unless the
/// protocol is class-bound (an imported protocol is taken as not, which only
/// Swift's own class-bound protocols get wrong, and those are rare).
fn witness_is(is: SelfIs, class_bound: bool) -> SelfIs {
    match is {
        SelfIs::Instance if !class_bound => SelfIs::Witness,
        other => other,
    }
}

/// `self` of a requirement with these `ProtocolRequirementFlags`: kinds 1-6
/// (method, initializer, accessors); `IsInstance` is bit 4. An
/// initializer requirement is static.
fn requirement_is(flags: Option<u32>) -> Option<SelfIs> {
    let flags = flags?;
    if !matches!(flags & 0xf, 1..=6) {
        return None;
    }
    Some(if flags & 0x10 != 0 {
        SelfIs::Instance
    } else {
        SelfIs::Metatype
    })
}

/// What an imported Swift function that throws, and is not `async`, is.
#[derive(Debug, PartialEq, Eq)]
enum Imported {
    /// A module's function: no `self`.
    Free,
    /// A type's member, or a protocol requirement's dispatch thunk;
    /// `maybe_self` for a struct or enum instance member.
    Member { maybe_self: bool },
}

/// [`Imported`] for the symbol an import stub binds, `None` for a function
/// that does not throw or is not Swift's.
fn throwing_import(name: &str) -> Option<Imported> {
    let tree = demangle_swift_tree(name).or_else(|| demangle_swift_tree(&format!("_{name}")))?;
    let [entity] = tree.children.as_slice() else {
        return None;
    };
    let entity = if entity.kind == Kind::DispatchThunk {
        entity.first()?
    } else {
        entity
    };
    if is_async(entity) {
        return None;
    }
    if entity.kind == Kind::Function && entity.first().is_some_and(|c| c.kind == Kind::Module) {
        return throws(entity).then_some(Imported::Free);
    }
    let (owner, is, true) = member(entity)? else {
        return None;
    };
    let value_type = matches!(owner_kind(&owner), Some(Kind::Structure | Kind::Enum));
    Some(Imported::Member {
        maybe_self: value_type && is == SelfIs::Instance,
    })
}

/// `self` of the member an imported method descriptor (`…Tq`) names.
fn imported_is(import: &str) -> Option<SelfIs> {
    let tree =
        demangle_swift_tree(import).or_else(|| demangle_swift_tree(&format!("_{import}")))?;
    let top = tree.first()?;
    if top.kind != Kind::MethodDescriptor {
        return None;
    }
    let entity = top.first()?;
    Some(match entity.kind {
        Kind::Static | Kind::Allocator => SelfIs::Metatype,
        _ => SelfIs::Instance,
    })
}

/// The owner, `self` and `throws` of a member entity, `None` for anything
/// that is not a method, accessor, initializer or deinitializer.
fn member(entity: &NodeRef) -> Option<(NodeRef, SelfIs, bool)> {
    match entity.kind {
        Kind::ProtocolWitness => {
            let conformance = entity.first()?;
            let ty = conformance.first()?;
            let inner = entity.child(1)?;
            let (_, is, throws) = member(inner)?;
            let is = if is == SelfIs::Instance {
                SelfIs::Witness
            } else {
                is
            };
            Some((Rc::clone(ty), is, throws))
        }
        Kind::Static => {
            let (owner, _, throws) = member(entity.first()?)?;
            Some((owner, SelfIs::Metatype, throws))
        }
        Kind::Function => Some((Rc::clone(entity.first()?), SelfIs::Instance, throws(entity))),
        Kind::Allocator => Some((Rc::clone(entity.first()?), SelfIs::Metatype, throws(entity))),
        Kind::Constructor | Kind::Destructor | Kind::Deallocator => {
            Some((Rc::clone(entity.first()?), SelfIs::Instance, throws(entity)))
        }
        Kind::Getter
        | Kind::Setter
        | Kind::ModifyAccessor
        | Kind::Modify2Accessor
        | Kind::ReadAccessor
        | Kind::Read2Accessor
        | Kind::WillSet
        | Kind::DidSet => {
            let storage = entity.first()?;
            if !matches!(storage.kind, Kind::Variable | Kind::Subscript) {
                return None;
            }
            Some((Rc::clone(storage.first()?), SelfIs::Instance, false))
        }
        _ => None,
    }
    .filter(|(owner, _, _)| owner_kind(owner).is_some())
}

/// The nominal kind a member's owner names, through an extension.
fn owner_kind(owner: &NodeRef) -> Option<Kind> {
    let n = match owner.kind {
        Kind::Extension => owner.child(1)?,
        Kind::Type => owner.first()?,
        _ => owner,
    };
    let n = if n.kind == Kind::Type { n.first()? } else { n };
    matches!(
        n.kind,
        Kind::Class | Kind::Structure | Kind::Enum | Kind::Protocol
    )
    .then_some(n.kind)
}

/// The dotted path of a member's owner, when it is a class or struct.
fn nominal(owner: &NodeRef) -> Option<String> {
    let n = match owner.kind {
        Kind::Extension => owner.child(1)?,
        _ => owner,
    };
    let n = if n.kind == Kind::Type {
        Rc::clone(n.first()?)
    } else {
        Rc::clone(n)
    };
    if !matches!(n.kind, Kind::Class | Kind::Structure) {
        return None;
    }
    print_full(&Node::with(Kind::Type, vec![n]))
}

/// Whether the function type of an entity is `async`.
fn is_async(entity: &NodeRef) -> bool {
    let Some(mut t) = entity.child_of_kind(Kind::Type) else {
        return false;
    };
    loop {
        let Some(inner) = t.first() else { return false };
        match inner.kind {
            Kind::Type => t = inner,
            Kind::DependentGenericType => match inner.child_of_kind(Kind::Type) {
                Some(next) => t = next,
                None => return false,
            },
            Kind::FunctionType | Kind::NoEscapeFunctionType => {
                return inner
                    .children
                    .iter()
                    .any(|c| c.kind == Kind::AsyncAnnotation);
            }
            _ => return false,
        }
    }
}

/// Whether the function type of an entity throws.
fn throws(entity: &NodeRef) -> bool {
    let Some(mut t) = entity.child_of_kind(Kind::Type) else {
        return false;
    };
    loop {
        let Some(inner) = t.first() else { return false };
        match inner.kind {
            Kind::Type => t = inner,
            Kind::DependentGenericType => match inner.child_of_kind(Kind::Type) {
                Some(next) => t = next,
                None => return false,
            },
            Kind::FunctionType | Kind::NoEscapeFunctionType => {
                return inner.children.iter().any(|c| {
                    matches!(c.kind, Kind::ThrowsAnnotation | Kind::TypedThrowsAnnotation)
                });
            }
            _ => return false,
        }
    }
}

/// The imported functions whose mangled names say `async`, under that name
/// and the one it is shown by, with whether they throw: a call through an
/// import stub has no body to read the `swiftasync` register in.
pub fn async_imports<'a>(names: impl Iterator<Item = &'a str>) -> Vec<(String, bool)> {
    let mut out = std::collections::BTreeMap::new();
    for name in names {
        let Some(tree) = demangle_swift_tree(name) else {
            continue;
        };
        let [entity] = tree.children.as_slice() else {
            continue;
        };
        let entity = match entity.kind {
            Kind::Static => match entity.first() {
                Some(inner) => inner,
                None => continue,
            },
            _ => entity,
        };
        if matches!(
            entity.kind,
            Kind::Function | Kind::Allocator | Kind::Constructor
        ) && is_async(entity)
        {
            let throws = throws(entity);
            out.insert(name.to_string(), throws);
            if let Some(shown) = demangle_swift_name(name) {
                out.insert(shown, throws);
            }
        }
    }
    out.into_iter().collect()
}

/// Bind the convention to every member the image names, and hint `self`.
pub fn bind(
    types: &Types,
    regs: &Registers,
    symbols: &[(u64, String)],
    import_calls: &[(u64, String)],
    callers: &[(u64, bool)],
    out: &mut AnalysisOutput,
) -> Stats {
    let class_bound = types
        .md
        .contexts
        .values()
        .filter(|c| c.is_class_bound_protocol())
        .filter_map(|c| types.namer.path(c.addr, 0))
        .collect();
    let mut b = Binder {
        types,
        bound: BTreeMap::new(),
        declared: BTreeMap::new(),
        class_bound,
        free: Vec::new(),
        stubs: import_calls.iter().map(|&(a, _)| a).collect(),
    };
    b.symbols(symbols, true);
    b.symbols(import_calls, false);
    b.imports(import_calls);
    b.classes();
    b.conformances();
    // (kuna `swiftcallers`) A function only the runtime calls reveal takes
    // the model last, so a placement above keeps its `self` type.
    for &(f, throws) in callers {
        b.bound.entry(f).or_insert(Binding {
            model: if throws { SWIFTCALL_THROWS } else { SWIFTCALL },
            self_t: None,
            maybe_self: true,
            conflicted: false,
        });
    }
    let mut stats = Stats::default();
    out.swift_types.no_self = std::mem::take(&mut b.free);
    if !b.bound.is_empty() {
        out.swift_types.regs = Some((regs.self_reg, regs.error_reg, regs.async_reg));
    }
    let context_t = types.async_context_struct().and_then(|t| {
        types
            .tf
            .get_type_pointer(types.md.ptr_size as i32, t, 1)
            .ok()
    });
    let declared_addrs: std::collections::BTreeSet<u64> = b.declared.keys().copied().collect();
    for (f, (d, model)) in b.declared {
        if types.namer.owners_disagree(f) {
            continue;
        }
        stats.declared += 1;
        let self_slot = d.swiftself.is_some().then_some(d.params.len() as i32);
        let mut intypes: Vec<Rc<Datatype>> = d.params.iter().map(|(_, t)| Rc::clone(t)).collect();
        let mut innames: Vec<String> = d.params.iter().map(|(n, _)| n.clone()).collect();
        if let Some(t) = d.swiftself {
            intypes.push(t);
            innames.push("self".to_string());
        }
        out.swift_types
            .declared
            .push(crate::pass::SwiftDeclaredFact {
                func_addr: f,
                model,
                self_slot,
                self_reg: regs.self_reg,
                exploded_self: d.exploded_self,
                pieces: unlace_decomp::fspec::PrototypePieces {
                    name: String::new(),
                    outtype: Some(d.ret),
                    intypes,
                    innames,
                    first_var_arg_slot: -1,
                    output_storage: None,
                    input_storage: Vec::new(),
                    kuna_library_names: None,
                },
            });
    }
    for (f, binding) in b.bound {
        // A declared prototype carries its model and its `self`; a bound
        // model beside it would displace the declaration's.
        if types.namer.owners_disagree(f) || declared_addrs.contains(&f) {
            continue;
        }
        stats.bound += 1;
        if matches!(binding.model, SWIFTCALL_THROWS | SWIFTASYNCCALL_THROWS) {
            stats.throws += 1;
        }
        if matches!(binding.model, SWIFTASYNCCALL | SWIFTASYNCCALL_THROWS) {
            stats.asyncs += 1;
            out.swift_types.input_hints.push(InputHintFact {
                func_addr: f,
                reg: regs.async_reg,
                name: "async_context".to_string(),
                type_: context_t.clone(),
            });
        }
        out.swift_types.models.push(ModelFact {
            func_addr: f,
            model: binding.model,
            leaf_stack_inputs: None,
            maybe_self: binding.maybe_self,
        });
        if binding.self_t.is_some() {
            stats.typed_self += 1;
        }
        out.swift_types.input_hints.push(InputHintFact {
            func_addr: f,
            reg: regs.self_reg,
            name: "self".to_string(),
            type_: binding.self_t,
        });
    }
    stats
}

/// (kuna `swiftcallers`) Every function that calls a Swift runtime entry
/// point, with whether it calls `swift_willThrow`: IDA's caller rule for
/// `__swiftcall` (its swift module ORs the flag into each code reference to a
/// `swift_*` symbol, through thunks). A closure, a partial-apply forwarder, a
/// heap-object destroyer or an outlined copy has no symbol and no metadata
/// placement, yet takes its context in `swiftself`; the model only declares
/// `self` where the body reads the register, so a caller that does not costs
/// nothing.
///
/// A call is a direct `bl`/`b` (arm64) or `call`/`jmp rel32` (x86-64) whose
/// target is an import stub of a `swift_*` name, or a local function whose
/// first instruction jumps to one (followed three levels). Its function is the
/// nearest entry at or below it among the entry oracles and the text symbols.
pub fn runtime_callers(
    file: &object::File,
    bytes: &[u8],
    import_calls: &[(u64, String)],
) -> Vec<(u64, bool)> {
    use object::read::{Object, ObjectSection, ObjectSymbol};
    let arm64 = match file.architecture() {
        object::Architecture::Aarch64 => true,
        object::Architecture::X86_64 => false,
        _ => return Vec::new(),
    };
    let mut runtime: BTreeMap<u64, bool> = import_calls
        .iter()
        .filter(|(_, name)| name.trim_start_matches('_').starts_with("swift_"))
        .map(|(addr, name)| (*addr, name.contains("swift_willThrow")))
        .collect();
    if runtime.is_empty() {
        return Vec::new();
    }
    let code: Vec<(u64, &[u8])> = file
        .sections()
        .filter(|s| s.kind() == object::SectionKind::Text)
        .filter_map(|s| Some((s.address(), s.data().ok()?)))
        .collect();
    let mut starts: Vec<u64> = crate::entry::collect_entries(file, bytes);
    starts.extend(
        file.symbols()
            .filter(|s| s.kind() == object::SymbolKind::Text && s.is_definition())
            .map(|s| s.address()),
    );
    starts.sort_unstable();
    starts.dedup();
    let jump_at = |at: u64| -> Option<u64> {
        let (base, data) = code
            .iter()
            .find(|(lo, d)| at >= *lo && at - lo < d.len() as u64)?;
        let off = (at - base) as usize;
        if arm64 {
            let w = u32::from_le_bytes(data.get(off..off + 4)?.try_into().ok()?);
            (w & 0xfc00_0000 == 0x1400_0000).then(|| branch26(at, w))
        } else {
            (*data.get(off)? == 0xe9)
                .then(|| rel32(at, data, off))
                .flatten()
        }
    };
    for _ in 0..3 {
        let thunks: Vec<(u64, bool)> = starts
            .iter()
            .filter(|s| !runtime.contains_key(s))
            .filter_map(|&s| Some((s, *runtime.get(&jump_at(s)?)?)))
            .collect();
        if thunks.is_empty() {
            break;
        }
        runtime.extend(thunks);
    }
    let mut callers: BTreeMap<u64, bool> = BTreeMap::new();
    let mut credit = |site: u64, throws: bool| {
        let below = starts.partition_point(|&s| s <= site);
        if let Some(&f) = below.checked_sub(1).and_then(|i| starts.get(i)) {
            if !runtime.contains_key(&f) {
                *callers.entry(f).or_insert(false) |= throws;
            }
        }
    };
    for (base, data) in &code {
        if arm64 {
            for off in (0..data.len().saturating_sub(3)).step_by(4) {
                let w =
                    u32::from_le_bytes([data[off], data[off + 1], data[off + 2], data[off + 3]]);
                if matches!(w & 0xfc00_0000, 0x9400_0000 | 0x1400_0000) {
                    let at = base + off as u64;
                    if let Some(&throws) = runtime.get(&branch26(at, w)) {
                        credit(at, throws);
                    }
                }
            }
        } else {
            for off in 0..data.len() {
                if matches!(data[off], 0xe8 | 0xe9) {
                    let at = base + off as u64;
                    if let Some(&throws) = rel32(at, data, off).and_then(|t| runtime.get(&t)) {
                        credit(at, throws);
                    }
                }
            }
        }
    }
    callers.into_iter().collect()
}

/// The target of the arm64 `b`/`bl` word `w` at `at`.
fn branch26(at: u64, w: u32) -> u64 {
    let imm = ((w & 0x03ff_ffff) << 6) as i32 >> 6;
    at.wrapping_add((imm as i64 * 4) as u64)
}

/// The target of the x86-64 `call`/`jmp rel32` whose opcode byte is `data[off]`.
fn rel32(at: u64, data: &[u8], off: usize) -> Option<u64> {
    let b = data.get(off + 1..off + 5)?;
    let rel = i32::from_le_bytes([b[0], b[1], b[2], b[3]]);
    Some(at.wrapping_add(5).wrapping_add(rel as i64 as u64))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn branch_targets_decode() {
        // bl #-0x10 at 0x1000; b #+8 at 0x2000.
        assert_eq!(branch26(0x1000, 0x97ff_fffc), 0x0ff0);
        assert_eq!(branch26(0x2000, 0x1400_0002), 0x2008);
        // call rel32 -0x20 at 0x3000.
        let call = [0xe8, 0xe0, 0xff, 0xff, 0xff];
        assert_eq!(rel32(0x3000, &call, 0), Some(0x2fe5));
    }

    fn member_of(symbol: &str) -> Option<(SelfIs, bool)> {
        let tree = demangle_swift_tree(symbol)?;
        let [entity] = tree.children.as_slice() else {
            return None;
        };
        member(entity).map(|(_, is, throws)| (is, throws))
    }

    #[test]
    fn property_observers_take_self() {
        assert!(member_of("$s1m1KC1vSivw") == Some((SelfIs::Instance, false)));
        assert!(member_of("$s1m1KC1vSivW") == Some((SelfIs::Instance, false)));
        assert!(member_of("$s1m1SV1wSivW") == Some((SelfIs::Instance, false)));
        assert!(member_of("$s1m1gSivW").is_none());
    }

    #[test]
    fn async_imports_are_named_both_ways() {
        let names = [
            "$sScTss5NeverORszABRs_rlE5yieldyyYaFZ",
            "$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ",
            "$sSS9hasPrefixySbSSF",
            "swift_task_alloc",
        ];
        let found = async_imports(names.into_iter());
        let get = |n: &str| {
            found
                .iter()
                .find(|(name, _)| name == n)
                .map(|(_, throws)| *throws)
        };
        assert_eq!(get(names[0]), Some(false));
        assert_eq!(get(names[1]), Some(true));
        assert_eq!(get("Swift.Task.yield()"), Some(false));
        assert_eq!(get(names[2]), None);
        assert_eq!(found.len(), 4);
    }

    #[test]
    fn imported_requirement_thunks_that_throw_bind() {
        let thunk = "$ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj";
        assert_eq!(
            throwing_import(thunk),
            Some(Imported::Member { maybe_self: false })
        );
        assert_eq!(
            throwing_import(
                "$ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj"
            ),
            None
        );
    }
}
