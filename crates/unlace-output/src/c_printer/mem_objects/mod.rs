//! Memory objects retyped as a whole by `ObjectWidenPass`: global data items
//! and stack frame regions with a synthesised array, array-of-struct or
//! `fld_N` struct type ([`SsaFunction::object_types`], passed in through
//! [`PrinterAnnotations::object_types`]).
//!
//! Hex-Rays applies such a type to the object itself, so every later access
//! prints through it: `stru_404080[i].fld_1` instead of
//! `*(_DWORD *)(16 * i + 0x404084)`. This module owns the printer's view of
//! the objects: their names, which object an address lands in, how an access
//! walks the object's type ([`path`]), and their C declarations ([`decl`]).
//! The access itself is rebuilt by `cpa::try_object_access`, alongside the
//! typed-pointer case.
//!
//! A frame object takes over its frame range from stack-slot recovery
//! ([`claim_frame_objects`]), so the range is declared once, with the
//! object's type, and every access into it goes through the object.
//!
//! [`SsaFunction::object_types`]: unlace_ir::ssa::SsaFunction::object_types
//! [`PrinterAnnotations::object_types`]: super::PrinterAnnotations::object_types

mod decl;
mod path;

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::data_layout::DataLayout;
use unlace_ir::mem_object::MemObject;
use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::Type;
use unlace_ir::{ArchId, SpaceId};
use unlace_struct::HirFunction;

pub use decl::dedupe_object_declarations;
pub(super) use decl::{local_declaration, preamble};
pub(super) use path::{Fit, ObjectPath, Step, resolve};

use super::{
    PrintCtx, StackSlotName, fallback_stack_name, stack_frame_offset_is_visible_local,
    trace_stack_text,
};

/// One object as the printer declares and names it.
#[derive(Debug, Clone)]
pub(super) struct ObjectInfo {
    pub(super) ty: Type,
    /// Byte size; `None` for an array of unknown length.
    pub(super) size: Option<u64>,
    /// The identifier the object prints as.
    pub(super) name: String,
}

/// The function's typed memory objects.
#[derive(Debug, Clone)]
pub(super) struct MemObjects {
    objects: BTreeMap<MemObject, ObjectInfo>,
    layout: DataLayout,
    /// Objects an access has been printed through. Only these globals are
    /// declared: a jump table whose loads became a `switch` needs none.
    used: BTreeSet<MemObject>,
}

impl Default for MemObjects {
    fn default() -> Self {
        Self::new(&BTreeMap::new(), None, &BTreeMap::new())
    }
}

impl MemObjects {
    /// Name every object: a global after its symbol or, like IDA's dummy
    /// names, after its type and address (`stru_404080`, `dword_404040`); a
    /// frame object after the frame slot it starts at, once
    /// [`claim_frame_objects`] has claimed it.
    pub(super) fn new(
        types: &BTreeMap<MemObject, Type>,
        arch: Option<ArchId>,
        symbols: &BTreeMap<u64, String>,
    ) -> Self {
        let layout = DataLayout::for_arch(arch.unwrap_or(ArchId::X86_64));
        let objects = types
            .iter()
            .map(|(&object, ty)| {
                let name = match object {
                    MemObject::Global(addr) => symbols
                        .get(&addr)
                        .cloned()
                        .unwrap_or_else(|| format!("{}_{addr:X}", dummy_prefix(ty, &layout))),
                    MemObject::Frame(off) => fallback_stack_name(off, 0, true),
                };
                let info = ObjectInfo {
                    ty: ty.clone(),
                    size: layout.type_size(ty),
                    name,
                };
                (object, info)
            })
            .collect();
        Self {
            objects,
            layout,
            used: BTreeSet::new(),
        }
    }

    pub(super) fn mark_used(&mut self, object: MemObject) {
        self.used.insert(object);
    }

    pub(super) fn is_empty(&self) -> bool {
        self.objects.is_empty()
    }

    pub(super) fn layout(&self) -> &DataLayout {
        &self.layout
    }

    /// The object containing the byte at `place`, with the byte's offset in
    /// it. An array of unknown length only contains its first element: the
    /// pass gave it no bound because it is reached through a variable
    /// index, so its later bytes may belong to anything.
    pub(super) fn containing(&self, place: MemObject) -> Option<(MemObject, &ObjectInfo, u64)> {
        let lowest = match place {
            MemObject::Global(_) => MemObject::Global(0),
            MemObject::Frame(_) => MemObject::Frame(i64::MIN),
        };
        let (&object, info) = self.objects.range(lowest..=place).next_back()?;
        let offset = match (object, place) {
            (MemObject::Global(start), MemObject::Global(addr)) => addr - start,
            (MemObject::Frame(start), MemObject::Frame(off)) => off.abs_diff(start),
            _ => return None,
        };
        let extent = info.size.or_else(|| match &info.ty {
            Type::Array { element, .. } => self.layout.type_size(element),
            _ => None,
        })?;
        (offset < extent).then_some((object, info, offset))
    }

