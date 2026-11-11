//! RTTI naming for vtable dispatches: the receiver's static class and the
//! method its slot holds, so `(*(*obj + 8))(obj)` can print as `obj->speak()`.
//!
//! The receiver class comes from where the object pointer was produced:
//!
//! - the result of `__dynamic_cast(obj, &typeinfo(Src), &typeinfo(Dst), hint)`
//!   is a `Dst *` (recognised by both typeinfo arguments naming RTTI classes,
//!   so it needs no callee symbol);
//! - an incoming parameter takes the class its mangled signature declares
//!   (`_Z8identifyP6Animal`: the first parameter is an `Animal *`), and a
//!   method's `this` takes the method's class;
//! - a reload from a stack-frame slot takes the class all pointers stored to
//!   that slot agree on (unoptimised code spills every local).
//!
//! The method name is read from the class's primary vtable. Abstract classes
//! often have no emitted vtable, so a slot the class cannot name is named by
//! its primary-base descendants when they all agree.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, TargetSet};
use unlace_ir::stack::StackSpec;
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId};
use unlace_loader::{CppClass, RttiInfo, VtableSlotKind};

use super::{DefSites, detect_dispatches, stamp_dispatches};
use crate::call_args::{arg_regs_for, calling_convention_for, resolve_const_from_ssa};
use crate::cpp_method::make_class_ptr;
use crate::itanium_demangle::demangle_itanium;

/// Re-detect the vtable dispatches in `func` and name them from `rtti`.
///
/// Runs after the pass pipeline: detection is repeated so the dispatch keys
/// match the final instruction indices. Returns the number of dispatches
/// whose method was named.
pub fn resolve_virtual_calls(func: &mut SsaFunction, rtti: Option<&RttiInfo>) -> usize {
    let found = detect_dispatches(func);
    stamp_dispatches(func, &found);
    func.cpp_vtable_calls = found;
    let Some(rtti) = rtti.filter(|rtti| !rtti.is_empty()) else {
        return 0;
    };

    let typing = ReceiverTyping::new(func, rtti);
    let resolved: Vec<_> = func
        .cpp_vtable_calls
        .iter()
        .filter_map(|(&key, info)| {
            let Some(class) = typing.class_of(info.base_varnode, MAX_SLOT_HOPS) else {
                tracing::debug!(
                    target: "unlace::cpp_vtable",
                    "func={} site={key:?} receiver={:?} class=unknown def={:?}",
                    func.function.name,
                    info.base_varnode,
                    typing.defs.def(typing.defs.origin(info.base_varnode)).map(|(_, _, insn)| insn),
                );
                return None;
            };
            let method = slot_method_name(rtti, class, info.slot_index);
            Some((key, info.base_varnode, class.demangled_name.clone(), method))
        })
        .collect();

    let mut named = 0;
    for (key, receiver, class, method) in resolved {
        tracing::debug!(
            target: "unlace::cpp_vtable",
            "func={} site={key:?} receiver={receiver:?} class={class} method={method:?}",
            func.function.name
        );
        named += usize::from(method.is_some());
        func.composite_var_types
            .insert(receiver, make_class_ptr(&class));
        if let Some(TargetSet::VtableSlot {
            class_name,
            method: slot_method,
            ..
        }) = func.indirect_call_targets.get_mut(&key)
        {
            *class_name = class;
            *slot_method = method;
        }
    }
    named
}

/// How many stack spill/reload hops a receiver is followed through.
const MAX_SLOT_HOPS: usize = 4;

/// A value written by a `STORE`.
enum Stored {
    Value(SsaVarnode),
    Constant(u64),
}

/// Infers the RTTI class of object pointers in one function.
struct ReceiverTyping<'f, 'r> {
    func: &'f SsaFunction,
    defs: DefSites<'f>,
    params: ParamClasses<'r>,
    rtti: &'r RttiInfo,
    /// Values stored to each stack-frame slot, keyed by `(frame register,
    /// offset)`. Unoptimised code spills every pointer and reloads it before
    /// the call.
    frame_stores: BTreeMap<(SsaVarnode, u64), Vec<Stored>>,
}

