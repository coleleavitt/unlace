//! Per-operand type bindings (struct-offset, enum-constant).
//!
//! Walks the SSA function and attaches a [`StrOffBinding`] to every
//! `LOAD`/`STORE` whose address is `IntAdd(base, const_offset)` when `base`
//! is a known struct pointer in [`SsaFunction::composite_var_types`].
//!
//! Walks every `INT_EQUAL` / `INT_NOTEQUAL` whose constant operand is a
//! known enum variant (per [`SsaFunction::enum_discriminants`]) and records
//! an [`EnumConstBinding`] for the constant input.
//!
//! The printer consults [`SsaFunction::op_bindings`] when emitting LOAD
//! addresses and constant comparands so the output reads
//! `if (state == STATE_READY)` rather than `if (state == 2)`, and
//! `s->next` instead of `*(struct Node **)((char *)s + 8)`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{EnumConstBinding, SsaFunction, SsaVarnode, StrOffBinding, VarnodeSlot};
use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// Pass that materialises [`SsaFunction::op_bindings`].
pub struct OpTypeBindingPass;

impl Pass for OpTypeBindingPass {
    fn name(&self) -> &str {
        "op_type_binding"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let stroff = build_stroff(func);
        let enum_const = build_enum_const(func);

        let changed =
            stroff != func.op_bindings.stroff || enum_const != func.op_bindings.enum_const;

        func.op_bindings.stroff = stroff;
        func.op_bindings.enum_const = enum_const;
        Ok(changed)
    }
}

fn build_stroff(func: &SsaFunction) -> BTreeMap<(BlockId, usize, usize), StrOffBinding> {
    let mut out = BTreeMap::new();

    for (bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            // Address operand:
            //   LOAD  → input(1) (input(0) is the space-id varnode in pcode).
            //   STORE → input(1).
            let (op_idx_for_addr, output_size_hint) = match insn.op {
                IrOp::Load => (1usize, insn.output.as_ref().map(|v| v.size as u64)),
                IrOp::Store => (1usize, insn.inputs.get(2).map(|v| v.size as u64)),
                _ => continue,
            };

            let Some(addr_sv) = func
                .var_map
                .get(&(*bid, idx, VarnodeSlot::Input(op_idx_for_addr)))
                .copied()
            else {
                continue;
            };

            let Some((base_sv, offset)) = find_int_add_def(func, addr_sv) else {
                continue;
            };

            let Some(struct_ty) = func.composite_var_types.get(&base_sv) else {
                continue;
            };

            if let Some(path) = resolve_field_path(struct_ty, offset, output_size_hint) {
                out.insert(
                    (*bid, idx, op_idx_for_addr),
                    StrOffBinding {
                        struct_type: struct_ty.clone(),
                        field_path: path,
                    },
                );
            }
        }
    }

    out
}

/// Walk into the struct chasing offsets through nested struct fields.
fn resolve_field_path(ty: &Type, offset: u64, _size: Option<u64>) -> Option<Vec<String>> {
    let mut path = Vec::new();
    let mut current = ty;
    let mut remaining = offset;
    loop {
        let fields = match current {
            Type::Struct { fields, .. } => fields,
            _ => return None,
        };
        let field = best_field_for_offset(fields, remaining)?;
        path.push(field.name.clone());
        if field.offset == remaining && !matches!(field.ty, Type::Struct { .. }) {
            return Some(path);
        }
        if matches!(field.ty, Type::Struct { .. }) && remaining > field.offset {
            remaining -= field.offset;
            current = &field.ty;
            continue;
        }
        // Exact hit at a primitive field.
        if field.offset == remaining {
            return Some(path);
        }
        return None;
    }
}

fn best_field_for_offset(fields: &[StructFieldType], offset: u64) -> Option<&StructFieldType> {
    fields
        .iter()
        .filter(|f| f.offset <= offset)
        .max_by_key(|f| f.offset)
}

/// If `addr_sv` is the output of an `INT_ADD(base, const_offset)`, return
/// `(base_sv, offset)`. Constants live in `IrInsn::inputs` directly (not
/// `var_map`), so we read the raw `Varnode` and an SSA varnode for the
/// non-constant operand.
fn find_int_add_def(func: &SsaFunction, addr_sv: SsaVarnode) -> Option<(SsaVarnode, u64)> {
    let (def_bid, def_idx) = func
        .var_map
        .iter()
        .find(|(key, sv)| key.2 == VarnodeSlot::Output && **sv == addr_sv)
        .map(|(key, _)| (key.0, key.1))?;

    let def_insn = func.function.blocks.get(&def_bid)?.insns.get(def_idx)?;
    if def_insn.op != IrOp::IntAdd {
        return None;
    }
    if def_insn.inputs.len() < 2 {
        return None;
    }

    let raw0 = def_insn.inputs[0];
    let raw1 = def_insn.inputs[1];

    let const_first = raw0.space == SpaceId::Const;
    let const_second = raw1.space == SpaceId::Const;

    if const_second {
        let base_sv = func
            .var_map
            .get(&(def_bid, def_idx, VarnodeSlot::Input(0)))
            .copied()?;
        Some((base_sv, raw1.offset))
    } else if const_first {
        let base_sv = func
            .var_map
            .get(&(def_bid, def_idx, VarnodeSlot::Input(1)))
            .copied()?;
        Some((base_sv, raw0.offset))
    } else {
        None
    }
}

