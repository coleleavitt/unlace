//! Access collection: split every `LOAD`/`STORE` address into
//! `object + stride * index + offset` and attribute it to a [`MemObject`].
//!
//! Hex-Rays reads the object straight off the ctree (`cot_obj` / a stack
//! `cot_var`, `sub_26B3D0`) and the stride off the first index term
//! (`sub_275B20`). Unlace has no ctree at this point, so it rebuilds the same
//! facts from SSA:
//!
//! * an address is a linear form `konst + Σ coeff · atom` over SSA values;
//! * a frame-base register atom makes it a frame address, otherwise `konst`
//!   must fall inside a data region of [`SsaFunction::data_items`];
//! * every other atom is an index, its coefficient a stride;
//! * a pointer induction variable (`p = φ(&obj + c, p + step)`) is replaced
//!   by its start value plus a `step` stride.
//!
//! An address then belongs to the known item (or stack slot) that contains
//! it. Addresses outside any known item start their own object, and objects
//! indexed with one stride whose starts lie within one stride of each other
//! merge: `g + 4 + 16 * i` and `g + 8 + 16 * i` are two fields of one array.

use std::collections::BTreeMap;

use unlace_ir::data_layout::DataLayout;
use unlace_ir::mem_object::MemObject;
use unlace_ir::ssa::{PhiNode, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::stack::StackSpec;
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId, Varnode};

use super::access::{AccessMap, ObjectAccess};

/// Bound on the SSA def-chain walk for one address.
const MAX_DEPTH: u32 = 32;
/// Bound on nested pointer induction variables (`q = φ(p, q + 4)` inside
/// `p = φ(&g, p + 64)`).
const MAX_IV_NESTING: u32 = 4;
/// `rip` in the x86 register file. RIP-relative addresses are lifted as
/// `rip + absolute target`, so the register contributes nothing.
const X86_IP_OFFSET: u64 = 0x288;

/// The access map plus the frame layout the widening step bounds objects by.
pub(super) struct Collected {
    pub map: AccessMap,
    /// Known stack slots: start offset → size in bytes.
    pub frame_members: BTreeMap<i64, u64>,
}

pub(super) fn collect(func: &SsaFunction) -> Collected {
    let layout = DataLayout::for_arch(func.arch);
    let mut resolver = AddrResolver::new(func);
    let mut raw = Vec::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            let (size, value_slot) = match insn.op {
                IrOp::Load if insn.inputs.len() >= 2 => {
                    (insn.output.map_or(0, |o| o.size), VarnodeSlot::Output)
                }
                IrOp::Store if insn.inputs.len() >= 3 => {
                    (insn.inputs[2].size, VarnodeSlot::Input(2))
                }
                _ => continue,
            };
            if size == 0 {
                continue;
            }
            let Some(addr) = resolver.linear_input((bid, idx), 1, 0) else {
                continue;
            };
            let Some(located) = resolver.locate(addr) else {
                continue;
            };
            let ty = func
                .var_map
                .get(&(bid, idx, value_slot))
                .and_then(|sv| func.var_types.get(sv))
                .copied()
                .filter(|&ty| layout.primitive_size(ty) == Some(u64::from(size)))
                .unwrap_or(PrimitiveType::UnsignedInt(size));
            raw.push(RawAccess {
                place: located.place,
                stride: located.stride,
                descending: located.descending,
                size: u64::from(size),
                ty,
            });
        }
    }
    let frame_members = frame_members(func, &layout);
    let map = attribute(func, &frame_members, raw);
    Collected { map, frame_members }
}

/// Where an address points, before attribution to an object.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Place {
    Global(u64),
    Frame(i64),
}

#[derive(Clone, Copy, Debug)]
struct RawAccess {
    place: Place,
    stride: u64,
    /// The index walks the object downwards (`p -= 4`, `base[15 - i]`).
    descending: bool,
    size: u64,
    ty: PrimitiveType,
}

struct Located {
    place: Place,
    stride: u64,
    descending: bool,
}

/// `konst + Σ coeff · atom`, with wrapping arithmetic like the IR.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
struct Linear {
    konst: i64,
    terms: BTreeMap<SsaVarnode, i64>,
}

impl Linear {
    fn constant(konst: i64) -> Self {
        Self {
            konst,
            terms: BTreeMap::new(),
        }
    }

    fn atom(sv: SsaVarnode) -> Self {
        Self {
            konst: 0,
            terms: BTreeMap::from([(sv, 1)]),
        }
    }

