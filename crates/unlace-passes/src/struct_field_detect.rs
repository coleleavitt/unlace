//! Struct field detection from repeated base-plus-constant memory accesses.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

const MAX_STRUCT_FIELDS: usize = 32;

pub struct StructFieldDetectPass;

impl Pass for StructFieldDetectPass {
    fn name(&self) -> &str {
        "struct-field-detect"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let before = func.composite_var_types.clone();
        let def_map = build_def_map(func);
        let mut accesses: BTreeMap<SsaVarnode, BTreeMap<u64, FieldAccessSummary>> =
            BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                let Some((access_size, access_type)) = access_type(func, bid, insn_idx, insn) else {
                    continue;
                };
                let Some((base, offset)) = struct_access_base(func, &def_map, bid, insn_idx, insn)
                else {
                    continue;
                };

                accesses
                    .entry(base)
                    .or_default()
                    .entry(offset)
                    .or_default()
                    .record(access_size, access_type);
            }
        }

        for (base, fields_by_offset) in accesses {
            if fields_by_offset.len() < 2 || fields_by_offset.len() > MAX_STRUCT_FIELDS {
                continue;
            }

            let fields = fields_by_offset
                .into_iter()
                .map(|(offset, summary)| field_for_offset(offset, summary))
                .collect();

            func.composite_var_types.insert(
                base,
                Type::Struct {
                    name: format!("struct_{:x}", base.base.offset),
                    fields,
                },
            );
        }

        Ok(func.composite_var_types != before)
    }
}

fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, (BlockId, usize)> {
    let mut def_map = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if let Some(output) = insn.output {
                def_map.insert(output, (bid, insn_idx));
            }
        }
    }
    def_map
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
struct FieldAccessType {
    size: u8,
    ty: PrimitiveType,
}

#[derive(Clone, Debug, Default)]
struct FieldAccessSummary {
    max_size: u8,
    types: BTreeSet<FieldAccessType>,
}

impl FieldAccessSummary {
    fn record(&mut self, access_size: u8, ty: PrimitiveType) {
        self.max_size = self.max_size.max(access_size);
        self.types.insert(FieldAccessType {
            size: access_size,
            ty,
        });
    }

    fn has_incompatible_types(&self) -> bool {
        incompatible_type_alternatives(&self.types).len() >= 2
    }
}

fn access_type(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<(u8, PrimitiveType)> {
    match insn.op {
        IrOp::Load if insn.inputs.len() >= 2 => {
            let output = insn.output?;
            let ty = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Output))
                .and_then(|sv| func.var_types.get(sv).copied())
                .unwrap_or_else(|| field_type(output.size));
            Some((output.size, normalize_access_type(ty, output.size)))
        }
        IrOp::Store if insn.inputs.len() >= 3 => {
            let value = insn.inputs[2];
            let ty = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(2)))
                .and_then(|sv| func.var_types.get(sv).copied())
                .unwrap_or_else(|| field_type(value.size));
            Some((value.size, normalize_access_type(ty, value.size)))
        }
        _ => None,
    }
}

fn normalize_access_type(ty: PrimitiveType, size: u8) -> PrimitiveType {
    match ty {
        PrimitiveType::Unknown => field_type(size),
        PrimitiveType::Float if size != 4 => field_type(size),
        PrimitiveType::Double if size != 8 => field_type(size),
        PrimitiveType::Bool if size != 1 => field_type(size),
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) if w != size => field_type(size),
        other => other,
    }
}

fn field_for_offset(offset: u64, summary: FieldAccessSummary) -> StructFieldType {
    if !summary.has_incompatible_types() {
        return StructFieldType {
            offset,
            name: format!("field_{offset}"),
            ty: Type::Primitive(field_type(summary.max_size)),
        };
    }

    let fields = incompatible_type_alternatives(&summary.types)
        .into_iter()
        .enumerate()
        .map(|(idx, ty)| StructFieldType {
            offset: 0,
            name: format!("field_{offset}_{}", union_member_suffix(idx)),
            ty: Type::Primitive(ty),
        })
        .collect();

    StructFieldType {
        offset,
        name: format!("field_{offset}"),
        ty: Type::Union {
            name: format!("union_field_{offset}"),
            fields,
        },
    }
}

fn incompatible_type_alternatives(types: &BTreeSet<FieldAccessType>) -> Vec<PrimitiveType> {
    let mut alternatives: Vec<PrimitiveType> = Vec::new();
    for access in types {
        if let Some(existing) = alternatives.iter_mut().find(|existing| {
            let joined = (**existing).join(access.ty);
            joined != PrimitiveType::Unknown
        }) {
            *existing = existing.join(access.ty);
        } else {
            alternatives.push(access.ty);
        }
    }
    alternatives
}

fn union_member_suffix(idx: usize) -> String {
    if idx < 26 {
        ((b'a' + idx as u8) as char).to_string()
    } else {
        format!("m{idx}")
    }
}

