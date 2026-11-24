//! C declarations for named calls with complete locked prototypes.
use crate::calltargettype::FuncdataCalltargettypeExt;
use crate::dtype::{Datatype, DatatypeKind, type_metatype};
use crate::printc::ArchPrintExt;
use crate::{architecture::Architecture, funcdata::Funcdata};
use std::{collections::BTreeSet, rc::Rc};
use unlace_num::opcodes::OpCode;

#[derive(Default)]
pub struct Declarations {
    pub declarations: Vec<String>,
    pub callwide_prototypes: Vec<crate::callwide::ExportPrototype>,
}

pub fn declarations(arch: &Architecture, fd: &Funcdata) -> Result<Declarations, String> {
    let mut declarations = BTreeSet::new();
    let mut callwide_prototypes = Vec::new();
    if let Some(contract) = crate::callwide::definition_prototype(fd, fd.get_display_name())? {
        callwide_prototypes.push(contract);
    }
    let rt = crate::printc::RealTypeCtx::from_arch(arch, arch.print().out_lang());
    for index in 0..fd.num_calls() {
        let call = fd.get_call_specs(index);
        let Some(op) = fd.obank().get(call.get_op()) else {
            continue;
        };
        if op.is_dead() || op.code() != OpCode::CPUI_CALL {
            continue;
        }
        let name = call.fspec_printed_name(arch.unlace_name_style());
        let wide = crate::callwide::call_prototype(fd, call, &name)?;
        let proto = call.proto();
        if wide.is_none()
            && (!proto.has_store() || !proto.is_input_locked() || !proto.is_output_locked())
        {
            continue;
        }
        let mut bytes = name.bytes();
        if !bytes
            .next()
            .is_some_and(|b| b.is_ascii_alphabetic() || b == b'_')
            || !bytes.all(|b| b.is_ascii_alphanumeric() || b == b'_')
        {
            if wide.is_some() {
                return Err(format!(
                    "callwide: cannot declare the printed call target {name}"
                ));
            }
            continue;
        }
        let has_wide_contract = wide.is_some();
        let mut snapshot = if let Some((snapshot, contract)) = wide {
            callwide_prototypes.push(contract);
            snapshot
        } else {
            let mut snapshot = crate::fspec::FuncProto::new();
            snapshot.copy(proto);
            snapshot
        };
        if !has_wide_contract {
            let parked = fd.get_arch().callee_proto_pieces(call.get_entry_address());
            match parked.filter(|pieces| pieces.first_var_arg_slot >= 0) {
                Some(pieces) => {
                    if snapshot
                        .set_pieces(&pieces, None, arch.types(), arch.manage())
                        .is_err()
                    {
                        continue;
                    }
                }
                _ => {
                    if call.format_arity().is_some() {
                        continue;
                    }
                }
            }
        }
        if snapshot.get_output_type().is_some_and(|t| {
            matches!(
                t.get_metatype(),
                type_metatype::TYPE_ARRAY | type_metatype::TYPE_CODE
            )
        }) {
            continue;
        }
        let mut code = Datatype::new(1, type_metatype::TYPE_CODE);
        code.kind = DatatypeKind::Code {
            proto: Some(Rc::new(snapshot)),
        };
        declarations.insert(format!(
            "{};",
            crate::printc::declaration_text(&Rc::new(code), &name, rt.clone())
        ));
    }
    Ok(Declarations {
        declarations: declarations.into_iter().collect(),
        callwide_prototypes,
    })
}

/// Project-only dependencies; ordinary per-function type inventories stay local.
pub fn type_definitions(arch: &Architecture, fd: &Funcdata) -> Vec<crate::funcreport::TypeInfo> {
    if !arch.print().options.struct_defs() || arch.print().out_lang() != crate::lang::OutLang::C {
        return Vec::new();
    }
    let rt = crate::printc::RealTypeCtx::from_arch(arch, arch.print().out_lang());
    let types = crate::structdefs::referenced_call_types(fd);
    crate::structdefs::dedup_by_name(&types)
        .iter()
        .map(|ty| crate::funcreport::TypeInfo {
            name: ty.get_name().to_string(),
            definition: crate::structdefs::definition_text(ty, rt.clone()),
            size: ty.get_size() as i64,
        })
        .collect()
}

/// The calls through fields of synthesized records `fd` makes, as the project
/// header declares them.
pub fn field_declarations(
    arch: &Architecture,
    fd: &Funcdata,
) -> Vec<crate::calltargettype::FieldDecl> {
    let rt = crate::printc::RealTypeCtx::from_arch(arch, arch.print().out_lang());
    fd.unlace_field_calls()
        .iter()
        .map(|call| crate::calltargettype::FieldDecl {
            record: call.record.clone(),
            field: call.field.clone(),
            declaration: call
                .ty
                .as_ref()
                .map(|ty| crate::printc::declaration_text(ty, &call.field, rt.clone())),
        })
        .collect()
}
