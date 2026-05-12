//! ObjC `objc_msgSend` dispatch recognition.
//!
//! On ARM64, ObjC method calls go through `objc_msgSend(self, selector, ...)`.
//! This pass detects `CALL` instructions targeting known `objc_msgSend` stub
//! addresses and annotates them with `objc_msgSend(self, selector)`.
//!
//! When ObjC class metadata + a class-symbol → name map is provided, the pass
//! also resolves `objc_msgSend(_OBJC_CLASS_$_Foo, @selector(bar:))` to the
//! bracket form `[Foo bar:]` so the printer can emit it directly.

use std::collections::BTreeMap;

use unlace_ir::IrOp;
use unlace_ir::ssa::SsaFunction;
use unlace_loader::ObjcCategory;

use crate::pass::{Pass, PassError};

const OBJC_MSGSEND_NAMES: &[&str] = &[
    "_objc_msgSend",
    "objc_msgSend",
    "_objc_msgSendSuper",
    "objc_msgSendSuper",
    "_objc_msgSendSuper2",
    "objc_msgSendSuper2",
    "_objc_msgSend_stret",
    "objc_msgSend_stret",
];

pub struct ObjcDispatchPass {
    pub msgsend_addrs: BTreeMap<u64, String>,
    /// Map from class-symbol VA to class name. Populated from `_OBJC_CLASS_$_*`
    /// symbol entries — when arg0 of msgSend traces to a Load of one of these
    /// addresses the receiver is that class.
    pub class_symbols: BTreeMap<u64, String>,
    /// Map from string-literal VA to selector text, populated from
    /// `__objc_methname` entries.
    pub selector_strings: BTreeMap<u64, String>,
    /// Map from category-method IMP address to its owning `(class, category)`.
    /// Built from `ObjcInfo.categories` via `with_categories`.
    pub category_methods: BTreeMap<u64, (String, String)>,
    /// Reverse lookup keyed by `(class, selector)` → category name. Used by
    /// the render layer when arg-tracing yields a class+selector pair to
    /// decide whether to emit `[Class(Category) sel:]`.
    pub category_lookup: BTreeMap<(String, String), String>,
}

impl ObjcDispatchPass {
    pub fn new() -> Self {
        Self {
            msgsend_addrs: BTreeMap::new(),
            class_symbols: BTreeMap::new(),
            selector_strings: BTreeMap::new(),
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        }
    }

    pub fn from_plt_symbols(plt_symbols: &BTreeMap<u64, String>) -> Self {
        let mut msgsend_addrs = BTreeMap::new();
        for (&addr, name) in plt_symbols {
            if OBJC_MSGSEND_NAMES.iter().any(|&n| name.contains(n)) {
                msgsend_addrs.insert(addr, name.clone());
            }
        }
        Self {
            msgsend_addrs,
            class_symbols: BTreeMap::new(),
            selector_strings: BTreeMap::new(),
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        }
    }

    /// Builder: register `_OBJC_CLASS_$_*` symbols so receiver classes can be
    /// resolved by VA.
    pub fn with_class_symbols(mut self, class_symbols: BTreeMap<u64, String>) -> Self {
        self.class_symbols = class_symbols;
        self
    }

    /// Builder: register `__objc_methname` strings so selectors can be
    /// resolved by VA.
    pub fn with_selector_strings(mut self, selector_strings: BTreeMap<u64, String>) -> Self {
        self.selector_strings = selector_strings;
        self
    }

    /// Builder: register all category methods from `__objc_catlist`. Each
    /// instance- or class-method's IMP address is recorded with its owning
    /// `(class_name, category_name)` so the render layer can emit the
    /// `[Class(Category) selector:]` bracket form. Categories whose owning
    /// class couldn't be resolved (no `class_name`) are skipped.
    pub fn with_categories(mut self, categories: &[ObjcCategory]) -> Self {
        for cat in categories {
            let Some(class) = cat.class_name.as_deref() else {
                continue;
            };
            for method in cat.instance_methods.iter().chain(cat.class_methods.iter()) {
                self.category_methods
                    .insert(method.imp_addr, (class.to_string(), cat.name.clone()));
                self.category_lookup
                    .insert((class.to_string(), method.name.clone()), cat.name.clone());
            }
        }
        self
    }
}