    fn add_scaled(&mut self, other: &Linear, scale: i64) {
        self.konst = self.konst.wrapping_add(other.konst.wrapping_mul(scale));
        for (&sv, &coeff) in &other.terms {
            let entry = self.terms.entry(sv).or_insert(0);
            *entry = entry.wrapping_add(coeff.wrapping_mul(scale));
            if *entry == 0 {
                self.terms.remove(&sv);
            }
        }
    }

    fn scaled(mut self, scale: i64) -> Self {
        let original = std::mem::take(&mut self);
        self.add_scaled(&original, scale);
        self
    }

    fn sum(mut self, other: &Linear, scale: i64) -> Self {
        self.add_scaled(other, scale);
        self
    }
}

struct AddrResolver<'a> {
    func: &'a SsaFunction,
    spec: Option<StackSpec>,
    defs: BTreeMap<SsaVarnode, (BlockId, usize)>,
    phis: BTreeMap<SsaVarnode, &'a PhiNode>,
    linear_memo: BTreeMap<SsaVarnode, Linear>,
    induction_memo: BTreeMap<SsaVarnode, Option<(Linear, i64)>>,
}

impl<'a> AddrResolver<'a> {
    fn new(func: &'a SsaFunction) -> Self {
        let defs = func
            .var_map
            .iter()
            .filter(|((_, _, slot), _)| *slot == VarnodeSlot::Output)
            .map(|(&(bid, idx, _), &sv)| (sv, (bid, idx)))
            .collect();
        let phis = func
            .phi_map
            .values()
            .flatten()
            .map(|phi| (phi.output, phi))
            .collect();
        Self {
            func,
            spec: StackSpec::for_arch(func.arch).or_else(|| StackSpec::for_arch(ArchId::X86_64)),
            defs,
            phis,
            linear_memo: BTreeMap::new(),
            induction_memo: BTreeMap::new(),
        }
    }

    fn is_frame_base(&self, vn: &Varnode) -> bool {
        self.spec
            .as_ref()
            .is_some_and(|spec| spec.is_frame_base(vn))
    }

    fn is_instruction_pointer(&self, vn: &Varnode) -> bool {
        matches!(
            self.func.arch,
            ArchId::X86 | ArchId::X86_64 | ArchId::Unknown(_)
        ) && vn.space == SpaceId::Register
            && vn.offset == X86_IP_OFFSET
    }

    /// Linear form of input `idx` of the instruction at `site`.
    fn linear_input(&mut self, site: (BlockId, usize), idx: usize, depth: u32) -> Option<Linear> {
        let insn = self.func.function.blocks.get(&site.0)?.insns.get(site.1)?;
        let vn = insn.inputs.get(idx)?;
        if vn.space == SpaceId::Const {
            return Some(Linear::constant(sign_extend(vn.offset, vn.size)));
        }
        let sv = *self
            .func
            .var_map
            .get(&(site.0, site.1, VarnodeSlot::Input(idx)))?;
        Some(self.linear(sv, depth + 1))
    }

    /// Linear form of an SSA value. Values the walk cannot see through
    /// (phis, loads, live-ins, frame-base registers, other operations) are
    /// atoms. Frame-base registers stay atoms so frame offsets use the same
    /// base as `stack_vars`.
    fn linear(&mut self, sv: SsaVarnode, depth: u32) -> Linear {
        if let Some(memo) = self.linear_memo.get(&sv) {
            return memo.clone();
        }
        let atom = Linear::atom(sv);
        if depth > MAX_DEPTH || self.is_frame_base(&sv.base) {
            return atom;
        }
        let Some(&site) = self.defs.get(&sv) else {
            return atom;
        };
        // A def chain that loops back on itself resolves to the atom.
        self.linear_memo.insert(sv, atom.clone());
        let lin = self.linear_def(site, depth).unwrap_or(atom);
        self.linear_memo.insert(sv, lin.clone());
        lin
    }

    fn linear_def(&mut self, site: (BlockId, usize), depth: u32) -> Option<Linear> {
        let insn = self.func.function.blocks.get(&site.0)?.insns.get(site.1)?;
        let op = insn.op;
        let const_input = |i: usize| {
            insn.inputs
                .get(i)
                .filter(|vn| vn.space == SpaceId::Const)
                .map(|vn| sign_extend(vn.offset, vn.size))
        };
        let (c0, c1, c2) = (const_input(0), const_input(1), const_input(2));
        match op {
            IrOp::Copy | IrOp::Cast => self.linear_input(site, 0, depth),
            IrOp::IntAdd | IrOp::Ptrsub => {
                let lhs = self.linear_input(site, 0, depth)?;
                let rhs = self.linear_input(site, 1, depth)?;
                Some(lhs.sum(&rhs, 1))
            }
            IrOp::IntSub => {
                let lhs = self.linear_input(site, 0, depth)?;
                let rhs = self.linear_input(site, 1, depth)?;
                Some(lhs.sum(&rhs, -1))
            }
            IrOp::IntMult => match (c0, c1) {
                (Some(k), _) => Some(self.linear_input(site, 1, depth)?.scaled(k)),
                (_, Some(k)) => Some(self.linear_input(site, 0, depth)?.scaled(k)),
                _ => None,
            },
            IrOp::IntLeft => {
                let shift = c1.filter(|s| (0..63).contains(s))?;
                Some(self.linear_input(site, 0, depth)?.scaled(1 << shift))
            }
            IrOp::Ptradd => {
                let base = self.linear_input(site, 0, depth)?;
                let index = self.linear_input(site, 1, depth)?;
                Some(base.sum(&index, c2?))
            }
            _ => None,
        }
    }

