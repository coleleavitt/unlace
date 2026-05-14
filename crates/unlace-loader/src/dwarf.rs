//! DWARF `.debug_info` consumer (t109).
//!
//! Walks every compilation unit in the image's DWARF sections via
//! [`gimli::Dwarf::units`] and lowers the following DIE tags into the
//! [`DwarfInfo`] struct:
//!
//!  * `DW_TAG_subprogram`     → [`FunctionDebugInfo`] (name, low_pc,
//!    high_pc, return type, parameters, locals, template args, decl location).
//!  * `DW_TAG_structure_type` / `DW_TAG_class_type` → [`StructType`] with
//!    [`StructField`] members and C++ template arguments.
//!  * `DW_TAG_union_type`     → [`UnionType`] with member list.
//!  * `DW_TAG_enumeration_type` → [`EnumType`] with `(name, value)`
//!    variant list.
//!  * `DW_TAG_variable` (inside a subprogram) → [`LocalVariable`] with
//!    optional `frame_offset` decoded from a single-op `DW_OP_fbreg`
//!    location expression.
//!  * `.debug_macro` opcode streams → [`MacroEntry`] via
//!    [`parse_debug_macro`] for inline macro recovery.
//!
//! Recursive types are resolved through [`resolve_type_name`], which
//! recurses through `DW_TAG_pointer_type`, `DW_TAG_const_type`,
//! `DW_TAG_volatile_type`, `DW_TAG_restrict_type`, and `DW_TAG_typedef`
//! to produce a printable C-style name (e.g. `"const Rect *"`).
//!
//! Missing or empty `.debug_*` sections are not an error: callers
//! receive an empty [`DwarfInfo`] and can fall back to symbol-table
//! recovery.
//!
//! Tests: see the `tests` module — fixtures `debug_calls.elf`,
//! `debug_structs.elf`, `hello_world.elf`, and `stripped.elf` exercise
//! every public surface end-to-end.

use std::borrow::Cow;
use std::collections::{BTreeMap, BTreeSet};
use std::collections::BTreeMap;
use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use gimli::{
    AttributeValue, DW_AT_byte_size, DW_AT_const_value, DW_AT_data_member_location, DW_AT_high_pc,
    DW_AT_linkage_name, DW_AT_location, DW_AT_low_pc, DW_AT_name, DW_AT_type, DW_TAG_base_type,
    DW_TAG_const_type, DW_TAG_enumeration_type, DW_TAG_enumerator, DW_TAG_formal_parameter,
    DW_TAG_member, DW_TAG_pointer_type, DW_TAG_restrict_type, DW_TAG_structure_type,
    DW_TAG_subprogram, DW_TAG_template_type_parameter, DW_TAG_typedef, DW_TAG_union_type,
    DW_TAG_variable, DW_TAG_volatile_type, EndianSlice, Operation, RunTimeEndian,
    DW_TAG_subprogram, DW_TAG_typedef, DW_TAG_union_type, DW_TAG_variable, DW_TAG_volatile_type,
    EndianSlice, RunTimeEndian,
    DW_TAG_variable, DW_TAG_volatile_type, EndianSlice, RunTimeEndian,
    AttributeValue, DW_AT_byte_size, DW_AT_const_value, DW_AT_data_member_location, DW_AT_high_pc,
    DW_AT_linkage_name, DW_AT_location, DW_AT_low_pc, DW_AT_name, DW_AT_type, DW_TAG_base_type,
    DW_TAG_const_type, DW_TAG_enumeration_type, DW_TAG_enumerator, DW_TAG_formal_parameter,
    DW_TAG_member, DW_TAG_pointer_type, DW_TAG_restrict_type, DW_TAG_structure_type,
    DW_TAG_subprogram, DW_TAG_typedef, DW_TAG_union_type, DW_TAG_variable, DW_TAG_volatile_type,
    EndianSlice, RunTimeEndian,
    AttributeValue, DW_AT_byte_size, DW_AT_const_value, DW_AT_data_member_location, DW_AT_frame_base,
    DW_AT_high_pc, DW_AT_linkage_name, DW_AT_location, DW_AT_low_pc, DW_AT_name, DW_AT_type,
    DW_TAG_base_type, DW_TAG_const_type, DW_TAG_enumeration_type, DW_TAG_enumerator,
    DW_TAG_formal_parameter, DW_TAG_member, DW_TAG_pointer_type, DW_TAG_restrict_type,
    DW_TAG_structure_type, DW_TAG_subprogram, DW_TAG_typedef, DW_TAG_union_type, DW_TAG_variable,
    DW_TAG_volatile_type, EndianSlice, EvaluationResult, Location, Piece, RunTimeEndian, Value,
    DW_TAG_const_type, DW_TAG_enumeration_type, DW_TAG_enumerator, DW_TAG_formal_parameter,
    DW_TAG_member, DW_TAG_pointer_type, DW_TAG_restrict_type, DW_TAG_structure_type,
    DW_TAG_subprogram, DW_TAG_typedef, DW_TAG_union_type, DW_TAG_variable, DW_TAG_volatile_type,
    EndianSlice, RunTimeEndian,
    DW_TAG_class_type, DW_TAG_const_type, DW_TAG_enumeration_type, DW_TAG_enumerator,
    DW_TAG_formal_parameter, DW_TAG_member, DW_TAG_pointer_type, DW_TAG_restrict_type,
    DW_TAG_structure_type, DW_TAG_subprogram, DW_TAG_template_type_parameter,
    DW_TAG_template_value_parameter, DW_TAG_typedef, DW_TAG_union_type, DW_TAG_variable,
    DW_TAG_volatile_type, EndianSlice, RunTimeEndian,
    EndianSlice, RunTimeEndian,
    DwarfFileType, EndianSlice, RunTimeEndian,
};

use object::{Object, ObjectSection};

use crate::error::LoadError;
use crate::image::{BinaryImage, Section};

type R<'a> = EndianSlice<'a, RunTimeEndian>;

#[derive(Debug, Clone)]
pub struct DwarfInfo {
    pub functions: BTreeMap<u64, FunctionDebugInfo>,
    pub source_map: BTreeMap<u64, SourceLocation>,
    pub structs: BTreeMap<String, StructType>,
    pub enums: BTreeMap<String, EnumType>,
    pub unions: BTreeMap<String, UnionType>,
    pub macros: Vec<MacroDefinition>,
    /// Split-DWARF object files (`.dwo`/`.dwp`) followed while expanding
    /// skeleton compilation units. Paths are best-effort and informational.
    pub split_dwarf_files: Vec<String>,
}

#[derive(Debug, Clone)]
pub struct FunctionDebugInfo {
    pub name: String,
    pub linkage_name: Option<String>,
    pub low_pc: u64,
    pub high_pc: Option<u64>,
    pub ranges: Vec<gimli::Range>,
    pub params: Vec<ParameterInfo>,
    pub return_type: Option<String>,
    pub decl: Option<SourceLocation>,
    pub locals: Vec<LocalVariable>,
    /// Template arguments recovered from child `DW_TAG_template_type_parameter`
    /// and `DW_TAG_template_value_parameter` DIEs, in declaration order.
    pub template_args: Vec<TemplateArgument>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParameterInfo {
    pub name: Option<String>,
    pub type_name: Option<String>,
}

/// A C++ template argument recovered from a DWARF template-parameter DIE.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TemplateArgument {
    /// Source parameter name, such as `T` or `N`, when present.
    pub name: Option<String>,
    /// Concrete argument spelling (`int`, `long int`, `4`, ...).
    pub value: String,
}

/// A local variable extracted from `DW_TAG_variable` inside a subprogram.
///
/// `frame_offset` is the signed offset relative to the canonical frame
/// pointer (negative = below saved RBP, the common case for stack locals)
/// when the variable's `DW_AT_location` ultimately resolves to a stack
/// address based on the function frame base / CFA. Complex DWARF expressions
/// are evaluated as far as possible; locations that do not resolve to a stack
/// offset are preserved without `frame_offset` so callers can still surface
/// the name.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LocalVariable {
    pub name: String,
    pub type_name: Option<String>,
    pub frame_offset: Option<i64>,
    /// Rich expression-based location computed by the full DW_OP evaluator (t280).
    pub expr_location: Option<ExprLocation>,
    pub locations: Vec<gimli::Range>,
}


// ---- Full DW_OP_* expression evaluator (t280) ----

/// The result of statically evaluating a DWARF location expression.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ExprLocation {
    Register(u16),
    Address { register: Option<u16>, offset: i64 },
    AbsoluteAddress(u64),
    ImplicitValue(u64),
    ImplicitBytes(Vec<u8>),
    Pieces(Vec<ExprPiece>),
    CfaOffset(i64),
    ThreadLocal,
    Complex,
}

/// A single piece in a composite location.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExprPiece {
    pub size_in_bits: u64,
    pub bit_offset: u64,
    pub location: PieceLocation,
}

/// Location of a single piece.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PieceLocation {
    Register(u16),
    Address { register: Option<u16>, offset: i64 },
    AbsoluteAddress(u64),
    Value(u64),
    Empty,
}

/// Evaluate a DWARF location expression into an [`ExprLocation`].
pub fn evaluate_dwarf_expr(bytes: &[u8], encoding: gimli::Encoding) -> Option<ExprLocation> {
    if bytes.is_empty() { return None; }
    let ops = parse_all_operations(bytes, encoding)?;
    if ops.is_empty() { return None; }
    Some(eval_operations(&ops))
}

fn parse_all_operations(
    bytes: &[u8], encoding: gimli::Encoding,
) -> Option<Vec<Operation<EndianSlice<'_, RunTimeEndian>>>> {
    let endian = RunTimeEndian::Little;
    let mut input = EndianSlice::new(bytes, endian);
    let mut ops = Vec::new();
    while !input.is_empty() {
        match Operation::parse(&mut input, encoding) {
            Ok(op) => ops.push(op),
            Err(_) => return None,
        }
    }
    Some(ops)
}

