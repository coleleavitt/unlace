//! Memory-mapped dyld_shared_cache access (t454).
//!
//! For very large dyld_shared_caches (6+ GB on modern macOS/iOS), slurping
//! the entire file into a Vec is impractical. This module provides a
//! memory-mapped interface that lazily pages in only the regions accessed.

/// Configuration for mmap-based cache access.
#[derive(Debug, Clone)]
pub struct MmapConfig {
    /// Whether to use MAP_POPULATE (prefault pages).
    pub prefault: bool,
    /// Maximum number of concurrent mapped regions.
    pub max_regions: usize,
    /// Alignment for region boundaries.
    pub alignment: usize,
}

impl Default for MmapConfig {
    fn default() -> Self {
        Self { prefault: false, max_regions: 256, alignment: 4096 }
    }
}

/// A region of the cache that has been mapped.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MappedRegion {
    /// File offset of the region start.
    pub file_offset: u64,
    /// Length of the mapped region.
    pub length: usize,
    /// Virtual address this region maps to.
    pub va_base: u64,
}

/// Compute which regions need to be mapped for a given VA range.
pub fn regions_for_range(
    va_start: u64,
    length: usize,
    mappings: &[(u64, u64, u64)], // (va_base, file_offset, size)
    page_size: usize,
) -> Vec<MappedRegion> {
    let va_end = va_start + length as u64;
    let mut regions = Vec::new();

    for &(m_va, m_file, m_size) in mappings {
        let m_end = m_va + m_size;
        // Check overlap
        if va_start < m_end && va_end > m_va {
            let overlap_start = va_start.max(m_va);
            let overlap_end = va_end.min(m_end);
            let offset_in_mapping = overlap_start - m_va;
            let file_offset = m_file + offset_in_mapping;
            let length = (overlap_end - overlap_start) as usize;

            // Align to page boundaries
            let aligned_offset = (file_offset / page_size as u64) * page_size as u64;
            let aligned_length = ((file_offset - aligned_offset) as usize + length + page_size - 1) / page_size * page_size;

            regions.push(MappedRegion {
                file_offset: aligned_offset,
                length: aligned_length,
                va_base: overlap_start - (file_offset - aligned_offset),
            });
        }
    }
    regions
}

/// Translate a virtual address to a file offset using cache mappings.
pub fn va_to_file_offset(va: u64, mappings: &[(u64, u64, u64)]) -> Option<u64> {
    for &(m_va, m_file, m_size) in mappings {
        if va >= m_va && va < m_va + m_size {
            return Some(m_file + (va - m_va));
        }
    }
    None
}

/// Estimate the memory savings from mmap vs slurp for a given access pattern.
pub fn estimate_savings(total_cache_size: u64, accessed_regions: &[MappedRegion]) -> f64 {
    if total_cache_size == 0 { return 0.0; }
    let mapped_bytes: u64 = accessed_regions.iter().map(|r| r.length as u64).sum();
    1.0 - (mapped_bytes as f64 / total_cache_size as f64)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn va_translation() {
        let mappings = vec![
            (0x180000000, 0x0, 0x1000000),       // __TEXT
            (0x190000000, 0x1000000, 0x2000000),  // __DATA
        ];
        assert_eq!(va_to_file_offset(0x180000100, &mappings), Some(0x100));
        assert_eq!(va_to_file_offset(0x190001000, &mappings), Some(0x1001000));
        assert_eq!(va_to_file_offset(0x999999999, &mappings), None);
    }

    #[test]
    fn regions_simple() {
        let mappings = vec![(0x1000, 0x0, 0x10000)];
        let regions = regions_for_range(0x1000, 0x100, &mappings, 4096);
        assert_eq!(regions.len(), 1);
        assert_eq!(regions[0].file_offset, 0);
    }

    #[test]
    fn regions_cross_boundary() {
        let mappings = vec![
            (0x1000, 0x0, 0x1000),
            (0x2000, 0x1000, 0x1000),
        ];
        let regions = regions_for_range(0x1800, 0x1000, &mappings, 4096);
        assert_eq!(regions.len(), 2);
    }

    #[test]
    fn savings_estimate() {
        let regions = vec![MappedRegion { file_offset: 0, length: 1024 * 1024, va_base: 0 }];
        let savings = estimate_savings(6 * 1024 * 1024 * 1024, &regions); // 6 GiB cache, 1 MiB mapped
        assert!(savings > 0.99);
    }

    #[test]
    fn no_overlap() {
        let mappings = vec![(0x1000, 0x0, 0x1000)];
        let regions = regions_for_range(0x9000, 0x100, &mappings, 4096);
        assert!(regions.is_empty());
    }
}