/// Trace `sv` backwards through Copy / Load instructions in `func` to find
/// a constant address it ultimately loads from. Returns `Some(addr)` when
/// the chain bottoms out at a `Load` of a Const-space input; `None` otherwise.
fn trace_const_load_addr(func: &SsaFunction, target_sv: unlace_ir::ssa::SsaVarnode) -> Option<u64> {
    use unlace_ir::ssa::VarnodeSlot;

    let mut current = target_sv;
    for _ in 0..8 {
        let mut found: Option<(unlace_ir::BlockId, usize)> = None;
        for ((bid, idx, slot), v) in &func.var_map {
            if matches!(slot, VarnodeSlot::Output) && *v == current {
                found = Some((*bid, *idx));
                break;
            }
        }
        let (bid, idx) = found?;
        let block = func.function.blocks.get(&bid)?;
        let insn = block.insns.get(idx)?;
        match insn.op {
            IrOp::Copy => {
                if insn.inputs.len() == 1 && insn.inputs[0].space == unlace_ir::SpaceId::Const {
                    return Some(insn.inputs[0].offset);
                }
                let next = func.var_map.get(&(bid, idx, VarnodeSlot::Input(0)))?;
                current = *next;
            }
            IrOp::Load => {
                if insn.inputs.len() >= 2 && insn.inputs[1].space == unlace_ir::SpaceId::Const {
                    return Some(insn.inputs[1].offset);
                }
                return None;
            }
            _ => return None,
        }
    }
    None
}

impl Pass for ObjcDispatchPass {
    fn name(&self) -> &str {
        "objc-dispatch"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        if self.msgsend_addrs.is_empty() {
            return Ok(false);
        }

        let mut found = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            for (i, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }

                if insn.inputs.is_empty() {
                    continue;
                }

                let target = insn.inputs[0];
                if target.space != unlace_ir::SpaceId::Const {
                    continue;
                }

                let target_addr = target.offset;
                if let Some(variant) = self.msgsend_addrs.get(&target_addr) {
                    let annotation = resolve_call(
                        func,
                        bid,
                        i,
                        variant,
                        &self.class_symbols,
                        &self.selector_strings,
                        &self.category_lookup,
                    );
                    found.insert((bid, i), annotation);
                }
            }
        }

        if found.is_empty() {
            return Ok(false);
        }

        func.objc_dispatch_calls.extend(found);
        Ok(true)
    }
}