    fn frames(&self) -> impl Iterator<Item = (i64, &ObjectInfo)> {
        self.objects
            .iter()
            .filter_map(|(&object, info)| match object {
                MemObject::Frame(off) => Some((off, info)),
                MemObject::Global(_) => None,
            })
    }

    /// Frame objects in `[start, end)` order with their byte range.
    pub(super) fn frame_ranges(&self) -> impl Iterator<Item = (i64, i64, &ObjectInfo)> {
        self.frames().filter_map(|(off, info)| {
            let end = off.checked_add(i64::try_from(info.size?).ok()?)?;
            Some((off, end, info))
        })
    }

    /// `true` when `offset` lies inside a frame object.
    pub(super) fn frame_covers(&self, offset: i64) -> bool {
        self.frame_ranges()
            .any(|(start, end, _)| (start..end).contains(&offset))
    }
}

/// IDA's dummy-name prefix for an item of type `ty`: `stru` for structs and
/// arrays of them, otherwise after the scalar (element) type.
fn dummy_prefix(ty: &Type, layout: &DataLayout) -> &'static str {
    match ty {
        Type::Array { element, .. } => dummy_prefix(element, layout),
        Type::Struct { .. } | Type::Union { .. } => "stru",
        Type::Primitive(PrimitiveType::Float) => "flt",
        Type::Primitive(PrimitiveType::Double) => "dbl",
        Type::Primitive(PrimitiveType::Ptr) | Type::Ptr(_) => "off",
        Type::Primitive(p) => match layout.primitive_size(*p) {
            Some(1) => "byte",
            Some(2) => "word",
            Some(4) => "dword",
            Some(8) => "qword",
            Some(16) => "xmmword",
            _ => "unk",
        },
        _ => "unk",
    }
}

/// Give each frame object its frame range: drop the stack slots, promoted
/// buffers and synthesised scalars inside it and register the object as the
/// one slot there, named after the slot it starts at.
///
/// The slot is registered as a scalar so the legacy address paths take its
/// address (`&buf_144`, `(char *)&buf_144 + 8`) instead of decaying it like a
/// `char` buffer, which would scale a byte offset by the element size.
///
/// An object is left to stack-slot recovery when its length is unknown, when
/// it overlaps a saved-register or canary slot, or when debug info declares a
/// local inside it: the declared local is the better type.
pub(super) fn claim_frame_objects(func: &HirFunction, ctx: &mut PrintCtx) {
    let claims: Vec<(i64, i64)> = ctx
        .mem_objects
        .frame_ranges()
        .map(|(start, end, _)| (start, end))
        .collect();
    let mut kept = BTreeMap::new();
    for (start, end) in claims {
        let range = start..end;
        let declared_by_debug = ctx
            .stack_lvars
            .range(range.clone())
            .any(|(_, ann)| ann.from_debug)
            || ctx
                .dwarf_array_buffer_decls
                .range(range.clone())
                .next()
                .is_some();
        let suppressed = ctx
            .suppressed_stack_offsets
            .range(range.clone())
            .next()
            .is_some();
        if declared_by_debug || suppressed || !stack_frame_offset_is_visible_local(func, start) {
            trace_stack_text(format_args!(
                "frame-object-skip offset={start} end={end} debug={declared_by_debug} suppressed={suppressed}"
            ));
            continue;
        }
        let size = start.abs_diff(end);
        let name = ctx
            .stack_frame_slots
            .get(&start)
            .map(|slot| slot.name.clone())
            .unwrap_or_else(|| fallback_stack_name(start, size, true));
        trace_stack_text(format_args!(
            "frame-object-claim offset={start} end={end} name={name}"
        ));
        ctx.stack_frame_slots.retain(|off, _| !range.contains(off));
        ctx.promoted_stack_buffers
            .retain(|off, _| !range.contains(off));
        ctx.synthetic_stack_scalars
            .retain(|off, _| !range.contains(off));
        ctx.name_overrides
            .retain(|vn, _| vn.space != SpaceId::Stack || !range.contains(&(vn.offset as i64)));
        ctx.stack_frame_slots.insert(
            start,
            StackSlotName {
                name: name.clone(),
                size,
                is_buffer: false,
            },
        );
        ctx.has_stack_address_targets = true;
        kept.insert(start, name);
    }
    ctx.mem_objects.objects.retain(|object, info| match object {
        MemObject::Frame(off) => match kept.get(off) {
            Some(name) => {
                info.name = name.clone();
                true
            }
            None => false,
        },
        MemObject::Global(_) => true,
    });
}