fn eval_operations(operations: &[Operation<EndianSlice<'_, RunTimeEndian>>]) -> ExprLocation {
    let mut stack: Vec<StackEntry> = Vec::new();
    let mut pieces: Vec<ExprPiece> = Vec::new();
    let mut last_was_register: Option<u16> = None;
    let mut has_stack_value = false;
    let mut has_implicit_value: Option<Vec<u8>> = None;

    for op in operations {
        match op {
            Operation::Piece { .. } | Operation::StackValue => {}
            _ => last_was_register = None,
        }
        match op {
            Operation::UnsignedConstant { value } => stack.push(StackEntry::Literal(*value)),
            Operation::SignedConstant { value } => stack.push(StackEntry::Literal(*value as u64)),
            Operation::Address { address } => stack.push(StackEntry::AbsoluteAddr(*address)),
            Operation::Register { register } => {
                last_was_register = Some(register.0);
                stack.push(StackEntry::Reg(register.0));
            }
            Operation::RegisterOffset { register, offset, .. } => {
                stack.push(StackEntry::RegOffset(register.0, *offset));
            }
            Operation::FrameOffset { offset } => stack.push(StackEntry::FrameOffset(*offset)),
            Operation::CallFrameCFA => stack.push(StackEntry::Cfa(0)),
            Operation::Drop => { stack.pop(); }
            Operation::Pick { index } => {
                let idx = *index as usize;
                if idx >= stack.len() { return ExprLocation::Complex; }
                let val = stack[stack.len() - 1 - idx].clone();
                stack.push(val);
            }
            Operation::Swap => {
                let len = stack.len();
                if len < 2 { return ExprLocation::Complex; }
                stack.swap(len - 1, len - 2);
            }
            Operation::Rot => {
                let len = stack.len();
                if len < 3 { return ExprLocation::Complex; }
                let c = stack.pop().unwrap();
                let b = stack.pop().unwrap();
                let a = stack.pop().unwrap();
                stack.push(c); stack.push(a); stack.push(b);
            }
            Operation::Plus => {
                if stack.len() < 2 { return ExprLocation::Complex; }
                let b = stack.pop().unwrap(); let a = stack.pop().unwrap();
                stack.push(add_entries(a, b));
            }
            Operation::PlusConstant { value } => {
                if stack.is_empty() { return ExprLocation::Complex; }
                let a = stack.pop().unwrap();
                stack.push(add_entries(a, StackEntry::Literal(*value)));
            }
            Operation::Minus => {
                if stack.len() < 2 { return ExprLocation::Complex; }
                let b = stack.pop().unwrap(); let a = stack.pop().unwrap();
                stack.push(sub_entries(a, b));
            }
            Operation::Mul => {
                if stack.len() < 2 { return ExprLocation::Complex; }
                let b = stack.pop().unwrap(); let a = stack.pop().unwrap();
                match (a, b) {
                    (StackEntry::Literal(x), StackEntry::Literal(y)) => stack.push(StackEntry::Literal(x.wrapping_mul(y))),
                    _ => return ExprLocation::Complex,
                }
            }
            Operation::Div => {
                if stack.len() < 2 { return ExprLocation::Complex; }
                let b = stack.pop().unwrap(); let a = stack.pop().unwrap();
                match (a, b) {
                    (StackEntry::Literal(x), StackEntry::Literal(y)) if y != 0 => stack.push(StackEntry::Literal(((x as i64).wrapping_div(y as i64)) as u64)),
                    _ => return ExprLocation::Complex,
                }
            }
            Operation::Mod => {
                if stack.len() < 2 { return ExprLocation::Complex; }
                let b = stack.pop().unwrap(); let a = stack.pop().unwrap();
                match (a, b) {
                    (StackEntry::Literal(x), StackEntry::Literal(y)) if y != 0 => stack.push(StackEntry::Literal(x % y)),
                    _ => return ExprLocation::Complex,
                }
            }
            Operation::Neg => {
                if stack.is_empty() { return ExprLocation::Complex; }
                match stack.pop().unwrap() {
                    StackEntry::Literal(x) => stack.push(StackEntry::Literal((-(x as i64)) as u64)),
                    _ => return ExprLocation::Complex,
                }
            }
            Operation::Abs => {
                if stack.is_empty() { return ExprLocation::Complex; }
                match stack.pop().unwrap() {
                    StackEntry::Literal(x) => stack.push(StackEntry::Literal((x as i64).unsigned_abs())),
                    _ => return ExprLocation::Complex,
                }
            }
            Operation::Not => {
                if stack.is_empty() { return ExprLocation::Complex; }
                match stack.pop().unwrap() {
                    StackEntry::Literal(x) => stack.push(StackEntry::Literal(!x)),
                    _ => return ExprLocation::Complex,
                }
            }
            Operation::And => { if !binary_literal_op(&mut stack, |a, b| a & b) { return ExprLocation::Complex; } }
            Operation::Or  => { if !binary_literal_op(&mut stack, |a, b| a | b) { return ExprLocation::Complex; } }
            Operation::Xor => { if !binary_literal_op(&mut stack, |a, b| a ^ b) { return ExprLocation::Complex; } }
            Operation::Shl => { if !binary_literal_op(&mut stack, |a, b| a.wrapping_shl(b as u32)) { return ExprLocation::Complex; } }
            Operation::Shr => { if !binary_literal_op(&mut stack, |a, b| a.wrapping_shr(b as u32)) { return ExprLocation::Complex; } }
            Operation::Shra => { if !binary_literal_op(&mut stack, |a, b| ((a as i64).wrapping_shr(b as u32)) as u64) { return ExprLocation::Complex; } }
            Operation::Eq => { if !comparison_op(&mut stack, |a, b| a == b) { return ExprLocation::Complex; } }
            Operation::Ne => { if !comparison_op(&mut stack, |a, b| a != b) { return ExprLocation::Complex; } }
            Operation::Lt => { if !comparison_op(&mut stack, |a, b| (a as i64) < (b as i64)) { return ExprLocation::Complex; } }
            Operation::Le => { if !comparison_op(&mut stack, |a, b| (a as i64) <= (b as i64)) { return ExprLocation::Complex; } }
            Operation::Gt => { if !comparison_op(&mut stack, |a, b| (a as i64) > (b as i64)) { return ExprLocation::Complex; } }
            Operation::Ge => { if !comparison_op(&mut stack, |a, b| (a as i64) >= (b as i64)) { return ExprLocation::Complex; } }
            Operation::Piece { size_in_bits, bit_offset } => {
                let bit_off = bit_offset.unwrap_or(0);
                let loc = if let Some(entry) = stack.pop() {
                    entry_to_piece_location(entry)
                } else if let Some(reg) = last_was_register.take() {
                    PieceLocation::Register(reg)
                } else { PieceLocation::Empty };
                pieces.push(ExprPiece { size_in_bits: *size_in_bits, bit_offset: bit_off, location: loc });
            }
            Operation::StackValue => { has_stack_value = true; }
            Operation::ImplicitValue { data } => { has_implicit_value = Some(data.slice().to_vec()); }
            Operation::TLS => return ExprLocation::ThreadLocal,
            Operation::Bra { .. } | Operation::Skip { .. } | Operation::Deref { .. }
            | Operation::Call { .. } | Operation::EntryValue { .. }
            | Operation::PushObjectAddress => return ExprLocation::Complex,
            Operation::Nop => {}
            _ => return ExprLocation::Complex,
        }
    }

    if !pieces.is_empty() { return ExprLocation::Pieces(pieces); }
    if let Some(bytes) = has_implicit_value { return ExprLocation::ImplicitBytes(bytes); }
    let Some(top) = stack.pop() else { return ExprLocation::Complex; };
    if has_stack_value {
        return match top {
            StackEntry::Literal(v) => ExprLocation::ImplicitValue(v),
            _ => ExprLocation::Complex,
        };
    }
    match top {
        StackEntry::Literal(addr) | StackEntry::AbsoluteAddr(addr) => ExprLocation::AbsoluteAddress(addr),
        StackEntry::FrameOffset(off) => ExprLocation::Address { register: None, offset: off },
        StackEntry::RegOffset(reg, off) => ExprLocation::Address { register: Some(reg), offset: off },
        StackEntry::Reg(reg) => ExprLocation::Register(reg),
        StackEntry::Cfa(off) => ExprLocation::CfaOffset(off),
    }
}

#[derive(Debug, Clone)]
enum StackEntry { Literal(u64), AbsoluteAddr(u64), FrameOffset(i64), RegOffset(u16, i64), Reg(u16), Cfa(i64) }

fn add_entries(a: StackEntry, b: StackEntry) -> StackEntry {
    match (a, b) {
        (StackEntry::Literal(x), StackEntry::Literal(y)) => StackEntry::Literal(x.wrapping_add(y)),
        (StackEntry::FrameOffset(off), StackEntry::Literal(v)) | (StackEntry::Literal(v), StackEntry::FrameOffset(off)) => StackEntry::FrameOffset(off.wrapping_add(v as i64)),
        (StackEntry::RegOffset(r, off), StackEntry::Literal(v)) | (StackEntry::Literal(v), StackEntry::RegOffset(r, off)) => StackEntry::RegOffset(r, off.wrapping_add(v as i64)),
        (StackEntry::Cfa(off), StackEntry::Literal(v)) | (StackEntry::Literal(v), StackEntry::Cfa(off)) => StackEntry::Cfa(off.wrapping_add(v as i64)),
        (StackEntry::AbsoluteAddr(a), StackEntry::Literal(v)) | (StackEntry::Literal(v), StackEntry::AbsoluteAddr(a)) => StackEntry::AbsoluteAddr(a.wrapping_add(v)),
        _ => StackEntry::Literal(0),
    }
}

fn sub_entries(a: StackEntry, b: StackEntry) -> StackEntry {
    match (a, b) {
        (StackEntry::Literal(x), StackEntry::Literal(y)) => StackEntry::Literal(x.wrapping_sub(y)),
        (StackEntry::FrameOffset(off), StackEntry::Literal(v)) => StackEntry::FrameOffset(off.wrapping_sub(v as i64)),
        (StackEntry::RegOffset(r, off), StackEntry::Literal(v)) => StackEntry::RegOffset(r, off.wrapping_sub(v as i64)),
        (StackEntry::Cfa(off), StackEntry::Literal(v)) => StackEntry::Cfa(off.wrapping_sub(v as i64)),
        (StackEntry::AbsoluteAddr(a), StackEntry::Literal(v)) => StackEntry::AbsoluteAddr(a.wrapping_sub(v)),
        _ => StackEntry::Literal(0),
    }
}

fn binary_literal_op(stack: &mut Vec<StackEntry>, f: impl FnOnce(u64, u64) -> u64) -> bool {
    if stack.len() < 2 { return false; }
    let b = stack.pop().unwrap(); let a = stack.pop().unwrap();
    match (a, b) {
        (StackEntry::Literal(x), StackEntry::Literal(y)) => { stack.push(StackEntry::Literal(f(x, y))); true }
        _ => false,
    }
}

fn comparison_op(stack: &mut Vec<StackEntry>, cmp: impl FnOnce(u64, u64) -> bool) -> bool {
    if stack.len() < 2 { return false; }
    let b = stack.pop().unwrap(); let a = stack.pop().unwrap();
    match (a, b) {
        (StackEntry::Literal(x), StackEntry::Literal(y)) => { stack.push(StackEntry::Literal(if cmp(x, y) { 1 } else { 0 })); true }
        _ => false,
    }
}

fn entry_to_piece_location(entry: StackEntry) -> PieceLocation {
    match entry {
        StackEntry::Reg(r) => PieceLocation::Register(r),
        StackEntry::RegOffset(r, off) => PieceLocation::Address { register: Some(r), offset: off },
        StackEntry::FrameOffset(off) | StackEntry::Cfa(off) => PieceLocation::Address { register: None, offset: off },
        StackEntry::Literal(v) => PieceLocation::Value(v),
        StackEntry::AbsoluteAddr(a) => PieceLocation::AbsoluteAddress(a),
    }
}

/// Evaluate a DW_AT_location attribute value.
pub fn evaluate_location_attr(value: AttributeValue<R<'_>>, encoding: gimli::Encoding) -> Option<ExprLocation> {
    let bytes: &[u8] = match value {
        AttributeValue::Block(b) | AttributeValue::Exprloc(gimli::Expression(b)) => b.slice(),
        _ => return None,
    };
    evaluate_dwarf_expr(bytes, encoding)
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MacroDefinition {
    pub name: String,
    pub value: Option<String>,
    pub file: Option<String>,
    pub line: Option<u32>,
    pub locations: Vec<gimli::Range>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MacroDefinition {
    pub name: String,
    pub value: Option<String>,
    pub file: Option<String>,
    pub line: Option<u32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SourceLocation {
    pub file: String,
    pub line: u32,
    pub column: Option<u32>,
}

/// A recovered struct type from DWARF debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StructType {
    pub name: String,
    pub size: u64,
    pub template_params: Vec<String>,
    pub fields: Vec<StructField>,
    /// Template arguments recovered from child `DW_TAG_template_type_parameter`
    /// and `DW_TAG_template_value_parameter` DIEs, in declaration order.
    pub template_args: Vec<TemplateArgument>,
}

/// A single field within a struct or union.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StructField {
    pub name: String,
    pub offset: u64,
    pub size: u64,
    pub type_name: String,
}

/// A recovered enum type from DWARF debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EnumType {
    pub name: String,
    pub size: u64,
    pub variants: Vec<(String, i64)>,
}

/// A recovered union type from DWARF debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UnionType {
    pub name: String,
    pub size: u64,
    pub template_params: Vec<String>,
    pub members: Vec<StructField>,
}

pub fn import_dwarf(image: &BinaryImage) -> Result<DwarfInfo, LoadError> {
    let endian = match image.endian {
        crate::image::Endian::Little => RunTimeEndian::Little,
        crate::image::Endian::Big => RunTimeEndian::Big,
    };

    let dwarf_sections = load_dwarf_sections_from_image(image, false)?;
    let dwarf: gimli::Dwarf<R<'_>> =
        dwarf_sections.borrow(|section| EndianSlice::new(section.as_ref(), endian));

    let functions = extract_functions(&dwarf)?;
    let source_map = build_source_map(&dwarf)?;
    let (structs, enums, unions) = extract_composite_types(&dwarf)?;
    let macros = extract_macros(&dwarf)?;
    let functions = extract_functions(&dwarf)?;
    let source_map = build_source_map(&dwarf)?;
    let (structs, enums, unions) = extract_composite_types(&dwarf)?;
    let split_units = load_split_dwarf_units(image, endian)?;

    let mut functions = extract_functions(&dwarf)?;
    let mut source_map = build_source_map(&dwarf)?;
    let (mut structs, mut enums, mut unions) = extract_composite_types(&dwarf)?;

    for split in &split_units {
        merge_functions(&mut functions, extract_functions(&split.dwarf)?);
        source_map.extend(build_source_map(&split.dwarf)?);
        let (split_structs, split_enums, split_unions) = extract_composite_types(&split.dwarf)?;
        structs.extend(split_structs);
        enums.extend(split_enums);
        unions.extend(split_unions);
    }

    Ok(DwarfInfo {
        functions,
        source_map,
        structs,
        enums,
        unions,
        macros,
        split_dwarf_files: split_units
            .into_iter()
            .map(|unit| unit.display_name)
            .collect(),
    })
}