fn resolve_call(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    variant: &str,
    class_symbols: &BTreeMap<u64, String>,
    selector_strings: &BTreeMap<u64, String>,
    category_lookup: &BTreeMap<(String, String), String>,
) -> String {
    use unlace_ir::ssa::VarnodeSlot;

    if class_symbols.is_empty() && selector_strings.is_empty() {
        return format!("// {variant}(self, selector)");
    }

    let arg0_sv = func.var_map.get(&(bid, idx, VarnodeSlot::Input(1)));
    let arg1_sv = func.var_map.get(&(bid, idx, VarnodeSlot::Input(2)));

    let class_name = arg0_sv
        .and_then(|sv| trace_const_load_addr(func, *sv))
        .and_then(|addr| class_symbols.get(&addr))
        .cloned();
    let selector = arg1_sv
        .and_then(|sv| trace_const_load_addr(func, *sv))
        .and_then(|addr| selector_strings.get(&addr))
        .cloned();

    match (class_name, selector) {
        (Some(cls), Some(sel)) => match category_lookup.get(&(cls.clone(), sel.clone())) {
            Some(cat) => format!("[{cls}({cat}) {sel}]"),
            None => format!("[{cls} {sel}]"),
        },
        _ => format!("// {variant}(self, selector)"),
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn test_detect_objc_msgsend() {
        let msgsend_addr: u64 = 0x2000;

        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(msgsend_addr, 8)],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
            class_symbols: BTreeMap::new(),
            selector_strings: BTreeMap::new(),
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        };

        let changed = pass.run(&mut ssa).expect("pass succeeds");
        assert!(changed, "should detect objc_msgSend call");

        let key = (BlockId(0), 0);
        let annotation = ssa
            .objc_dispatch_calls
            .get(&key)
            .expect("annotation recorded");
        assert!(
            annotation.contains("objc_msgSend"),
            "annotation should mention objc_msgSend, got: {annotation}"
        );
    }

    #[test]
    fn test_no_msgsend_no_change() {
        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x3000, 8)],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);
        let pass = ObjcDispatchPass::new();

        let changed = pass.run(&mut ssa).expect("pass succeeds");
        assert!(!changed);
        assert!(ssa.objc_dispatch_calls.is_empty());
    }

    #[test]
    fn test_from_plt_symbols() {
        let mut plt = BTreeMap::new();
        plt.insert(0x5000, "_objc_msgSend".to_string());
        plt.insert(0x5010, "printf".to_string());
        plt.insert(0x5020, "_objc_msgSendSuper2".to_string());

        let pass = ObjcDispatchPass::from_plt_symbols(&plt);
        assert_eq!(pass.msgsend_addrs.len(), 2);
        assert!(pass.msgsend_addrs.contains_key(&0x5000));
        assert!(pass.msgsend_addrs.contains_key(&0x5020));
    }

    #[test]
    fn t108_resolves_class_method_via_classref() {
        let msgsend_addr: u64 = 0x2000;
        let class_addr: u64 = 0x10000;
        let sel_addr: u64 = 0x20000;

        let rdi = Varnode::reg(0, 8);
        let rsi = Varnode::reg(8, 8);
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);

        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                rdi,
                smallvec![space, Varnode::constant(class_addr, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                rsi,
                smallvec![space, Varnode::constant(sel_addr, 8)],
                0x1004,
            ),
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(msgsend_addr, 8), rdi, rsi],
                0x1008,
            ),
        ];

        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let mut classes = BTreeMap::new();
        classes.insert(class_addr, "Foo".to_string());
        let mut sels = BTreeMap::new();
        sels.insert(sel_addr, "bar:".to_string());

        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
            class_symbols: classes,
            selector_strings: sels,
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        };
        pass.run(&mut ssa).expect("ok");

        let ann = ssa
            .objc_dispatch_calls
            .values()
            .next()
            .expect("annotation recorded");
        assert_eq!(ann, "[Foo bar:]", "expected bracket form, got {ann}");
    }

    #[test]
    fn t108_falls_back_when_class_unknown() {
        let msgsend_addr: u64 = 0x2000;
        let unknown_class: u64 = 0xDEAD;

        let rdi = Varnode::reg(0, 8);
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);

        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                rdi,
                smallvec![space, Varnode::constant(unknown_class, 8)],
                0x1000,
            ),
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(msgsend_addr, 8), rdi],
                0x1004,
            ),
        ];
        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let mut classes = BTreeMap::new();
        classes.insert(0x10000, "Foo".to_string());

        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
            class_symbols: classes,
            selector_strings: BTreeMap::new(),
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        };
        pass.run(&mut ssa).expect("ok");

        let ann = ssa.objc_dispatch_calls.values().next().expect("recorded");
        assert!(ann.starts_with("// "), "should fall back, got {ann}");
    }

    #[test]
    fn test_callind_not_matched() {
        let msgsend_addr: u64 = 0x2000;

        let insns = vec![IrInsn::without_output(
            IrOp::Callind,
            smallvec![Varnode::constant(msgsend_addr, 8)],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
            class_symbols: BTreeMap::new(),
            selector_strings: BTreeMap::new(),
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        };

        let changed = pass.run(&mut ssa).expect("pass succeeds");
        assert!(!changed, "CALLIND should not be matched (only CALL)");
    }

    fn make_category(class: &str, cat: &str, method: &str, imp: u64) -> ObjcCategory {
        ObjcCategory {
            name: cat.to_string(),
            class_addr: 0xDEAD_BEEF,
            class_name: Some(class.to_string()),
            instance_methods: vec![unlace_loader::ObjcMethod {
                name: method.to_string(),
                type_encoding: "v@:".to_string(),
                imp_addr: imp,
            }],
            class_methods: Vec::new(),
            properties: Vec::new(),
            protocols: Vec::new(),
        }
    }

    #[test]
    fn dispatch_pass_populates_category_methods() {
        let cat1 = make_category("MyClass", "MyCat", "extraMethod", 0x9000);
        let cat2 = make_category("OtherClass", "Helpers", "doThing", 0x9100);
        let pass = ObjcDispatchPass::new().with_categories(&[cat1, cat2]);

        assert_eq!(pass.category_methods.len(), 2);
        assert_eq!(
            pass.category_methods.get(&0x9000),
            Some(&("MyClass".to_string(), "MyCat".to_string()))
        );
        assert_eq!(pass.category_lookup.len(), 2);
        assert_eq!(
            pass.category_lookup
                .get(&("MyClass".to_string(), "extraMethod".to_string())),
            Some(&"MyCat".to_string())
        );
    }

    #[test]
    fn category_method_renders_with_paren() {
        // Build a function: rdi = Load 0x10000 (class symbol), rsi = Load 0x20000
        // (selector string), then Call objc_msgSend(rdi, rsi).
        let msgsend_addr: u64 = 0x2000;
        let class_va: u64 = 0x10000;
        let sel_va: u64 = 0x20000;

        let rdi = Varnode::reg(0, 8);
        let rsi = Varnode::reg(48, 8);
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                rdi,
                smallvec![space, Varnode::constant(class_va, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                rsi,
                smallvec![space, Varnode::constant(sel_va, 8)],
                0x1004,
            ),
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(msgsend_addr, 8), rdi, rsi],
                0x1008,
            ),
        ];
        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let mut classes = BTreeMap::new();
        classes.insert(class_va, "MyClass".to_string());
        let mut selectors = BTreeMap::new();
        selectors.insert(sel_va, "extraMethod".to_string());

        let cat = make_category("MyClass", "MyCat", "extraMethod", 0x9000);
        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
            class_symbols: classes,
            selector_strings: selectors,
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        }
        .with_categories(&[cat]);
        pass.run(&mut ssa).expect("ok");

        let ann = ssa.objc_dispatch_calls.values().next().expect("recorded");
        assert_eq!(ann, "[MyClass(MyCat) extraMethod]");
    }

    #[test]
    fn base_class_method_renders_without_paren() {
        let msgsend_addr: u64 = 0x2000;
        let class_va: u64 = 0x10000;
        let sel_va: u64 = 0x20000;

        let rdi = Varnode::reg(0, 8);
        let rsi = Varnode::reg(48, 8);
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                rdi,
                smallvec![space, Varnode::constant(class_va, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                rsi,
                smallvec![space, Varnode::constant(sel_va, 8)],
                0x1004,
            ),
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(msgsend_addr, 8), rdi, rsi],
                0x1008,
            ),
        ];
        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let mut classes = BTreeMap::new();
        classes.insert(class_va, "MyClass".to_string());
        let mut selectors = BTreeMap::new();
        selectors.insert(sel_va, "baseMethod".to_string());

        // Note: no category for "baseMethod" — should render plainly.
        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
            class_symbols: classes,
            selector_strings: selectors,
            category_methods: BTreeMap::new(),
            category_lookup: BTreeMap::new(),
        };
        pass.run(&mut ssa).expect("ok");

        let ann = ssa.objc_dispatch_calls.values().next().expect("recorded");
        assert_eq!(ann, "[MyClass baseMethod]");
    }
}
