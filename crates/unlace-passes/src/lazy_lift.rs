//! On-demand (lazy) function lifting (t455).
//!
//! Large binaries can contain tens of thousands of functions, but a user
//! decompiling interactively typically only inspects a few. Lifting and
//! running the full SSA pipeline over every function up front is wasteful.
//!
//! [`LazyLifter`] is a small bookkeeping helper that:
//!
//! 1. Holds the universe of known function entry addresses
//!    (`function_addrs`) discovered by an earlier pass (entry points,
//!    relocations, symbol tables, exception unwind data, etc.).
//! 2. Tracks which of those have actually been lifted into an
//!    [`SsaFunction`] so far (`lifted`).
//! 3. Exposes a [`stats`](LazyLifter::stats) view so callers/UIs can
//!    report progress without scanning the whole map.
//!
//! The actual lifting (instruction decode → IR → SSA) is **not** done
//! here — that lives in `unlace-ir` and the lifter front-ends. This type
//! is purely the cache + accounting layer that sits in front of them, so
//! it has no heavy dependencies and is cheap to construct.
//!
//! Concurrency: interior mutability uses [`RefCell`] because callers in
//! the decompiler are single-threaded (one driver thread walking the
//! call graph). A `RwLock`-backed variant can be added later if a
//! parallel driver appears.

use std::cell::{Ref, RefCell};
use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;

/// Progress snapshot returned by [`LazyLifter::stats`].
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct LazyStats {
    /// Number of functions that have been lifted so far.
    pub num_lifted: usize,
    /// Total number of known function entry addresses.
    pub num_total: usize,
}

/// On-demand function lifter.
///
/// See the module-level documentation for the high-level model.
pub struct LazyLifter {
    /// Half-open `[lo, hi)` range covering the loaded image. Addresses
    /// outside this range are rejected by [`record_lifted`](Self::record_lifted).
    image_addr_range: (u64, u64),
    /// Functions lifted so far, keyed by entry address.
    lifted: RefCell<BTreeMap<u64, SsaFunction>>,
    /// All known function entry addresses in the binary.
    function_addrs: Vec<u64>,
}

impl LazyLifter {
    /// Construct a new lazy lifter.
    ///
    /// `image_addr_range` is the half-open range of valid code addresses
    /// for the loaded image. `function_addrs` is the universe of known
    /// function entry points; entries outside `image_addr_range` are
    /// silently dropped so the [`stats`](Self::stats) denominator only
    /// counts addresses that could plausibly be lifted.
    pub fn new(image_addr_range: (u64, u64), function_addrs: Vec<u64>) -> Self {
        let (lo, hi) = image_addr_range;
        let function_addrs = function_addrs
            .into_iter()
            .filter(|a| *a >= lo && *a < hi)
            .collect();
        Self {
            image_addr_range,
            lifted: RefCell::new(BTreeMap::new()),
            function_addrs,
        }
    }

    /// Record that `addr` has been lifted to `func`.
    ///
    /// Addresses outside [`image_addr_range`](Self::image_addr_range)
    /// are silently ignored — they cannot have been produced by a
    /// legitimate lift of this image.
    pub fn record_lifted(&self, addr: u64, func: SsaFunction) {
        let (lo, hi) = self.image_addr_range;
        if addr < lo || addr >= hi {
            return;
        }
        self.lifted.borrow_mut().insert(addr, func);
    }

    /// Borrow the lifted [`SsaFunction`] at `addr`, if any.
    ///
    /// Returns a [`Ref`] guard so callers can read the function in
    /// place without cloning. The borrow is scoped to the returned
    /// guard; dropping it releases the [`RefCell`]'s read lock so
    /// subsequent [`record_lifted`](Self::record_lifted) calls succeed.
    pub fn get_lifted(&self, addr: u64) -> Option<Ref<'_, SsaFunction>> {
        let guard = self.lifted.borrow();
        if guard.contains_key(&addr) {
            Some(Ref::map(guard, |m| m.get(&addr).expect("checked above")))
        } else {
            None
        }
    }

    /// Snapshot of lifting progress.
    pub fn stats(&self) -> LazyStats {
        LazyStats {
            num_lifted: self.lifted.borrow().len(),
            num_total: self.function_addrs.len(),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function};

    /// Build a minimal `SsaFunction` for testing — single empty entry
    /// block, no instructions. Enough to give us a distinct value to
    /// store at a given address.
    fn sample_func(addr: u64) -> SsaFunction {
        let entry = BlockId(0);
        let mut func = Function::new(format!("fn_{addr:x}"), entry, addr);
        func.insert_block(BasicBlock::new(entry));
        build_ssa(func)
    }

    #[test]
    fn new_filters_out_of_range_addrs() {
        // Range is [0x1000, 0x2000); 0x0500 and 0x2500 should be dropped.
        let lifter = LazyLifter::new(
            (0x1000, 0x2000),
            vec![0x0500, 0x1000, 0x1800, 0x1fff, 0x2500],
        );
        let stats = lifter.stats();
        assert_eq!(stats.num_lifted, 0);
        assert_eq!(stats.num_total, 3, "0x0500 and 0x2500 must be filtered");
    }

    #[test]
    fn record_then_get_roundtrips() {
        let lifter = LazyLifter::new((0x1000, 0x2000), vec![0x1000, 0x1100]);
        assert!(lifter.get_lifted(0x1000).is_none());

        lifter.record_lifted(0x1000, sample_func(0x1000));

        let got = lifter.get_lifted(0x1000).expect("just inserted");
        assert_eq!(got.function.addr, 0x1000);
        assert_eq!(got.function.name, "fn_1000");
        // Drop the guard before checking the miss to prove the borrow scope.
        drop(got);
        assert!(lifter.get_lifted(0x1100).is_none());
    }

    #[test]
    fn record_lifted_rejects_out_of_range() {
        let lifter = LazyLifter::new((0x1000, 0x2000), vec![0x1000]);
        // Below range.
        lifter.record_lifted(0x0500, sample_func(0x0500));
        // At/above the half-open upper bound.
        lifter.record_lifted(0x2000, sample_func(0x2000));
        lifter.record_lifted(0x9999, sample_func(0x9999));

        assert!(lifter.get_lifted(0x0500).is_none());
        assert!(lifter.get_lifted(0x2000).is_none());
        assert!(lifter.get_lifted(0x9999).is_none());
        assert_eq!(lifter.stats().num_lifted, 0);
    }

    #[test]
    fn stats_track_partial_progress() {
        let lifter = LazyLifter::new(
            (0x1000, 0x2000),
            vec![0x1000, 0x1100, 0x1200, 0x1300],
        );
        assert_eq!(
            lifter.stats(),
            LazyStats { num_lifted: 0, num_total: 4 }
        );

        lifter.record_lifted(0x1000, sample_func(0x1000));
        lifter.record_lifted(0x1200, sample_func(0x1200));
        assert_eq!(
            lifter.stats(),
            LazyStats { num_lifted: 2, num_total: 4 }
        );

        // Re-inserting the same address must not double-count.
        lifter.record_lifted(0x1000, sample_func(0x1000));
        assert_eq!(
            lifter.stats(),
            LazyStats { num_lifted: 2, num_total: 4 }
        );
    }
}
