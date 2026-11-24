//! NAM: the addresses that carry a name (`nam.rs`).
//!
//! Ported from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens
//! Brandao and the idb-rs contributors; see NOTICE.

use crate::Result;
use crate::reader::{Reader, Width, err};

const DEFAULT_PAGE_SIZE: usize = 0x2000;
const MAX_NAMES: u64 = 1 << 26;

pub(crate) fn read(data: &[u8], w: Width) -> Result<Vec<u64>> {
    let mut r = Reader::new(data);
    let magic = r.take(4)?;
    let (count, page_size) = match magic {
        b"Va0\0" | b"Va1\0" | b"Va2\0" | b"Va3\0" | b"Va4\0" => {
            if r.u16()? != 1 {
                return err("unexpected NAM header");
            }
            r.usize(w)?;
            if r.u16()? != 0 {
                return err("unexpected NAM header");
            }
            let mut count = r.usize(w)?;
            if w.wide {
                count /= 2;
            }
            let page_size = r.u32()? as usize;
            if page_size < 64 {
                return err("invalid NAM page size");
            }
            (count, page_size)
        }
        b"VA*\0" => {
            let kind = r.u32()?;
            if kind != 3 && kind != 4 {
                return err(format!("unknown NAM VA* kind {kind}"));
            }
            r.u32()?;
            if r.u32()? != 2048 {
                return err("unexpected NAM header");
            }
            r.usize(w)?;
            r.u32()?;
            let mut count = r.usize(w)?;
            if w.wide {
                count /= 2;
            }
            if kind == 4 {
                r.u64()?;
            }
            (count, DEFAULT_PAGE_SIZE)
        }
        _ => return err("invalid NAM magic"),
    };
    if count > MAX_NAMES {
        return err("too many NAM entries");
    }
    let Some(body) = data.get(page_size..) else {
        return err("NAM is shorter than its header page");
    };
    let mut r = Reader::new(body);
    let mut out = Vec::with_capacity(count as usize);
    for _ in 0..count {
        out.push(r.usize(w)?);
    }
    Ok(out)
}