fn build_enum_const(func: &SsaFunction) -> BTreeMap<(BlockId, usize, usize), EnumConstBinding> {
    let mut out = BTreeMap::new();

    if func.enum_discriminants.is_empty() {
        return out;
    }

    for (bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::IntEqual | IrOp::IntNotequal) {
                continue;
            }
            if insn.inputs.len() < 2 {
                continue;
            }

            let raw0 = insn.inputs[0];
            let raw1 = insn.inputs[1];

            // Identify the (variable_sv, const_value, const_op_idx) triple.
            let (var_sv, const_value, const_op_idx) = if raw0.space == SpaceId::Const {
                let var_sv = match func.var_map.get(&(*bid, idx, VarnodeSlot::Input(1))).copied() {
                    Some(v) => v,
                    None => continue,
                };
                (var_sv, raw0.offset, 0)
            } else if raw1.space == SpaceId::Const {
                let var_sv = match func.var_map.get(&(*bid, idx, VarnodeSlot::Input(0))).copied() {
                    Some(v) => v,
                    None => continue,
                };
                (var_sv, raw1.offset, 1)
            } else {
                continue;
            };

            // Match var_sv against any enum discriminant's load_sv.
            for disc in &func.enum_discriminants {
                if disc.load_sv != var_sv {
                    continue;
                }
                if let Some(name) = disc.variants.get(&const_value) {
                    out.insert(
                        (*bid, idx, const_op_idx),
                        EnumConstBinding {
                            enum_name: enum_name_for(disc),
                            variant: name.clone(),
                        },
                    );
                }
            }
        }
    }

    out
}

fn enum_name_for(disc: &unlace_ir::ssa::EnumDiscriminant) -> String {
    let _ = disc;
    "Enum".to_string()
}

/// Render a struct-offset binding as the C-style member-access expression
/// the printer should emit in place of the raw `*(T*)((char *)base + N)`
/// form. The printer integration consults this helper after detecting an
/// `op_bindings.stroff` entry for the LOAD/STORE address operand.
///
/// Examples:
///   - `field_path = ["next"]` → `base->next`
///   - `field_path = ["inner", "b"]` → `base->inner.b`
pub fn render_field_access(base_name: &str, binding: &StrOffBinding) -> String {
    if binding.field_path.is_empty() {
        return base_name.to_string();
    }
    let mut out = String::with_capacity(base_name.len() + 8);
    out.push_str(base_name);
    out.push_str("->");
    for (i, seg) in binding.field_path.iter().enumerate() {
        if i > 0 {
            out.push('.');
        }
        out.push_str(seg);
    }
    out
}

