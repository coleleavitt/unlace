//! (kuna `tlsnames`) Name an ELF executable's static TLS variables at their
//! thread-pointer offsets.
//!
//! A local-exec access to a `__thread` variable is a load through the thread
//! pointer at a constant offset: on x86-64 `mov eax, fs:[-0x10]`, which the
//! SLEIGH constructors lower to `FS_OFFSET + -0x10`, and which renders as
//! `*(int *)(v1 + -0x10)` with `v1` an untyped `fs_offset` input. The offset is
//! fixed by the TLS ABI: the x86 ABIs (variant II) put the executable's TLS
//! block, `PT_TLS` with its alignment, immediately below the thread pointer, so
//! the variable whose `STT_TLS` value is `v` sits at `v - align_up(memsz, align)`.
//!
//! The loader reads `PT_TLS` and the `STT_TLS` symbols into a [`TlsLayout`]. In
//! a function that reaches the thread-pointer register only at constant
//! offsets inside the block (so never the thread control block above it: the
//! `fs:[0x28]` stack canary keeps its form), the register input gets a type-locked Symbol `tls`: a pointer RELATIVE to
//! a `__tls_block` structure (the TLS symbols at their values, the rest holes),
//! pointing at the block's end. The thread pointer is one past the block, so
//! the access renders `tls[-1].counter`.
//!
//! AArch64 uses TLS variant I: `tpidr_el0` points at a 16-byte thread control
//! block and the executable's block follows it at `align_up(16, p_align)`
//! (`TlsLayout::tcb`), so a variable is at `tp + tcb + value`. There the
//! symbol's type is a plain pointer to a `__tls_block` that starts with the
//! control block, and the access renders `tls->counter`. A relocatable
//! object's block is its `SHF_TLS` sections in order, the layout the loader
//! uses for the TLSLE relocations. An image with no TLS symbols has no layout.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::dtype::{Datatype, TypeFactory, TypeField, type_metatype};
use crate::funcdata::Funcdata;
use crate::varnode::varnode_flags;

pub const TLS_SYMBOL_NAME: &str = "tls";
const BLOCK_NAME: &str = "__tls_block";

/// The static TLS block of an executable.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct TlsLayout {
    /// `align_up(PT_TLS.p_memsz, PT_TLS.p_align)`: the thread pointer's
    /// distance above the block start.
    pub block_size: u64,
    /// `(offset in the block, size, name)`, sorted, non-overlapping.
    pub vars: Vec<(u64, u64, String)>,
    /// TLS variant I (AArch64): the block's distance above the thread pointer,
    /// `align_up(16, p_align)`; 0 for variant II (x86), where the block sits
    /// below it.
    pub tcb: u64,
}

impl TlsLayout {
    /// From the `PT_TLS` size and alignment and the `STT_TLS` symbols
    /// `(value, size, name)`.
    pub fn new(memsz: u64, align: u64, mut symbols: Vec<(u64, u64, String)>) -> Option<Self> {
        let align = align.max(1);
        let block_size = memsz.div_ceil(align) * align;
        symbols.sort();
        symbols.dedup_by(|b, a| b.0 == a.0);
        let mut vars: Vec<(u64, u64, String)> = Vec::new();
        for (off, size, name) in symbols {
            let size = size.max(1);
            if off + size > block_size
                || vars.last().is_some_and(|l| l.0 + l.1 > off)
                || name.is_empty()
            {
                continue;
            }
            vars.push((off, size, name));
        }
        (block_size > 0 && !vars.is_empty() && block_size <= 1 << 24).then_some(TlsLayout {
            block_size,
            vars,
            tcb: 0,
        })
    }

    /// The variant I layout (AArch64): the block follows a 16-byte thread
    /// control block, at the block's alignment.
    pub fn variant1(memsz: u64, align: u64, symbols: Vec<(u64, u64, String)>) -> Option<Self> {
        let mut layout = TlsLayout::new(memsz, align, symbols)?;
        layout.tcb = 16u64.div_ceil(align.max(1)) * align.max(1);
        Some(layout)
    }

