//! Data cross-reference graph.
//!
//! Sister to [`crate::xref::CallGraph`]: where the call graph tracks
//! function-to-function edges, this module tracks every Load / Store /
//! address-of (Lea) reference *into* the binary's mapped data sections.
//! IDA exposes the same information as `dr_R` (data read) / `dr_W` (data
//! write) / `dr_O` (offset / Lea) cross-reference kinds.
//!
//! ## Design
//!
//! The graph is a pair of [`BTreeMap`]s:
//! * `to[addr]`     → every xref *targeting* `addr` (callers of the global)
//! * `from[(func, block, idx)]` → every xref *originating* at that insn.
//!
//! Reverse + forward are kept in sync at construction; both are queried
//! by the C printer when annotating globals.
//!
//! The builder takes a generic predicate `is_global_addr: Fn(u64) -> bool`
//! rather than a concrete `BinaryImage` reference so this crate stays
//! independent of `unlace-loader`. Callers that have a `BinaryImage` can
//! wrap section-range checks into the closure trivially.

use std::collections::BTreeMap;

use crate::block::BlockId;
use crate::insn::IrInsn;
use crate::op::IrOp;
use crate::space::SpaceId;
use crate::ssa::SsaFunction;

/// Classification of a single data cross-reference.
#[derive(
    Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, serde::Serialize, serde::Deserialize,
)]
pub enum DataXrefKind {
    /// `Load` from the global address (read).
    Read,
    /// `Store` to the global address (write).
    Write,
    /// `IntAdd`/`Ptradd` whose constant base is the global — i.e. the
    /// instruction takes the address of, but does not dereference.
    /// Equivalent to IDA's `dr_O` ("offset reference").
    Lea,
    /// Read at a computed offset whose base is a known jump-table or
    /// array global. Currently produced when a `Load` immediately follows
    /// an `IntAdd(idx, base_const)`.
    TableEntry,
}

/// One data cross-reference: an instruction in some function reads,
/// writes, or takes the address of a global at `to_addr`.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct DataXref {
    pub from_func: u64,
    pub from_insn: (BlockId, usize),
    pub to_addr: u64,
    pub kind: DataXrefKind,
}

/// Bidirectional data-xref database.
///
/// `to[addr]` is the canonical "who references this global?" lookup the
/// printer uses when rendering a global; `from` is the inverse mapping
/// useful for "what does this instruction touch?" queries.
#[derive(Clone, Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct DataXrefGraph {
    to: BTreeMap<u64, Vec<DataXref>>,
    from: BTreeMap<(u64, BlockId, usize), Vec<DataXref>>,
}

impl DataXrefGraph {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn push(&mut self, xref: DataXref) {
        let from_key = (xref.from_func, xref.from_insn.0, xref.from_insn.1);
        self.to.entry(xref.to_addr).or_default().push(xref.clone());
        self.from.entry(from_key).or_default().push(xref);
    }

    /// All xrefs targeting `addr`.
    pub fn xrefs_to(&self, addr: u64) -> &[DataXref] {
        self.to.get(&addr).map(Vec::as_slice).unwrap_or(&[])
    }

    /// All xrefs originating at `(func_addr, block, insn_idx)`.
    pub fn xrefs_from(&self, func_addr: u64, block: BlockId, idx: usize) -> &[DataXref] {
        self.from
            .get(&(func_addr, block, idx))
            .map(Vec::as_slice)
            .unwrap_or(&[])
    }

    /// Number of distinct global addresses with at least one inbound xref.
    pub fn global_count(&self) -> usize {
        self.to.len()
    }

    /// Total number of inbound xref edges across all globals (≥ `global_count`).
    pub fn total_xrefs(&self) -> usize {
        self.to.values().map(Vec::len).sum()
    }

    /// Iterator over every (target_addr, xref) pair.
    pub fn iter(&self) -> impl Iterator<Item = (u64, &DataXref)> {
        self.to
            .iter()
            .flat_map(|(&a, v)| v.iter().map(move |x| (a, x)))
    }

