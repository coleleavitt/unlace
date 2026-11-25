//! S1 Mach-O Objective-C metadata recovery (`ObjcMetadataPass`).
//!
//! The unlace analog of Ghidra's `ObjcTypeMetadataAnalyzer` (the name-recovery
//! half): parse the `__objc_*` ObjC 2.0 metadata web entirely out of the loaded
//! Mach-O image and recover **method names**, so a stripped IMP renders
//! `-[Greeter greet:]` / `+[Greeter classMethod]` instead of `sub_<addr>`.
//!
//! # The walk (design §3.2)
//!
//! ```text
//!   __objc_classlist  (array of class_t*)
//!     └─ class_t        isa=metaclass, data=class_ro_t* (& FAST_DATA_MASK)
//!          ├─ class_ro_t.name         → class name ("Greeter")
//!          ├─ class_ro_t.baseMethods  → method_list_t (the `-` instance methods)
//!          └─ class_t.isa → metaclass class_ro_t.baseMethods (the `+` methods)
//!               method_list_t → per method_t: selector, types, IMP (function VA)
//! ```
//!
//! Both `method_list_t` forms are handled (`methods.rs`): the **large absolute**
//! 64-bit form (§3.2's MVP target) and the **small/relative** form a modern clang
//! emits — handling the latter is what makes the bare-toolchain fixture name end
//! to end.
//!
//! # What it emits
//!
//! - **`out.fid_names`** — the IMP function **rename** `-[Class sel]` / `+[Class
//!   sel]`, the label-gated placeholder rename (the FID precedent: the commit seam
//!   only overwrites an engine `sub_*`/`FUN_*` placeholder, never a real symbol).
//! - **`out.symbols`** — an `_OBJC_CLASS_$_<name>` Data symbol per class + the IMP
//!   as a Function symbol (so the function exists for the rename to bind to even
//!   when it is reachable *only* through the metadata, not a call edge or
//!   `LC_FUNCTION_STARTS`) + a selector Data symbol per distinct selector.
//! - **`out.data_objects`** / **`out.const_ranges`** — the `selRef_`/`classRef_`/
//!   `superRef_` reference slots and the `objc_msgSend$<sel>` stubs
//!   (`objcrefs.rs`), with the rebase slots reported constant.
//!
//! # Gating
//!
//! Default-OFF (`--option objc`, the `fid` precedent), Mach-O-format gated (the
//! pass is registered only for a Mach-O target in `passes.rs`), real-binary-path
//! only. Selectors are plain ASCII, except a Swift-mangled one, which
//! `methods::display_selector` demangles to its name form. A non-Mach-O / no-
//! `__objc_*` image yields an empty output, so every parity gate is byte-identical
//! by construction.
//!
//! # Scope (this PR — design §5 PR-O1)
//!
//! x86-64, no chained fixups. The arm64 + `LC_DYLD_CHAINED_FIXUPS` resolver
//! (PR-O0/O2) is deferred: on a chained-fixup image the raw `__objc_*` slots are
//! packed fixup entries, not addresses, so the walk reads garbage and emits
//! nothing (still safe — additive, never wrong-renames). ObjC v1 / dyld-shared-
//! cache extraction / method-type prototypes / `objc_msgSend` overrides are also
//! deferred (design §3.2 LOSS).

pub mod classt;
pub mod encoding;
mod objcblocks;
mod objccache;
pub mod objccats;
pub mod objcdirect;
pub mod objcivars;
mod objcruntime;
mod swiftclassnames;
use swiftclassnames::display_class_name;
pub mod methods;
pub mod objcprops;
pub mod objcprotos;
pub mod objcrefs;
pub mod objcsdk;
pub mod sections;

use std::collections::HashMap;
use std::rc::Rc;

use object::read::Object;

use crate::pass::{
    AnalysisCtx, AnalysisOutput, AnalysisPass, ConstGate, ConstRange, DataObjectFact, FidMatch,
    Phase, SymFact, SymKind,
};
use encoding::TypeCtx;
use sections::MachoImage;

/// The Mach-O Objective-C metadata pass (gate id `objc`, default-off).
///
/// Pure over `ctx` (reads `ctx.file` sections only), additive, never failing —
/// the standard analysis-pass contract. Inert on every non-Mach-O / no-ObjC
/// image.
#[derive(Default)]
pub struct ObjcMetadataPass;