impl<'f, 'r> ReceiverTyping<'f, 'r> {
    fn new(func: &'f SsaFunction, rtti: &'r RttiInfo) -> Self {
        let defs = DefSites::new(func);
        let frame_regs: Vec<u64> = StackSpec::for_arch(func.arch)
            .map(|spec| {
                std::iter::once(spec.sp)
                    .chain(spec.fp)
                    .map(|r| r.offset)
                    .collect()
            })
            .unwrap_or_default();
        let mut frame_stores: BTreeMap<_, Vec<_>> = BTreeMap::new();
        for (&bid, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                // `STORE space, addr, value`.
                if insn.op != IrOp::Store || insn.inputs.len() != 3 {
                    continue;
                }
                let Some(slot) = defs
                    .input(bid, idx, 1)
                    .and_then(|addr| defs.base_offset(addr))
                    .filter(|&(base, _)| derives_from_frame_register(&defs, base, &frame_regs))
                else {
                    continue;
                };
                let value = insn.inputs[2];
                let stored = if value.space == SpaceId::Const {
                    Stored::Constant(value.offset)
                } else if let Some(sv) = defs.input(bid, idx, 2) {
                    Stored::Value(sv)
                } else {
                    continue;
                };
                frame_stores.entry(slot).or_default().push(stored);
            }
        }
        Self {
            func,
            params: ParamClasses::new(func, rtti),
            defs,
            rtti,
            frame_stores,
        }
    }

    /// The RTTI class of `object`, from how the pointer was produced.
    fn class_of(&self, object: SsaVarnode, slot_hops: usize) -> Option<&'r CppClass> {
        let object = self.defs.origin(object);
        let Some((bid, idx, insn)) = self.defs.def(object) else {
            return self.params.class_of(object);
        };
        match insn.op {
            IrOp::Call => self.dynamic_cast_target(bid, idx, insn),
            IrOp::Load if slot_hops > 0 => {
                let slot = self.defs.base_offset(self.defs.loaded_from(object)?)?;
                self.frame_slot_class(slot, slot_hops - 1)
            }
            _ => None,
        }
    }

    /// `__dynamic_cast(obj, &typeinfo(Src), &typeinfo(Dst), hint)` returns a
    /// `Dst *`.
    fn dynamic_cast_target(&self, bid: BlockId, idx: usize, call: &IrInsn) -> Option<&'r CppClass> {
        if call.inputs.len() < 4 {
            return None;
        }
        let typeinfo_arg = |input: usize| {
            let raw = call.inputs[input];
            let value = if raw.space == SpaceId::Const {
                raw
            } else {
                let sv = self.defs.input(bid, idx, input)?;
                resolve_const_from_ssa(self.func, sv, &self.defs.sites, 0)?
            };
            self.rtti.classes.get(&value.offset)
        };
        typeinfo_arg(2)?;
        typeinfo_arg(3)
    }

    /// The class every pointer stored to a frame slot agrees on. Null stores
    /// (`Dog *d = nullptr`) carry no class and are skipped.
    fn frame_slot_class(&self, slot: (SsaVarnode, u64), slot_hops: usize) -> Option<&'r CppClass> {
        let mut class: Option<&CppClass> = None;
        for stored in self.frame_stores.get(&slot)? {
            let found = match *stored {
                Stored::Constant(0) => continue,
                Stored::Constant(_) => return None,
                Stored::Value(sv) => self.class_of(sv, slot_hops)?,
            };
            if class.is_some_and(|c| c.typeinfo_addr != found.typeinfo_addr) {
                return None;
            }
            class = Some(found);
        }
        class
    }
}

