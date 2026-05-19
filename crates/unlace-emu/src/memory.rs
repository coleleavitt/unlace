//! Memory map for the interpreter.
//!
//! Pages of bytes keyed by virtual address. mmap, brk, and stack growth
//! all hit this struct; loaded program segments are pre-populated.

use std::collections::BTreeMap;

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct Region {
    pub start: u64,
    pub size: u64,
    pub readable: bool,
    pub writable: bool,
    pub executable: bool,
}

#[derive(Clone, Debug, Default)]
pub struct MemoryMap {
    /// Memory pages, keyed by virtual address. Each page is 4096 bytes.
    pages: BTreeMap<u64, Vec<u8>>,
    regions: Vec<Region>,
}

const PAGE_SIZE: u64 = 4096;

impl MemoryMap {
    pub fn new() -> Self {
        Self::default()
    }

    fn page_addr(ea: u64) -> u64 {
        ea & !(PAGE_SIZE - 1)
    }

    /// Map a region and copy `data` into it. The region's permissions
    /// determine which read/write calls succeed.
    pub fn map(&mut self, start: u64, data: &[u8], perms: (bool, bool, bool)) {
        let (r, w, x) = perms;
        self.regions.push(Region {
            start,
            size: data.len() as u64,
            readable: r,
            writable: w,
            executable: x,
        });
        // Copy bytes into pages.
        let mut idx = 0usize;
        let mut ea = start;
        while idx < data.len() {
            let page = Self::page_addr(ea);
            let off_in_page = (ea - page) as usize;
            let page_data = self
                .pages
                .entry(page)
                .or_insert_with(|| vec![0u8; PAGE_SIZE as usize]);
            let copy_len = (PAGE_SIZE as usize - off_in_page).min(data.len() - idx);
            page_data[off_in_page..off_in_page + copy_len]
                .copy_from_slice(&data[idx..idx + copy_len]);
            idx += copy_len;
            ea += copy_len as u64;
        }
    }

    /// Read `n` bytes at ea. Returns None if any byte is unmapped.
    pub fn read(&self, ea: u64, n: usize) -> Option<Vec<u8>> {
        let mut out = Vec::with_capacity(n);
        for i in 0..n {
            let addr = ea + i as u64;
            let page = Self::page_addr(addr);
            let off = (addr - page) as usize;
            let p = self.pages.get(&page)?;
            out.push(p[off]);
        }
        Some(out)
    }

    /// Write bytes at ea. Returns false if any target page is unmapped.
    pub fn write(&mut self, ea: u64, bytes: &[u8]) -> bool {
        for (i, &b) in bytes.iter().enumerate() {
            let addr = ea + i as u64;
            let page = Self::page_addr(addr);
            let off = (addr - page) as usize;
            let Some(p) = self.pages.get_mut(&page) else {
                return false;
            };
            p[off] = b;
        }
        true
    }

    pub fn regions(&self) -> &[Region] {
        &self.regions
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_memory_map_read_write_round_trip() {
        let mut m = MemoryMap::new();
        m.map(0x1000, &[1, 2, 3, 4, 5], (true, true, false));
        assert_eq!(m.read(0x1000, 5), Some(vec![1, 2, 3, 4, 5]));
        m.write(0x1002, &[9, 9]);
        assert_eq!(m.read(0x1000, 5), Some(vec![1, 2, 9, 9, 5]));
    }

    #[test]
    fn test_memory_map_read_unmapped_returns_none() {
        let m = MemoryMap::new();
        assert!(m.read(0x1000, 4).is_none());
    }

    #[test]
    fn test_memory_map_write_unmapped_returns_false() {
        let mut m = MemoryMap::new();
        assert!(!m.write(0x1000, &[1, 2]));
    }

    #[test]
    fn test_memory_map_spans_page_boundary() {
        let mut m = MemoryMap::new();
        // Map 8 bytes straddling pages 0 and 1.
        m.map(0xFFC, &[10, 20, 30, 40, 50, 60, 70, 80], (true, true, false));
        assert_eq!(
            m.read(0xFFC, 8),
            Some(vec![10, 20, 30, 40, 50, 60, 70, 80])
        );
    }
}
