//! Instruction records in bounded chunks, with an ordered page address index.
//! Tree nodes hold page buckets rather than large instruction payloads; each
//! bucket stores sorted addresses and row numbers. Chunks never relocate records
//! or grow a second whole-image buffer during the walk.
//!
//! Store snapshots share immutable instruction chunks. A write to a shared
//! chunk clones just that chunk; appending through a partial tail detaches that
//! tail once, while untouched full chunks remain shared.

use std::ops::RangeBounds;
use std::rc::Rc;

use super::insnindex::InstructionIndex;
use super::model::{Insn, Mnemonic, MnemonicPool};

const CHUNK_ROWS: usize = 1024;

#[derive(Default, Clone)]
pub(super) struct InstructionStore {
    index: InstructionIndex,
    chunks: Vec<Rc<InstructionChunk>>,
    mnemonics: MnemonicPool,
}

/// A bounded block of instruction records, shared between store snapshots.
struct InstructionChunk {
    rows: Vec<Insn>,
}

impl Clone for InstructionChunk {
    fn clone(&self) -> Self {
        let mut rows = Vec::with_capacity(CHUNK_ROWS);
        rows.extend_from_slice(&self.rows);
        Self { rows }
    }
}

impl InstructionStore {
    pub(super) fn intern_mnemonic(&mut self, text: &str) -> Mnemonic {
        self.mnemonics.intern(text)
    }

    pub fn insert(&mut self, address: u64, insn: Insn) -> Option<Insn> {
        let Self { index, chunks, .. } = self;
        let mut pending = Some(insn);
        let replaced = index.insert_with(address, || {
            let slot = chunks.last().map_or(0, |chunk| {
                (chunks.len() - 1) * CHUNK_ROWS + chunk.rows.len()
            });
            if slot % CHUNK_ROWS == 0 {
                chunks.push(Rc::new(InstructionChunk {
                    rows: Vec::with_capacity(CHUNK_ROWS),
                }));
            }
            Rc::make_mut(chunks.last_mut().unwrap())
                .rows
                .push(pending.take().unwrap());
            slot
        });
        replaced.map(|slot| {
            std::mem::replace(
                &mut Rc::make_mut(&mut chunks[slot / CHUNK_ROWS]).rows[slot % CHUNK_ROWS],
                pending.take().unwrap(),
            )
        })
    }

    pub fn get(&self, address: &u64) -> Option<&Insn> {
        let slot = self.index.get(*address)?;
        Some(&self.chunks[slot / CHUNK_ROWS].rows[slot % CHUNK_ROWS])
    }

    pub fn get_mut(&mut self, address: &u64) -> Option<&mut Insn> {
        let slot = self.index.get(*address)?;
        Some(&mut Rc::make_mut(&mut self.chunks[slot / CHUNK_ROWS]).rows[slot % CHUNK_ROWS])
    }

    pub fn contains_key(&self, address: &u64) -> bool {
        self.index.contains_key(*address)
    }

    pub fn len(&self) -> usize {
        self.index.len()
    }

    pub fn keys(&self) -> impl Iterator<Item = &u64> {
        self.index.keys()
    }

    pub fn iter(&self) -> impl DoubleEndedIterator<Item = (&u64, &Insn)> {
        let chunks = &self.chunks;
        self.index.iter().map(move |(address, &slot)| {
            (address, &chunks[slot / CHUNK_ROWS].rows[slot % CHUNK_ROWS])
        })
    }

    pub fn range(
        &self,
        bounds: impl RangeBounds<u64>,
    ) -> impl DoubleEndedIterator<Item = (&u64, &Insn)> {
        let chunks = &self.chunks;
        self.index.range(bounds).map(move |(address, &slot)| {
            (address, &chunks[slot / CHUNK_ROWS].rows[slot % CHUNK_ROWS])
        })
    }
}

impl FromIterator<(u64, Insn)> for InstructionStore {
    fn from_iter<T: IntoIterator<Item = (u64, Insn)>>(iter: T) -> Self {
        let mut store = Self::default();
        for (address, insn) in iter {
            store.insert(address, insn);
        }
        store
    }
}

#[cfg(test)]
mod tests;
