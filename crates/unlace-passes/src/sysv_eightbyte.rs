//! SysV AMD64 ABI eightbyte classifier.
//!
//! Implements the System V AMD64 ABI's parameter passing algorithm:
//! aggregate types are split into 8-byte chunks, each classified as one of
//! INTEGER, SSE, X87, MEMORY, NO_CLASS. The first two non-MEMORY classes
//! determine whether the aggregate goes in registers or on the stack.
//!
//! Spec: System V Application Binary Interface, AMD64 Architecture Processor
//! Supplement (psABI), Section 3.2.3.
//!
//! Reference: clang/lib/CodeGen/Targets/X86.cpp `X86_64ABIInfo::classify()`.

/// Class assigned to each 8-byte chunk during ABI classification.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum EightbyteClass {
    /// Integer / pointer values — pass in RDI/RSI/RDX/RCX/R8/R9 or stack.
    Integer,
    /// SSE float values — pass in XMM0-XMM7 or stack.
    Sse,
    /// SSEUP — second/upper half of a 16-byte SSE value (vector).
    SseUp,
    /// X87 80-bit float (long double).
    X87,
    /// Upper half of x87 long double.
    X87Up,
    /// Complex x87 long double (imaginary part).
    ComplexX87,
    /// No data in this eightbyte (gap / padding).
    NoClass,
    /// Force stack passing (pointer for sret).
    Memory,
}

impl EightbyteClass {
    /// Merge rule for two classes occupying the same eightbyte (psABI 3.2.3).
    pub fn merge(self, other: Self) -> Self {
        if self == other {
            return self;
        }
        if self == Self::NoClass {
            return other;
        }
        if other == Self::NoClass {
            return self;
        }
        if self == Self::Memory || other == Self::Memory {
            return Self::Memory;
        }
        if self == Self::Integer || other == Self::Integer {
            return Self::Integer;
        }
        if self == Self::X87
            || other == Self::X87
            || self == Self::X87Up
            || other == Self::X87Up
            || self == Self::ComplexX87
            || other == Self::ComplexX87
        {
            return Self::Memory;
        }
        Self::Sse
    }
}

/// A primitive field in an aggregate, used as classification input.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum FieldKind {
    /// Integer or pointer of given size in bytes.
    Int(u32),
    /// 32- or 64-bit IEEE float.
    Float,
    /// 64-bit IEEE double.
    Double,
    /// 80-bit x87 long double.
    LongDouble,
    /// 128-bit complex long double.
    ComplexLongDouble,
    /// Array element (homogeneous repetition).
    Array { element: Box<FieldKind>, count: u32 },
}

impl FieldKind {
    pub fn size_in_bytes(&self) -> u32 {
        match self {
            Self::Int(s) => *s,
            Self::Float => 4,
            Self::Double => 8,
            Self::LongDouble => 16, // padded to 16 in SysV
            Self::ComplexLongDouble => 32,
            Self::Array { element, count } => element.size_in_bytes() * count,
        }
    }
}

/// Classify an aggregate by walking its fields and assigning eightbytes.
///
/// `fields` is the ordered list of `(offset_in_bytes, kind)` tuples. The
/// total size determines the eightbyte count: ceil(size/8) up to 8 chunks.
/// Anything larger than 8 eightbytes (64 bytes) → MEMORY.
pub fn classify_aggregate(fields: &[(u32, FieldKind)], total_size: u32) -> Vec<EightbyteClass> {
    // psABI rule: aggregates >8 eightbytes (>64 bytes) are passed in MEMORY.
    if total_size > 64 {
        let eightbyte_count = total_size.div_ceil(8) as usize;
        return vec![EightbyteClass::Memory; eightbyte_count];
    }

    let eightbyte_count = total_size.div_ceil(8).max(1) as usize;
    let mut classes = vec![EightbyteClass::NoClass; eightbyte_count];

    for (offset, kind) in fields {
        classify_field_into(&mut classes, *offset, kind);
    }

    // Post-processing per psABI section 3.2.3, step 5.
    //
    // (a) If one eightbyte is MEMORY, the whole arg goes in memory.
    if classes.contains(&EightbyteClass::Memory) {
        return vec![EightbyteClass::Memory; eightbyte_count];
    }
    // (b) If X87UP isn't preceded by X87, change to SSE.
    for i in 1..classes.len() {
        if classes[i] == EightbyteClass::X87Up && classes[i - 1] != EightbyteClass::X87 {
            classes[i] = EightbyteClass::Sse;
        }
    }
    // (c) Aggregates >16 bytes whose first eightbyte isn't SSE → MEMORY.
    if total_size > 16 && classes[0] != EightbyteClass::Sse {
        return vec![EightbyteClass::Memory; eightbyte_count];
    }
    // (d) SSEUP must follow SSE/SSEUP, else convert to SSE.
    for i in 1..classes.len() {
        if classes[i] == EightbyteClass::SseUp
            && classes[i - 1] != EightbyteClass::Sse
            && classes[i - 1] != EightbyteClass::SseUp
        {
            classes[i] = EightbyteClass::Sse;
        }
    }

    classes
}