impl AnalysisPass for ObjcMetadataPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "objc"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        // Mach-O only (belt-and-suspenders on top of the format gate in passes.rs).
        if ctx.file.format() != object::BinaryFormat::MachO {
            return out;
        }
        // Resolve LC_DYLD_CHAINED_FIXUPS (PR-O0) so an arm64(e) image's __objc_*
        // pointer slots dereference to real addresses, not packed fixup entries.
        // Empty (no-op) on a classic x86-64 LC_DYLD_INFO Mach-O — the walk then
        // reads raw section words exactly as the x86-64 PR-O1 path did, and the
        // classic bind program names its import slots instead.
        let fixups = crate::loader::format::macho::resolve_chained_fixups(ctx.file, ctx.bytes);
        let binds = if fixups.is_chained() {
            HashMap::new()
        } else {
            crate::loader::format::macho::resolve_dyld_info_binds(ctx.file, ctx.bytes)
        };
        let mut img = MachoImage::with_fixups(ctx.file, fixups)
            .with_binds(binds)
            .with_method_symbols(ctx.file);
        if let Some(cache) = ctx.image_path.and_then(objccache::CacheReader::open) {
            let base = cache.selector_base();
            img = img.with_cache(Rc::new(move |va, n| cache.read(va, n)), base);
        }
        let architecture = ctx.file.architecture();

        // The type-mapping context for IMP/ivar prototypes (PR-O2).
        let (ptr_size, word_size) = ctx.arch.data_org();
        let tctx = TypeCtx::new(ctx.arch.types(), ptr_size, word_size);
        let sdk = match unlace_decomp::objcsdk::sdk_path() {
            Some(root) => objcsdk::read(&root, &objcsdk::linked_frameworks(ctx.file, ctx.bytes)),
            None => objcsdk::Sdk::default(),
        };
        let mut selectors = objcrefs::Selectors::with_sdk(sdk.signatures);
        out.prototypes_at.extend(objcruntime::prototypes(
            ctx.file, ctx.bytes, ctx.arch, &tctx,
        ));

        // Walk `__objc_classlist`: an array of `class_t*` (stride = ptr size). The
        // classes are read first so every instance layout is known before any
        // method is typed — a subclass embeds its local superclass's struct.
        let mut classes: Vec<(classt::ClassT, String)> = Vec::new();
        for (cl_addr, cl_data) in img.classlists(ctx.file) {
            let ps = img.ptr_size() as usize;
            for (i, _) in cl_data.chunks_exact(ps).enumerate() {
                let Some(class_ptr) = img.read_ptr(cl_addr.wrapping_add((i * ps) as u64)) else {
                    continue;
                };
                let Some(class) = classt::read_class_t(&img, class_ptr) else {
                    continue;
                };
                let Some(name) = classt::class_name(&img, class.ro) else {
                    continue;
                };
                classes.push((class, name));
            }
        }
        // The layouts are built only under `objcivars` (its load-time half): off,
        // no class struct is interned and no offset variable reported constant.
        let objcivars = unlace_decomp::objcivars::objcivars_enabled();
        // A Swift class's layout is left to `swifttypes` when the image carries
        // field descriptors and the Swift pass runs on it (the image reads as
        // Swift): they give the Swift names and types the ivar list encodes as
        // nothing. The record is declared here (the typed `self`, the `@"…"`
        // pointers) and completed there. Otherwise the ivar list builds it.
        let swifttypes = unlace_decomp::loadoptions::swifttypes_enabled()
            && ctx
                .file
                .section_by_name(super::swift::descriptors::MACHO_SECTIONS.fieldmd)
                .is_some()
            && crate::sourcelang::effective_compiler(ctx.file, ctx.bytes)
                == crate::sourcelang::Compiler::Swift;
        let layouts: HashMap<String, objcivars::Layout> = classes
            .iter()
            .filter(|_| objcivars)
            .filter(|(_, name)| !(swifttypes && swiftclassnames::is_swift_runtime_name(name)))
            .filter_map(|(class, name)| {
                objcivars::layout(&img, class, name).map(|l| (name.clone(), l))
            })
            .collect();
        let structs = objcivars::Structs::build(&tctx, &layouts);
        let categories = objccats::categories(&img, ctx.file);

        // Every declaration's encoding first — methods and properties of classes,
        // metaclasses, categories and protocols — so a getter emitted below takes
        // the class-naming spelling its own property gives it whichever class
        // comes first.
        for (class, name) in &classes {
            let meta_ro = classt::metaclass_ro(&img, class.isa);
            for ro in [Some(class.ro), meta_ro].into_iter().flatten() {
                for list in classt::method_lists(&img, ro) {
                    for m in methods::walk_method_list(&img, list, architecture) {
                        selectors.record(&m.selector, m.types.as_deref());
                    }
                }
                if let Some(list) = classt::base_properties(&img, ro) {
                    for (sel, enc) in objcprops::declarations(&img, list) {
                        selectors.record_for_class(name, &sel, &enc);
                    }
                }
            }
        }
        for cat in &categories {
            for list in [cat.instance_methods, cat.class_methods]
                .into_iter()
                .flatten()
            {
                for m in methods::walk_method_list(&img, list, architecture) {
                    selectors.record(&m.selector, m.types.as_deref());
                }
            }
            for list in [cat.instance_properties, cat.class_properties]
                .into_iter()
                .flatten()
            {
                for (sel, enc) in objcprops::declarations(&img, list) {
                    match &cat.class {
                        Some(class) => selectors.record_for_class(class, &sel, &enc),
                        None => selectors.record(&sel, Some(&enc)),
                    }
                }
            }
        }
        let protocols = objcprotos::protocols(&img, ctx.file);
        for proto in &protocols {
            for m in &proto.methods {
                selectors.record_declared(&m.selector, m.types.as_deref());
            }
            for (sel, enc) in &proto.properties {
                selectors.record_declared(sel, Some(enc));
            }
        }

        let mut table = unlace_decomp::objcrettype::ObjcClassTable::default();
        for (class, name) in &classes {
            let shown = display_class_name(name);
            table.class_at.insert(class.addr, shown.clone());
            table.classes.entry(shown).or_default().superclass =
                classt::superclass_name(&img, class.addr).map(|s| display_class_name(&s));
        }
        add_sdk_classes(&mut table, sdk.classes, ctx.file, &tctx);
        out.objc_classes = Some(table);
        for (class, name) in &classes {
            out.symbols.push(SymFact {
                addr: class.addr,
                name: format!("_OBJC_CLASS_$_{name}"),
                kind: SymKind::Data,
            });
            let self_type = objcivars.then(|| structs.self_type(&tctx, name)).flatten();
            for list in classt::method_lists(&img, class.ro) {
                self.emit_methods(
                    &img,
                    &tctx,
                    architecture,
                    name,
                    '-',
                    list,
                    self_type.as_ref(),
                    &mut selectors,
                    &mut out,
                );
            }
            for list in classt::metaclass_ro(&img, class.isa)
                .map(|ro| classt::method_lists(&img, ro))
                .unwrap_or_default()
            {
                self.emit_methods(
                    &img,
                    &tctx,
                    architecture,
                    name,
                    '+',
                    list,
                    None,
                    &mut selectors,
                    &mut out,
                );
            }
            if let Some(ivar_list) = classt::base_ivars(&img, class.ro) {
                emit_ivars(
                    &classt::walk_ivar_list(&img, ivar_list),
                    name,
                    objcivars,
                    &mut out,
                );
            }
        }

        for cat in &categories {
            let self_type = cat
                .class
                .as_deref()
                .filter(|_| objcivars)
                .and_then(|c| structs.self_type(&tctx, c));
            if let Some(list) = cat.instance_methods {
                self.emit_methods(
                    &img,
                    &tctx,
                    architecture,
                    &cat.label,
                    '-',
                    list,
                    self_type.as_ref(),
                    &mut selectors,
                    &mut out,
                );
            }
            if let Some(list) = cat.class_methods {
                self.emit_methods(
                    &img,
                    &tctx,
                    architecture,
                    &cat.label,
                    '+',
                    list,
                    None,
                    &mut selectors,
                    &mut out,
                );
            }
        }
        objcdirect::emit(
            &img,
            architecture,
            &tctx,
            objcivars.then_some(&structs),
            &mut out,
        );
        for proto in &protocols {
            out.symbols.push(SymFact {
                addr: proto.addr,
                name: format!("_OBJC_PROTOCOL_$_{}", proto.name),
                kind: SymKind::Data,
            });
            for m in &proto.methods {
                if m.selector_va != 0 {
                    selectors.name(&mut out, m.selector_va, &m.selector);
                }
            }
        }
        let refs = objcrefs::emit(&img, ctx.file, ctx.arch, &tctx, &mut selectors, &mut out);
        objcblocks::emit(&img, ctx.file, &tctx, &mut out);
        {
            use object::ObjectSymbol;
            let mut creators: Vec<(u64, String)> = out
                .fid_names
                .iter()
                .map(|f| (f.addr, f.name.clone()))
                .collect();
            creators.extend(
                ctx.file
                    .symbols()
                    .filter(|s| s.kind() == object::SymbolKind::Text && s.address() != 0)
                    .filter_map(|s| {
                        Some((
                            s.address(),
                            s.name().ok()?.trim_start_matches('_').to_string(),
                        ))
                    }),
            );
            objcblocks::stack_blocks(&img, ctx.file, ctx.bytes, &tctx, &creators, &mut out);
        }
        if let Some(table) = out.objc_classes.as_mut() {
            table
                .selector_at
                .extend(selectors.strings.iter().map(|(va, s)| (*va, s.clone())));
            table
                .selref_at
                .extend(selectors.slots.iter().map(|(va, s)| (*va, s.clone())));
        }

        // A chained slot holds its packed fixup word until `dynrelocs` unpacks it
        // at load.
        out.const_ranges
            .extend(refs.into_iter().map(|(first, last_open)| ConstRange {
                first,
                last_open,
                gate: ConstGate::ObjcRefs,
            }));
        out
    }
}