    /// The thread-pointer offsets the block's variables live at:
    /// `[-block_size, 0)` below the pointer (variant II) or
    /// `[tcb, tcb + block_size)` above it (variant I).
    fn offsets(&self) -> (i64, i64) {
        if self.tcb == 0 {
            (-(self.block_size as i64), 0)
        } else {
            (self.tcb as i64, (self.tcb + self.block_size) as i64)
        }
    }
}

/// The thread-pointer register: `tpidr_el0` on AArch64 (a variant I
/// layout), `FS_OFFSET` on x86-64, `GS_OFFSET` on x86.
fn thread_pointer(data: &Funcdata, variant1: bool) -> Option<(Address, int4)> {
    let manage = data.get_arch().manage();
    let addr_size = manage.get_default_code_space()?.get_addr_size() as int4;
    let name = match (variant1, addr_size) {
        (true, 8) => "tpidr_el0",
        (false, 8) => "FS_OFFSET",
        (false, 4) => "GS_OFFSET",
        _ => return None,
    };
    let st = manage.register_lookup()?.probe_register(name)?;
    if st.size as int4 != addr_size {
        return None;
    }
    Some((Address::new(st.space.clone()?, st.offset), addr_size))
}

/// Does the function reach the register only at constant offsets inside the
/// TLS block (`TlsLayout::offsets`)? A read of the thread control block (the
/// `fs:[0x28]` stack canary, `fs:[0]` self pointer, AArch64's `tp[0..16)`) or
/// any other use declines.
fn only_block_offsets(data: &Funcdata, reg: &Address, size: int4, (lo, hi): (i64, i64)) -> bool {
    let end = reg + size as i64;
    let mut read = false;
    for vn in data.vbank().iter_loc_addr_range(reg, &end) {
        let Some(v) = data.vbank().get(vn) else {
            continue;
        };
        if v.get_addr() != reg || v.get_size() != size {
            continue;
        }
        for op in v.descend_iter().filter_map(|o| data.obank().get(o)) {
            read = true;
            if op.code() != OpCode::CPUI_INT_ADD {
                return false;
            }
            let constant = (0..op.num_input())
                .filter_map(|i| op.get_in(i).and_then(|id| data.vbank().get(id)))
                .find(|c| c.is_constant())
                .map(|c| c.get_offset() as i64);
            let Some(mut off) = constant else {
                return false;
            };
            if size == 4 {
                off = i64::from(off as i32);
            }
            if off < lo || off >= hi {
                return false;
            }
        }
    }
    read
}

fn block_type(types: &dyn TypeFactory, layout: &TlsLayout, ptr: int4) -> Option<Rc<Datatype>> {
    // variant I: the block starts with the thread control block and the
    // pointer points at its start
    let size = (layout.tcb + layout.block_size) as int4;
    let plain = |block: Rc<Datatype>| types.get_type_pointer(ptr, block, 1).ok();
    if let Some(existing) = types.find_by_name(BLOCK_NAME).ok()? {
        if layout.tcb != 0 {
            return (existing.get_metatype() == type_metatype::TYPE_STRUCT
                && existing.get_size() == size)
                .then(|| plain(existing))
                .flatten();
        }
        return (existing.get_metatype() == type_metatype::TYPE_STRUCT
            && existing.get_size() == size)
            .then(|| {
                types
                    .get_type_pointer_rel(
                        types.get_type_pointer(ptr, Rc::clone(&existing), 1).ok()?,
                        existing,
                        size,
                    )
                    .ok()
            })
            .flatten();
    }
    let fields: Vec<TypeField> = layout
        .vars
        .iter()
        .enumerate()
        .filter_map(|(i, (off, sz, name))| {
            let ty = match sz {
                1 | 2 | 4 | 8 => types
                    .get_base(*sz as int4, type_metatype::TYPE_UNKNOWN)
                    .ok()?,
                n => types
                    .get_type_array(
                        *n as int4,
                        types.get_base(1, type_metatype::TYPE_UNKNOWN).ok()?,
                    )
                    .ok()?,
            };
            Some(TypeField::new(
                i as int4,
                (layout.tcb + *off) as int4,
                name.as_str(),
                ty,
            ))
        })
        .collect();
    let shell = types.get_type_struct(BLOCK_NAME).ok()?;
    let block = types
        .set_fields_struct_raw(&shell, fields, Vec::new(), size, 1, 0)
        .ok()?;
    if layout.tcb != 0 {
        return plain(block);
    }
    let parent = types.get_type_pointer(ptr, Rc::clone(&block), 1).ok()?;
    types.get_type_pointer_rel(parent, block, size).ok()
}