fn classify_field_into(classes: &mut [EightbyteClass], offset: u32, kind: &FieldKind) {
    let size = kind.size_in_bytes();
    let start_chunk = (offset / 8) as usize;
    let end_chunk = (offset + size).div_ceil(8) as usize;

    let field_class = match kind {
        FieldKind::Int(_) => EightbyteClass::Integer,
        FieldKind::Float | FieldKind::Double => EightbyteClass::Sse,
        FieldKind::LongDouble => {
            // Long double spans two eightbytes: X87 then X87UP.
            if start_chunk < classes.len() {
                classes[start_chunk] = classes[start_chunk].merge(EightbyteClass::X87);
            }
            if start_chunk + 1 < classes.len() {
                classes[start_chunk + 1] = classes[start_chunk + 1].merge(EightbyteClass::X87Up);
            }
            return;
        }
        FieldKind::ComplexLongDouble => EightbyteClass::ComplexX87,
        FieldKind::Array { element, count } => {
            let elem_size = element.size_in_bytes();
            for i in 0..*count {
                classify_field_into(classes, offset + i * elem_size, element);
            }
            return;
        }
    };

    for chunk_idx in start_chunk..end_chunk.min(classes.len()) {
        classes[chunk_idx] = classes[chunk_idx].merge(field_class);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_eightbyte_class_merge_same() {
        assert_eq!(
            EightbyteClass::Integer.merge(EightbyteClass::Integer),
            EightbyteClass::Integer
        );
    }

    #[test]
    fn test_eightbyte_class_merge_noclass_other() {
        assert_eq!(
            EightbyteClass::NoClass.merge(EightbyteClass::Sse),
            EightbyteClass::Sse
        );
        assert_eq!(
            EightbyteClass::Integer.merge(EightbyteClass::NoClass),
            EightbyteClass::Integer
        );
    }

    #[test]
    fn test_eightbyte_class_merge_int_wins_over_sse() {
        // psABI rule: if one is INTEGER, result is INTEGER.
        assert_eq!(
            EightbyteClass::Integer.merge(EightbyteClass::Sse),
            EightbyteClass::Integer
        );
    }

    #[test]
    fn test_sysv_small_int_struct() {
        // struct { int a; int b; } — both fit in 1 eightbyte → INTEGER.
        let fields = vec![(0, FieldKind::Int(4)), (4, FieldKind::Int(4))];
        let classes = classify_aggregate(&fields, 8);
        assert_eq!(classes, vec![EightbyteClass::Integer]);
    }

    #[test]
    fn test_sysv_small_float_struct() {
        // struct { float a; float b; } — both fit in 1 eightbyte → SSE.
        let fields = vec![(0, FieldKind::Float), (4, FieldKind::Float)];
        let classes = classify_aggregate(&fields, 8);
        assert_eq!(classes, vec![EightbyteClass::Sse]);
    }

    #[test]
    fn test_sysv_mixed_struct() {
        // struct { int a; double b; } — 2 eightbytes: INTEGER, SSE.
        let fields = vec![(0, FieldKind::Int(4)), (8, FieldKind::Double)];
        let classes = classify_aggregate(&fields, 16);
        assert_eq!(classes, vec![EightbyteClass::Integer, EightbyteClass::Sse]);
    }

    #[test]
    fn test_sysv_oversized_struct_is_memory() {
        // 80-byte struct → all eightbytes MEMORY.
        let fields = vec![(0, FieldKind::Int(8))];
        let classes = classify_aggregate(&fields, 80);
        assert!(classes.iter().all(|c| *c == EightbyteClass::Memory));
        assert_eq!(classes.len(), 10);
    }

    #[test]
    fn test_sysv_long_double() {
        // long double → X87 + X87UP in 2 eightbytes (size 16).
        let fields = vec![(0, FieldKind::LongDouble)];
        let classes = classify_aggregate(&fields, 16);
        // After post-processing, long double should remain X87 + X87UP.
        // Per psABI, X87 + X87UP results in MEMORY for the whole arg
        // (because total > 16 isn't met; size IS 16; but rule (c) only
        // applies when total_size > 16). So at exactly 16, we keep X87/X87UP.
        assert_eq!(classes[0], EightbyteClass::X87);
        assert_eq!(classes[1], EightbyteClass::X87Up);
    }

    #[test]
    fn test_sysv_int_and_float_same_eightbyte() {
        // struct { int a; float b; } in 1 eightbyte → INTEGER wins.
        let fields = vec![(0, FieldKind::Int(4)), (4, FieldKind::Float)];
        let classes = classify_aggregate(&fields, 8);
        assert_eq!(classes, vec![EightbyteClass::Integer]);
    }

    #[test]
    fn test_sysv_field_kind_size() {
        assert_eq!(FieldKind::Int(8).size_in_bytes(), 8);
        assert_eq!(FieldKind::Float.size_in_bytes(), 4);
        assert_eq!(FieldKind::Double.size_in_bytes(), 8);
        let arr = FieldKind::Array {
            element: Box::new(FieldKind::Int(4)),
            count: 3,
        };
        assert_eq!(arr.size_in_bytes(), 12);
    }

    #[test]
    fn test_sysv_array_struct() {
        // struct { int arr[2]; } in 1 eightbyte → INTEGER.
        let fields = vec![(
            0,
            FieldKind::Array {
                element: Box::new(FieldKind::Int(4)),
                count: 2,
            },
        )];
        let classes = classify_aggregate(&fields, 8);
        assert_eq!(classes, vec![EightbyteClass::Integer]);
    }
}