fn extract_macros(dwarf: &gimli::Dwarf<R<'_>>) -> Result<Vec<MacroDefinition>, gimli::Error> {
    let mut out = Vec::new();
    let mut seen = BTreeSet::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let mut tree = unit.entries_tree(None)?;
        let root = tree.root()?;
        let entry = root.entry();

        let mut visit = |body: String, file: Option<String>, line: Option<u64>| {
            if let Some(def) = parse_macro_definition(&body, file, line) {
                let key = (
                    def.name.clone(),
                    def.value.clone(),
                    def.file.clone(),
                    def.line,
                );
                if seen.insert(key) {
                    out.push(def);
                }
            }
        };

        if let Some(gimli::AttributeValue::DebugMacroRef(offset)) =
            entry.attr_value(gimli::DW_AT_macros)
        {
            let mut macros = dwarf.macros(offset)?;
            let mut current_file = None;
            while let Some(op) = macros.next()? {
                use gimli::read::MacroEntry::*;
                match op {
                    Define { line, text } => {
                        let body = text
                            .string(unit.unit_ref(dwarf))?
                            .to_string_lossy()
                            .into_owned();
                        visit(body, current_file.clone(), Some(line));
                    }
                    StartFile { file, .. } => {
                        current_file = resolve_macro_file_name(dwarf, &unit, Some(file))?;
                    }
                    EndFile => current_file = None,
                    _ => {}
                }
            }
        }

        if let Some(gimli::AttributeValue::DebugMacinfoRef(offset)) =
            entry.attr_value(gimli::DW_AT_macro_info)
        {
            let mut macros = dwarf.macinfo(offset)?;
            let mut current_file = None;
            while let Some(op) = macros.next()? {
                use gimli::read::MacroEntry::*;
                match op {
                    Define { line, text } => {
                        let body = text
                            .string(unit.unit_ref(dwarf))?
                            .to_string_lossy()
                            .into_owned();
                        visit(body, current_file.clone(), Some(line));
                    }
                    StartFile { file, .. } => {
                        current_file = resolve_macro_file_name(dwarf, &unit, Some(file))?;
                    }
                    EndFile => current_file = None,
                    _ => {}
                }
            }
        }
    }

    Ok(out)
}

fn parse_macro_definition(
    body: &str,
    file: Option<String>,
    line: Option<u64>,
) -> Option<MacroDefinition> {

fn extract_macros(dwarf: &gimli::Dwarf<R<'_>>) -> Result<Vec<MacroDefinition>, gimli::Error> {
    let mut out = Vec::new();
    let mut seen = BTreeSet::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let mut tree = unit.entries_tree(None)?;
        let root = tree.root()?;
        let entry = root.entry();

        let mut visit = |body: String, file: Option<String>, line: Option<u64>| {
            if let Some(def) = parse_macro_definition(&body, file, line) {
                let key = (def.name.clone(), def.value.clone(), def.file.clone(), def.line);
                if seen.insert(key) {
                    out.push(def);
                }
            }
        };

        if let Some(gimli::AttributeValue::DebugMacroRef(offset)) = entry.attr_value(gimli::DW_AT_macros) {
            let mut macros = dwarf.macros(offset)?;
            let mut current_file = None;
            while let Some(op) = macros.next()? {
                use gimli::read::MacroEntry::*;
                match op {
                    Define { line, text } => {
                        let body = text.string(unit.unit_ref(dwarf))?.to_string_lossy().into_owned();
                        visit(body, current_file.clone(), Some(line));
                    }
                    StartFile { file, .. } => {
                        current_file = resolve_macro_file_name(dwarf, &unit, Some(file))?;
                    }
                    EndFile => current_file = None,
                    _ => {}
                }
            }
        }

        if let Some(gimli::AttributeValue::DebugMacinfoRef(offset)) = entry.attr_value(gimli::DW_AT_macro_info) {
            let mut macros = dwarf.macinfo(offset)?;
            let mut current_file = None;
            while let Some(op) = macros.next()? {
                use gimli::read::MacroEntry::*;
                match op {
                    Define { line, text } => {
                        let body = text.string(unit.unit_ref(dwarf))?.to_string_lossy().into_owned();
                        visit(body, current_file.clone(), Some(line));
                    }
                    StartFile { file, .. } => {
                        current_file = resolve_macro_file_name(dwarf, &unit, Some(file))?;
                    }
                    EndFile => current_file = None,
                    _ => {}
                }
            }
        }
    }

    Ok(out)
}

fn parse_macro_definition(body: &str, file: Option<String>, line: Option<u64>) -> Option<MacroDefinition> {
    let trimmed = body.trim();
    if trimmed.is_empty() {
        return None;
    }
    let split_at = trimmed.find(char::is_whitespace).unwrap_or(trimmed.len());
    let (name, rest) = trimmed.split_at(split_at);
    let value = rest.trim();
    if name.is_empty() {
        return None;
    }
    Some(MacroDefinition {
        name: name.to_owned(),
        value: (!value.is_empty()).then(|| value.to_owned()),
        file,
        line: line.map(|v| v as u32),
    })
}

fn resolve_macro_file_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    file_idx: Option<u64>,
) -> Result<Option<String>, gimli::Error> {
    match file_idx {
        Some(idx) if idx != 0 => resolve_file_name(dwarf, unit, idx),
        _ => Ok(None),
struct SplitDwarfUnit {
    dwarf: gimli::Dwarf<R<'static>>,
    display_name: String,
}

fn load_dwarf_sections_from_image(
    image: &BinaryImage,
    dwo_names: bool,
) -> Result<gimli::DwarfSections<Cow<'_, [u8]>>, gimli::Error> {
    gimli::DwarfSections::load(|id| {
        let data: Cow<'_, [u8]> = section_data_by_dwarf_id(&image.sections, id, dwo_names)
            .map(Cow::Borrowed)
            .unwrap_or_else(|| Cow::Borrowed(&[]));
        Ok::<_, gimli::Error>(data)
    })
}

fn load_dwarf_sections_from_image_static(
    image: &BinaryImage,
    dwo_names: bool,
    endian: RunTimeEndian,
) -> Result<gimli::DwarfSections<R<'static>>, gimli::Error> {
    gimli::DwarfSections::load(|id| {
        Ok::<_, gimli::Error>(EndianSlice::new(
            section_data_by_dwarf_id(&image.sections, id, dwo_names)
                .map(leak_bytes)
                .unwrap_or(&[]),
            endian,
        ))
    })
}

fn section_data_by_dwarf_id<'a>(
    sections: &'a [Section],
    id: gimli::SectionId,
    dwo_names: bool,
) -> Option<&'a [u8]> {
    let wanted = if dwo_names {
        id.dwo_name().unwrap_or(id.name())
    } else {
        id.name()
    };
    sections
        .iter()
        .find(|section| section.name == wanted)
        .map(|section| section.data.as_slice())
}

fn load_split_dwarf_units(
    image: &BinaryImage,
    endian: RunTimeEndian,
) -> Result<Vec<SplitDwarfUnit>, gimli::Error> {
    let parent_sections = load_dwarf_sections_from_image_static(image, false, endian)?;
    let parent = parent_sections.borrow(|section| *section);
    let mut out = Vec::new();
    let mut units = parent.units();

    while let Some(header) = units.next()? {
        let skeleton = parent.unit(header)?;
        let Some(dwo_id) = skeleton.dwo_id else {
            continue;
        };

        let dwo_name = unit_dwo_name(&parent, &skeleton)?;
        if let Some(package) = load_embedded_dwp_unit(image, &parent, dwo_id, endian)? {
            out.push(package);
            continue;
        }

        let Some(name) = dwo_name else {
            continue;
        };

        if let Some(unit) = load_external_dwo_unit(image, &parent, &skeleton, &name, endian)? {
            out.push(unit);
        }
    }

    Ok(out)
}

fn load_embedded_dwp_unit(
    image: &BinaryImage,
    parent: &gimli::Dwarf<R<'static>>,
    dwo_id: gimli::DwoId,
    endian: RunTimeEndian,
) -> Result<Option<SplitDwarfUnit>, gimli::Error> {
    if section_data_by_dwarf_id(&image.sections, gimli::SectionId::DebugCuIndex, true).is_none() {
        return Ok(None);
    }

    let package = gimli::DwarfPackage::load(
        |id| {
            Ok::<_, gimli::Error>(EndianSlice::new(
                section_data_by_dwarf_id(&image.sections, id, true)
                    .map(leak_bytes)
                    .unwrap_or(&[]),
                endian,
            ))
        },
        EndianSlice::new(&[], endian),
    )?;

    Ok(package
        .find_cu(dwo_id, parent)?
        .map(|dwarf| SplitDwarfUnit {
            dwarf,
            display_name: format!("<embedded .dwp:{:#x}>", dwo_id.0),
        }))
}

fn load_external_dwo_unit(
    image: &BinaryImage,
    parent: &gimli::Dwarf<R<'static>>,
    skeleton: &gimli::Unit<R<'static>>,
    dwo_name: &str,
    endian: RunTimeEndian,
) -> Result<Option<SplitDwarfUnit>, gimli::Error> {
    let Some(bytes) = resolve_split_dwarf_bytes(image, skeleton, dwo_name) else {
        return Ok(None);
    };

    let file = match object::File::parse(bytes) {
        Ok(file) => file,
        Err(_) => return Ok(None),
    };

    if file.section_by_name(".debug_cu_index").is_some() {
        let package = gimli::DwarfPackage::load(
            |id| Ok::<_, gimli::Error>(object_dwarf_section_static(&file, id, true, endian)),
            EndianSlice::new(&[], endian),
        )?;
        return Ok(package
            .find_cu(skeleton.dwo_id.expect("checked by caller"), parent)?
            .map(|dwarf| SplitDwarfUnit {
                dwarf,
                display_name: dwo_name.to_owned(),
            }));
    }

    let sections = gimli::DwarfSections::load(|id| {
        Ok::<_, gimli::Error>(object_dwarf_section_static(&file, id, true, endian))
    })?;
    let mut dwo = sections.borrow(|section| *section);
    dwo.make_dwo(parent);
    dwo.file_type = DwarfFileType::Dwo;

    if dwo.units().next()?.is_none() {
        return Ok(None);
    }

    Ok(Some(SplitDwarfUnit {
        dwarf: dwo,
        display_name: dwo_name.to_owned(),
    }))
}

fn object_dwarf_section_static(
    file: &object::File<'_>,
    id: gimli::SectionId,
    dwo_names: bool,
    endian: RunTimeEndian,
) -> R<'static> {
    let name = if dwo_names {
        id.dwo_name().unwrap_or(id.name())
    } else {
        id.name()
    };
    let bytes = file
        .section_by_name(name)
        .and_then(|section| section.uncompressed_data().ok())
        .map(|data| leak_bytes(data.as_ref()))
        .unwrap_or(&[]);
    EndianSlice::new(bytes, endian)
}

fn resolve_split_dwarf_bytes(
    image: &BinaryImage,
    skeleton: &gimli::Unit<R<'_>>,
    dwo_name: &str,
) -> Option<&'static [u8]> {
    let mut candidates = Vec::new();
    let dwo_path = PathBuf::from(dwo_name);
    if dwo_path.is_absolute() {
        candidates.push(dwo_path);
    } else {
        if let Some(comp_dir) = unit_comp_dir(skeleton) {
            candidates.push(Path::new(&comp_dir).join(dwo_name));
        }
        candidates.push(PathBuf::from(dwo_name));
    }

    for candidate in candidates {
        if let Ok(bytes) = std::fs::read(&candidate) {
            return Some(leak_bytes(&bytes));
        }
    }

    for section in &image.sections {
        if section.name == format!(".debug_dwo/{dwo_name}") || section.name == dwo_name {
            return Some(leak_bytes(&section.data));
        }
    }

    None
}

fn leak_bytes(bytes: &[u8]) -> &'static [u8] {
    if bytes.is_empty() {
        &[]
    } else {
        Box::leak(bytes.to_vec().into_boxed_slice())
    }
}

fn unit_dwo_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
) -> Result<Option<String>, gimli::Error> {
    match unit.dwo_name()? {
        Some(attr) => dwarf
            .attr_string(unit, attr)
            .map(|s| Some(s.to_string_lossy().into_owned())),
        None => Ok(None),
    }
}

fn unit_comp_dir(unit: &gimli::Unit<R<'_>>) -> Option<String> {
    unit.comp_dir
        .as_ref()
        .map(|dir| dir.to_string_lossy().into_owned())
}

fn merge_functions(
    base: &mut BTreeMap<u64, FunctionDebugInfo>,
    split: BTreeMap<u64, FunctionDebugInfo>,
) {
    for (addr, info) in split {
        if addr != 0 {
            base.insert(addr, info);
        }
    }
}

fn extract_functions(
    dwarf: &gimli::Dwarf<R<'_>>,
) -> Result<BTreeMap<u64, FunctionDebugInfo>, gimli::Error> {
    let mut functions = BTreeMap::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        extract_functions_from_unit(dwarf, &unit, &mut functions)?;
    }

    Ok(functions)
}

