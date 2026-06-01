//! Target data-layout queries.
//!
//! This is the central place for pointer width, primitive size/alignment, and
//! composite value footprint decisions. Existing APIs such as `Type::size()`
//! remain for compatibility, but new analysis should prefer this target-aware
//! model.

use crate::ArchId;
use crate::ssa::PrimitiveType;
use crate::types::Type;

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum Endianness {
    Little,
    Big,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct DataLayout {
    pub arch: ArchId,
    pub pointer_size: u8,
    pub pointer_align: u8,
    pub endian: Endianness,
}

impl DataLayout {
    pub fn for_arch(arch: ArchId) -> Self {
        let pointer_size = pointer_size_for_arch(arch);
        Self {
            arch,
            pointer_size,
            pointer_align: pointer_size,
            endian: endian_for_arch(arch),
        }
    }

    pub fn primitive_size(&self, ty: PrimitiveType) -> Option<u64> {
        match ty {
            PrimitiveType::Unknown => None,
            PrimitiveType::Bool => Some(1),
            PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => Some(u64::from(w)),
            PrimitiveType::Float => Some(4),
            PrimitiveType::Double => Some(8),
            PrimitiveType::Ptr => Some(u64::from(self.pointer_size)),
        }
    }

    pub fn primitive_align(&self, ty: PrimitiveType) -> Option<u64> {
        let size = self.primitive_size(ty)?;
        Some(size.min(u64::from(self.pointer_align)).max(1))
    }

    pub fn type_size(&self, ty: &Type) -> Option<u64> {
        match ty {
            Type::Primitive(p) => self.primitive_size(*p),
            Type::Named(name) if name == "long double" => Some(16),
            Type::Named(_) => None,
            Type::Ptr(_) | Type::FuncPtr { .. } => Some(u64::from(self.pointer_size)),
            Type::Array {
                element,
                size: Some(count),
            } => self.type_size(element)?.checked_mul(*count),
            Type::Array { size: None, .. } => None,
            Type::Struct { fields, .. } => fields
                .iter()
                .map(|field| field.offset.checked_add(self.type_size(&field.ty)?))
                .try_fold(0, |max_end, end| end.map(|end| max_end.max(end))),
            Type::Union { fields, .. } => fields
                .iter()
                .map(|field| self.type_size(&field.ty))
                .try_fold(0, |max_size, size| size.map(|size| max_size.max(size))),
            Type::Bitfield { underlying, .. } => self.type_size(underlying),
            Type::Interface { .. } => Some(u64::from(self.pointer_size) * 2),
            Type::Slice { .. } => Some(u64::from(self.pointer_size) * 3),
            Type::Map { .. } | Type::TypeParam { .. } => Some(u64::from(self.pointer_size)),
        }
    }

    pub fn type_align(&self, ty: &Type) -> Option<u64> {
        match ty {
            Type::Primitive(p) => self.primitive_align(*p),
            Type::Named(name) if name == "long double" => Some(16),
            Type::Named(_) => None,
            Type::Ptr(_) | Type::FuncPtr { .. } => Some(u64::from(self.pointer_align)),
            Type::Array { element, .. } => self.type_align(element),
            Type::Struct { fields, .. } | Type::Union { fields, .. } => fields
                .iter()
                .map(|field| self.type_align(&field.ty))
                .try_fold(1, |max_align, align| {
                    align.map(|align| max_align.max(align))
                }),
            Type::Bitfield { underlying, .. } => self.type_align(underlying),
            Type::Interface { .. }
            | Type::Slice { .. }
            | Type::Map { .. }
            | Type::TypeParam { .. } => Some(u64::from(self.pointer_align)),
        }
    }
}

fn pointer_size_for_arch(arch: ArchId) -> u8 {
    match arch {
        ArchId::X86
        | ArchId::Arm
        | ArchId::Mips
        | ArchId::Ppc
        | ArchId::V850
        | ArchId::Arc
        | ArchId::TriCore
        | ArchId::Stm8
        | ArchId::Z80
        | ArchId::RxRenesas
        | ArchId::Sparc
        | ArchId::M68k
        | ArchId::SuperH
        | ArchId::Xtensa
        | ArchId::Mos6502
        | ArchId::I8051
        | ArchId::Pic16 => 4,
        ArchId::Avr | ArchId::Msp430 => 2,
        _ => 8,
    }
}

fn endian_for_arch(arch: ArchId) -> Endianness {
    match arch {
        ArchId::Mips
        | ArchId::Mips64
        | ArchId::Ppc
        | ArchId::Ppc64
        | ArchId::Sparc
        | ArchId::M68k => Endianness::Big,
        _ => Endianness::Little,
    }
}

#[cfg(test)]
mod tests {
    use crate::types::{StructFieldType, Type};

    use super::*;

    #[test]
    fn pointer_width_follows_arch() {
        assert_eq!(DataLayout::for_arch(ArchId::X86).pointer_size, 4);
        assert_eq!(DataLayout::for_arch(ArchId::X86_64).pointer_size, 8);
        assert_eq!(DataLayout::for_arch(ArchId::AArch64).pointer_size, 8);
    }

    #[test]
    fn target_aware_go_value_sizes() {
        let slice = Type::Slice {
            elem: Box::new(Type::int(4)),
        };
        assert_eq!(
            DataLayout::for_arch(ArchId::X86).type_size(&slice),
            Some(12)
        );
        assert_eq!(
            DataLayout::for_arch(ArchId::X86_64).type_size(&slice),
            Some(24)
        );
    }

    #[test]
    fn struct_size_uses_field_ends() {
        let ty = Type::Struct {
            name: "Pair".into(),
            fields: vec![
                StructFieldType {
                    name: "a".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "b".into(),
                    ty: Type::ptr_to(Type::int(1)),
                    offset: 8,
                },
            ],
        };

        assert_eq!(
            DataLayout::for_arch(ArchId::X86_64).type_size(&ty),
            Some(16)
        );
        assert_eq!(DataLayout::for_arch(ArchId::X86).type_size(&ty), Some(12));
    }
}
