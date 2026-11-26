//! (unlace) A flat cursor over a packed element stream that walks records
//! without building anything.
//!
//! The packed format (`unlace_base::marshal::packed_format`) stores no element
//! lengths, so finding where an element ends means walking every record inside
//! it. [`Scan`] does that walk over the inflated `.sla` bytes in place, at a
//! fraction of what `PackedDecode::skip_element_raw` costs per byte, and reads
//! the few integer attributes a lazy load needs (symbol ids, constructor counts,
//! decision fields). Everything it skips is decoded later, if ever, by the
//! regular decoders over the byte range it reports.

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::packed_format as pf;

/// The record at the cursor.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(crate) enum Record {
    /// An element start record with its id.
    Start(u32),
    /// An element end record with its id.
    End(u32),
    /// An attribute record with its id.
    Attribute(u32),
}

/// One attribute's value, for the types a lazy load reads; the rest are only
/// ever skipped.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(crate) enum Value<'a> {
    Bool(bool),
    Signed(i64),
    Unsigned(u64),
    Str(&'a [u8]),
    /// An address-space attribute (skipped, not decoded).
    Other,
}

impl<'a> Value<'a> {
    /// C++ `readString` on this attribute.
    pub(crate) fn string(self) -> UnlaceResult<&'a [u8]> {
        match self {
            Value::Str(v) => Ok(v),
            _ => Err(UnlaceError::decoder("Expecting string attribute")),
        }
    }

    /// C++ `readSignedInteger` on this attribute (a positive or negative
    /// integer record; anything else is a type error).
    pub(crate) fn signed(self) -> UnlaceResult<i64> {
        match self {
            Value::Signed(v) => Ok(v),
            _ => Err(UnlaceError::decoder("Expecting signed integer attribute")),
        }
    }

    /// C++ `readUnsignedInteger` on this attribute.
    pub(crate) fn unsigned(self) -> UnlaceResult<u64> {
        match self {
            Value::Unsigned(v) => Ok(v),
            _ => Err(UnlaceError::decoder("Expecting unsigned integer attribute")),
        }
    }

    /// C++ `readBool` on this attribute.
    pub(crate) fn boolean(self) -> UnlaceResult<bool> {
        match self {
            Value::Bool(v) => Ok(v),
            _ => Err(UnlaceError::decoder("Expecting boolean attribute")),
        }
    }
}

/// A cursor into a packed element stream.
#[derive(Debug, Clone)]
pub(crate) struct Scan<'a> {
    bytes: &'a [u8],
    pos: usize,
}

fn corrupt() -> UnlaceError {
    UnlaceError::decoder("Corrupt stream")
}