/// Whether `addr` is the stack or frame pointer, or a constant offset from
/// one (`rbp = rsp - 8` after `push rbp; mov rbp, rsp`).
fn derives_from_frame_register(
    defs: &DefSites<'_>,
    mut addr: SsaVarnode,
    frame_regs: &[u64],
) -> bool {
    for _ in 0..16 {
        if addr.base.space == SpaceId::Register && frame_regs.contains(&addr.base.offset) {
            return true;
        }
        let Some((bid, idx, insn)) = defs.def(addr) else {
            return false;
        };
        let offset_from_input0 = matches!(insn.op, IrOp::IntAdd | IrOp::IntSub)
            && insn
                .inputs
                .get(1)
                .is_some_and(|vn| vn.space == SpaceId::Const);
        if insn.op != IrOp::Copy && !offset_from_input0 {
            return false;
        }
        let Some(src) = defs.input(bid, idx, 0) else {
            return false;
        };
        addr = src;
    }
    false
}

/// Classes of the function's incoming pointer parameters, keyed by the
/// argument register that carries them.
struct ParamClasses<'r> {
    by_register: BTreeMap<u64, &'r CppClass>,
}

impl<'r> ParamClasses<'r> {
    fn new(func: &SsaFunction, rtti: &'r RttiInfo) -> Self {
        let mut classes = Vec::new();
        // A method's first argument is `this`. A class name that RTTI does
        // not know may be a namespace (`_ZN2ns1fEv` is a free function), so
        // the parameter positions are unknown and nothing is inferred.
        if let Some(class) = func.cpp_class_name.as_deref() {
            let Some(cls) = rtti.class_by_name(class) else {
                return Self {
                    by_register: BTreeMap::new(),
                };
            };
            classes.push(Some(cls));
        }
        if let Some(demangled) = demangle_itanium(&func.function.name) {
            classes.extend(
                parameter_types(&demangled)
                    .into_iter()
                    .map(|ty| pointee_class(ty).and_then(|name| rtti.class_by_name(name))),
            );
        }
        let regs = arg_regs_for(calling_convention_for(func));
        let by_register = regs
            .iter()
            .zip(classes)
            .filter_map(|(&reg, class)| Some((reg, class?)))
            .collect();
        Self { by_register }
    }

    /// The class of `object` when it is an incoming argument register.
    fn class_of(&self, object: SsaVarnode) -> Option<&'r CppClass> {
        if object.base.space != SpaceId::Register {
            return None;
        }
        self.by_register.get(&object.base.offset).copied()
    }
}

/// Top-level parameter types of a demangled signature: `f(A*, int)` gives
/// `["A*", "int"]`.
fn parameter_types(demangled: &str) -> Vec<&str> {
    let Some(open) = demangled.find('(') else {
        return Vec::new();
    };
    let Some(close) = demangled.rfind(')') else {
        return Vec::new();
    };
    let list = demangled[open + 1..close].trim();
    if list.is_empty() || list == "void" {
        return Vec::new();
    }
    list.split(',').map(str::trim).collect()
}

/// `Animal*`, `const Animal*` and `Animal&` name the class `Animal`.
fn pointee_class(ty: &str) -> Option<&str> {
    let ty = ty.strip_prefix("const ").unwrap_or(ty);
    let class = ty.strip_suffix('*').or_else(|| ty.strip_suffix('&'))?;
    (!class.is_empty() && !class.contains(['*', '&', ' '])).then_some(class)
}