    /// `(start, step)` of a pointer induction variable `φ(start, φ + step)`.
    fn induction(&mut self, phi_out: SsaVarnode) -> Option<(Linear, i64)> {
        if let Some(memo) = self.induction_memo.get(&phi_out) {
            return memo.clone();
        }
        self.induction_memo.insert(phi_out, None);
        let result = self.induction_uncached(phi_out);
        self.induction_memo.insert(phi_out, result.clone());
        result
    }

    fn induction_uncached(&mut self, phi_out: SsaVarnode) -> Option<(Linear, i64)> {
        let phi = *self.phis.get(&phi_out)?;
        let mut start: Option<Linear> = None;
        let mut step: Option<i64> = None;
        for &(_, input) in &phi.inputs {
            let lin = self.linear(input, 0);
            match lin.terms.get(&phi_out) {
                Some(1) if lin.terms.len() == 1 => {
                    if lin.konst == 0 {
                        continue;
                    }
                    if step.is_some_and(|s| s != lin.konst) {
                        return None;
                    }
                    step = Some(lin.konst);
                }
                Some(_) => return None,
                None => {
                    if start.as_ref().is_some_and(|s| *s != lin) {
                        return None;
                    }
                    start = Some(lin);
                }
            }
        }
        Some((start?, step?))
    }

    /// Replace pointer induction variables by their start values, collecting
    /// their steps as strides.
    fn expand(&mut self, lin: Linear, nesting: u32, strides: &mut Vec<i64>) -> Option<Linear> {
        let mut out = Linear::constant(lin.konst);
        for (&atom, &coeff) in &lin.terms {
            match self.induction(atom) {
                Some((start, step)) if nesting < MAX_IV_NESTING => {
                    strides.push(step.wrapping_mul(coeff));
                    let start = self.expand(start, nesting + 1, strides)?;
                    out.add_scaled(&start, coeff);
                }
                Some(_) => return None,
                None => out.add_scaled(&Linear::atom(atom), coeff),
            }
        }
        Some(out)
    }

    fn locate(&mut self, addr: Linear) -> Option<Located> {
        let mut strides = Vec::new();
        let lin = self.expand(addr, 0, &mut strides)?;
        let mut frame = false;
        let mut unit_atoms = Vec::new();
        for (&atom, &coeff) in &lin.terms {
            if coeff == 1 && self.is_frame_base(&atom.base) {
                if frame {
                    return None;
                }
                frame = true;
            } else if coeff == 1 && self.is_instruction_pointer(&atom.base) {
            } else if coeff == 1 {
                unit_atoms.push(atom);
            } else {
                strides.push(coeff);
            }
        }
        // One unscaled atom is a byte index; two cannot be told apart from a
        // pointer plus a byte index.
        match unit_atoms.as_slice() {
            [] => {}
            [index] => {
                if !frame && self.func.var_types.get(index) == Some(&PrimitiveType::Ptr) {
                    return None;
                }
                strides.push(1);
            }
            _ => return None,
        }
        let place = if frame {
            Place::Frame(lin.konst)
        } else {
            let addr = lin.konst as u64;
            self.func.data_items.region_end(addr)?;
            Place::Global(addr)
        };
        let step = strides
            .into_iter()
            .filter(|&s| s != 0)
            .min_by_key(|s| s.unsigned_abs());
        Some(Located {
            place,
            stride: step.map_or(0, i64::unsigned_abs),
            descending: step.is_some_and(|s| s < 0),
        })
    }
}

fn sign_extend(value: u64, size: u8) -> i64 {
    let bits = u32::from(size).saturating_mul(8);
    if bits == 0 || bits >= 64 {
        return value as i64;
    }
    let shift = 64 - bits;
    ((value << shift) as i64) >> shift
}