fn extract_functions_from_unit(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    functions: &mut BTreeMap<u64, FunctionDebugInfo>,
) -> Result<(), gimli::Error> {
    let mut tree = unit.entries_tree(None)?;
    let root = tree.root()?;
    let mut children = root.children();

    while let Some(child) = children.next()? {
        let entry = child.entry();
        if entry.tag() != DW_TAG_subprogram {
            continue;
        }

        let low_pc = match entry.attr_value(DW_AT_low_pc) {
            Some(val) => match dwarf.attr_address(unit, val)? {
                Some(addr) => addr,
                None => continue,
            },
            None => continue,
        };

        let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
            Some(n) => n,
            None => continue,
        };

        let linkage_name = attr_string(dwarf, unit, entry, DW_AT_linkage_name)?;

        let ranges = extract_die_ranges(dwarf, unit, entry)?;
        let high_pc = match entry.attr_value(DW_AT_high_pc) {
            Some(AttributeValue::Addr(addr)) => Some(addr),
            Some(AttributeValue::Udata(size)) => Some(low_pc + size),
            _ => ranges.iter().map(|r| r.end).max(),
        };

        let return_type = match entry.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?,
            None => None,
        };

        let decl = extract_decl_location(dwarf, unit, entry)?;
        let (params, locals, template_args) = extract_params_locals_and_template_args(dwarf, unit, child)?;

        functions.insert(
            low_pc,
            FunctionDebugInfo {
                name,
                linkage_name,
                low_pc,
                high_pc,
                ranges,
                params,
                return_type,
                decl,
                locals,
                template_args,
            },
        );
    }

    Ok(())
}

type CompositeTypes = (
    BTreeMap<String, StructType>,
    BTreeMap<String, EnumType>,
    BTreeMap<String, UnionType>,
);

fn extract_composite_types(dwarf: &gimli::Dwarf<R<'_>>) -> Result<CompositeTypes, gimli::Error> {
    let mut structs = BTreeMap::new();
    let mut enums = BTreeMap::new();
    let mut unions = BTreeMap::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        extract_composites_from_unit(dwarf, &unit, &mut structs, &mut enums, &mut unions)?;
    }

    Ok((structs, enums, unions))
}

fn extract_composites_from_unit(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    structs: &mut BTreeMap<String, StructType>,
    enums: &mut BTreeMap<String, EnumType>,
    unions: &mut BTreeMap<String, UnionType>,
) -> Result<(), gimli::Error> {
    let mut tree = unit.entries_tree(None)?;
    let root = tree.root()?;
    let mut children = root.children();

    while let Some(child) = children.next()? {
        let tag = child.entry().tag();

        if tag == DW_TAG_structure_type || tag == DW_TAG_class_type {
            if let Some(st) = extract_struct_type(dwarf, unit, child)? {
                structs.insert(st.name.clone(), st);
            }
        } else if tag == DW_TAG_enumeration_type {
            if let Some(et) = extract_enum_type(dwarf, unit, child)? {
                enums.insert(et.name.clone(), et);
            }
        } else if tag == DW_TAG_union_type {
            if let Some(ut) = extract_union_type(dwarf, unit, child)? {
                unions.insert(ut.name.clone(), ut);
            }
        }
    }

    Ok(())
}

fn extract_struct_type(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Option<StructType>, gimli::Error> {
    let entry = node.entry();

    let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
        Some(n) => n,
        None => return Ok(None),
    };

    let size = entry
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
        .unwrap_or(0);

    let template_params = extract_template_params_for_type_die(dwarf, unit, entry)?;
    let fields = extract_members(dwarf, unit, node)?;
    let fields = extract_members(dwarf, unit, node)?;
    let (fields, template_args) = extract_members_and_template_args(dwarf, unit, node)?;
    let name = surface_template_args(name, &template_args);

    Ok(Some(StructType {
        name,
        size,
        template_params,
        fields,
    Ok(Some(StructType { name, size, fields }))
        fields,
        template_args,
    }))
}

fn extract_enum_type(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Option<EnumType>, gimli::Error> {
    let entry = node.entry();

    let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
        Some(n) => n,
        None => return Ok(None),
    };

    let size = entry
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
        .unwrap_or(0);

    let mut variants = Vec::new();
    let mut children = node.children();

    while let Some(child) = children.next()? {
        if child.entry().tag() != DW_TAG_enumerator {
            continue;
        }
        let child_entry = child.entry();

        let variant_name = match attr_string(dwarf, unit, child_entry, DW_AT_name)? {
            Some(n) => n,
            None => continue,
        };

        let value = child_entry
            .attr_value(DW_AT_const_value)
            .and_then(|v| {
                v.sdata_value()
                    .or_else(|| v.udata_value().map(|u| u as i64))
            })
            .unwrap_or(0);

        variants.push((variant_name, value));
    }

    Ok(Some(EnumType {
        name,
        size,
        variants,
    }))
}

fn extract_union_type(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Option<UnionType>, gimli::Error> {
    let entry = node.entry();

    let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
        Some(n) => n,
        None => return Ok(None),
    };

    let size = entry
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
        .unwrap_or(0);

    let template_params = extract_template_params_for_type_die(dwarf, unit, entry)?;
    let members = extract_members(dwarf, unit, node)?;

    Ok(Some(UnionType {
        name,
        size,
        template_params,
        members,
    }))
}


fn render_type_with_template_params(name: &str, template_params: &[String]) -> String {
    if template_params.is_empty() || name.contains('<') {
        name.to_owned()
    } else {
        format!("{}<{}>", name, template_params.join(", "))
    }
}

