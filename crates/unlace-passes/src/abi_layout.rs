//! ABI and record layout analysis.
//!
//! Models how C/C++ structs are laid out in memory (field offsets, padding,
//! alignment) and how aggregate types are passed/returned according to the
//! target ABI. Modeled on Clang's `RecordLayout.h`, `VTableBuilder.h`,
//! `TargetCXXABI.h`, and `CodeGenFunction.h`.

use std::collections::BTreeMap;

// ===========================================================================
// C++ ABI Flavor
// ===========================================================================

/// Which C++ ABI the binary uses (affects vtable layout, thunks, RTTI, etc.).
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub enum CxxAbiFlavor {
    /// Itanium ABI: Linux, macOS, BSDs, most non-Windows platforms.
    Itanium,
    /// Microsoft ABI: Windows MSVC, cl.exe.
    Msvc,
}

impl CxxAbiFlavor {
    /// Detect from binary format and mangling style.
    ///
    /// `is_pe`: the binary is PE/COFF.
    /// `has_msvc_mangling`: at least one symbol matches `?foo@@` MSVC mangling.
    pub fn detect(is_pe: bool, has_msvc_mangling: bool) -> Self {
        if is_pe && has_msvc_mangling {
            Self::Msvc
        } else {
            Self::Itanium
        }
    }
}

// ===========================================================================
// Record Layout
// ===========================================================================

/// Layout facts for a struct/union/class.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct RecordLayoutFacts {
    /// Field name → byte offset from record start.
    pub field_offsets: BTreeMap<u32, u64>,
    /// Total size in bytes (including tail padding).
    pub size: u64,
    /// Required alignment in bytes.
    pub alignment: u64,
    /// Whether this record has a vptr (virtual function table pointer).
    pub has_vptr: bool,
    /// Offset of the vptr from the start of the record (usually 0 for Itanium).
    pub vptr_offset: u64,
}

/// A single field description used to compute layout.
#[derive(Clone, Debug)]
pub struct FieldDesc {
    /// Index of the field (0-based).
    pub index: u32,
    /// Size of the field in bytes.
    pub size: u64,
    /// Required alignment of this field in bytes.
    pub alignment: u64,
}

/// Compute C-style record layout (no bitfields, no virtual bases).
///
/// Fields are laid out in order with platform-standard padding/alignment rules.
/// If `has_vptr` is true, a pointer-sized slot is prepended at offset 0.
pub fn compute_record_layout(
    fields: &[FieldDesc],
    pointer_size: u64,
    has_vptr: bool,
) -> RecordLayoutFacts {
    let mut offsets = BTreeMap::new();
    let mut current_offset: u64 = 0;
    let mut max_align: u64 = 1;

    // Vptr goes first if present.
    if has_vptr {
        current_offset = pointer_size;
        max_align = pointer_size;
    }

    for field in fields {
        // Align to field's required alignment.
        let align = field.alignment.max(1);
        max_align = max_align.max(align);
        let misalign = current_offset % align;
        if misalign != 0 {
            current_offset += align - misalign;
        }
        offsets.insert(field.index, current_offset);
        current_offset += field.size;
    }

    // Pad to overall alignment.
    let misalign = current_offset % max_align;
    if misalign != 0 {
        current_offset += max_align - misalign;
    }

    RecordLayoutFacts {
        field_offsets: offsets,
        size: current_offset,
        alignment: max_align,
        has_vptr,
        vptr_offset: if has_vptr { 0 } else { u64::MAX },
    }
}

// ===========================================================================
// VTable Layout
// ===========================================================================

/// A single entry in a vtable.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum VTableEntry {
    /// Virtual function pointer slot.
    VirtualFn { slot_index: u32, name: String },
    /// Offset-to-top (for multiple inheritance).
    OffsetToTop(i64),
    /// RTTI pointer.
    Rtti,
    /// VBase offset (for virtual inheritance).
    VBaseOffset(i64),
    /// VCall offset (for thunks adjusting `this`).
    VCallOffset(i64),
}

/// Complete vtable layout for a class.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct VTableLayoutFacts {
    /// Entries in order (Itanium: offset-to-top, RTTI, then fn slots).
    pub entries: Vec<VTableEntry>,
    /// Which ABI this vtable follows.
    pub abi: CxxAbiFlavor,
}

// ===========================================================================
// Aggregate Passing Classification (SysV AMD64 / Win64 / AArch64)
// ===========================================================================

/// How an aggregate (struct/union) is passed to or returned from a function.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub enum AggregatePassingClass {
    /// Passed directly in registers (fits in 1-2 integer registers).
    InRegisters,
    /// Passed by value on the stack (caller copies onto stack frame).
    ByVal,
    /// Passed via a hidden pointer parameter (sret / indirect return).
    Sret,
    /// Passed as a register pair (e.g., two 64-bit regs for a 16-byte struct).
    RegisterPair,
    /// Contains only floating-point fields; passed in SSE/FP registers.
    InFpRegisters,
    /// Too complex to classify with available information.
    Unknown,
}

/// Target ABI for classification purposes.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum TargetAbi {
    /// System V AMD64: structs ≤16 bytes in regs, >16 bytes via sret.
    SystemVAmd64,
    /// Microsoft x64: structs ≤8 bytes in one reg, >8 bytes via hidden ptr.
    MicrosoftX64,
    /// AArch64 AAPCS: structs ≤16 bytes in regs (up to 4 HFAs via FP).
    Aarch64,
    /// 32-bit cdecl: everything on the stack.
    X86Cdecl,
}

