//! Fixed frame and member locations can contain unsigned constant displacements.

use gimli::{EndianSlice, LittleEndian, Reader};

pub(super) fn member_offset(bytes: &[u8]) -> Option<i64> {
    let mut expression = EndianSlice::new(bytes, LittleEndian);
    if expression.read_u8().ok()? != gimli::DW_OP_plus_uconst.0 {
        return None;
    }
    let offset = i64::try_from(expression.read_uleb128().ok()?).ok()?;
    expression.is_empty().then_some(offset)
}

pub(super) fn frame_offset(bytes: &[u8]) -> Option<i64> {
    let mut expression = EndianSlice::new(bytes, LittleEndian);
    if expression.read_u8().ok()? != gimli::DW_OP_fbreg.0 {
        return None;
    }
    let mut offset = expression.read_sleb128().ok()?;
    while !expression.is_empty() {
        if expression.read_u8().ok()? != gimli::DW_OP_plus_uconst.0 {
            return None;
        }
        let displacement = expression.read_uleb128().ok()?;
        offset = i64::try_from(i128::from(offset) + i128::from(displacement)).ok()?;
    }
    Some(offset)
}

#[cfg(test)]
mod tests;