/// The method in vtable slot `slot` of `class`.
fn slot_method_name(rtti: &RttiInfo, class: &CppClass, slot: usize) -> Option<String> {
    let class_short = short_name(&class.demangled_name);
    if let Some(name) = own_slot_method(class, slot, class_short) {
        return Some(name);
    }

    // The slot is pure virtual or the class's vtable was not emitted: every
    // primary-base descendant puts its override in the same slot.
    let children = rtti.children_map();
    let mut names = BTreeSet::new();
    let mut seen = BTreeSet::new();
    let mut work = vec![class.typeinfo_addr];
    while let Some(parent) = work.pop() {
        for &child_addr in children.get(&parent).into_iter().flatten() {
            let Some(child) = rtti.classes.get(&child_addr) else {
                continue;
            };
            let primary_base = child
                .bases
                .iter()
                .any(|b| b.typeinfo_addr == parent && b.offset == 0 && !b.is_virtual);
            if !primary_base || !seen.insert(child_addr) {
                continue;
            }
            match own_slot_method(child, slot, class_short) {
                Some(name) => {
                    names.insert(name);
                }
                None => work.push(child_addr),
            }
        }
    }
    let mut names = names.into_iter();
    match (names.next(), names.next()) {
        (Some(name), None) => Some(name),
        _ => None,
    }
}

/// The method `class`'s own primary vtable holds in `slot`. Destructors are
/// renamed for `dtor_class`, the class the call is made through.
fn own_slot_method(class: &CppClass, slot: usize, dtor_class: &str) -> Option<String> {
    let primary = class.vtable_layout.as_ref()?.subtables.first()?;
    let VtableSlotKind::Function {
        name: Some(symbol),
        is_thunk: false,
        ..
    } = primary.functions.get(slot)?
    else {
        return None;
    };
    let demangled = demangle_itanium(symbol)?;
    let name = method_name(&demangled)?;
    Some(if name.starts_with('~') {
        format!("~{dtor_class}")
    } else {
        name.to_string()
    })
}

/// `Dog::speak(void)` gives `speak`; `Foo::bar const(void)` gives `bar`.
fn method_name(demangled: &str) -> Option<&str> {
    let qualified = demangled.split('(').next()?.trim();
    let qualified = qualified.strip_suffix(" const").unwrap_or(qualified);
    let (_, method) = qualified.rsplit_once("::")?;
    (!method.is_empty()).then_some(method)
}

