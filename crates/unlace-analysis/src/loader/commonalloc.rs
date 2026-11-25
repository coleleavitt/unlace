//! Size- and alignment-aware COMMON addresses, separate from extern slots.

pub(super) struct CommonAllocator {
    cursor: Option<u64>,
    limit: u64,
    first: Option<u64>,
}

impl CommonAllocator {
    pub(super) fn new(extern_base: u64, undefined_count: usize, is_64: bool) -> Self {
        let cursor = u64::try_from(undefined_count)
            .ok()
            .and_then(|count| count.checked_mul(16))
            .and_then(|size| extern_base.checked_add(size));
        Self {
            cursor,
            first: None,
            limit: if is_64 { u64::MAX } else { 1u64 << 32 },
        }
    }

    /// Keep `size` bytes between the extern slots and COMMON storage for other
    /// synthetic slots, before anything is allocated. Returns where they end.
    pub(super) fn reserve(&mut self, size: u64) -> Option<u64> {
        debug_assert!(self.first.is_none());
        self.cursor = self.cursor.and_then(|cursor| cursor.checked_add(size));
        self.cursor
    }

    pub(super) fn range(&self) -> Option<(u64, u64)> {
        Some((self.first?, self.cursor?))
    }

    pub(super) fn allocate(&mut self, size: u64, alignment: u64) -> Option<u64> {
        let alignment = alignment.max(1);
        if !alignment.is_power_of_two() {
            return None;
        }
        let address = self.cursor?.checked_add(alignment - 1)? & !(alignment - 1);
        let end = address.checked_add(size.max(1))?;
        if end > self.limit {
            return None;
        }
        self.first.get_or_insert(address);
        self.cursor = Some(end);
        Some(address)
    }
}

#[cfg(test)]
mod tests;
