//! Indexed half-open import storage, independent of whether a slot lies in code.

#[derive(Default)]
pub(crate) struct ImportSlots(Vec<(u64, u64)>);

impl ImportSlots {
    pub(crate) fn new(mut ranges: Vec<(u64, u64)>) -> Self {
        ranges.retain(|&(lo, hi)| lo < hi);
        ranges.sort_unstable();
        let mut merged: Vec<(u64, u64)> = Vec::with_capacity(ranges.len());
        for (lo, hi) in ranges {
            if let Some(last) = merged.last_mut().filter(|last| lo <= last.1) {
                last.1 = last.1.max(hi);
            } else {
                merged.push((lo, hi));
            }
        }
        debug_assert!(merged.windows(2).all(|pair| pair[0].1 < pair[1].0));
        Self(merged)
    }

    pub(crate) fn contains(&self, address: u64) -> bool {
        let end = self.0.partition_point(|&(lo, _)| {
            #[cfg(test)]
            COMPARISONS.with(|count| count.set(count.get() + 1));
            lo <= address
        });
        end != 0 && address < self.0[end - 1].1
    }
}

#[cfg(test)]
thread_local! {
    static COMPARISONS: std::cell::Cell<usize> = const { std::cell::Cell::new(0) };
}

#[cfg(test)]
mod tests;