/// (kuna) `ActionTlsNames` -- map the relative `tls` pointer over the
/// thread-pointer register input (option `tlsnames`).
pub struct ActionTlsNames {
    base: ActionBase,
}

impl ActionTlsNames {
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionTlsNames {
            base: ActionBase::new(crate::action::ruleflags::rule_onceperfunc, "tlsnames", g),
        })
    }
}

impl Action for ActionTlsNames {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        if !grouplist.contains(self.get_group()) {
            return None;
        }
        Some(Box::new(ActionTlsNames {
            base: self.base.clone(),
        }))
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        let Some(layout) = data.get_arch().kuna_states.get_rc::<TlsLayout>() else {
            return 0;
        };
        let Some((reg, size)) = thread_pointer(data, layout.tcb != 0) else {
            return 0;
        };
        if !only_block_offsets(data, &reg, size, layout.offsets()) {
            return 0;
        }
        let mapped = data
            .get_scope_local()
            .and_then(|lm| lm.containing_symbol_for_storage(&reg))
            .is_some();
        if mapped {
            return 0;
        }
        let Some(ct) = data
            .get_arch()
            .types()
            .and_then(|t| block_type(t, &layout, size))
        else {
            return 0;
        };
        let usepoint = data.get_address() + -1;
        let Some(lm) = data.get_scope_local_mut() else {
            return 0;
        };
        let name = if lm.local_name_used(TLS_SYMBOL_NAME) {
            ""
        } else {
            TLS_SYMBOL_NAME
        };
        let Ok(sym) = lm.add_symbol(name, ct, &reg, &usepoint) else {
            return 0;
        };
        let mut lock = varnode_flags::typelock;
        if !name.is_empty() {
            lock |= varnode_flags::namelock;
        }
        lm.set_attribute(sym, lock);
        1
    }
}

crate::kuna_flag!(
    /// (kuna) Gate the static-TLS naming (`tlsnames`); default on.
    Tlsnames,
    "tlsnames",
    "Gate the static-TLS naming (`tlsnames`); default on.",
    unset: false,
    shipped: true
);

crate::kuna_arch_state!(TlsLayout);

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn layout_rounds_the_block_and_drops_overlaps() {
        let l = TlsLayout::new(
            0x54,
            0x10,
            vec![
                (0x50, 4, "counter".into()),
                (0, 8, "hits".into()),
                (0x10, 64, "buf".into()),
                (0x12, 2, "inner".into()),
            ],
        )
        .unwrap();
        assert_eq!(l.block_size, 0x60);
        let names: Vec<&str> = l.vars.iter().map(|v| v.2.as_str()).collect();
        assert_eq!(names, ["hits", "buf", "counter"]);
    }

    #[test]
    fn variant1_puts_the_block_after_the_control_block() {
        let l =
            TlsLayout::variant1(0xc, 8, vec![(0, 8, "tl2".into()), (8, 4, "tl".into())]).unwrap();
        assert_eq!((l.tcb, l.block_size), (16, 16));
        assert_eq!(l.offsets(), (16, 32));
        let l = TlsLayout::variant1(4, 64, vec![(0, 4, "x".into())]).unwrap();
        assert_eq!(l.tcb, 64);
    }
}