/// Known stack slots from stack variable recovery and the frame layout.
fn frame_members(func: &SsaFunction, layout: &DataLayout) -> BTreeMap<i64, u64> {
    let mut members: BTreeMap<i64, u64> = BTreeMap::new();
    for (&offset, var) in &func.stack_vars {
        let size = layout.primitive_size(var.ty).unwrap_or(1).max(1);
        let entry = members.entry(offset).or_insert(0);
        *entry = (*entry).max(size);
    }
    if let Some(frame) = &func.stack_frame {
        for (&offset, local) in &frame.locals {
            let entry = members.entry(offset).or_insert(0);
            *entry = (*entry).max(local.size.max(1));
        }
    }
    members
}

/// Attribute raw accesses to objects and record them.
fn attribute(
    func: &SsaFunction,
    frame_members: &BTreeMap<i64, u64>,
    raw: Vec<RawAccess>,
) -> AccessMap {
    let items = &func.data_items;
    let mut map = AccessMap::default();
    // Accesses outside any known item or slot, by kind and address.
    let mut loose_globals: BTreeMap<i128, Vec<RawAccess>> = BTreeMap::new();
    let mut loose_frames: BTreeMap<i128, Vec<RawAccess>> = BTreeMap::new();

    for access in raw {
        match access.place {
            Place::Global(addr) => match items.item_containing(addr) {
                Some((start, _)) => {
                    record(&mut map, MemObject::Global(start), addr - start, access)
                }
                None => loose_globals
                    .entry(i128::from(addr))
                    .or_default()
                    .push(access),
            },
            Place::Frame(off) => match member_containing(frame_members, off) {
                Some(start) => record(
                    &mut map,
                    MemObject::Frame(start),
                    off.abs_diff(start),
                    access,
                ),
                None => loose_frames
                    .entry(i128::from(off))
                    .or_default()
                    .push(access),
            },
        }
    }

    let next_global_item = |addr: i128| {
        u64::try_from(addr)
            .ok()
            .and_then(|a| items.next_item_after(a))
            .map(i128::from)
    };
    for (anchor, members) in merge_loose(loose_globals, next_global_item) {
        for (delta, access) in members {
            record(&mut map, MemObject::Global(anchor as u64), delta, access);
        }
    }
    let next_slot = |off: i128| {
        frame_members
            .range(i64::try_from(off).ok()?.checked_add(1)?..)
            .next()
            .map(|(&start, _)| i128::from(start))
    };
    for (anchor, members) in merge_loose(loose_frames, next_slot) {
        for (delta, access) in members {
            record(&mut map, MemObject::Frame(anchor as i64), delta, access);
        }
    }
    map
}

fn record(map: &mut AccessMap, object: MemObject, offset: u64, access: RawAccess) {
    map.record(
        object,
        ObjectAccess {
            offset,
            stride: access.stride,
            size: access.size,
            ty: access.ty,
        },
    );
}

fn member_containing(members: &BTreeMap<i64, u64>, off: i64) -> Option<i64> {
    let (&start, &size) = members.range(..=off).next_back()?;
    (off.abs_diff(start) < size).then_some(start)
}

/// Group loose accesses into objects. Each address starts an object, except
/// that an address indexed with the same smallest stride as the last indexed
/// object, with no known item starting in between, joins it when it lies
/// within one stride of its start, or when its index walks downwards from an
/// element boundary of it (`p = &buf[15]; ...; p -= 1`).
fn merge_loose(
    loose: BTreeMap<i128, Vec<RawAccess>>,
    next_known_start: impl Fn(i128) -> Option<i128>,
) -> Vec<(i128, Vec<(u64, RawAccess)>)> {
    let mut objects: Vec<(i128, Vec<(u64, RawAccess)>)> = Vec::new();
    // Start, stride and index in `objects` of the last indexed object.
    let mut anchor: Option<(i128, u64, usize)> = None;
    for (start, accesses) in loose {
        let stride = accesses.iter().map(|a| a.stride).filter(|&s| s != 0).min();
        let descending = accesses.iter().any(|a| a.descending);
        let target = match (anchor, stride) {
            (Some((base, base_stride, idx)), Some(s)) if s == base_stride => {
                let distance = start - base;
                let s = i128::from(s);
                let in_reach = distance < s || (descending && distance % s == 0);
                let unblocked = next_known_start(base).is_none_or(|known| known > start);
                (in_reach && unblocked).then_some((base, idx))
            }
            _ => None,
        };
        if let Some((base, idx)) = target {
            let delta = (start - base) as u64;
            objects[idx]
                .1
                .extend(accesses.into_iter().map(|a| (delta, a)));
            continue;
        }
        if let Some(s) = stride {
            anchor = Some((start, s, objects.len()));
        }
        objects.push((start, accesses.into_iter().map(|a| (0, a)).collect()));
    }
    objects
}
