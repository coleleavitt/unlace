//! A serial whole-program run's finished results, kept out of its heap.
//!
//! The callee-first driver holds every function's result until its last round
//! has run, and held as values they were the largest thing a one-worker batch
//! kept between functions: the per-function memory limit charged each function
//! for every result before it. Each result is written to an anonymous temporary
//! file as it lands, in the record a `--jobs` worker writes, and read back when
//! a round or the final document asks for it. A store whose file cannot be made
//! or written keeps the encoded record in memory instead, and a result carrying
//! a token map, which the record does not, stays as it is.

use std::io::{Read, Seek, SeekFrom, Write};

use unlace_console::project::FuncResult;

use crate::jobs::{decode_result, encode_result};

pub(crate) struct ResultStore {
    file: Option<std::fs::File>,
    end: u64,
    /// A write to `file` failed: the results already on it stay there, and
    /// every later one is kept in memory.
    full: bool,
    slots: Vec<Option<Slot>>,
}

struct Slot {
    body: Body,
    lines: usize,
}

enum Body {
    File { at: u64, len: usize },
    Memory(Box<[u8]>),
    Value(Box<FuncResult>),
}

impl ResultStore {
    /// An empty store with `len` slots.
    pub(crate) fn new(len: usize) -> Self {
        Self::over(tempfile::tempfile().ok(), len)
    }

    fn over(file: Option<std::fs::File>, len: usize) -> Self {
        Self {
            file,
            end: 0,
            full: false,
            slots: (0..len).map(|_| None).collect(),
        }
    }

    /// Keep `r` as slot `index`'s result, replacing any earlier one.
    pub(crate) fn put(&mut self, index: usize, r: FuncResult) {
        let lines = super::callee_first::redo_charge(r.code.as_deref());
        if r.detail.is_some() {
            self.slots[index] = Some(Slot {
                body: Body::Value(Box::new(r)),
                lines,
            });
            return;
        }
        let encoded = encode_result(&r);
        drop(r);
        let body = match self.write(&encoded) {
            Some(at) => Body::File {
                at,
                len: encoded.len(),
            },
            None => Body::Memory(encoded.into_boxed_slice()),
        };
        self.slots[index] = Some(Slot { body, lines });
    }

    /// Slot `index`'s result, if it has one.
    pub(crate) fn get(&mut self, index: usize) -> Option<FuncResult> {
        Some(match &self.slots[index].as_ref()?.body {
            Body::Memory(bytes) => decode(bytes),
            Body::Value(r) => (**r).clone(),
            &Body::File { at, len } => decode(&read_at(self.file.as_mut(), at, len)),
        })
    }

    /// What redoing slot `index` is charged (`redo_charge`): the lines its C
    /// printed, 0 for an empty slot or an error.
    pub(crate) fn lines(&self, index: usize) -> usize {
        self.slots[index].as_ref().map_or(0, |s| s.lines)
    }

    /// How many lines every result printed.
    pub(crate) fn printed(&self) -> usize {
        self.slots.iter().flatten().map(|s| s.lines).sum()
    }

    /// Every result, in slot order, skipping empty slots.
    pub(crate) fn into_results(mut self) -> Vec<FuncResult> {
        let slots = std::mem::take(&mut self.slots);
        slots
            .into_iter()
            .flatten()
            .map(|slot| match slot.body {
                Body::Memory(bytes) => decode(&bytes),
                Body::Value(r) => *r,
                Body::File { at, len } => decode(&read_at(self.file.as_mut(), at, len)),
            })
            .collect()
    }

    /// Append `encoded` to the file, returning where it starts. After a failed
    /// write the file is only read, so every later result stays in memory.
    fn write(&mut self, encoded: &[u8]) -> Option<u64> {
        let file = self.file.as_mut().filter(|_| !self.full)?;
        let at = self.end;
        match file
            .seek(SeekFrom::Start(at))
            .and_then(|_| file.write_all(encoded))
        {
            Ok(()) => {
                self.end += encoded.len() as u64;
                Some(at)
            }
            Err(_) => {
                self.full = true;
                None
            }
        }
    }
}

fn read_at(file: Option<&mut std::fs::File>, at: u64, len: usize) -> Vec<u8> {
    let file = file.expect("a slot on file implies the store's file");
    let mut bytes = vec![0; len];
    file.seek(SeekFrom::Start(at))
        .and_then(|_| file.read_exact(&mut bytes))
        .expect("re-reading a decompile result from this run's temporary file");
    bytes
}

fn decode(bytes: &[u8]) -> FuncResult {
    decode_result(bytes).expect("a decompile result record this run encoded")
}

#[cfg(test)]
mod tests;