/// (unlace `objcresolve`) The SDK classes a send of this image can reach: every
/// class it imports (`_OBJC_CLASS_$_NSNumber`) or subclasses, with their
/// superclasses. Their records are declared so a result typed by one of them,
/// or by a class one of their methods returns, is that class's pointer.
fn add_sdk_classes(
    table: &mut unlace_decomp::objcrettype::ObjcClassTable,
    mut sdk: HashMap<String, unlace_decomp::objcrettype::ObjcClass>,
    file: &object::File,
    tctx: &TypeCtx,
) {
    use object::read::ObjectSymbol;
    use unlace_decomp::objcrettype::ObjcReturn;
    if sdk.is_empty() {
        return;
    }
    let mut wanted: Vec<String> = table
        .classes
        .values()
        .filter_map(|c| c.superclass.clone())
        .collect();
    for symbol in file.symbols().filter(|s| s.is_undefined()) {
        let Ok(name) = symbol.name() else { continue };
        if let Some(class) = name.trim_start_matches('_').strip_prefix("OBJC_CLASS_$_") {
            wanted.push(class.to_string());
        }
    }
    let mut returned = std::collections::BTreeSet::new();
    while let Some(name) = wanted.pop() {
        if table.classes.contains_key(&name) {
            continue;
        }
        let Some(class) = sdk.remove(&name) else {
            continue;
        };
        wanted.extend(class.superclass.clone());
        returned.extend(class.methods.values().filter_map(|m| match &m.returns {
            Some(ObjcReturn::Class(c)) => Some(c.clone()),
            _ => None,
        }));
        returned.insert(name.clone());
        table.classes.insert(name, class);
    }
    for class in &returned {
        tctx.opaque_ptr(class);
    }
}

