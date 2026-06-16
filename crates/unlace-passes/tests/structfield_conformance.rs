//! Conformance: the shipping array-of-structs tiling arithmetic
//! (`unlace-passes::struct_field_recovery::struct_tile_address`) vs the proved
//! Coq `StructFieldRecovery.v` 2-level tiling bijection.
//!
//! `StructFieldRecovery.v` proves `addr = base + stride*index + field_offset` is
//! INJECTIVE over `(index, field_offset)` with `0 <= field_offset < stride`
//! (`tile_injective`), routes back to a unique `(index, field)` by Euclidean
//! division (`tile_route_recompose`), and tiles the address space contiguously
//! (`elements_tile_contiguously`, `no_cross_element_alias`). This test pins the
//! production recompose helper to that spec: round-trip routing, injectivity,
//! and cross-element non-aliasing over random tiles.
//!
//! Read-only: pure function calls; no producer state mutated, no golden impact.

use unlace_passes::struct_field_recovery::struct_tile_address;

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

/// `tile_route_recompose`: an address built from `(index, field)` with
/// `field < stride` routes back to exactly that `(index, field)` by Euclidean
/// division. (Bounded so `stride*index + field` does not wrap u64.)
#[test]
fn tile_routes_back_like_coq() {
    let mut rng = XorShift64::new(0x57F1_E1D0_1234_5678);
    for _ in 0..500_000 {
        let base = rng.next() % 0x1_0000_0000;
        let stride = 1 + rng.next() % 4096; // > 0
        let index = rng.next() % 0x10_0000;
        let field = rng.next() % stride; // 0 <= field < stride

        let addr = struct_tile_address(base, stride, index, field);
        let delta = addr - base;
        // StructFieldRecovery.v: (addr-base)/stride = index, (addr-base)%stride = field
        assert_eq!(delta / stride, index, "index route mismatch");
        assert_eq!(delta % stride, field, "field route mismatch");
    }
}

/// `tile_injective` + `no_cross_element_alias`: distinct `(index, field)` pairs
/// (fields in range) never map to the same address.
#[test]
fn tile_is_injective_like_coq() {
    let mut rng = XorShift64::new(0x1A1B_1C1D_1E1F_2021);
    for _ in 0..500_000 {
        let base = rng.next() % 0x1_0000_0000;
        let stride = 1 + rng.next() % 4096;
        let i1 = rng.next() % 0x1000;
        let i2 = rng.next() % 0x1000;
        let f1 = rng.next() % stride;
        let f2 = rng.next() % stride;

        let a1 = struct_tile_address(base, stride, i1, f1);
        let a2 = struct_tile_address(base, stride, i2, f2);
        if (i1, f1) != (i2, f2) {
            assert_ne!(a1, a2, "tiling not injective: ({i1},{f1}) vs ({i2},{f2}) stride={stride}");
        } else {
            assert_eq!(a1, a2);
        }
    }
}

/// `elements_tile_contiguously`: element `index` ends exactly where element
/// `index+1` begins — the array is a gapless partition into stride-sized cells.
#[test]
fn elements_tile_contiguously_like_coq() {
    let mut rng = XorShift64::new(0x600D_7113_600D_7113);
    for _ in 0..200_000 {
        let base = rng.next() % 0x1_0000_0000;
        let stride = 1 + rng.next() % 4096;
        let index = rng.next() % 0x10_0000;

        let elem_start = struct_tile_address(base, stride, index, 0);
        let next_start = struct_tile_address(base, stride, index + 1, 0);
        assert_eq!(elem_start + stride, next_start, "elements must tile contiguously");

        // a field within the element never reaches the next element
        let field = rng.next() % stride;
        let field_addr = struct_tile_address(base, stride, index, field);
        assert!(elem_start <= field_addr && field_addr < next_start);
    }
}