/// The last component of a qualified class name.
fn short_name(qualified: &str) -> &str {
    qualified.rsplit("::").next().unwrap_or(qualified)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{ArchId, BasicBlock, BlockId, Function, IrInsn, Varnode};
    use unlace_loader::{BaseClass, VtableLayout, VtableSubtable};

    use super::*;

    const RAX: u64 = 0;
    const RDI: u64 = 56;
    const ANIMAL_TI: u64 = 0x3d40;
    const DOG_TI: u64 = 0x3d50;
    const CAT_TI: u64 = 0x3d68;

    fn ram() -> Varnode {
        Varnode::constant(SpaceId::Ram as u64, 8)
    }

    fn class(name: &str, typeinfo_addr: u64, base: Option<u64>, slots: &[&str]) -> CppClass {
        let functions: Vec<VtableSlotKind> = slots
            .iter()
            .enumerate()
            .map(|(i, symbol)| VtableSlotKind::Function {
                va: 0x1300 + 0x10 * i as u64,
                name: Some((*symbol).to_string()),
                is_thunk: false,
            })
            .collect();
        CppClass {
            mangled_name: format!("{}{name}", name.len()),
            demangled_name: name.to_string(),
            typeinfo_addr,
            bases: base
                .map(|typeinfo_addr| BaseClass {
                    typeinfo_addr,
                    offset: 0,
                    is_virtual: false,
                    is_public: true,
                })
                .into_iter()
                .collect(),
            vtable_addr: None,
            vtable_methods: Vec::new(),
            vtable_layout: (!functions.is_empty()).then(|| VtableLayout {
                vtable_addr: typeinfo_addr - 0x50,
                total_size: 16 + 8 * functions.len() as u64,
                subtables: vec![VtableSubtable {
                    address_point: typeinfo_addr - 0x40,
                    offset_to_top: 0,
                    rtti_addr: typeinfo_addr,
                    virtual_base_offsets: Vec::new(),
                    functions,
                }],
            }),
        }
    }

    /// `Animal` is abstract and has no emitted vtable; `Dog` and `Cat`
    /// override `speak` (slot 0) and the destructor (slot 1).
    fn animal_rtti() -> RttiInfo {
        let classes = [
            class("Animal", ANIMAL_TI, None, &[]),
            class(
                "Dog",
                DOG_TI,
                Some(ANIMAL_TI),
                &["_ZN3Dog5speakEv", "_ZN3DogD1Ev"],
            ),
            class(
                "Cat",
                CAT_TI,
                Some(ANIMAL_TI),
                &["_ZN3Cat5speakEv", "_ZN3CatD1Ev"],
            ),
        ];
        RttiInfo {
            classes: classes.into_iter().map(|c| (c.typeinfo_addr, c)).collect(),
        }
    }

    /// `obj->vptr[slot]` dispatched by `BRANCHIND`, after `prefix`.
    fn dispatch_ssa(name: &str, prefix: Vec<IrInsn>, object: Varnode, slot: u64) -> SsaFunction {
        let vptr = Varnode::unique(0x100, 8);
        let slot_addr = Varnode::unique(0x108, 8);
        let method = Varnode::unique(0x110, 8);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = prefix;
        bb.insns.extend([
            IrInsn::with_output(IrOp::Load, vptr, smallvec![ram(), object], 0x1010),
            IrInsn::with_output(
                IrOp::IntAdd,
                slot_addr,
                smallvec![vptr, Varnode::constant(slot * 8, 8)],
                0x1014,
            ),
            IrInsn::with_output(IrOp::Load, method, smallvec![ram(), slot_addr], 0x1018),
            IrInsn::without_output(IrOp::Branchind, smallvec![method], 0x101c),
        ]);
        let mut func = Function::new(name, BlockId(0), 0x1000);
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;
        ssa
    }

    fn dispatch_target(ssa: &SsaFunction) -> &TargetSet {
        let (_, target) = ssa
            .indirect_call_targets
            .iter()
            .next()
            .expect("dispatch recorded");
        target
    }

    #[test]
    fn dynamic_cast_result_takes_the_target_class() {
        let rax = Varnode::reg(RAX, 8);
        let cast = IrInsn::with_output(
            IrOp::Call,
            rax,
            smallvec![
                Varnode::constant(0x10b0, 8),
                Varnode::reg(RDI, 8),
                Varnode::constant(ANIMAL_TI, 8),
                Varnode::constant(DOG_TI, 8),
                Varnode::constant(0, 8),
            ],
            0x1000,
        );
        let mut ssa = dispatch_ssa("_Z8identifyP6Animal", vec![cast], rax, 0);

        assert_eq!(resolve_virtual_calls(&mut ssa, Some(&animal_rtti())), 1);
        let TargetSet::VtableSlot {
            receiver,
            class_name,
            slot_idx,
            method,
        } = dispatch_target(&ssa)
        else {
            panic!("expected a vtable dispatch");
        };
        assert_eq!(receiver.map(|sv| sv.base), Some(rax));
        assert_eq!(class_name, "Dog");
        assert_eq!(*slot_idx, 0);
        assert_eq!(method.as_deref(), Some("speak"));
    }

    #[test]
    fn parameter_class_comes_from_the_mangled_signature() {
        let mut ssa = dispatch_ssa("_Z8identifyP6Animal", Vec::new(), Varnode::reg(RDI, 8), 0);

        resolve_virtual_calls(&mut ssa, Some(&animal_rtti()));
        let TargetSet::VtableSlot {
            class_name, method, ..
        } = dispatch_target(&ssa)
        else {
            panic!("expected a vtable dispatch");
        };
        // `Animal` has no vtable of its own; both overrides agree on `speak`.
        assert_eq!(class_name, "Animal");
        assert_eq!(method.as_deref(), Some("speak"));
    }

    #[test]
    fn destructor_slot_is_named_for_the_static_class() {
        let mut ssa = dispatch_ssa("_Z7destroyP6Animal", Vec::new(), Varnode::reg(RDI, 8), 1);

        resolve_virtual_calls(&mut ssa, Some(&animal_rtti()));
        let TargetSet::VtableSlot { method, .. } = dispatch_target(&ssa) else {
            panic!("expected a vtable dispatch");
        };
        assert_eq!(method.as_deref(), Some("~Animal"));
    }

    #[test]
    fn unknown_receiver_class_keeps_the_slot_unnamed() {
        let mut ssa = dispatch_ssa("plain_c_function", Vec::new(), Varnode::reg(RDI, 8), 0);

        assert_eq!(resolve_virtual_calls(&mut ssa, Some(&animal_rtti())), 0);
        let TargetSet::VtableSlot {
            class_name, method, ..
        } = dispatch_target(&ssa)
        else {
            panic!("expected a vtable dispatch");
        };
        assert!(class_name.is_empty());
        assert_eq!(*method, None);
    }

    #[test]
    fn spilled_receiver_takes_the_class_stored_to_its_frame_slot() {
        const RBP: u64 = 40;
        let rax = Varnode::reg(RAX, 8);
        let rbp = Varnode::reg(RBP, 8);
        let slot = Varnode::constant((-0x10i64) as u64, 8);
        let (null_addr, store_addr, load_addr) = (
            Varnode::unique(0x200, 8),
            Varnode::unique(0x208, 8),
            Varnode::unique(0x210, 8),
        );
        let reloaded = Varnode::unique(0x218, 8);
        let prefix = vec![
            IrInsn::with_output(IrOp::IntAdd, null_addr, smallvec![rbp, slot], 0x1000),
            IrInsn::without_output(
                IrOp::Store,
                smallvec![ram(), null_addr, Varnode::constant(0, 8)],
                0x1001,
            ),
            IrInsn::with_output(
                IrOp::Call,
                rax,
                smallvec![
                    Varnode::constant(0x10b0, 8),
                    Varnode::reg(RDI, 8),
                    Varnode::constant(ANIMAL_TI, 8),
                    Varnode::constant(CAT_TI, 8),
                    Varnode::constant(0, 8),
                ],
                0x1002,
            ),
            IrInsn::with_output(IrOp::IntAdd, store_addr, smallvec![rbp, slot], 0x1003),
            IrInsn::without_output(IrOp::Store, smallvec![ram(), store_addr, rax], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, load_addr, smallvec![rbp, slot], 0x1005),
            IrInsn::with_output(IrOp::Load, reloaded, smallvec![ram(), load_addr], 0x1006),
        ];
        let mut ssa = dispatch_ssa("_Z8identifyP6Animal", prefix, reloaded, 0);

        assert_eq!(resolve_virtual_calls(&mut ssa, Some(&animal_rtti())), 1);
        let TargetSet::VtableSlot {
            class_name, method, ..
        } = dispatch_target(&ssa)
        else {
            panic!("expected a vtable dispatch");
        };
        assert_eq!(class_name, "Cat");
        assert_eq!(method.as_deref(), Some("speak"));
    }

    #[test]
    fn signature_and_method_text_parsing() {
        assert_eq!(parameter_types("f(Animal*, int)"), ["Animal*", "int"]);
        assert!(parameter_types("f(void)").is_empty());
        assert_eq!(pointee_class("const Animal*"), Some("Animal"));
        assert_eq!(pointee_class("Animal&"), Some("Animal"));
        assert_eq!(pointee_class("Animal**"), None);
        assert_eq!(pointee_class("int"), None);
        assert_eq!(method_name("Dog::speak(void)"), Some("speak"));
        assert_eq!(method_name("Foo::bar const(int)"), Some("bar"));
        assert_eq!(method_name("free_function(int)"), None);
    }
}