impl<'a> Scan<'a> {
    /// A cursor at `pos` in `bytes`.
    pub(crate) fn new(bytes: &'a [u8], pos: usize) -> Scan<'a> {
        Scan { bytes, pos }
    }

    /// The cursor's byte offset.
    pub(crate) fn pos(&self) -> usize {
        self.pos
    }

    fn byte(&self, at: usize) -> UnlaceResult<u8> {
        self.bytes.get(at).copied().ok_or_else(corrupt)
    }

    /// The record header at the cursor: its kind and id, and the offset past
    /// the header bytes.
    fn header(&self) -> UnlaceResult<(u8, u32, usize)> {
        let header1 = self.byte(self.pos)?;
        let mut id = u32::from(header1 & pf::ELEMENTID_MASK);
        let mut next = self.pos + 1;
        if header1 & pf::HEADEREXTEND_MASK != 0 {
            id = (id << pf::RAWDATA_BITSPERBYTE) | u32::from(self.byte(next)? & pf::RAWDATA_MASK);
            next += 1;
        }
        Ok((header1 & pf::HEADER_MASK, id, next))
    }

    /// The record at the cursor, without consuming it.
    pub(crate) fn peek(&self) -> UnlaceResult<Record> {
        let (kind, id, _) = self.header()?;
        match kind {
            pf::ELEMENT_START => Ok(Record::Start(id)),
            pf::ELEMENT_END => Ok(Record::End(id)),
            pf::ATTRIBUTE => Ok(Record::Attribute(id)),
            _ => Err(corrupt()),
        }
    }

    /// Consume an element start record, returning its id.
    pub(crate) fn open(&mut self) -> UnlaceResult<u32> {
        match self.header()? {
            (pf::ELEMENT_START, id, next) => {
                self.pos = next;
                Ok(id)
            }
            _ => Err(UnlaceError::decoder("Expecting element start")),
        }
    }

    /// Consume an element start record that must carry `id`.
    pub(crate) fn open_id(&mut self, id: u32) -> UnlaceResult<()> {
        if self.open()? != id {
            return Err(UnlaceError::decoder("Expecting a different element"));
        }
        Ok(())
    }

    /// Consume an element end record, returning its id.
    pub(crate) fn close(&mut self) -> UnlaceResult<u32> {
        match self.header()? {
            (pf::ELEMENT_END, id, next) => {
                self.pos = next;
                Ok(id)
            }
            _ => Err(UnlaceError::decoder("Expecting element close")),
        }
    }

    /// Consume the next attribute of the open element: its id and value, or
    /// `None` once the element's attributes are exhausted.
    pub(crate) fn attribute(&mut self) -> UnlaceResult<Option<(u32, Value<'a>)>> {
        let (kind, id, pos) = self.header()?;
        if kind != pf::ATTRIBUTE {
            return Ok(None);
        }
        let (value, end) = self.attribute_value(pos)?;
        self.pos = end;
        Ok(Some((id, value)))
    }

    /// The value of the attribute whose type byte is at `pos`, and the offset
    /// past its data.
    fn attribute_value(&self, mut pos: usize) -> UnlaceResult<(Value<'a>, usize)> {
        let type_byte = self.byte(pos)?;
        pos += 1;
        // The length code: the data's byte count, or for a boolean its value
        // and for a special space its code (neither has data bytes).
        let code = usize::from(type_byte & pf::LENGTHCODE_MASK);
        let (value, data) = match type_byte >> pf::TYPECODE_SHIFT {
            pf::TYPECODE_BOOLEAN => (Value::Bool(code != 0), 0),
            pf::TYPECODE_SPECIALSPACE => (Value::Other, 0),
            pf::TYPECODE_SIGNEDINT_POSITIVE => {
                // C++ readSignedInteger: the raw integer as intb.
                (Value::Signed(self.integer(pos, code)? as i64), code)
            }
            pf::TYPECODE_SIGNEDINT_NEGATIVE => (
                Value::Signed((self.integer(pos, code)? as i64).wrapping_neg()),
                code,
            ),
            pf::TYPECODE_UNSIGNEDINT => (Value::Unsigned(self.integer(pos, code)?), code),
            pf::TYPECODE_ADDRESSSPACE => (Value::Other, code),
            pf::TYPECODE_STRING => {
                // The length code sizes the integer holding the string's byte
                // count, which the string itself follows.
                let strlen = self.integer(pos, code)? as usize; // u64 -> usize: byte count
                let start = pos + code;
                let string = self
                    .bytes
                    .get(start..start.checked_add(strlen).ok_or_else(corrupt)?)
                    .ok_or_else(corrupt)?;
                (Value::Str(string), code + strlen)
            }
            _ => return Err(corrupt()),
        };
        pos += data;
        if pos > self.bytes.len() {
            return Err(corrupt());
        }
        Ok((value, pos))
    }

    /// Consume the open element's remaining attributes.
    pub(crate) fn skip_attributes(&mut self) -> UnlaceResult<()> {
        while self.attribute()?.is_some() {}
        Ok(())
    }

    /// Consume the whole element at the cursor: its start record, attributes,
    /// children and end record.
    pub(crate) fn skip_element(&mut self) -> UnlaceResult<()> {
        self.skip_element_with(|_| {})
    }

    /// [`Self::skip_element`], reporting the id of each direct child element
    /// as it is passed.
    ///
    /// This is the hot loop of a lazy load (it walks every byte of every
    /// subtable), so it reads the records inline, with one bounds check per
    /// record, instead of through [`Self::header`] and [`Self::attribute_value`].
    pub(crate) fn skip_element_with(&mut self, mut on_child: impl FnMut(u32)) -> UnlaceResult<()> {
        let bytes = self.bytes;
        let len = bytes.len();
        let mut pos = self.pos;
        let mut depth: u32 = 0;
        loop {
            if pos >= len {
                return Err(corrupt());
            }
            let header1 = bytes[pos];
            pos += 1;
            let mut id = u32::from(header1 & pf::ELEMENTID_MASK);
            if header1 & pf::HEADEREXTEND_MASK != 0 {
                if pos >= len {
                    return Err(corrupt());
                }
                id = (id << pf::RAWDATA_BITSPERBYTE) | u32::from(bytes[pos] & pf::RAWDATA_MASK);
                pos += 1;
            }
            match header1 & pf::HEADER_MASK {
                pf::ELEMENT_START => {
                    depth += 1;
                    if depth == 2 {
                        on_child(id);
                    }
                }
                pf::ELEMENT_END => {
                    if depth == 0 {
                        return Err(corrupt());
                    }
                    depth -= 1;
                    if depth == 0 {
                        break;
                    }
                }
                pf::ATTRIBUTE => {
                    if pos >= len {
                        return Err(corrupt());
                    }
                    let type_byte = bytes[pos];
                    pos += 1;
                    let code = type_byte >> pf::TYPECODE_SHIFT;
                    if code == pf::TYPECODE_BOOLEAN || code == pf::TYPECODE_SPECIALSPACE {
                        continue;
                    }
                    let mut length = usize::from(type_byte & pf::LENGTHCODE_MASK);
                    if code == pf::TYPECODE_STRING {
                        length += self.integer(pos, length)? as usize; // u64 -> usize: byte count
                    }
                    pos += length;
                }
                _ => return Err(corrupt()),
            }
        }
        if pos > len {
            return Err(corrupt());
        }
        self.pos = pos;
        Ok(())
    }

    /// The `length`-byte big-endian integer of 7-bit bytes at `pos`
    /// (C++ `PackedDecode::readInteger`).
    fn integer(&self, pos: usize, length: usize) -> UnlaceResult<u64> {
        let bytes = self.bytes.get(pos..pos + length).ok_or_else(corrupt)?;
        Ok(bytes.iter().fold(0u64, |acc, &b| {
            (acc << pf::RAWDATA_BITSPERBYTE) | u64::from(b & pf::RAWDATA_MASK)
        }))
    }
}

#[cfg(test)]
mod tests;