fn struct_access_base(
    func: &SsaFunction,
    def_map: &BTreeMap<Varnode, (BlockId, usize)>,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<(SsaVarnode, u64)> {
    let addr = *insn.inputs.get(1)?;
    if addr.space == SpaceId::Const {
        return None;
    }

    if let Some(&(def_bid, def_idx)) = def_map.get(&addr) {
        let def_insn = func.function.blocks.get(&def_bid)?.insns.get(def_idx)?;
        if def_insn.op == IrOp::IntAdd && def_insn.inputs.len() >= 2 {
            if let Some((base_idx, offset)) = base_plus_const(def_insn) {
                let base = func
                    .var_map
                    .get(&(def_bid, def_idx, VarnodeSlot::Input(base_idx)))
                    .copied()?;
                return Some((base, offset));
            }
        }
    }

    let base = func
        .var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(1)))
        .copied()?;
    Some((base, 0))
}

fn base_plus_const(insn: &IrInsn) -> Option<(usize, u64)> {
    let lhs = insn.inputs[0];
    let rhs = insn.inputs[1];

    match (lhs.space == SpaceId::Const, rhs.space == SpaceId::Const) {
        (true, false) => Some((1, lhs.offset)),
        (false, true) => Some((0, rhs.offset)),
        _ => None,
    }
}

fn field_type(size: u8) -> PrimitiveType {
    match size {
        1 => PrimitiveType::UnsignedInt(1),
        4 => PrimitiveType::UnsignedInt(4),
        8 => PrimitiveType::UnsignedInt(8),
        16 => PrimitiveType::UnsignedInt(16),
        other => PrimitiveType::Int(other),
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{VarnodeSlot, build_ssa};
    use unlace_ir::{BasicBlock, Function, Varnode};

    use super::*;

    #[test]
    fn struct_field_detect_loads_from_same_base_at_three_offsets() {
        let base = Varnode::reg(0, 8);
        let addr0 = base;
        let addr8 = Varnode::unique(0, 8);
        let addr16 = Varnode::unique(8, 8);
        let out0 = Varnode::unique(16, 8);
        let out8 = Varnode::unique(24, 8);
        let out16 = Varnode::unique(32, 16);
        let ram = Varnode::constant(1, 8);

        let mut func = Function::new("struct_fields", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, addr0],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr8,
            smallvec![base, Varnode::constant(8, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out8,
            smallvec![ram, addr8],
            0x1008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr16,
            smallvec![base, Varnode::constant(16, 8)],
            0x100c,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out16,
            smallvec![ram, addr16],
            0x1010,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1018));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        StructFieldDetectPass.run(&mut ssa).expect("detect fields");

        let base_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Input(1)))
            .expect("base input");
        let ty = ssa
            .composite_var_types
            .get(&base_sv)
            .expect("struct type for base");

        let Type::Struct { name, fields } = ty else {
            panic!("expected struct type, got {ty:?}");
        };

        assert_eq!(name, "struct_0");
        assert_eq!(fields.len(), 3);
        assert_eq!(fields[0].offset, 0);
        assert_eq!(fields[0].name, "field_0");
        assert_eq!(fields[0].ty, Type::Primitive(PrimitiveType::UnsignedInt(8)));
        assert_eq!(fields[1].offset, 8);
        assert_eq!(fields[1].name, "field_8");
        assert_eq!(fields[1].ty, Type::Primitive(PrimitiveType::UnsignedInt(8)));
        assert_eq!(fields[2].offset, 16);
        assert_eq!(fields[2].name, "field_16");
        assert_eq!(
            fields[2].ty,
            Type::Primitive(PrimitiveType::UnsignedInt(16))
        );
    }

    #[test]
    fn struct_field_detect_emits_union_for_incompatible_same_offset_accesses() {
        let base = Varnode::reg(0, 8);
        let addr0 = base;
        let addr8 = Varnode::unique(0, 8);
        let float_out = Varnode::unique(8, 4);
        let int_value = Varnode::reg(16, 4);
        let out8 = Varnode::unique(24, 8);
        let ram = Varnode::constant(1, 8);

        let mut func = Function::new("union_field", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            float_out,
            smallvec![ram, addr0],
            0x2000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, addr0, int_value],
            0x2004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr8,
            smallvec![base, Varnode::constant(8, 8)],
            0x2008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out8,
            smallvec![ram, addr8],
            0x200c,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2010));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let float_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("float load output");
        ssa.var_types.insert(float_sv, PrimitiveType::Float);

        StructFieldDetectPass.run(&mut ssa).expect("detect fields");

        let base_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Input(1)))
            .expect("base input");
        let ty = ssa
            .composite_var_types
            .get(&base_sv)
            .expect("struct type for base");

        let Type::Struct { fields, .. } = ty else {
            panic!("expected containing struct type, got {ty:?}");
        };
        let union_field = fields
            .iter()
            .find(|field| field.offset == 0)
            .expect("offset zero field");
        let Type::Union { fields: members, .. } = &union_field.ty else {
            panic!("expected union field, got {:?}", union_field.ty);
        };

        assert_eq!(union_field.name, "field_0");
        assert_eq!(members.len(), 2);
        assert!(members.iter().all(|field| field.offset == 0));
        assert!(
            members
                .iter()
                .any(|field| field.ty == Type::Primitive(PrimitiveType::Float))
        );
        assert!(members.iter().any(|field| field.ty
            == Type::Primitive(PrimitiveType::UnsignedInt(4))));
    }
}