fn extract_members(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Vec<StructField>, gimli::Error> {
    Ok(extract_members_and_template_args(dwarf, unit, node)?.0)
}

fn extract_members_and_template_args(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<(Vec<StructField>, Vec<TemplateArgument>), gimli::Error> {
    let mut fields = Vec::new();
    let mut template_args = Vec::new();
    let mut children = node.children();

    while let Some(child) = children.next()? {
        let child_entry = child.entry();
        let tag = child_entry.tag();

        if tag == DW_TAG_template_type_parameter || tag == DW_TAG_template_value_parameter {
            if let Some(arg) = extract_template_argument(dwarf, unit, child_entry)? {
                template_args.push(arg);
            }
            continue;
        }

        if tag != DW_TAG_member {
            continue;
        }

        let name = match attr_string(dwarf, unit, child_entry, DW_AT_name)? {
            Some(n) => n,
            None => continue,
        };

        let offset = child_entry
            .attr_value(DW_AT_data_member_location)
            .and_then(|v| v.udata_value())
            .unwrap_or(0);

        let size = child_entry
            .attr_value(DW_AT_byte_size)
            .and_then(|v| v.udata_value())
            .unwrap_or(0);

        let type_name = match child_entry.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?.unwrap_or_default(),
            None => String::new(),
        };

        // If the member DIE lacks DW_AT_byte_size, try to get it from the
        // referenced type DIE instead.
        let size = if size == 0 {
            resolve_type_size(unit, child_entry).unwrap_or(0)
        } else {
            size
        };

        fields.push(StructField {
            name,
            offset,
            size,
            type_name,
        });
    }

    Ok((fields, template_args))
}

fn resolve_type_size(
    unit: &gimli::Unit<R<'_>>,
    entry: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Option<u64> {
    let type_attr = entry.attr_value(DW_AT_type)?;
    let offset = match type_attr {
        AttributeValue::UnitRef(o) => o,
        _ => return None,
    };

    let mut cursor = unit.entries_at_offset(offset).ok()?;
    cursor.next_entry().ok()?;
    let type_die = cursor.current()?;
    type_die
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
}

fn extract_params_locals_and_template_args(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    func_node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<(Vec<ParameterInfo>, Vec<LocalVariable>, Vec<TemplateArgument>), gimli::Error> {
    let mut params = Vec::new();
    let mut locals = Vec::new();
    let func_entry = func_node.entry().clone();
    let mut template_args = Vec::new();
    let mut children = func_node.children();

    while let Some(child) = children.next()? {
        let tag = child.entry().tag();
        let entry = child.entry();

        if tag == DW_TAG_template_type_parameter || tag == DW_TAG_template_value_parameter {
            if let Some(arg) = extract_template_argument(dwarf, unit, entry)? {
                template_args.push(arg);
            }
        } else if tag == DW_TAG_formal_parameter {
            let name = attr_string(dwarf, unit, entry, DW_AT_name)?;
            let type_name = match entry.attr_value(DW_AT_type) {
                Some(val) => resolve_type_name(dwarf, unit, val)?,
                None => None,
            };
            params.push(ParameterInfo { name, type_name });
        } else if tag == DW_TAG_variable {
            let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
                Some(n) => n,
                None => continue,
            };
            let type_name = match entry.attr_value(DW_AT_type) {
                Some(val) => resolve_type_name(dwarf, unit, val)?,
                None => None,
            };
            let location_attr = entry.attr_value(DW_AT_location);
            let frame_offset = location_attr.and_then(decode_fbreg_offset);
            let expr_location =
                location_attr.and_then(|v| evaluate_location_attr(v, unit.encoding()));
            let frame_offset = entry
                .attr_value(DW_AT_location)
                .and_then(decode_fbreg_offset);
            let locations = match location_attr {
                Some(value) => extract_location_ranges(dwarf, unit, value)?,
                None => Vec::new(),
            let frame_offset = entry
                .attr_value(DW_AT_location)
                .and_then(decode_fbreg_offset);
            let frame_offset = match entry.attr_value(DW_AT_location) {
                Some(value) => decode_frame_offset_from_location(dwarf, unit, &func_entry, value),
                None => None,
            };
            locals.push(LocalVariable {
                name,
                type_name,
                frame_offset,
                expr_location,
                locations,
            });
        }
    }

    Ok((params, locals, template_args))
}

fn extract_template_argument(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    entry: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Result<Option<TemplateArgument>, gimli::Error> {
    let name = attr_string(dwarf, unit, entry, DW_AT_name)?;
    let value = if entry.tag() == DW_TAG_template_type_parameter {
        match entry.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?.unwrap_or_else(|| {
                name.clone()
                    .unwrap_or_else(|| "<unknown type template arg>".to_string())
            }),
            None => name
                .clone()
                .unwrap_or_else(|| "<unknown type template arg>".to_string()),
        }
    } else if let Some(value) = entry.attr_value(DW_AT_const_value) {
        format_template_const_value(dwarf, unit, value)?
    } else if let Some(val) = entry.attr_value(DW_AT_type) {
        resolve_type_name(dwarf, unit, val)?.unwrap_or_else(|| {
            name.clone()
                .unwrap_or_else(|| "<unknown value template arg>".to_string())
        })
    } else {
        name.clone()
            .unwrap_or_else(|| "<unknown value template arg>".to_string())
    };

    Ok(Some(TemplateArgument { name, value }))
}

fn format_template_const_value(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    value: AttributeValue<R<'_>>,
) -> Result<String, gimli::Error> {
    if let Some(s) = value.sdata_value() {
        return Ok(s.to_string());
    }
    if let Some(u) = value.udata_value() {
        return Ok(u.to_string());
    }
    match value {
        AttributeValue::String(_) | AttributeValue::DebugStrRef(_) | AttributeValue::DebugLineStrRef(_) => {
            Ok(dwarf.attr_string(unit, value)?.to_string_lossy().into_owned())
        }
        AttributeValue::Flag(b) => Ok(if b { "true" } else { "false" }.to_string()),
        AttributeValue::Addr(a) => Ok(format!("0x{a:x}")),
        _ => Ok("<template value>".to_string()),
    }
}

fn surface_template_args(name: String, args: &[TemplateArgument]) -> String {
    if args.is_empty() || has_template_args(&name) {
        return name;
    }
    let rendered = args
        .iter()
        .map(|arg| arg.value.as_str())
        .collect::<Vec<_>>()
        .join(", ");
    format!("{name}<{rendered}>")
}

fn has_template_args(name: &str) -> bool {
    let mut depth = 0usize;
    for c in name.chars() {
        match c {
            '<' => depth += 1,
            '>' if depth > 0 => return true,
            _ => {}
        }
    }
    false
}

fn decode_frame_offset_from_location(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    func_entry: &gimli::DebuggingInformationEntry<R<'_>>,
    value: AttributeValue<R<'_>>,
) -> Option<i64> {
    let expression = attribute_expression(value)?;
    let encoding = unit.encoding();
    let mut eval = expression.evaluation(encoding);
    eval.set_max_iterations(1024);

    let mut frame_base = None;
    let mut result = eval.evaluate().ok()?;
    loop {
        match result {
            EvaluationResult::Complete => break,
            EvaluationResult::RequiresFrameBase => {
                let base = *frame_base.get_or_insert_with(|| {
                    resolve_frame_base(dwarf, unit, func_entry).unwrap_or(0)
                });
                result = eval.resume_with_frame_base(base).ok()?;
            }
            EvaluationResult::RequiresCallFrameCfa => {
                let base = *frame_base.get_or_insert_with(|| {
                    resolve_frame_base(dwarf, unit, func_entry).unwrap_or(0)
                });
                result = eval.resume_with_call_frame_cfa(base).ok()?;
            }
            EvaluationResult::RequiresRelocatedAddress(address) => {
                result = eval.resume_with_relocated_address(address).ok()?;
            }
            EvaluationResult::RequiresIndexedAddress { index, .. } => {
                let address = dwarf.address(unit, index).ok()?;
                result = eval.resume_with_indexed_address(address).ok()?;
            }
            EvaluationResult::RequiresMemory { .. }
            | EvaluationResult::RequiresRegister { .. }
            | EvaluationResult::RequiresTls(_)
            | EvaluationResult::RequiresAtLocation(_)
            | EvaluationResult::RequiresEntryValue(_)
            | EvaluationResult::RequiresParameterRef(_)
            | EvaluationResult::RequiresBaseType(_) => return None,
        }
    }

    frame_offset_from_pieces(eval.as_result())
}

fn attribute_expression(value: AttributeValue<R<'_>>) -> Option<gimli::Expression<R<'_>>> {
    match value {
        AttributeValue::Exprloc(expr) => Some(expr),
        AttributeValue::Block(block) => Some(gimli::Expression(block)),
        _ => None,
    }
}

fn resolve_frame_base(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    func_entry: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Option<u64> {
    let frame_base_attr = func_entry.attr_value(DW_AT_frame_base)?;
    let expression = attribute_expression(frame_base_attr)?;
    let mut eval = expression.evaluation(unit.encoding());
    eval.set_max_iterations(1024);

    let mut result = eval.evaluate().ok()?;
    loop {
        match result {
            EvaluationResult::Complete => break,
            EvaluationResult::RequiresRelocatedAddress(address) => {
                result = eval.resume_with_relocated_address(address).ok()?;
            }
            EvaluationResult::RequiresIndexedAddress { index, .. } => {
                let address = dwarf.address(unit, index).ok()?;
                result = eval.resume_with_indexed_address(address).ok()?;
            }
            EvaluationResult::RequiresCallFrameCfa => {
                result = eval.resume_with_call_frame_cfa(0).ok()?;
            }
            EvaluationResult::RequiresFrameBase
            | EvaluationResult::RequiresMemory { .. }
            | EvaluationResult::RequiresRegister { .. }
            | EvaluationResult::RequiresTls(_)
            | EvaluationResult::RequiresAtLocation(_)
            | EvaluationResult::RequiresEntryValue(_)
            | EvaluationResult::RequiresParameterRef(_)
            | EvaluationResult::RequiresBaseType(_) => return None,
        }
    }

    absolute_location_from_pieces(eval.as_result())
}

fn frame_offset_from_pieces(pieces: &[Piece<R<'_>>]) -> Option<i64> {
    let piece = pieces.first()?;
    if pieces.len() != 1 || piece.bit_offset.is_some() || piece.size_in_bits.is_some() {
        return None;
    }
    match piece.location {
        Location::Address { address } => Some(address as i64),
        Location::Value { value } => value_to_i64(value),
        _ => None,
    }
}

fn absolute_location_from_pieces(pieces: &[Piece<R<'_>>]) -> Option<u64> {
    let piece = pieces.first()?;
    if pieces.len() != 1 || piece.bit_offset.is_some() || piece.size_in_bits.is_some() {
        return None;
    }
    match piece.location {
        Location::Address { address } => Some(address),
        Location::Value { value } => value_to_u64(value),
        _ => None,
    }
}

fn value_to_i64(value: Value) -> Option<i64> {
    match value {
        Value::Generic(v) => Some(v as i64),
        Value::I8(v) => Some(v as i64),
        Value::I16(v) => Some(v as i64),
        Value::I32(v) => Some(v as i64),
        Value::I64(v) => Some(v),
        Value::U8(v) => Some(v as i64),
        Value::U16(v) => Some(v as i64),
        Value::U32(v) => Some(v as i64),
        Value::U64(v) => i64::try_from(v).ok(),
        _ => None,
    }
}

fn value_to_u64(value: Value) -> Option<u64> {
    match value {
        Value::Generic(v) => Some(v),
        Value::U8(v) => Some(v as u64),
        Value::U16(v) => Some(v as u64),
        Value::U32(v) => Some(v as u64),
        Value::U64(v) => Some(v),
        Value::I8(v) if v >= 0 => Some(v as u64),
        Value::I16(v) if v >= 0 => Some(v as u64),
        Value::I32(v) if v >= 0 => Some(v as u64),
        Value::I64(v) if v >= 0 => Some(v as u64),
        _ => None,
    }
}

fn extract_die_ranges<'a>(
    dwarf: &gimli::Dwarf<R<'a>>,
    unit: &gimli::Unit<R<'a>>,
    entry: &gimli::DebuggingInformationEntry<R<'a>>,
) -> Result<Vec<gimli::Range>, gimli::Error> {
    let mut ranges = Vec::new();
    let mut iter = dwarf.die_ranges(unit, entry)?;
    while let Some(range) = iter.next()? {
        ranges.push(range);
    }
    Ok(ranges)
}

fn extract_location_ranges<'a>(
    dwarf: &gimli::Dwarf<R<'a>>,
    unit: &gimli::Unit<R<'a>>,
    value: AttributeValue<R<'a>>,
) -> Result<Vec<gimli::Range>, gimli::Error> {
    let mut ranges = Vec::new();
    if let Some(mut locations) = dwarf.attr_locations(unit, value)? {
        while let Some(location) = locations.next()? {
            ranges.push(location.range);
        }
    }
    Ok(ranges)
}

fn resolve_type_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    type_attr: AttributeValue<R<'_>>,
) -> Result<Option<String>, gimli::Error> {
    let offset = match type_attr {
        AttributeValue::UnitRef(o) => o,
        _ => return Ok(None),
    };

    let mut cursor = unit.entries_at_offset(offset)?;
    cursor.next_entry()?;
    let type_die = match cursor.current() {
        Some(die) => die,
        None => return Ok(None),
    };

    let tag = type_die.tag();
    let inner_type = || -> Result<Option<String>, gimli::Error> {
        match type_die.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val),
            None => Ok(None),
        }
    };

    if tag == DW_TAG_base_type || tag == DW_TAG_typedef {
        attr_string(dwarf, unit, type_die, DW_AT_name)
    } else if tag == DW_TAG_pointer_type {
        let pointee = match type_die.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?,
            None => Some("void".to_owned()),
        };
        Ok(pointee.map(|t| format!("{t} *")))
    } else if tag == DW_TAG_const_type {
        Ok(inner_type()?.map(|t| format!("const {t}")))
    } else if tag == DW_TAG_volatile_type {
        Ok(inner_type()?.map(|t| format!("volatile {t}")))
    } else if tag == DW_TAG_restrict_type {
        Ok(inner_type()?.map(|t| format!("{t} restrict")))
    } else if tag == DW_TAG_structure_type || tag == DW_TAG_union_type {
        let base_name = attr_string(dwarf, unit, type_die, DW_AT_name)?;
        let template_params = extract_template_params_for_type_die(dwarf, unit, type_die)?;
        Ok(base_name.map(|name| render_type_with_template_params(&name, &template_params)))
    } else {
        attr_string(dwarf, unit, type_die, DW_AT_name)
    }
}

fn extract_template_params_for_type_die(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    type_die: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Result<Vec<String>, gimli::Error> {
    let mut cursor = unit.entries_at_offset(type_die.offset())?;
    cursor.next_entry()?;
    let current_depth = cursor.depth();
    let mut params = Vec::new();
    let mut seen = BTreeSet::new();

    while let Some(entry) = cursor.next_dfs()? {
        if entry.depth() <= current_depth {
            break;
        }
        if entry.tag() != DW_TAG_template_type_parameter {
            continue;
        }

        let type_name = entry
            .attr_value(DW_AT_type)
            .map(|val| resolve_type_name(dwarf, unit, val))
            .transpose()?
            .flatten();
        let param_name = attr_string(dwarf, unit, entry, DW_AT_name)?;

        let rendered = match (param_name, type_name) {
            (Some(name), Some(type_name)) if !name.is_empty() => {
                format!("{} = {}", name, type_name)
            }
            (Some(name), Some(type_name)) if !name.is_empty() => format!("{} = {}", name, type_name),
            (Some(name), None) if !name.is_empty() => name,
            (_, Some(type_name)) if !type_name.is_empty() => type_name,
            _ => continue,
        };

        if seen.insert(rendered.clone()) {
            params.push(rendered);
        }
    }

    Ok(params)
}

fn attr_string(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    entry: &gimli::DebuggingInformationEntry<R<'_>>,
    attr: gimli::DwAt,
) -> Result<Option<String>, gimli::Error> {
    match entry.attr_value(attr) {
        Some(val) => {
            let s = dwarf.attr_string(unit, val)?;
            Ok(Some(s.to_string_lossy().into_owned()))
        }
        None => Ok(None),
    }
}

fn extract_decl_location(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    entry: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Result<Option<SourceLocation>, gimli::Error> {
    let line = match entry.attr_value(gimli::DW_AT_decl_line) {
        Some(val) => val.udata_value().unwrap_or(0) as u32,
        None => return Ok(None),
    };

    let file_idx = match entry.attr_value(gimli::DW_AT_decl_file) {
        Some(val) => val.udata_value().unwrap_or(0),
        None => return Ok(None),
    };

    let file = resolve_file_name(dwarf, unit, file_idx)?;

    let column = entry
        .attr_value(gimli::DW_AT_decl_column)
        .and_then(|v| v.udata_value())
        .map(|c| c as u32);

    Ok(Some(SourceLocation {
        file: file.unwrap_or_else(|| format!("<file {file_idx}>")),
        line,
        column,
    }))
}

fn resolve_file_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    file_idx: u64,
) -> Result<Option<String>, gimli::Error> {
    let line_program = match &unit.line_program {
        Some(lp) => lp,
        None => return Ok(None),
    };

    let header = line_program.header();
    let file = match header.file(file_idx) {
        Some(f) => f,
        None => return Ok(None),
    };

    let mut path = String::new();

    if let Some(dir) = file.directory(header) {
        let dir_str = dwarf.attr_string(unit, dir)?;
        let dir_s = dir_str.to_string_lossy();
        if !dir_s.is_empty() {
            path.push_str(&dir_s);
            if !dir_s.ends_with('/') {
                path.push('/');
            }
        }
    }

    let name_str = dwarf.attr_string(unit, file.path_name())?;
    path.push_str(&name_str.to_string_lossy());

    Ok(Some(path))
}

fn build_source_map(
    dwarf: &gimli::Dwarf<R<'_>>,
) -> Result<BTreeMap<u64, SourceLocation>, gimli::Error> {
    let mut map = BTreeMap::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let Some(ref lp) = unit.line_program else {
            continue;
        };

        let mut rows = lp.clone().rows();
        while let Some((_header, row)) = rows.next_row()? {
            if !row.is_stmt() {
                continue;
            }
            let addr = row.address();
            if map.contains_key(&addr) {
                continue;
            }

            let file_idx = match row.file_index() {
                0 => continue,
                idx => idx,
            };
            let line = match row.line() {
                Some(l) => l.get() as u32,
                None => continue,
            };
            let column = match row.column() {
                gimli::ColumnType::LeftEdge => None,
                gimli::ColumnType::Column(c) => Some(c.get() as u32),
            };

            let file = resolve_file_name(dwarf, &unit, file_idx)?;
            if let Some(file) = file {
                map.insert(addr, SourceLocation { file, line, column });
            }
        }
    }

    Ok(map)
}

// ---------------------------------------------------------------------------
// `.debug_macro` parser (t279)
// ---------------------------------------------------------------------------

/// A single macro entry recovered from a DWARF 5 `.debug_macro` section.
///
/// This is intentionally a compact public representation: line/file operands
/// needed only for stream structure are consumed, while inline define/undef
/// text is surfaced for source-oriented recovery passes. Indirect string
/// opcodes (`*_strp`, `*_strx`) are represented with an empty body/name because
/// resolving them requires companion `.debug_str` / `.debug_str_offsets`
/// sections that this standalone parser does not receive.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum MacroEntry {
    /// `DW_MACRO_define` (and indirect define forms once consumed).
    Define { line: u32, body: String },
    /// `DW_MACRO_undef` (and indirect undef forms once consumed).
    Undef { line: u32, name: String },
    /// `DW_MACRO_start_file`; line/file operands are consumed and dropped.
    StartFile,
    /// `DW_MACRO_end_file`.
    EndFile,
}

const DW_MACRO_DEFINE: u8 = 0x01;
const DW_MACRO_UNDEF: u8 = 0x02;
const DW_MACRO_START_FILE: u8 = 0x03;
const DW_MACRO_END_FILE: u8 = 0x04;
const DW_MACRO_DEFINE_STRP: u8 = 0x05;
const DW_MACRO_UNDEF_STRP: u8 = 0x06;
const DW_MACRO_DEFINE_STRX: u8 = 0x07;
const DW_MACRO_UNDEF_STRX: u8 = 0x08;

