//! (unlace `sysv_eightbyte`) The System V AMD64 eightbyte classifier.
//!
//! A struct or union passed or returned by value is split into 8-byte eightbytes, and each
//! one is classed INTEGER, SSE, X87, X87UP, COMPLEX_X87, SSEUP, NO_CLASS or MEMORY. The class
//! decides which registers carry the eightbyte, or whether the whole aggregate goes on the
//! stack. This module is the pure classifier: it takes a field list and returns the classes,
//! and reads no binary, type or option. Nothing calls it yet; a caller wires it in behind an
//! option once a corpus measurement says what it changes.
//!
//! Spec: System V Application Binary Interface, AMD64 Architecture Processor Supplement,
//! section 3.2.3 (the classification and its post-merger steps (a) to (d)). The rules the
//! classifier applies are the psABI ones, including the aggregate-level MEMORY rules for
//! unaligned fields and for an aggregate over two eightbytes that is not all SSE/SSEUP.

/// Deepest array nesting the classifier follows; deeper input is passed in memory.
const MAX_NESTING: u32 = 32;

/// Class assigned to each 8-byte chunk during ABI classification.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum EightbyteClass {
    /// Integer or pointer values: RDI, RSI, RDX, RCX, R8, R9 or the stack.
    Integer,
    /// SSE float values: XMM0 to XMM7 or the stack.
    Sse,
    /// Upper half of a 128-bit SSE vector.
    SseUp,
    /// x87 80-bit float (`long double`), low eightbyte.
    X87,
    /// Upper eightbyte of an x87 `long double`.
    X87Up,
    /// Complex x87 `long double`.
    ComplexX87,
    /// No data in this eightbyte (padding or a gap).
    NoClass,
    /// Passed on the stack.
    Memory,
}

impl EightbyteClass {
    /// The merge rule for two classes that share an eightbyte (psABI 3.2.3, step 4).
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
        let x87 = |c: Self| matches!(c, Self::X87 | Self::X87Up | Self::ComplexX87);
        if x87(self) || x87(other) {
            return Self::Memory;
        }
        Self::Sse
    }
}

/// A primitive field in an aggregate, used as classification input.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum FieldKind {
    /// Integer or pointer of the given size in bytes (1, 2, 4, 8 or 16 for a scalar).
    Int(u32),
    /// 32-bit IEEE float.
    Float,
    /// 64-bit IEEE double.
    Double,
    /// 80-bit x87 `long double`, stored in 16 bytes.
    LongDouble,
    /// Complex `long double`, stored in 32 bytes.
    ComplexLongDouble,
    /// A 16-, 32- or 64-byte vector (`__m128`, `__m256`, `__m512`): SSE then SSEUP.
    Vector(u32),
    /// Array element type repeated `count` times.
    Array { element: Box<FieldKind>, count: u32 },
}

impl FieldKind {
    /// Storage size in bytes, saturating on overflow.
    pub fn size_in_bytes(&self) -> u64 {
        match self {
            Self::Int(s) => u64::from(*s),
            Self::Float => 4,
            Self::Double => 8,
            Self::LongDouble => 16,
            Self::ComplexLongDouble => 32,
            Self::Vector(bytes) => u64::from(*bytes),
            Self::Array { element, count } => {
                element.size_in_bytes().saturating_mul(u64::from(*count))
            }
        }
    }

    /// Natural alignment in bytes. A scalar whose size is not a power of two has alignment 1.
    pub fn align_in_bytes(&self) -> u64 {
        match self {
            Self::Int(s) if s.is_power_of_two() => u64::from(*s),
            Self::Int(_) => 1,
            Self::Float => 4,
            Self::Double => 8,
            Self::LongDouble | Self::ComplexLongDouble => 16,
            Self::Vector(bytes) => u64::from(*bytes),
            Self::Array { element, .. } => element.align_in_bytes(),
        }
    }
}

/// Number of eightbytes an aggregate of `total_size` bytes occupies (at least one).
fn eightbyte_count(total_size: u64) -> usize {
    usize::try_from(total_size.div_ceil(8).max(1)).unwrap_or(usize::MAX)
}

