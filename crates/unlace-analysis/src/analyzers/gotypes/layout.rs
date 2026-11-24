//! Pointer-width-aware reads for little-endian Go runtime metadata.

use object::Object;

use crate::pclntab::ImageBytes;

pub(super) struct GoImage<'a> {
    pub bytes: ImageBytes<'a>,
    pub word_size: u64,
    /// Name records carry a big-endian `u16` length (go1.16 and earlier)
    /// instead of the go1.17+ varint.
    pub u16_names: bool,
    /// Map descriptors use the swiss-table layout (`abi.SwissMapType`, the
    /// default from go1.24) instead of the old buckets layout.
    pub swiss_maps: bool,
}

impl<'a> GoImage<'a> {
    pub fn new(file: &'a object::File<'a>) -> Self {
        Self {
            bytes: ImageBytes::new(file),
            word_size: if file.is_64() { 8 } else { 4 },
            u16_names: false,
            swiss_maps: false,
        }
    }

    pub fn read(&self, vma: u64, len: usize) -> Option<&'a [u8]> {
        self.bytes.read(vma, len)
    }

    pub fn word(&self, vma: u64) -> Option<u64> {
        let bytes = self.read(vma, self.word_size as usize)?;
        self.decode_word(bytes)
    }

    pub fn decode_word(&self, bytes: &[u8]) -> Option<u64> {
        if self.word_size == 4 {
            Some(u32::from_le_bytes(bytes.try_into().ok()?) as u64)
        } else {
            Some(u64::from_le_bytes(bytes.try_into().ok()?))
        }
    }

    pub fn type_base(&self) -> u64 {
        4 * self.word_size + 16
    }

    /// Bytes of a map descriptor past its `rtype` base: the old
    /// `{Key, Elem, Bucket, Hasher, KeySize, ValueSize, BucketSize, Flags}`
    /// record, or the swiss `{Key, Elem, Group, Hasher, GroupSize, SlotSize,
    /// ElemOff, Flags}` record, whose pointer-aligned tail is padded to a word.
    pub fn map_record(&self) -> u64 {
        let w = self.word_size;
        if self.swiss_maps {
            (7 * w + 4).next_multiple_of(w)
        } else {
            4 * w + 8
        }
    }

    #[cfg(test)]
    pub fn from_spans(spans: Vec<(u64, &'a [u8])>) -> Self {
        Self {
            bytes: ImageBytes::from_spans(spans),
            word_size: 8,
            u16_names: false,
            swiss_maps: false,
        }
    }
}