/// Parse a DWARF 5 `.debug_macro` section into simplified macro entries.
///
/// The parser accepts either a full DWARF 5 macro section beginning with the
/// standard `version, flags` header, or a headerless opcode stream for small
/// synthetic tests. It handles opcodes 0x01 through 0x08, stops at the 0x00
/// terminator, and returns all entries decoded before malformed/truncated input
/// rather than panicking.
pub fn parse_debug_macro(data: &[u8]) -> Vec<MacroEntry> {
    let mut out = Vec::new();
    let mut cur = DwarfMacroCursor::new(data);

    // Optional DWARF 5 header: u16 version, u8 flags, optional
    // debug_line_offset, optional opcode/form table. Headerless streams are
    // useful for tests and mirror the opcode walk below.
    if data.len() >= 3 {
        let version = u16::from_le_bytes([data[0], data[1]]);
        if version == 4 || version == 5 {
            cur.pos = 3;
            let flags = data[2];
            if flags & 0x01 != 0 {
                let offset_size = if flags & 0x02 != 0 { 8 } else { 4 };
                if cur.skip(offset_size).is_none() {
                    return out;
                }
            }
            if flags & 0x04 != 0 {
                let table_len = match cur.read_uleb128() {
                    Some(v) => v,
                    None => return out,
                };
                for _ in 0..table_len {
                    if cur.read_u8().is_none() {
                        return out;
                    }
                    let operands = match cur.read_uleb128() {
                        Some(v) => v,
                        None => return out,
                    };
                    for _ in 0..operands {
                        if cur.read_uleb128().is_none() {
                            return out;
                        }
                    }
                }
            }
        }
    }

    while let Some(opcode) = cur.read_u8() {
        match opcode {
            0x00 => break,
            DW_MACRO_DEFINE => {
                let Some(line) = cur.read_uleb128() else {
                    break;
                };
                let Some(body) = cur.read_cstring() else {
                    break;
                };
                out.push(MacroEntry::Define {
                    line: saturating_u32(line),
                    body,
                });
            }
            DW_MACRO_UNDEF => {
                let Some(line) = cur.read_uleb128() else {
                    break;
                };
                let Some(name) = cur.read_cstring() else {
                    break;
                };
                out.push(MacroEntry::Undef {
                    line: saturating_u32(line),
                    name,
                });
            }
            DW_MACRO_START_FILE => {
                if cur.read_uleb128().is_none() || cur.read_uleb128().is_none() {
                    break;
                }
                out.push(MacroEntry::StartFile);
            }
            DW_MACRO_END_FILE => out.push(MacroEntry::EndFile),
            DW_MACRO_DEFINE_STRP | DW_MACRO_UNDEF_STRP => {
                let Some(line) = cur.read_uleb128() else {
                    break;
                };
                if cur.skip(4).is_none() {
                    break;
                }
                if opcode == DW_MACRO_DEFINE_STRP {
                    out.push(MacroEntry::Define {
                        line: saturating_u32(line),
                        body: String::new(),
                    });
                } else {
                    out.push(MacroEntry::Undef {
                        line: saturating_u32(line),
                        name: String::new(),
                    });
                }
            }
            DW_MACRO_DEFINE_STRX | DW_MACRO_UNDEF_STRX => {
                let Some(line) = cur.read_uleb128() else {
                    break;
                };
                if cur.read_uleb128().is_none() {
                    break;
                }
                if opcode == DW_MACRO_DEFINE_STRX {
                    out.push(MacroEntry::Define {
                        line: saturating_u32(line),
                        body: String::new(),
                    });
                } else {
                    out.push(MacroEntry::Undef {
                        line: saturating_u32(line),
                        name: String::new(),
                    });
                }
            }
            _ => break,
        }
    }

    out
}

fn saturating_u32(value: u64) -> u32 {
    value.min(u64::from(u32::MAX)) as u32
}

struct DwarfMacroCursor<'a> {
    buf: &'a [u8],
    pos: usize,
}

impl<'a> DwarfMacroCursor<'a> {
    fn new(buf: &'a [u8]) -> Self {
        Self { buf, pos: 0 }
    }

    fn read_u8(&mut self) -> Option<u8> {
        let byte = *self.buf.get(self.pos)?;
        self.pos += 1;
        Some(byte)
    }

    fn skip(&mut self, n: usize) -> Option<()> {
        let end = self.pos.checked_add(n)?;
        if end > self.buf.len() {
            return None;
        }
        self.pos = end;
        Some(())
    }

    fn read_uleb128(&mut self) -> Option<u64> {
        let mut result = 0u64;
        let mut shift = 0u32;
        loop {
            let byte = self.read_u8()?;
            result |= u64::from(byte & 0x7f) << shift;
            if byte & 0x80 == 0 {
                return Some(result);
            }
            shift = shift.checked_add(7)?;
            if shift >= 64 {
                return None;
            }
        }
    }

    fn read_cstring(&mut self) -> Option<String> {
        let start = self.pos;
        while self.pos < self.buf.len() && self.buf[self.pos] != 0 {
            self.pos += 1;
        }
        if self.pos >= self.buf.len() {
            return None;
        }
        let text = String::from_utf8_lossy(&self.buf[start..self.pos]).into_owned();
        self.pos += 1;
        Some(text)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{ElfLoader, Loader};

    fn load_debug_fixture() -> BinaryImage {
        let data = std::fs::read("../../fixtures/debug_calls.elf")
            .expect("fixture debug_calls.elf must exist");
        ElfLoader::load(&data).expect("should parse debug_calls.elf")
    }

    #[test]
    fn debug_sections_present() {
        let img = load_debug_fixture();
        assert!(img.section_by_name(".debug_info").is_some());
        assert!(img.section_by_name(".debug_abbrev").is_some());
        assert!(img.section_by_name(".debug_str").is_some());
        assert!(img.section_by_name(".debug_line").is_some());
    }

    #[test]
    fn extracts_all_functions() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        assert!(
            !info.functions.is_empty(),
            "should extract at least one function"
        );

        let names: Vec<&str> = info.functions.values().map(|f| f.name.as_str()).collect();
        assert!(names.contains(&"main"), "should find main: {names:?}");
        assert!(names.contains(&"compute"), "should find compute: {names:?}");
        assert!(names.contains(&"add"), "should find add: {names:?}");
        assert!(names.contains(&"sub"), "should find sub: {names:?}");
        assert!(names.contains(&"mul"), "should find mul: {names:?}");
        assert!(names.contains(&"square"), "should find square: {names:?}");
        assert!(names.contains(&"clamp"), "should find clamp: {names:?}");
    }