/// Classify an aggregate by walking its fields and assigning eightbytes.
///
/// `fields` is the list of `(offset_in_bytes, kind)`. An aggregate over 64 bytes, a field
/// that is not aligned to its natural alignment, a field that runs past `total_size` or
/// nests deeper than `MAX_NESTING` makes the whole aggregate MEMORY. The result has one
/// class per eightbyte.
pub fn classify_aggregate(fields: &[(u64, FieldKind)], total_size: u64) -> Vec<EightbyteClass> {
    let count = eightbyte_count(total_size);
    if total_size > 64 {
        return vec![EightbyteClass::Memory; count];
    }
    let mut classes = vec![EightbyteClass::NoClass; count];
    for (offset, kind) in fields {
        if classify_field_into(&mut classes, *offset, kind, 0).is_none() {
            return vec![EightbyteClass::Memory; count];
        }
    }

    // (a) One MEMORY eightbyte puts the whole aggregate in memory.
    if classes.contains(&EightbyteClass::Memory) {
        return vec![EightbyteClass::Memory; count];
    }
    // (b) An X87UP that is not preceded by an X87 puts the whole aggregate in memory.
    for i in 1..classes.len() {
        if classes[i] == EightbyteClass::X87Up && classes[i - 1] != EightbyteClass::X87 {
            return vec![EightbyteClass::Memory; count];
        }
    }
    // (c) Over two eightbytes, the first must be SSE and every later one SSEUP.
    if total_size > 16
        && (classes[0] != EightbyteClass::Sse
            || classes[1..].iter().any(|c| *c != EightbyteClass::SseUp))
    {
        return vec![EightbyteClass::Memory; count];
    }
    // (d) An SSEUP that does not follow an SSE or SSEUP becomes SSE.
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

/// Merge `kind` into the eightbytes it covers. `None` means the field is malformed
/// (unaligned, past the end, or nested too deep) and the caller passes the aggregate in memory.
fn classify_field_into(
    classes: &mut [EightbyteClass],
    offset: u64,
    kind: &FieldKind,
    depth: u32,
) -> Option<()> {
    if depth > MAX_NESTING {
        return None;
    }
    let size = kind.size_in_bytes();
    let align = kind.align_in_bytes();
    if align != 0 && !offset.is_multiple_of(align) {
        return None;
    }
    let end = offset.checked_add(size)?;
    if end > (classes.len() as u64).saturating_mul(8) {
        return None;
    }
    let first = usize::try_from(offset / 8).ok()?;
    let last = usize::try_from(end.div_ceil(8)).ok()?;

    match kind {
        FieldKind::Int(_) => merge_range(classes, first, last, EightbyteClass::Integer),
        FieldKind::Float | FieldKind::Double => {
            merge_range(classes, first, last, EightbyteClass::Sse)
        }
        FieldKind::Vector(_) => {
            for chunk in first..last {
                let class = if chunk == first {
                    EightbyteClass::Sse
                } else {
                    EightbyteClass::SseUp
                };
                merge_range(classes, chunk, chunk + 1, class);
            }
        }
        FieldKind::LongDouble => {
            merge_range(classes, first, first + 1, EightbyteClass::X87);
            merge_range(classes, first + 1, first + 2, EightbyteClass::X87Up);
        }
        FieldKind::ComplexLongDouble => {
            merge_range(classes, first, last, EightbyteClass::ComplexX87)
        }
        FieldKind::Array { element, count } => {
            let elem_size = element.size_in_bytes();
            if elem_size == 0 {
                return Some(());
            }
            for i in 0..u64::from(*count) {
                classify_field_into(classes, offset + i * elem_size, element, depth + 1)?;
            }
        }
    }
    Some(())
}

/// Merge `class` into the chunks `first..last`; a chunk past the end is ignored.
fn merge_range(classes: &mut [EightbyteClass], first: usize, last: usize, class: EightbyteClass) {
    for chunk in first..last {
        if let Some(slot) = classes.get_mut(chunk) {
            *slot = slot.merge(class);
        }
    }
}

#[cfg(test)]
mod tests;