/// Classify how an aggregate of the given size/alignment is passed.
pub fn classify_aggregate_passing(
    size: u64,
    _alignment: u64,
    abi: TargetAbi,
) -> AggregatePassingClass {
    match abi {
        TargetAbi::SystemVAmd64 => {
            if size == 0 {
                return AggregatePassingClass::Unknown;
            }
            if size <= 8 {
                AggregatePassingClass::InRegisters
            } else if size <= 16 {
                AggregatePassingClass::RegisterPair
            } else {
                AggregatePassingClass::Sret
            }
        }
        TargetAbi::MicrosoftX64 => {
            // MSVC: 1, 2, 4, 8-byte structs in a single register.
            match size {
                1 | 2 | 4 | 8 => AggregatePassingClass::InRegisters,
                _ => AggregatePassingClass::Sret,
            }
        }
        TargetAbi::Aarch64 => {
            if size <= 16 {
                AggregatePassingClass::InRegisters
            } else {
                AggregatePassingClass::Sret
            }
        }
        TargetAbi::X86Cdecl => {
            // 32-bit: everything by value on the stack.
            AggregatePassingClass::ByVal
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_abi_layout_simple_struct() {
        // struct { uint32_t a; uint64_t b; uint32_t c; }
        // Expected on x86_64 with natural alignment:
        //   a at 0, size 4, align 4
        //   b at 8, size 8, align 8 (padding after a)
        //   c at 16, size 4, align 4
        //   total size: 24 (padded to 8-byte alignment)
        let fields = vec![
            FieldDesc {
                index: 0,
                size: 4,
                alignment: 4,
            },
            FieldDesc {
                index: 1,
                size: 8,
                alignment: 8,
            },
            FieldDesc {
                index: 2,
                size: 4,
                alignment: 4,
            },
        ];
        let layout = compute_record_layout(&fields, 8, false);
        assert_eq!(layout.field_offsets[&0], 0);
        assert_eq!(layout.field_offsets[&1], 8);
        assert_eq!(layout.field_offsets[&2], 16);
        assert_eq!(layout.size, 24);
        assert_eq!(layout.alignment, 8);
    }

    #[test]
    fn test_abi_layout_with_vptr() {
        // struct with vptr + one uint32_t field.
        // Vptr at 0 (8 bytes), field at 8.
        let fields = vec![FieldDesc {
            index: 0,
            size: 4,
            alignment: 4,
        }];
        let layout = compute_record_layout(&fields, 8, true);
        assert_eq!(layout.vptr_offset, 0);
        assert_eq!(layout.field_offsets[&0], 8);
        assert!(layout.has_vptr);
        assert_eq!(layout.size, 16); // 8 (vptr) + 4 (field) + 4 (padding to 8)
    }

    #[test]
    fn test_abi_layout_packed_struct() {
        // struct { uint8_t a; uint8_t b; uint8_t c; }
        // All 1-byte aligned, no padding.
        let fields = vec![
            FieldDesc {
                index: 0,
                size: 1,
                alignment: 1,
            },
            FieldDesc {
                index: 1,
                size: 1,
                alignment: 1,
            },
            FieldDesc {
                index: 2,
                size: 1,
                alignment: 1,
            },
        ];
        let layout = compute_record_layout(&fields, 8, false);
        assert_eq!(layout.field_offsets[&0], 0);
        assert_eq!(layout.field_offsets[&1], 1);
        assert_eq!(layout.field_offsets[&2], 2);
        assert_eq!(layout.size, 3);
        assert_eq!(layout.alignment, 1);
    }

    #[test]
    fn test_abi_layout_sysv_amd64_sret() {
        // Struct > 16 bytes → Sret on SysV AMD64.
        let class = classify_aggregate_passing(24, 8, TargetAbi::SystemVAmd64);
        assert_eq!(class, AggregatePassingClass::Sret);
    }

    #[test]
    fn test_abi_layout_sysv_amd64_register_pair() {
        // 16-byte struct → register pair on SysV AMD64.
        let class = classify_aggregate_passing(16, 8, TargetAbi::SystemVAmd64);
        assert_eq!(class, AggregatePassingClass::RegisterPair);
    }

    #[test]
    fn test_abi_layout_sysv_amd64_in_register() {
        // 8-byte struct → single register.
        let class = classify_aggregate_passing(8, 8, TargetAbi::SystemVAmd64);
        assert_eq!(class, AggregatePassingClass::InRegisters);
    }

    #[test]
    fn test_abi_layout_msvc_x64_sret() {
        // Struct > 8 bytes → Sret on MSVC x64.
        let class = classify_aggregate_passing(12, 4, TargetAbi::MicrosoftX64);
        assert_eq!(class, AggregatePassingClass::Sret);
    }

    #[test]
    fn test_abi_layout_msvc_x64_in_register() {
        let class = classify_aggregate_passing(8, 8, TargetAbi::MicrosoftX64);
        assert_eq!(class, AggregatePassingClass::InRegisters);
    }

    #[test]
    fn test_abi_layout_aarch64_sret() {
        let class = classify_aggregate_passing(20, 8, TargetAbi::Aarch64);
        assert_eq!(class, AggregatePassingClass::Sret);
    }

    #[test]
    fn test_abi_layout_x86_cdecl_byval() {
        // 32-bit: everything on stack.
        let class = classify_aggregate_passing(4, 4, TargetAbi::X86Cdecl);
        assert_eq!(class, AggregatePassingClass::ByVal);
    }

    #[test]
    fn test_abi_layout_cxx_abi_detect() {
        assert_eq!(CxxAbiFlavor::detect(true, true), CxxAbiFlavor::Msvc);
        assert_eq!(CxxAbiFlavor::detect(false, false), CxxAbiFlavor::Itanium);
        assert_eq!(CxxAbiFlavor::detect(true, false), CxxAbiFlavor::Itanium);
    }
}