    #[test]
    fn function_addresses_valid() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        for (addr, func) in &info.functions {
            assert!(
                *addr > 0,
                "function {} should have non-zero address",
                func.name
            );
            assert_eq!(*addr, func.low_pc);
            if let Some(high) = func.high_pc {
                assert!(
                    high > func.low_pc,
                    "high_pc ({high:#x}) should be > low_pc ({:#x}) for {}",
                    func.low_pc,
                    func.name,
                );
            }
            if !func.ranges.is_empty() {
                assert_eq!(func.ranges[0].begin, func.low_pc);
                assert!(
                    func.ranges.iter().all(|r| r.end > r.begin),
                    "all function ranges should be non-empty for {}: {:?}",
                    func.name,
                    func.ranges
                );
            }
        }
    }

    #[test]
    fn parameter_names_and_types() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let add_fn = info
            .functions
            .values()
            .find(|f| f.name == "add")
            .expect("should find add function");

        assert_eq!(
            add_fn.params.len(),
            2,
            "add(int a, int b) should have 2 params"
        );
        assert_eq!(add_fn.params[0].name.as_deref(), Some("a"));
        assert_eq!(add_fn.params[1].name.as_deref(), Some("b"));
        assert_eq!(add_fn.params[0].type_name.as_deref(), Some("int"));
        assert_eq!(add_fn.params[1].type_name.as_deref(), Some("int"));
    }

    #[test]
    fn return_type() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let add_fn = info
            .functions
            .values()
            .find(|f| f.name == "add")
            .expect("should find add function");

        assert_eq!(add_fn.return_type.as_deref(), Some("int"));
    }

    #[test]
    fn source_location_for_function() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let compute_fn = info
            .functions
            .values()
            .find(|f| f.name == "compute")
            .expect("should find compute function");

        let decl = compute_fn
            .decl
            .as_ref()
            .expect("compute should have source location");
        assert!(
            decl.file.contains("calls.c"),
            "compute should be declared in calls.c, got: {}",
            decl.file,
        );
        assert_eq!(decl.line, 11, "compute is declared on line 11");
    }

    #[test]
    fn source_map_populated() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        assert!(
            !info.source_map.is_empty(),
            "source map should have entries"
        );

        let has_calls_c = info
            .source_map
            .values()
            .any(|loc| loc.file.contains("calls.c"));
        assert!(has_calls_c, "source map should reference calls.c");
    }

    #[test]
    fn follows_split_dwarf_dwo_file() {
        let gcc = match std::process::Command::new("gcc").arg("--version").output() {
            Ok(output) if output.status.success() => "gcc",
            _ => return,
        };
        let tmp = tempfile::tempdir().expect("tempdir");
        let src = tmp.path().join("split.c");
        std::fs::write(
            &src,
            "int add_split(int a, int b) { return a + b; }\nint main(void) { return add_split(1, 2); }\n",
        )
        .expect("write source");
        let exe = tmp.path().join("split");
        let status = std::process::Command::new(gcc)
            .args(["-g", "-gsplit-dwarf"])
            .arg(&src)
            .arg("-o")
            .arg(&exe)
            .status()
            .expect("run gcc");
        if !status.success() {
            return;
        }

        let data = std::fs::read(&exe).expect("read split dwarf exe");
        let img = ElfLoader::load(&data).expect("load split dwarf exe");
        let info = import_dwarf(&img).expect("parse split dwarf");
        let names: Vec<&str> = info
            .functions
            .values()
            .map(|func| func.name.as_str())
            .collect();

        assert!(
            !info.split_dwarf_files.is_empty(),
            "expected split-DWARF side file to be followed"
        );
        assert!(
            names.contains(&"add_split"),
            "split .dwo should contribute add_split, got {names:?}"
        );
        assert!(
            names.contains(&"main"),
            "split .dwo should contribute main: {names:?}"
        );
    }

    #[test]
    fn no_dwarf_returns_empty() {
        let data =
            std::fs::read("../../fixtures/stripped.elf").expect("fixture stripped.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse stripped.elf");
        let info = import_dwarf(&img).expect("should succeed even without DWARF");

        assert!(
            info.functions.is_empty(),
            "stripped binary should have no DWARF functions"
        );
    }

    #[test]
    fn three_param_function() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let clamp_fn = info
            .functions
            .values()
            .find(|f| f.name == "clamp")
            .expect("should find clamp function");

        assert_eq!(
            clamp_fn.params.len(),
            3,
            "clamp(int x, int lo, int hi) has 3 params"
        );
        assert_eq!(clamp_fn.params[0].name.as_deref(), Some("x"));
        assert_eq!(clamp_fn.params[1].name.as_deref(), Some("lo"));
        assert_eq!(clamp_fn.params[2].name.as_deref(), Some("hi"));
    }

    fn load_structs_fixture() -> BinaryImage {
        let data = std::fs::read("../../fixtures/debug_structs.elf")
            .expect("fixture debug_structs.elf must exist");
        ElfLoader::load(&data).expect("should parse debug_structs.elf")
    }

    #[test]
    fn test_dwarf_struct_recovery() {
        let img = load_structs_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        assert!(
            info.structs.contains_key("Point"),
            "should recover Point struct, got: {:?}",
            info.structs.keys().collect::<Vec<_>>(),
        );
        assert!(
            info.structs.contains_key("Rect"),
            "should recover Rect struct, got: {:?}",
            info.structs.keys().collect::<Vec<_>>(),
        );

        let point = &info.structs["Point"];
        assert_eq!(point.size, 8);
        assert_eq!(point.fields.len(), 2);

        assert_eq!(point.fields[0].name, "x");
        assert_eq!(point.fields[0].offset, 0);
        assert_eq!(point.fields[0].size, 4);
        assert_eq!(point.fields[0].type_name, "int");

        assert_eq!(point.fields[1].name, "y");
        assert_eq!(point.fields[1].offset, 4);
        assert_eq!(point.fields[1].size, 4);
        assert_eq!(point.fields[1].type_name, "int");

        let rect = &info.structs["Rect"];
        assert_eq!(rect.size, 16);
        assert_eq!(rect.fields.len(), 2);

        assert_eq!(rect.fields[0].name, "origin");
        assert_eq!(rect.fields[0].offset, 0);
        assert_eq!(rect.fields[0].size, 8);
        assert_eq!(rect.fields[0].type_name, "Point");

        assert_eq!(rect.fields[1].name, "size");
        assert_eq!(rect.fields[1].offset, 8);
        assert_eq!(rect.fields[1].size, 8);
        assert_eq!(rect.fields[1].type_name, "Point");
    }

    fn load_templates_fixture() -> BinaryImage {
        let data = std::fs::read("../../fixtures/debug_templates.elf")
            .expect("fixture debug_templates.elf must exist");
        ElfLoader::load(&data).expect("should parse debug_templates.elf")
    }

    #[test]
    fn cxx_template_type_parameters_surface_in_struct_declarations() {
        let img = load_templates_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let box_int = info
            .structs
            .get("Box<int>")
            .expect("Box<int> should be keyed by its surfaced template declaration");
        assert_eq!(box_int.template_args.len(), 1);
        assert_eq!(box_int.template_args[0].name.as_deref(), Some("T"));
        assert_eq!(box_int.template_args[0].value, "int");
        assert_eq!(box_int.fields[0].type_name, "int");

        let array = info
            .structs
            .get("Array<long int, 4>")
            .expect("Array<long int, 4> should include type and value template args");
        assert_eq!(array.template_args.len(), 2);
        assert_eq!(array.template_args[0].name.as_deref(), Some("T"));
        assert_eq!(array.template_args[0].value, "long int");
        assert_eq!(array.template_args[1].name.as_deref(), Some("N"));
        assert_eq!(array.template_args[1].value, "4");
    }

    #[test]
    fn cxx_function_template_parameters_surface_in_function_declarations() {
        let img = load_templates_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let add_t = info
            .functions
            .values()
            .find(|f| f.name == "addT<int>")
            .expect("should recover instantiated function template name");
        assert_eq!(add_t.template_args.len(), 1);
        assert_eq!(add_t.template_args[0].name.as_deref(), Some("T"));
        assert_eq!(add_t.template_args[0].value, "int");
        assert_eq!(add_t.return_type.as_deref(), Some("int"));
        assert!(add_t
            .params
            .iter()
            .all(|param| param.type_name.as_deref() == Some("int")));
    }

    #[test]
    fn test_dwarf_type_name_surfaces_template_type_arguments() {
        use std::collections::BTreeMap;

        use gimli::write::{AttributeValue, Dwarf, EndianVec, LineProgram, Sections, Unit};
        use gimli::{Encoding, Format, LittleEndian};
        use unlace_ir::ArchId;

        let encoding = Encoding {
            format: Format::Dwarf32,
            version: 5,
            address_size: 8,
        };
        let mut dwarf = Dwarf::default();
        let unit_id = dwarf.units.add(Unit::new(encoding, LineProgram::none()));
        let unit = dwarf.units.get_mut(unit_id);
        let root = unit.root();

        let int_ty = unit.add(root, DW_TAG_base_type);
        unit.get_mut(int_ty)
            .set(DW_AT_name, AttributeValue::String(b"int".to_vec()));
        unit.get_mut(int_ty)
            .set(DW_AT_byte_size, AttributeValue::Data1(4));

        let vec_ty = unit.add(root, DW_TAG_structure_type);
        unit.get_mut(vec_ty)
            .set(DW_AT_name, AttributeValue::String(b"Vec".to_vec()));
        unit.get_mut(vec_ty)
            .set(DW_AT_byte_size, AttributeValue::Data1(24));

        let template_param = unit.add(vec_ty, DW_TAG_template_type_parameter);
        unit.get_mut(template_param)
            .set(DW_AT_name, AttributeValue::String(b"T".to_vec()));
        unit.get_mut(template_param)
            .set(DW_AT_type, AttributeValue::UnitRef(int_ty));

        let holder_ty = unit.add(root, DW_TAG_structure_type);
        unit.get_mut(holder_ty)
            .set(DW_AT_name, AttributeValue::String(b"Holder".to_vec()));
        unit.get_mut(holder_ty)
            .set(DW_AT_byte_size, AttributeValue::Data1(24));

        let member = unit.add(holder_ty, DW_TAG_member);
        unit.get_mut(member)
            .set(DW_AT_name, AttributeValue::String(b"value".to_vec()));
        unit.get_mut(member)
            .set(DW_AT_type, AttributeValue::UnitRef(vec_ty));
        unit.get_mut(member)
            .set(DW_AT_data_member_location, AttributeValue::Data1(0));

        let mut sections = Sections::new(EndianVec::new(LittleEndian));
        dwarf
            .write(&mut sections)
            .expect("should write synthetic DWARF");

        let section = |id: gimli::SectionId| -> crate::image::Section {
            let data = sections
                .get(id)
                .expect("section should exist")
                .slice()
                .to_vec();
            crate::image::Section {
                name: id.name().to_string(),
                vaddr: 0,
                size: data.len() as u64,
                data,
                flags: crate::image::SectionFlags::READ,
            }
        };

        let img = BinaryImage {
            arch: ArchId::X86_64,
            endian: crate::image::Endian::Little,
            entry: 0,
            sections: vec![
                section(gimli::SectionId::DebugAbbrev),
                section(gimli::SectionId::DebugInfo),
                section(gimli::SectionId::DebugStr),
            ],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: vec![],
            string_table: BTreeMap::new(),
            tls_callbacks: vec![],
            function_starts: vec![],
            debug_records: vec![],
            load_config: None,
            runtime_functions: vec![],
            resources: vec![],
            bound_imports: vec![],
            delay_imports: vec![],
            forwarded_exports: vec![],
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: vec![],
            rpaths: vec![],
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: vec![],
            auth_ptr_slots: vec![],
            wasm_component: None,
        };

        let info = import_dwarf(&img).expect("should parse synthetic DWARF");
        let holder = info
            .structs
            .get("Holder")
            .expect("Holder struct should exist");
        dwarf.write(&mut sections).expect("should write synthetic DWARF");

        let section = |id: gimli::SectionId| -> crate::image::Section {
            let data = sections
                .get(id)
                .expect("section should exist")
                .slice()
                .to_vec();
            crate::image::Section {
                name: id.name().to_string(),
                vaddr: 0,
                size: data.len() as u64,
                data,
                flags: crate::image::SectionFlags::READ,
            }
        };

        let img = BinaryImage {
            arch: ArchId::X86_64,
            endian: crate::image::Endian::Little,
            entry: 0,
            sections: vec![
                section(gimli::SectionId::DebugAbbrev),
                section(gimli::SectionId::DebugInfo),
                section(gimli::SectionId::DebugStr),
            ],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: vec![],
            string_table: BTreeMap::new(),
            tls_callbacks: vec![],
            function_starts: vec![],
            debug_records: vec![],
            load_config: None,
            runtime_functions: vec![],
            resources: vec![],
            bound_imports: vec![],
            delay_imports: vec![],
            forwarded_exports: vec![],
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: vec![],
            rpaths: vec![],
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: vec![],
            auth_ptr_slots: vec![],
        };

        let info = import_dwarf(&img).expect("should parse synthetic DWARF");
        let holder = info.structs.get("Holder").expect("Holder struct should exist");
        assert_eq!(holder.fields[0].type_name, "Vec<T = int>");

        let vec = info.structs.get("Vec").expect("Vec struct should exist");
        assert_eq!(vec.template_params, vec!["T = int"]);
    }

    #[test]
    fn test_dwarf_no_structs() {
        let data = std::fs::read("../../fixtures/hello_world.elf")
            .expect("fixture hello_world.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse hello_world.elf");
        let info = import_dwarf(&img).expect("should succeed without DWARF");

        assert!(
            info.structs.is_empty(),
            "hello_world.elf (no -g) should have no structs"
        );
        assert!(
            info.enums.is_empty(),
            "hello_world.elf (no -g) should have no enums"
        );
        assert!(
            info.unions.is_empty(),
            "hello_world.elf (no -g) should have no unions"
        );
        assert!(
            info.macros.is_empty(),
            "hello_world.elf (no -g) should have no macros"
        );
    }

    #[test]
    fn macro_parser_splits_name_value_and_location() {
        let parsed = parse_macro_definition(
            "MAX_SIZE 4096",
            Some("include/config.h".to_owned()),
            Some(17),
        )
        .expect("macro should parse");

        assert_eq!(parsed.name, "MAX_SIZE");
        assert_eq!(parsed.value.as_deref(), Some("4096"));
        assert_eq!(parsed.file.as_deref(), Some("include/config.h"));
        assert_eq!(parsed.line, Some(17));
    }

    #[test]
    fn macro_parser_accepts_flag_style_macros() {
        let parsed = parse_macro_definition("DEBUG", None, None).expect("macro should parse");

        assert_eq!(parsed.name, "DEBUG");
        assert_eq!(parsed.value, None);
        assert_eq!(parsed.file, None);
        assert_eq!(parsed.line, None);
    }

    #[test]
    fn macro_parser_rejects_blank_entries() {
        assert_eq!(parse_macro_definition("   ", None, Some(1)), None);
    }

    #[test]
    fn dwarf_v5_loclists_and_rnglists_are_supported() {
        let source = r#"
#include <stdio.h>

int helper(int x) {
    return x + 1;
}

int main(void) {
    int n = 0;
    if (helper(1) > 0) {
        n += 1;
    }
    if (helper(2) > 0) {
        n += 2;
    }
    return n;
}
"#;
        let temp = tempfile::tempdir().expect("tempdir");
        let src = temp.path().join("rng.c");
        let elf = temp.path().join("rng.elf");
        std::fs::write(&src, source).expect("write source");

        let status = std::process::Command::new("clang")
            .args([
                "-gdwarf-5",
                "-ffunction-sections",
                "-Wl,--gc-sections",
                "-O2",
                "-o",
            ])
            .arg(&elf)
            .arg(&src)
            .status()
            .expect("invoke clang");
        assert!(status.success(), "clang should compile DWARF v5 fixture");

        let data = std::fs::read(&elf).expect("read fixture");
        let img = ElfLoader::load(&data).expect("parse DWARF v5 ELF");
        assert!(img.section_by_name(".debug_rnglists").is_some());

        let info = import_dwarf(&img).expect("import DWARF v5");
        let main_fn = info
            .functions
            .values()
            .find(|f| f.name == "main")
            .expect("find main");
        assert!(
            !main_fn.ranges.is_empty(),
            "main should populate ranges from DW_AT_ranges/.debug_rnglists"
        );
        assert!(
            main_fn.ranges.iter().any(|r| r.begin < r.end),
            "main ranges should contain valid address intervals: {:?}",
            main_fn.ranges
        );
    }

    #[test]
    fn dwarf_v5_loclists_ranges_are_recorded_for_variables() {
        let source = r#"
#include <stdint.h>

struct Pair { int x; int y; };

__attribute__((noinline))
int choose(int *p, int *q, int flag) {
    int *selected = flag ? p : q;
    int total = 0;
    if (flag > 0) {
        total += *selected;
    } else {
        total += *q;
    }
    return total + flag;
}

__attribute__((noinline))
int pair_sum(struct Pair *pair, int which) {
    int value = which ? pair->x : pair->y;
    if (which > 3) {
        value += pair->x;
    }
    return value;
}

int main(void) {
    struct Pair pair = {3, 4};
    int a = 10;
    int b = 20;
    return choose(&a, &b, 1) + pair_sum(&pair, 0);
}
"#;
        let temp = tempfile::tempdir().expect("tempdir");
        let src = temp.path().join("loc.c");
        let elf = temp.path().join("loc.elf");
        std::fs::write(&src, source).expect("write source");

        let status = std::process::Command::new("clang")
            .args(["-gdwarf-5", "-O2", "-o"])
            .arg(&elf)
            .arg(&src)
            .status()
            .expect("invoke clang");
        assert!(status.success(), "clang should compile DWARF v5 fixture");

        let data = std::fs::read(&elf).expect("read fixture");
        let img = ElfLoader::load(&data).expect("parse DWARF v5 ELF");
        assert!(img.section_by_name(".debug_loclists").is_some());

        let info = import_dwarf(&img).expect("import DWARF v5");
        let choose = info
            .functions
            .values()
            .find(|f| f.name == "choose")
            .expect("find choose");
        let total = choose
            .locals
            .iter()
            .find(|local| local.name == "total")
            .expect("find total local");
        assert!(
            !total.locations.is_empty(),
            "location-list backed locals should record live ranges"
        );
        assert!(
            total.locations.iter().all(|r| r.begin < r.end),
            "all location ranges should be valid: {:?}",
            total.locations
        );
    }
}


#[cfg(test)]
mod expr_eval_tests {
    use super::*;

    fn test_encoding() -> gimli::Encoding {
        gimli::Encoding { format: gimli::Format::Dwarf64, version: 5, address_size: 8 }
    }

    #[test]
    fn expr_eval_fbreg() {
        let bytes = &[0x91, 0x70];
        assert_eq!(evaluate_dwarf_expr(bytes, test_encoding()), Some(ExprLocation::Address { register: None, offset: -16 }));
    }

    #[test]
    fn expr_eval_register() {
        assert_eq!(evaluate_dwarf_expr(&[0x50], test_encoding()), Some(ExprLocation::Register(0)));
    }

    #[test]
    fn expr_eval_breg_plus_const() {
        assert_eq!(evaluate_dwarf_expr(&[0x76, 0x00, 0x23, 0x08], test_encoding()), Some(ExprLocation::Address { register: Some(6), offset: 8 }));
    }