    /// Suggest a printer-friendly name for `addr` derived from a string
    /// lookup closure. The IDA convention is `&aFooBar` for a C-string
    /// global (`"foo bar"` → `aFooBar`). Returns `None` when the closure
    /// has no string for the address or the address has no inbound xrefs.
    pub fn suggest_name(
        &self,
        addr: u64,
        lookup_string: impl Fn(u64) -> Option<&'static str> + Copy,
    ) -> Option<String> {
        if !self.to.contains_key(&addr) {
            return None;
        }
        let s = lookup_string(addr)?;
        Some(format!("&{}", string_to_ida_label(s)))
    }
}

/// Convert a C string into IDA's compact `aXxx` label form: prefix `a`,
/// then each whitespace-delimited word's first letter capitalised, the
/// rest lowercased; non-alphanumerics dropped. `"hello world"` → `"aHelloWorld"`.
pub fn string_to_ida_label(s: &str) -> String {
    let mut out = String::with_capacity(s.len() + 1);
    out.push('a');
    let mut capitalise_next = true;
    for ch in s.chars() {
        if ch.is_ascii_alphanumeric() {
            if capitalise_next {
                out.extend(ch.to_uppercase());
                capitalise_next = false;
            } else {
                out.extend(ch.to_lowercase());
            }
        } else {
            capitalise_next = true;
        }
    }
    if out.len() == 1 {
        // Empty / all-punctuation input → leave the `a` placeholder.
        out.push_str("Empty");
    }
    out
}

/// Build a [`DataXrefGraph`] by walking every instruction of every
/// function and recording references to addresses for which
/// `is_global_addr` returns `true`.
///
/// Pattern matched per insn:
/// * `Load`  with first input in [`SpaceId::Const`] → `Read` xref.
/// * `Store` with first input in [`SpaceId::Const`] → `Write` xref.
/// * `IntAdd` / `Ptradd` whose first input is a const that lives in the
///   global region → `Lea` xref. (We don't try to dereference the result;
///   that's the printer's job.)
pub fn build_data_xref_graph(
    funcs: &BTreeMap<u64, SsaFunction>,
    is_global_addr: impl Fn(u64) -> bool,
) -> DataXrefGraph {
    let mut graph = DataXrefGraph::new();

    for (&fn_addr, ssa) in funcs {
        for (&block_id, block) in &ssa.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                if let Some(kind_addr) = classify(insn, &is_global_addr) {
                    graph.push(DataXref {
                        from_func: fn_addr,
                        from_insn: (block_id, idx),
                        to_addr: kind_addr.1,
                        kind: kind_addr.0,
                    });
                }
            }
        }
    }

    graph
}

