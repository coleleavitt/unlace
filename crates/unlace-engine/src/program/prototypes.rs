//! Facts about functions known from outside the engine: prototypes (debug information) and
//! non-returning functions. They are applied to the function being decompiled and to the functions
//! it calls before analysis; prototypes are locked.

use std::collections::{BTreeMap, BTreeSet};
use std::sync::Arc;

use super::Program;
use crate::database::{Database, SymbolId};
use crate::error::{Error, Result};
use crate::fspec::PrototypePieces;
use crate::types::{TypeFactory, TypeId, TypeMetatype};

/// A value type in a [`Prototype`], independent of the engine's type names.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum ValueType {
    Void,
    Bool,
    Char,
    Int {
        size: u32,
        signed: bool,
    },
    Float {
        size: u32,
    },
    Pointer(Box<ValueType>),
    /// Bytes without a known meaning.
    Unknown {
        size: u32,
    },
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Parameter {
    pub name: Option<String>,
    pub value: ValueType,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Prototype {
    pub output: ValueType,
    pub params: Vec<Parameter>,
    pub varargs: bool,
}

/// Prototypes by function entry offset.
pub type Prototypes = Arc<BTreeMap<u64, Prototype>>;

/// Names of functions that never return (`exit`, `__stack_chk_fail`, ...).
pub type NoReturnNames = Arc<BTreeSet<String>>;

impl Program {
    pub(super) fn apply_known_prototypes(&mut self, address: u64, sym: SymbolId, callees: &[u64]) -> Result<()> {
        let prototypes = self.prototypes.clone();
        if let Some(prototype) = prototypes.get(&address) {
            self.apply_prototype(sym, prototype)?;
        }
        for &callee in callees {
            let prototype = prototypes.get(&callee);
            if prototype.is_none() && self.no_return_names.is_empty() {
                continue;
            }
            let callee_sym = self.function_at(callee)?;
            if let Some(prototype) = prototype {
                self.apply_prototype(callee_sym, prototype)?;
            }
            let name = self.symbol_table()?.symbol(callee_sym).get_name();
            if self.no_return_names.contains(name.trim_end_matches("@plt")) {
                self.set_no_return(callee_sym)?;
            }
        }
        Ok(())
    }

    fn set_no_return(&mut self, sym: SymbolId) -> Result<()> {
        if let Some(function) = Database::symbol_get_function(&mut self.architecture, sym)? {
            function.get_func_proto_mut().set_no_return(true);
        }
        Ok(())
    }

    fn apply_prototype(&mut self, sym: SymbolId, prototype: &Prototype) -> Result<()> {
        let types = self.architecture.types_mut()?;
        let outtype = Some(resolve(types, &prototype.output)?);
        let intypes = prototype
            .params
            .iter()
            .map(|param| resolve(types, &param.value))
            .collect::<Result<Vec<_>>>()?;
        let pieces = PrototypePieces {
            model: None,
            name: self.symbol_table()?.symbol(sym).get_name().to_string(),
            outtype,
            intypes,
            innames: prototype
                .params
                .iter()
                .map(|param| param.name.clone().unwrap_or_default())
                .collect(),
            first_var_arg_slot: if prototype.varargs {
                prototype.params.len() as i32
            } else {
                -1
            },
        };
        let Some(function) = Database::symbol_get_function(&mut self.architecture, sym)? else {
            return Err(Error::Lowlevel(format!("{} is not a function", pieces.name)));
        };
        let mut proto = std::mem::take(function.get_func_proto_mut());
        let applied = proto.set_pieces(&pieces, &mut self.architecture);
        if let Some(function) = Database::symbol_get_function(&mut self.architecture, sym)? {
            *function.get_func_proto_mut() = proto;
        }
        applied
    }
}

fn resolve(types: &mut TypeFactory, value: &ValueType) -> Result<TypeId> {
    match value {
        ValueType::Void => types.get_type_void(),
        ValueType::Bool => types.get_base(1, TypeMetatype::Bool),
        ValueType::Char => types.get_type_char(1),
        ValueType::Int { size, signed } => {
            let metatype = if *signed { TypeMetatype::Int } else { TypeMetatype::Uint };
            types.get_base(*size as i32, metatype)
        }
        ValueType::Float { size } => types.get_base(*size as i32, TypeMetatype::Float),
        ValueType::Unknown { size } => types.get_base(*size as i32, TypeMetatype::Unknown),
        ValueType::Pointer(target) => {
            let target = resolve(types, target)?;
            let size = types.get_size_of_pointer();
            types.get_type_pointer(size, target, 1)
        }
    }
}