    #[test]
    fn expr_eval_addr() {
        assert_eq!(evaluate_dwarf_expr(&[0x03, 0x00, 0x10, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00], test_encoding()), Some(ExprLocation::AbsoluteAddress(0x00401000)));
    }

    #[test]
    fn expr_eval_stack_value() {
        assert_eq!(evaluate_dwarf_expr(&[0x35, 0x9f], test_encoding()), Some(ExprLocation::ImplicitValue(5)));
    }

    #[test]
    fn expr_eval_plus() {
        assert_eq!(evaluate_dwarf_expr(&[0x33, 0x34, 0x22, 0x9f], test_encoding()), Some(ExprLocation::ImplicitValue(7)));
    }

    #[test]
    fn expr_eval_minus() {
        assert_eq!(evaluate_dwarf_expr(&[0x3a, 0x33, 0x1c, 0x9f], test_encoding()), Some(ExprLocation::ImplicitValue(7)));
    }

    #[test]
    fn expr_eval_mul() {
        assert_eq!(evaluate_dwarf_expr(&[0x33, 0x34, 0x1e, 0x9f], test_encoding()), Some(ExprLocation::ImplicitValue(12)));
    }

    #[test]
    fn expr_eval_neg() {
        assert_eq!(evaluate_dwarf_expr(&[0x35, 0x1f, 0x9f], test_encoding()), Some(ExprLocation::ImplicitValue((-5i64) as u64)));
    }

    #[test]
    fn expr_eval_pieces() {
        assert_eq!(evaluate_dwarf_expr(&[0x50, 0x93, 0x04, 0x51, 0x93, 0x04], test_encoding()), Some(ExprLocation::Pieces(vec![
            ExprPiece { size_in_bits: 32, bit_offset: 0, location: PieceLocation::Register(0) },
            ExprPiece { size_in_bits: 32, bit_offset: 0, location: PieceLocation::Register(1) },
        ])));
    }

    #[test]
    fn expr_eval_cfa() {
        assert_eq!(evaluate_dwarf_expr(&[0x9c, 0x23, 0x10], test_encoding()), Some(ExprLocation::CfaOffset(16)));
    }

    #[test]
    fn expr_eval_deref_is_complex() {
        assert_eq!(evaluate_dwarf_expr(&[0x76, 0x00, 0x06], test_encoding()), Some(ExprLocation::Complex));
    }

    #[test]
    fn expr_eval_empty() {
        assert_eq!(evaluate_dwarf_expr(&[], test_encoding()), None);
    }

    #[test]
    fn expr_eval_tls() {
        assert_eq!(evaluate_dwarf_expr(&[0x33, 0x9b], test_encoding()), Some(ExprLocation::ThreadLocal));
    }

    #[test]
    fn expr_eval_implicit_bytes() {
        assert_eq!(evaluate_dwarf_expr(&[0x9e, 0x04, 0xDE, 0xAD, 0xBE, 0xEF], test_encoding()), Some(ExprLocation::ImplicitBytes(vec![0xDE, 0xAD, 0xBE, 0xEF])));
    }

    #[test]
    fn expr_eval_nop() {
        assert_eq!(evaluate_dwarf_expr(&[0x31, 0x96, 0x9f], test_encoding()), Some(ExprLocation::ImplicitValue(1)));
    }

    #[test]
    fn expr_eval_fbreg_agrees_with_legacy() {
        for offset in [-128i64, -16, 0, 8, 127] {
            let mut bytes = vec![0x91u8];
            let mut val = offset;
            loop {
                let mut byte = (val & 0x7f) as u8;
                val >>= 7;
                let more = !((val == 0 && byte & 0x40 == 0) || (val == -1 && byte & 0x40 != 0));
                if more { byte |= 0x80; }
                bytes.push(byte);
                if !more { break; }
            }
            assert_eq!(evaluate_dwarf_expr(&bytes, test_encoding()), Some(ExprLocation::Address { register: None, offset }), "fbreg({offset})");
        }
    }
    fn encode_uleb(mut value: u64, out: &mut Vec<u8>) {
        loop {
            let mut byte = (value & 0x7f) as u8;
            value >>= 7;
            if value != 0 {
                byte |= 0x80;
            }
            out.push(byte);
            if value == 0 {
                break;
            }
        }
    }

    #[test]
    fn debug_macro_empty_and_terminator_return_no_entries() {
        assert!(parse_debug_macro(&[]).is_empty());
        assert!(parse_debug_macro(&[0x00]).is_empty());
    }

    #[test]
    fn debug_macro_parses_inline_define_and_undef() {
        let mut data = Vec::new();
        data.push(DW_MACRO_DEFINE);
        encode_uleb(42, &mut data);
        data.extend_from_slice(b"FOO(x) ((x) + 1)\0");
        data.push(DW_MACRO_UNDEF);
        encode_uleb(43, &mut data);
        data.extend_from_slice(b"FOO\0");
        data.push(0x00);

        let entries = parse_debug_macro(&data);
        assert_eq!(entries.len(), 2, "unexpected entries: {entries:?}");
        assert_eq!(
            entries[0],
            MacroEntry::Define {
                line: 42,
                body: "FOO(x) ((x) + 1)".to_string(),
            }
        );
        assert_eq!(
            entries[1],
            MacroEntry::Undef {
                line: 43,
                name: "FOO".to_string(),
            }
        );
    }

    #[test]
    fn debug_macro_parses_start_and_end_file() {
        let mut data = Vec::new();
        data.push(DW_MACRO_START_FILE);
        encode_uleb(7, &mut data);
        encode_uleb(3, &mut data);
        data.push(DW_MACRO_DEFINE);
        encode_uleb(8, &mut data);
        data.extend_from_slice(b"INSIDE 1\0");
        data.push(DW_MACRO_END_FILE);
        data.push(0x00);

        let entries = parse_debug_macro(&data);
        assert_eq!(entries.len(), 3);
        assert_eq!(entries[0], MacroEntry::StartFile);
        assert_eq!(
            entries[1],
            MacroEntry::Define {
                line: 8,
                body: "INSIDE 1".to_string(),
            }
        );
        assert_eq!(entries[2], MacroEntry::EndFile);
    }

    #[test]
    fn debug_macro_parses_header_and_indirect_string_forms() {
        let mut data = Vec::new();
        data.extend_from_slice(&5u16.to_le_bytes());
        data.push(0x00); // no debug_line_offset and no opcode operand table

        data.push(DW_MACRO_DEFINE_STRP);
        encode_uleb(10, &mut data);
        data.extend_from_slice(&0x1122_3344u32.to_le_bytes());

        data.push(DW_MACRO_UNDEF_STRP);
        encode_uleb(11, &mut data);
        data.extend_from_slice(&0x5566_7788u32.to_le_bytes());

        data.push(DW_MACRO_DEFINE_STRX);
        encode_uleb(12, &mut data);
        encode_uleb(2, &mut data);

        data.push(DW_MACRO_UNDEF_STRX);
        encode_uleb(13, &mut data);
        encode_uleb(3, &mut data);

        data.push(DW_MACRO_DEFINE);
        encode_uleb(14, &mut data);
        data.extend_from_slice(b"TAIL 1\0");
        data.push(0x00);

        let entries = parse_debug_macro(&data);
        assert_eq!(
            entries,
            vec![
                MacroEntry::Define {
                    line: 10,
                    body: String::new(),
                },
                MacroEntry::Undef {
                    line: 11,
                    name: String::new(),
                },
                MacroEntry::Define {
                    line: 12,
                    body: String::new(),
                },
                MacroEntry::Undef {
                    line: 13,
                    name: String::new(),
                },
                MacroEntry::Define {
                    line: 14,
                    body: "TAIL 1".to_string(),
                },
            ]
        );
    }

    #[test]
    fn dwarf_v5_loclists_and_rnglists_are_supported() {
        let source = r#"
#include <stdio.h>

int helper(int x) {
    return x + 1;
}

int main(void) {
    int n = 0;
    if (helper(1) > 0) {
        n += 1;
    }
    if (helper(2) > 0) {
        n += 2;
    }
    return n;
}
"#;
        let temp = tempfile::tempdir().expect("tempdir");
        let src = temp.path().join("rng.c");
        let elf = temp.path().join("rng.elf");
        std::fs::write(&src, source).expect("write source");

        let status = std::process::Command::new("clang")
            .args([
                "-gdwarf-5",
                "-ffunction-sections",
                "-Wl,--gc-sections",
                "-O2",
                "-o",
            ])
            .arg(&elf)
            .arg(&src)
            .status()
            .expect("invoke clang");
        assert!(status.success(), "clang should compile DWARF v5 fixture");

        let data = std::fs::read(&elf).expect("read fixture");
        let img = ElfLoader::load(&data).expect("parse DWARF v5 ELF");
        assert!(img.section_by_name(".debug_rnglists").is_some());

        let info = import_dwarf(&img).expect("import DWARF v5");
        let main_fn = info
            .functions
            .values()
            .find(|f| f.name == "main")
            .expect("find main");
        assert!(
            !main_fn.ranges.is_empty(),
            "main should populate ranges from DW_AT_ranges/.debug_rnglists"
        );
        assert!(
            main_fn.ranges.iter().any(|r| r.begin < r.end),
            "main ranges should contain valid address intervals: {:?}",
            main_fn.ranges
        );
    }

    #[test]
    fn dwarf_v5_loclists_ranges_are_recorded_for_variables() {
        let source = r#"
#include <stdint.h>

struct Pair { int x; int y; };

__attribute__((noinline))
int choose(int *p, int *q, int flag) {
    int *selected = flag ? p : q;
    int total = 0;
    if (flag > 0) {
        total += *selected;
    } else {
        total += *q;
    }
    return total + flag;
}

__attribute__((noinline))
int pair_sum(struct Pair *pair, int which) {
    int value = which ? pair->x : pair->y;
    if (which > 3) {
        value += pair->x;
    }
    return value;
}

int main(void) {
    struct Pair pair = {3, 4};
    int a = 10;
    int b = 20;
    return choose(&a, &b, 1) + pair_sum(&pair, 0);
}
"#;
        let temp = tempfile::tempdir().expect("tempdir");
        let src = temp.path().join("loc.c");
        let elf = temp.path().join("loc.elf");
        std::fs::write(&src, source).expect("write source");

        let status = std::process::Command::new("clang")
            .args(["-gdwarf-5", "-O2", "-o"])
            .arg(&elf)
            .arg(&src)
            .status()
            .expect("invoke clang");
        assert!(status.success(), "clang should compile DWARF v5 fixture");

        let data = std::fs::read(&elf).expect("read fixture");
        let img = ElfLoader::load(&data).expect("parse DWARF v5 ELF");
        assert!(img.section_by_name(".debug_loclists").is_some());

        let info = import_dwarf(&img).expect("import DWARF v5");
        let choose = info
            .functions
            .values()
            .find(|f| f.name == "choose")
            .expect("find choose");
        let total = choose
            .locals
            .iter()
            .find(|local| local.name == "total")
            .expect("find total local");
        assert!(
            !total.locations.is_empty(),
            "location-list backed locals should record live ranges"
        );
        assert!(
            total.locations.iter().all(|r| r.begin < r.end),
            "all location ranges should be valid: {:?}",
            total.locations
        );
    }

    #[test]
    fn local_locations_do_not_regress_under_full_expression_eval() {
        let image = load_debug_fixture();
        let info = import_dwarf(&image).expect("should parse DWARF");
        let compute = info
            .functions
            .values()
            .find(|f| f.name == "compute")
            .expect("compute exists");
        assert!(
            compute.locals.iter().any(|local| local.frame_offset.is_some()),
            "expected at least one stack local with a resolved frame offset: {:?}",
            compute.locals
        );
    }

    #[test]
    fn dwarf_expression_evaluator_supports_stack_arithmetic_and_branches() {
        let expr = gimli::Expression(EndianSlice::new(
            &[
                0x30, // lit0
                0x28, // bra +4
                0x04,
                0x00,
                0x31, // lit1 (skipped)
                0x13, // drop   (skipped)
                0x9c, // call_frame_cfa
                0x10, // constu 8
                0x08,
                0x22, // plus
                0x10, // constu 1
                0x01,
                0x1c, // minus => cfa + 7
            ],
            RunTimeEndian::Little,
        ));
        let mut eval = expr.evaluation(gimli::Encoding {
            format: gimli::Format::Dwarf32,
            version: 5,
            address_size: 8,
        });
        let mut result = eval.evaluate().expect("initial evaluate succeeds");
        loop {
            match result {
                EvaluationResult::Complete => break,
                EvaluationResult::RequiresCallFrameCfa => {
                    result = eval
                        .resume_with_call_frame_cfa(0x1000)
                        .expect("resume with CFA succeeds");
                }
                other => panic!("unexpected evaluation request: {other:?}"),
            }
        }

        let pieces = eval.result();
        assert_eq!(pieces.len(), 1);
        assert_eq!(pieces[0].location, Location::Address { address: 0x1007 });
    }
}