/// Render an enum-constant binding as the symbolic variant name the printer
/// should emit in place of the integer literal. Currently a thin wrapper
/// around `binding.variant`; kept as a dedicated entry point so future
/// renames (e.g. enum-namespace prefixes) flow through one site.
pub fn render_enum_const(binding: &EnumConstBinding) -> String {
    binding.variant.clone()
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{EnumDiscriminant, build_ssa};
    use unlace_ir::types::{StructFieldType, Type};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn run_pass(func: Function) -> SsaFunction {
        let mut ssa = build_ssa(func);
        OpTypeBindingPass.run(&mut ssa).expect("pass run");
        ssa
    }

    fn struct_point() -> Type {
        Type::Struct {
            name: "Point".into(),
            fields: vec![
                StructFieldType {
                    name: "x".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "y".into(),
                    ty: Type::int(4),
                    offset: 4,
                },
                StructFieldType {
                    name: "z".into(),
                    ty: Type::int(4),
                    offset: 8,
                },
            ],
        }
    }

    /// Build a function whose entry block computes:
    ///     t0 = base + 4         (IntAdd)
    ///     t1 = LOAD ramspace, t0
    ///     return
    /// Returns the SSA varnode corresponding to `base` (the IntAdd's input 0).
    fn build_load_struct_field_func(field_offset: u64) -> (Function, BlockId) {
        let r0 = Varnode::reg(0, 8); // t0
        let r8 = Varnode::reg(8, 8); // base
        let r16 = Varnode::reg(16, 4); // t1 (load output)
        let space = Varnode::constant(0, 8); // ram space-id
        let c_off = Varnode::constant(field_offset, 8);

        let mut func = Function::new("f", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c_off],
            0x1000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            r16,
            smallvec![space, r0],
            0x1004,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(bb0);
        (func, BlockId(0))
    }

    #[test]
    fn binds_struct_field_on_load() {
        let (func, bid) = build_load_struct_field_func(4);
        let mut ssa = build_ssa(func);

        let base_sv = *ssa
            .var_map
            .get(&(bid, 0, VarnodeSlot::Input(0)))
            .expect("base sv");
        ssa.composite_var_types.insert(base_sv, struct_point());

        OpTypeBindingPass.run(&mut ssa).unwrap();

        let key = (bid, 1, 1usize);
        let binding = ssa
            .op_bindings
            .stroff
            .get(&key)
            .expect("stroff binding for the LOAD");
        assert_eq!(binding.field_path, vec!["y".to_string()]);
    }

    #[test]
    fn binds_nested_struct_field() {
        // Outer struct with a nested struct at offset 8; nested struct's
        // first field at +0 (so total offset 8) and second at +4 (so 12).
        let inner = Type::Struct {
            name: "Inner".into(),
            fields: vec![
                StructFieldType {
                    name: "a".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "b".into(),
                    ty: Type::int(4),
                    offset: 4,
                },
            ],
        };
        let outer = Type::Struct {
            name: "Outer".into(),
            fields: vec![
                StructFieldType {
                    name: "head".into(),
                    ty: Type::int(8),
                    offset: 0,
                },
                StructFieldType {
                    name: "inner".into(),
                    ty: inner,
                    offset: 8,
                },
            ],
        };

        let (func, bid) = build_load_struct_field_func(12);
        let mut ssa = build_ssa(func);

        let base_sv = *ssa.var_map.get(&(bid, 0, VarnodeSlot::Input(0))).unwrap();
        ssa.composite_var_types.insert(base_sv, outer);

        OpTypeBindingPass.run(&mut ssa).unwrap();

        let binding = ssa.op_bindings.stroff.get(&(bid, 1, 1)).unwrap();
        assert_eq!(binding.field_path, vec!["inner".to_string(), "b".to_string()]);
    }

    #[test]
    fn binds_enum_const_on_eq() {
        // Build:
        //   t0 = IntEqual r8, 2
        // and register an enum_discriminant whose load_sv == r8 sv.
        let r0 = Varnode::reg(0, 1);
        let r8 = Varnode::reg(8, 4);
        let c2 = Varnode::constant(2, 4);

        let mut func = Function::new("f", BlockId(0), 0x2000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            r0,
            smallvec![r8, c2],
            0x2000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2004));
        func.insert_block(bb0);

        let mut ssa = build_ssa(func);
        let r8_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Input(0)))
            .unwrap();

        let mut variants = BTreeMap::new();
        variants.insert(0u64, "STATE_IDLE".into());
        variants.insert(1u64, "STATE_BUSY".into());
        variants.insert(2u64, "STATE_DONE".into());
        ssa.enum_discriminants.push(EnumDiscriminant {
            load_sv: r8_sv,
            load_loc: (BlockId(0), 0),
            variants,
            comparison_locs: vec![(BlockId(0), 0)],
        });

        OpTypeBindingPass.run(&mut ssa).unwrap();

        let binding = ssa
            .op_bindings
            .enum_const
            .get(&(BlockId(0), 0, 1))
            .expect("enum const bound");
        assert_eq!(binding.variant, "STATE_DONE");
    }

    #[test]
    fn printer_emits_field_name() {
        let binding = StrOffBinding {
            struct_type: struct_point(),
            field_path: vec!["y".into()],
        };
        assert_eq!(render_field_access("p", &binding), "p->y");
    }

    #[test]
    fn printer_emits_nested_field_name() {
        let binding = StrOffBinding {
            struct_type: struct_point(),
            field_path: vec!["inner".into(), "b".into()],
        };
        assert_eq!(render_field_access("base", &binding), "base->inner.b");
    }

    #[test]
    fn printer_emits_enum_variant() {
        let binding = EnumConstBinding {
            enum_name: "Color".into(),
            variant: "RED".into(),
        };
        assert_eq!(render_enum_const(&binding), "RED");
    }

    /// Sanity: pass is idempotent.
    #[test]
    fn pass_idempotent_on_second_run() {
        let (func, bid) = build_load_struct_field_func(0);
        let mut ssa = build_ssa(func);
        let base_sv = *ssa.var_map.get(&(bid, 0, VarnodeSlot::Input(0))).unwrap();
        ssa.composite_var_types.insert(base_sv, struct_point());

        let pass = OpTypeBindingPass;
        let first = pass.run(&mut ssa).unwrap();
        assert!(first);
        let second = pass.run(&mut ssa).unwrap();
        assert!(!second);
    }
}
