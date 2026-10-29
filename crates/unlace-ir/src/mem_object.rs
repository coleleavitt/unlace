//! Memory objects: the global data items and stack frame regions that the
//! decompiler can retype as a whole.
//!
//! Hex-Rays keys its object access map by the object's identity (a global's
//! address or a frame member's tid), not by the pointer the access goes
//! through. [`MemObject`] is that key. [`DataItems`] is the per-function view of
//! the binary's data layout the widening pass needs: which addresses are
//! data, where known items start, and how far an item may grow before it runs
//! into the next one (`calc_max_item_end`).

use std::collections::BTreeMap;

/// A global data item or a stack frame region.
#[derive(
    Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, serde::Serialize, serde::Deserialize,
)]
pub enum MemObject {
    /// A global data item, by its start address.
    Global(u64),
    /// A stack frame region, by its start offset. Offsets use the same
    /// frame-base-relative convention as [`crate::ssa::SsaFunction::stack_vars`].
    Frame(i64),
}

/// Data items and data regions referenced by one function.
///
/// Populated by the CLI pipeline from the loaded image before the passes run.
/// Empty for functions decompiled without an image; the widening pass then
/// treats no constant address as global data.
#[derive(Clone, Debug, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct DataItems {
    /// Known items (object symbols with a size): start address → size in bytes.
    items: BTreeMap<u64, u64>,
    /// Non-executable regions (data sections): start address → end address
    /// (exclusive).
    regions: BTreeMap<u64, u64>,
}

impl DataItems {
    /// Record a data region `[start, end)`. Empty ranges are ignored.
    pub fn add_region(&mut self, start: u64, end: u64) {
        if start < end {
            self.regions.insert(start, end);
        }
    }

    /// Record a known item of `size` bytes at `start`. Zero-sized items are
    /// ignored: they bound nothing.
    pub fn add_item(&mut self, start: u64, size: u64) {
        if size > 0 {
            self.items.insert(start, size);
        }
    }

    pub fn is_empty(&self) -> bool {
        self.items.is_empty() && self.regions.is_empty()
    }

    /// End (exclusive) of the data region containing `addr`.
    pub fn region_end(&self, addr: u64) -> Option<u64> {
        let (_, &end) = self.regions.range(..=addr).next_back()?;
        (addr < end).then_some(end)
    }

    /// The known item containing `addr`, as `(start, size)`.
    pub fn item_containing(&self, addr: u64) -> Option<(u64, u64)> {
        let (&start, &size) = self.items.range(..=addr).next_back()?;
        (addr - start < size).then_some((start, size))
    }

    /// Start of the first known item that begins after `addr`.
    pub fn next_item_after(&self, addr: u64) -> Option<u64> {
        self.items
            .range(addr.checked_add(1)?..)
            .next()
            .map(|(&start, _)| start)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn lookups_respect_half_open_ranges() {
        let mut items = DataItems::default();
        items.add_region(0x4000, 0x5000);
        items.add_item(0x4040, 0x80);
        items.add_item(0x40c0, 0x10);

        assert_eq!(items.region_end(0x4000), Some(0x5000));
        assert_eq!(items.region_end(0x4fff), Some(0x5000));
        assert_eq!(items.region_end(0x5000), None);
        assert_eq!(items.region_end(0x3fff), None);

        assert_eq!(items.item_containing(0x4044), Some((0x4040, 0x80)));
        assert_eq!(items.item_containing(0x40c0), Some((0x40c0, 0x10)));
        assert_eq!(items.item_containing(0x40d0), None);
        assert_eq!(items.next_item_after(0x4040), Some(0x40c0));
        assert_eq!(items.next_item_after(0x40c0), None);
    }
}
