//! Prototypes for the engine from unlace's debug-information import, plus the C `main` signature.

use std::collections::BTreeMap;

use unlace_engine::program::{Parameter, Prototype, ValueType};
use unlace_loader::DwarfInfo;

use crate::pipeline::FunctionEntry;

/// Data model sizes of the target.
#[derive(Clone, Copy, Debug)]
pub struct DataModel {
    pub long: u32,
    pub pointer: u32,
}

/// Prototypes by entry address: DWARF subprograms whose types all map to C base types or
/// pointers, and `int main(int argc, char **argv, char **envp)` when debug information does not
/// describe `main`.
pub fn known_prototypes(
    functions: &[FunctionEntry],
    dwarf: Option<&DwarfInfo>,
    model: DataModel,
) -> BTreeMap<u64, Prototype> {
    let mut prototypes: BTreeMap<u64, Prototype> = dwarf
        .into_iter()
        .flat_map(|dwarf| dwarf.functions.iter())
        .filter_map(|(addr, function)| {
            let output = match function.return_type.as_deref() {
                None => ValueType::Void,
                Some(name) => c_type(name, model)?,
            };
            let params = function
                .params
                .iter()
                .map(|param| {
                    Some(Parameter {
                        name: param.name.clone(),
                        value: c_type(param.type_name.as_deref()?, model)?,
                    })
                })
                .collect::<Option<Vec<_>>>()?;
            Some((
                *addr,
                Prototype {
                    output,
                    params,
                    varargs: false,
                },
            ))
        })
        .collect();
    for function in functions.iter().filter(|function| function.name == "main") {
        prototypes
            .entry(function.addr)
            .or_insert_with(main_prototype);
    }
    prototypes
}

fn main_prototype() -> Prototype {
    let int = ValueType::Int {
        size: 4,
        signed: true,
    };
    let strings = ValueType::Pointer(Box::new(ValueType::Pointer(Box::new(ValueType::Char))));
    let param = |name: &str, value: &ValueType| Parameter {
        name: Some(name.to_string()),
        value: value.clone(),
    };
    Prototype {
        output: int.clone(),
        params: vec![
            param("argc", &int),
            param("argv", &strings),
            param("envp", &strings),
        ],
        varargs: false,
    }
}

/// The value type of a C type as unlace's DWARF import spells it (`const char *`, `unsigned int`,
/// `size_t`). Aggregates passed by value and unknown names have no mapping.
fn c_type(name: &str, model: DataModel) -> Option<ValueType> {
    let name = name.trim();
    if let Some(pointee) = name.strip_suffix('*') {
        let pointee = c_type(pointee, model).unwrap_or(ValueType::Void);
        return Some(ValueType::Pointer(Box::new(pointee)));
    }
    if let Some(element) = name
        .strip_suffix(']')
        .and_then(|rest| rest.rsplit_once('['))
        .map(|(element, _)| element)
    {
        let element = c_type(element, model).unwrap_or(ValueType::Void);
        return Some(ValueType::Pointer(Box::new(element)));
    }
    let words: Vec<&str> = name
        .split_whitespace()
        .filter(|word| !matches!(*word, "const" | "volatile" | "restrict"))
        .collect();
    let int = |size: u32, signed: bool| Some(ValueType::Int { size, signed });
    match words.as_slice() {
        ["void"] => Some(ValueType::Void),
        ["_Bool"] | ["bool"] => Some(ValueType::Bool),
        ["char"] => Some(ValueType::Char),
        ["float"] => Some(ValueType::Float { size: 4 }),
        ["double"] => Some(ValueType::Float { size: 8 }),
        [single] => match *single {
            "int8_t" => int(1, true),
            "uint8_t" => int(1, false),
            "int16_t" => int(2, true),
            "uint16_t" => int(2, false),
            "int32_t" => int(4, true),
            "uint32_t" => int(4, false),
            "int64_t" => int(8, true),
            "uint64_t" => int(8, false),
            "size_t" | "uintptr_t" => int(model.pointer, false),
            "ssize_t" | "intptr_t" | "ptrdiff_t" => int(model.pointer, true),
            other => integer(&[other], model),
        },
        words => integer(words, model),
    }
}

/// `int`, `unsigned`, `short int`, `long unsigned int`, `signed char`, ...
fn integer(words: &[&str], model: DataModel) -> Option<ValueType> {
    let mut signed = true;
    let (mut longs, mut size) = (0, None);
    for word in words {
        match *word {
            "signed" => {}
            "unsigned" => signed = false,
            "int" => size = size.or(Some(4)),
            "char" => size = Some(1),
            "short" => size = Some(2),
            "long" => longs += 1,
            _ => return None,
        }
    }
    let size = match longs {
        0 => size.unwrap_or(4),
        1 => model.long,
        _ => 8,
    };
    Some(ValueType::Int { size, signed })
}

#[cfg(test)]
mod tests {
    use super::*;

    const LP64: DataModel = DataModel {
        long: 8,
        pointer: 8,
    };

    #[test]
    fn maps_dwarf_type_spellings() {
        assert_eq!(
            c_type("long unsigned int", LP64),
            Some(ValueType::Int {
                size: 8,
                signed: false
            })
        );
        assert_eq!(
            c_type("short int", LP64),
            Some(ValueType::Int {
                size: 2,
                signed: true
            })
        );
        assert_eq!(
            c_type("unsigned char", LP64),
            Some(ValueType::Int {
                size: 1,
                signed: false
            })
        );
        assert_eq!(
            c_type("const char *", LP64),
            Some(ValueType::Pointer(Box::new(ValueType::Char)))
        );
        assert_eq!(
            c_type("Point *", LP64),
            Some(ValueType::Pointer(Box::new(ValueType::Void)))
        );
        assert_eq!(c_type("Point", LP64), None);
        assert_eq!(c_type("long double", LP64), None);
    }
}
