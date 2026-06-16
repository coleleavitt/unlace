//! Conformance: Rust `DataLayout` (crates/unlace-ir/src/data_layout.rs, used by
//! the type-recovery/printer pipeline) vs the proved Coq `DataLayout.v` spec.
//!
//! `DataLayout.v` proves the layout invariants struct/array recovery relies on:
//!   - alignment is a positive power of two;
//!   - an array's size = element_size * len, and its align = element align;
//!   - a struct's natural align is the max of its field aligns (≥ each), and its
//!     size bounds every field's end.
//!
//! This test pins the SHIPPING Rust `type_size`/`type_align` to those invariants
//! over random nested types. Read-only: it builds `Type` values and queries the
//! layout; no producer state is mutated, no golden impact.

use unlace_ir::ArchId;
use unlace_ir::data_layout::DataLayout;
use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::{StructFieldType, Type};

struct XorShift64(u64);
impl XorShift64 {
    fn new(seed: u64) -> Self {
        XorShift64(seed | 1)
    }
    fn next(&mut self) -> u64 {
        let mut x = self.0;
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        self.0 = x;
        x
    }
}

fn prim(rng: &mut XorShift64) -> Type {
    let p = match rng.next() % 6 {
        0 => PrimitiveType::Bool,
        1 => PrimitiveType::Int(1),
        2 => PrimitiveType::Int(2),
        3 => PrimitiveType::Int(4),
        4 => PrimitiveType::Int(8),
        _ => PrimitiveType::Ptr,
    };
    Type::Primitive(p)
}

// A list of random fields at ascending, possibly-gapped offsets.
fn random_fields(rng: &mut XorShift64, depth: u32) -> Vec<StructFieldType> {
    let nf = 1 + (rng.next() % 4) as usize;
    let mut fields = Vec::new();
    let mut off = 0u64;
    for i in 0..nf {
        fields.push(StructFieldType {
            name: format!("f{i}"),
            offset: off,
            ty: random_type(rng, depth.saturating_sub(1)),
        });
        off += 1 + rng.next() % 16;
    }
    fields
}

// A random type up to a small depth: primitive, pointer, sized array, or struct.
fn random_type(rng: &mut XorShift64, depth: u32) -> Type {
    if depth == 0 {
        return prim(rng);
    }
    match rng.next() % 4 {
        0 => prim(rng),
        1 => Type::Ptr(Box::new(random_type(rng, depth - 1))),
        2 => Type::Array {
            element: Box::new(random_type(rng, depth - 1)),
            size: Some(1 + rng.next() % 8),
        },
        _ => Type::Struct {
            name: "S".into(),
            fields: random_fields(rng, depth),
        },
    }
}

fn is_power_of_two(x: u64) -> bool {
    x != 0 && (x & (x - 1)) == 0
}

const ITERS: usize = 100_000;

/// Mirrors DataLayout.v: alignment is a positive power of two (`align_positive`
/// + power-of-two construction).
#[test]
fn datalayout_align_is_power_of_two() {
    let mut rng = XorShift64::new(0x1A70_C0DE_1A70_C0DE);
    let dl = DataLayout::for_arch(ArchId::X86_64);
    for _ in 0..ITERS {
        let ty = random_type(&mut rng, 3);
        if let Some(a) = dl.type_align(&ty) {
            assert!(
                is_power_of_two(a),
                "alignment {a} of {ty:?} is not a positive power of two"
            );
        }
    }
}

/// Mirrors DataLayout.v `array_size` (size = elem*len) and `array_align`
/// (= element align).
#[test]
fn datalayout_array_size_and_align() {
    let mut rng = XorShift64::new(0xA22A_1234_A22A_1234);
    let dl = DataLayout::for_arch(ArchId::X86_64);
    for _ in 0..ITERS {
        let elem = random_type(&mut rng, 2);
        let len = 1 + rng.next() % 8;
        let arr = Type::Array {
            element: Box::new(elem.clone()),
            size: Some(len),
        };
        if let Some(es) = dl.type_size(&elem) {
            assert_eq!(
                dl.type_size(&arr),
                es.checked_mul(len),
                "array size != element_size * len for {elem:?}[{len}]"
            );
        }
        assert_eq!(
            dl.type_align(&arr),
            dl.type_align(&elem),
            "array align != element align for {elem:?}[{len}]"
        );
    }
}

// struct size bounds every field end (DataLayout.v `struct_size_bounds_member`).
fn check_struct_size_bounds(dl: &DataLayout, fields: &[StructFieldType], ssize: u64) {
    for f in fields {
        if let Some(fsz) = dl.type_size(&f.ty) {
            assert!(f.offset + fsz <= ssize, "struct size {ssize} < field end");
        }
    }
}

// struct align ≥ every field align (max-field-align rule).
fn check_struct_align(dl: &DataLayout, fields: &[StructFieldType], salign: u64) {
    for f in fields {
        if let Some(fa) = dl.type_align(&f.ty) {
            assert!(fa <= salign, "struct align {salign} < field align {fa}");
        }
    }
}

/// Mirrors DataLayout.v `struct_size_bounds_member` + the max-field-align rule.
#[test]
fn datalayout_struct_bounds_and_align() {
    let mut rng = XorShift64::new(0x57C7_0FF5_57C7_0FF5);
    let dl = DataLayout::for_arch(ArchId::X86_64);
    for _ in 0..ITERS {
        let fields = random_fields(&mut rng, 3);
        let s = Type::Struct {
            name: "S".into(),
            fields: fields.clone(),
        };
        if let Some(ssize) = dl.type_size(&s) {
            check_struct_size_bounds(&dl, &fields, ssize);
        }
        if let Some(salign) = dl.type_align(&s) {
            check_struct_align(&dl, &fields, salign);
        }
    }
}