impl ObjcMetadataPass {
    /// Emit the rename + function/selector symbols + (PR-O2) the typed prototype
    /// for one method list. `kind` is `-` (instance) or `+` (class); `class` is the
    /// label stem, `Greeter` or `Greeter(Extra)`. `self_type` is the class's own
    /// struct pointer, recorded apart from the prototype so `objcivars` decides
    /// at the commit whether `self` is typed by it.
    fn emit_methods(
        &self,
        img: &MachoImage,
        tctx: &TypeCtx,
        architecture: object::Architecture,
        class: &str,
        kind: char,
        list_va: u64,
        self_type: Option<&Rc<unlace_decomp::dtype::Datatype>>,
        selectors: &mut objcrefs::Selectors,
        out: &mut AnalysisOutput,
    ) {
        let owner = class.split('(').next().unwrap_or(class);
        let shown = format!("{}{}", display_class_name(owner), &class[owner.len()..]);
        for m in methods::walk_method_list(img, list_va, architecture) {
            selectors.record(&m.selector, m.types.as_deref());
            if m.imp == 0 {
                continue;
            }
            // `-[Greeter greet:]` / `+[Greeter classMethod]` — the ObjC method name
            // the printer renders, a Swift class under its demangled name. A symbol
            // spelling the same method under another category name is kept.
            let label = match img.method_symbol(m.imp, kind, owner, &m.selector) {
                Some(symbol) => symbol.to_string(),
                None => format!("{kind}[{shown} {sel}]", sel = m.selector),
            };
            if img.in_cache() && img.read(m.imp, 4).is_none() {
                out.import_slot_names.push((m.imp, label));
                continue;
            }

            // The IMP must exist as a function for the rename to bind, even when it
            // is reachable ONLY through the metadata (no call edge / no
            // LC_FUNCTION_STARTS). The idempotent SymFact add is a no-op if the
            // function already exists, and the placeholder name it installs is what
            // the fid_names rename then overwrites.
            out.symbols.push(SymFact {
                addr: m.imp,
                name: label.clone(),
                kind: SymKind::Function,
            });
            // The label-gated rename (the FID precedent): overwrite the engine's
            // own sub_*/FUN_* placeholder with the ObjC method name, never a real
            // symbol.
            out.fid_names.push(FidMatch {
                addr: m.imp,
                name: label.clone(),
                by_signature: false,
            });
            if let Some(table) = out.objc_classes.as_mut() {
                let shown_owner = display_class_name(owner);
                table
                    .classes
                    .entry(shown_owner)
                    .or_default()
                    .methods
                    .insert(
                        (kind == '+', m.selector.clone()),
                        unlace_decomp::objcrettype::ObjcMethod {
                            label: label.clone(),
                            imp: m.imp,
                            returns: None,
                        },
                    );
            }

            // The typed prototype from the ObjC type encoding (PR-O2): `i20@0:8i16`
            // → `int -[Greeter greet:](id self, SEL _cmd, int n)`. Keyed by the
            // IMP label name (the commit seam matches `pieces.name` against the
            // FunctionSymbol installed above with that same `-[Class sel]` name).
            // Best-effort — an unparseable / absent encoding leaves the IMP *named*
            // (above) but untyped, never a failure.
            // The spelling the class's own property gives the selector, else the
            // method's own: another class's property of the same selector says
            // nothing about this class's return type.
            let enc = selectors
                .encoding_for_class(owner, &m.selector)
                .map(str::to_string)
                .or_else(|| m.types.clone());
            if let Some(enc) = enc.as_deref() {
                if let Some(pieces) = encoding::decode_method(&label, enc, tctx, None) {
                    out.prototypes.push(pieces);
                    if let Some(st) = self_type {
                        out.objc_self_types.push((label.clone(), Rc::clone(st)));
                    }
                }
            }

            // A Data symbol on the selector string itself, so the selector text is
            // named in the listing (`sel_greet_` etc.). Best-effort: only when the
            // selector VMA is separately recoverable.
            if m.selector_va != 0 {
                selectors.name(out, m.selector_va, &m.selector);
            }
        }
    }
}

/// The `<Class>::<ivar>` data object on each ivar's offset variable, sized to
/// the `u32` the method loads so the access binds the name, and the slot
/// reported constant under `objcivars` so the load folds to the layout offset.
fn emit_ivars(ivars: &[classt::Ivar], class: &str, objcivars: bool, out: &mut AnalysisOutput) {
    for iv in ivars {
        out.data_objects.push(DataObjectFact {
            addr: iv.offset_va,
            name: format!("{}::{}", display_class_name(class), iv.name),
            size: 4,
        });
        let Some(last_open) = iv.offset_va.checked_add(4).filter(|_| objcivars) else {
            continue;
        };
        out.const_ranges.push(ConstRange {
            first: iv.offset_va,
            last_open,
            gate: ConstGate::ObjcIvars,
        });
    }
}

/// Turn a selector (`greet:`, `setFoo:bar:`) into a symbol-name-safe token for a
/// `sel_<...>` Data symbol: colons → underscores, every other non-alphanumeric →
/// underscore. The selector text itself is preserved in the IMP rename label.
fn sanitize_selector(sel: &str) -> String {
    sel.chars()
        .map(|c| if c.is_ascii_alphanumeric() { c } else { '_' })
        .collect()
}

#[cfg(test)]
mod tests;