fn classify(insn: &IrInsn, is_global_addr: impl Fn(u64) -> bool) -> Option<(DataXrefKind, u64)> {
    let const_input = |i: usize| -> Option<u64> {
        let vn = insn.inputs.get(i)?;
        (vn.space == SpaceId::Const).then_some(vn.offset)
    };
    match insn.op {
        IrOp::Load => {
            // Pcode LOAD has signature LOAD(space_id, addr) — the address
            // is operand 1.
            let addr = const_input(1)?;
            is_global_addr(addr).then_some((DataXrefKind::Read, addr))
        }
        IrOp::Store => {
            // STORE(space_id, addr, value) — the address is operand 1.
            let addr = const_input(1)?;
            is_global_addr(addr).then_some((DataXrefKind::Write, addr))
        }
        IrOp::IntAdd | IrOp::Ptradd => {
            // `&global[idx]` style: one operand is a global constant, the
            // other is a non-const index. Either operand position works.
            for i in 0..insn.inputs.len() {
                if let Some(v) = const_input(i)
                    && is_global_addr(v)
                {
                    return Some((DataXrefKind::Lea, v));
                }
            }
            None
        }
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use crate::ssa::build_ssa;
    use crate::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    const GLOBAL_LO: u64 = 0x40_0000;
    const GLOBAL_HI: u64 = 0x40_2000;

    fn is_global(addr: u64) -> bool {
        (GLOBAL_LO..GLOBAL_HI).contains(&addr)
    }

    fn make_func_with_insns(addr: u64, insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        for insn in insns {
            bb.insns.push(insn);
        }
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            addr + 0x100,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn xref_to_global() {
        let global = 0x40_0010_u64;
        let const_space = Varnode::constant(0, 4); // address-space-id placeholder
        let global_vn = Varnode::constant(global, 8);
        let out = Varnode::reg(0, 8);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![const_space, global_vn], 0x1000);
        let store = IrInsn::without_output(
            IrOp::Store,
            smallvec![const_space, global_vn, Varnode::constant(0xFF, 1)],
            0x1004,
        );
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_func_with_insns(0x1000, vec![load, store]));

        let g = build_data_xref_graph(&funcs, is_global);
        assert_eq!(g.global_count(), 1);
        assert_eq!(g.total_xrefs(), 2);
        let xrefs = g.xrefs_to(global);
        assert!(xrefs.iter().any(|x| x.kind == DataXrefKind::Read));
        assert!(xrefs.iter().any(|x| x.kind == DataXrefKind::Write));
        for x in xrefs {
            assert_eq!(x.from_func, 0x1000);
            assert_eq!(x.to_addr, global);
        }
    }

    #[test]
    fn xref_to_string_literal() {
        // `Lea` of a string literal address recovered through `IntAdd`.
        let lit = 0x40_0500_u64;
        let lit_vn = Varnode::constant(lit, 8);
        let idx = Varnode::reg(0, 8);
        let out = Varnode::reg(8, 8);
        let lea = IrInsn::with_output(IrOp::IntAdd, out, smallvec![lit_vn, idx], 0x1000);
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_func_with_insns(0x1000, vec![lea]));

        let g = build_data_xref_graph(&funcs, is_global);
        let xrefs = g.xrefs_to(lit);
        assert_eq!(xrefs.len(), 1);
        assert_eq!(xrefs[0].kind, DataXrefKind::Lea);
    }

    #[test]
    fn xref_count_aggregates_across_callers() {
        let global = 0x40_0020_u64;
        let const_space = Varnode::constant(0, 4);
        let global_vn = Varnode::constant(global, 8);
        let out = Varnode::reg(0, 8);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![const_space, global_vn], 0x1000);
        let mut funcs = BTreeMap::new();
        for &fn_addr in &[0x1000_u64, 0x2000, 0x3000] {
            funcs.insert(fn_addr, make_func_with_insns(fn_addr, vec![load.clone()]));
        }

        let g = build_data_xref_graph(&funcs, is_global);
        assert_eq!(g.xrefs_to(global).len(), 3);
        let froms: std::collections::BTreeSet<u64> =
            g.xrefs_to(global).iter().map(|x| x.from_func).collect();
        assert_eq!(froms.len(), 3);
        assert!(froms.contains(&0x1000));
        assert!(froms.contains(&0x2000));
        assert!(froms.contains(&0x3000));
    }

    #[test]
    fn name_suggestion_uses_string_content() {
        let global = 0x40_0030_u64;
        let const_space = Varnode::constant(0, 4);
        let global_vn = Varnode::constant(global, 8);
        let out = Varnode::reg(0, 8);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![const_space, global_vn], 0x1000);
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_func_with_insns(0x1000, vec![load]));
        let g = build_data_xref_graph(&funcs, is_global);

        let lookup =
            move |a: u64| -> Option<&'static str> { (a == global).then_some("hello world") };
        assert_eq!(
            g.suggest_name(global, lookup).as_deref(),
            Some("&aHelloWorld")
        );
        // No xrefs to a different address ⇒ no suggestion.
        assert!(g.suggest_name(0xDEAD, lookup).is_none());
    }

    #[test]
    fn string_label_handles_punctuation_and_unicode() {
        assert_eq!(string_to_ida_label("Hello, World!"), "aHelloWorld");
        assert_eq!(string_to_ida_label(""), "aEmpty");
        assert_eq!(string_to_ida_label("foo_bar  baz"), "aFooBarBaz");
    }
}
