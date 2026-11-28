//! XML-backed executable images, symbols and read-only ranges.
//!
//! [`LoadImageXml`] retains an `Rc<Element>` root and orders chunks and symbols
//! by [`Address`]. Opening receives the address-space manager and [`IdRegistry`]
//! explicitly. Architecture and symbol names remain byte strings.
//!
//! Symbol iteration uses an interior cursor over address keys. Before
//! `open_symbols`, the cursor is at the end and `get_next_symbol` returns false.
//! Clearing or relocating the image leaves its read-only address set unchanged,
//! preserving the upstream behavior.

use std::cell::RefCell;
use std::collections::{BTreeMap, BTreeSet};
use std::fmt::Write;
use std::ops::Bound;
use std::rc::Rc;

use unlace_base::address::{Address, RangeList};
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::{
    ATTRIB_CONTENT, ATTRIB_NAME, ATTRIB_READONLY, ATTRIB_SPACE, AttributeId, Decoder, ELEM_SYMBOL,
    ElementId, Encoder, IdRegistry, XmlDecode,
};
use unlace_base::space::{AddrSpace, AddrSpaceManager};
use unlace_base::types::Wrap;
use unlace_base::xml::Element;

use crate::loadimage::{LoadImage, LoadImageFunc};

/// Marshaling attribute "arch"
pub const ATTRIB_ARCH: AttributeId = AttributeId::new("arch", 135);

/// Marshaling element \<binaryimage>
pub const ELEM_BINARYIMAGE: ElementId = ElementId::new("binaryimage", 230);
/// Marshaling element \<bytechunk>
pub const ELEM_BYTECHUNK: ElementId = ElementId::new("bytechunk", 231);

/// Register the loadimage_xml.cc AttributeIds/ElementIds (C++ global-ctor
/// registration; see `unlace_base::marshal::IdRegistry`).
pub fn register_loadimage_xml_ids(registry: &mut IdRegistry) {
    registry.register_attribute(&ATTRIB_ARCH);
    registry.register_element(&ELEM_BINARYIMAGE);
    registry.register_element(&ELEM_BYTECHUNK);
}

/// The real space behind an Address in the image containers.  These all come
/// from `Address::new` over a registered space; C++ would dereference a null
/// space pointer here (UB, ADR 0004).
fn addr_space(a: &Address) -> &Rc<AddrSpace> {
    a.get_space()
        .expect("LoadImageXml: address with null space pointer (C++ UB)")
}

/// Move entries in address order using the signed i32 byte adjustment.
/// Address ordering uses only the immutable space index and offset.
#[allow(clippy::mutable_key_type)]
fn relocate_entries(entries: &mut BTreeMap<Address, Vec<u8>>, adjust: i64) {
    let mut relocated = BTreeMap::new();
    for (addr, bytes) in std::mem::take(entries) {
        let offset =
            AddrSpace::address_to_byte(adjust as u64, addr_space(&addr).get_word_size()) as i32;
        relocated.insert(&addr + i64::from(offset), bytes);
    }
    *entries = relocated;
}

/// `istream::get()` over an in-memory byte string, truncated to `char` as in
/// the C++ hex-content loop: returns the next byte as a *signed* char (high
/// bit set comes back negative, terminating the caller's `> 0` loop), or -1
/// (`traits::eof()` truncated to char) past the end.
fn istream_get(content: &[u8], pos: &mut usize) -> i8 {
    if *pos >= content.len() {
        return -1;
    }
    let b = content[*pos];
    *pos += 1;
    b as i8 // cast: C++ assigns the int from get() into a (signed) char
}

/// Apply the C++ hex-digit arithmetic without validating the input.
fn hex_digit(c: i8) -> i8 {
    if c <= b'9' as i8 {
        c.wrapping_sub(b'0' as i8)
    } else if c <= b'F' as i8 {
        c.wrapping_add(10).wrapping_sub(b'A' as i8)
    } else {
        c.wrapping_add(10).wrapping_sub(b'a' as i8)
    }
}

/// `is >> ws`: skip the classic-locale whitespace characters.
fn skip_ws(content: &[u8], pos: &mut usize) {
    while *pos < content.len() {
        match content[*pos] {
            b' ' | b'\t' | b'\n' | 0x0b | 0x0c | b'\r' => *pos += 1,
            _ => break,
        }
    }
}

/// \brief Implementation of the LoadImage interface using underlying data
/// stored in an XML format
///
/// The image data is stored in an XML file in a \<binaryimage> file.
/// The data is encoded in \<bytechunk> and potentially \<symbol> files.
#[derive(Debug)]
pub struct LoadImageXml {
    /// Name of the loadimage (the `LoadImage` base-class member)
    filename: String,
    /// The root XML element
    rootel: Rc<Element>,
    /// The architecture string (byte string from the XML attribute)
    archtype: Vec<u8>,
    /// Starting address of read-only chunks
    readonlyset: BTreeSet<Address>,
    /// Chunks of image data, mapped by address
    chunk: BTreeMap<Address, Vec<u8>>,
    /// Symbols sorted by address (byte-string names)
    addrtosymbol: BTreeMap<Address, Vec<u8>>,
    /// Current symbol being reported (C++ `mutable` map iterator; holds the
    /// next key to report, `None` meaning `end()`)
    cursymbol: RefCell<Option<Address>>,
}

impl LoadImageXml {
    /// Constructor
    /// \param f is the (path to the) underlying XML file
    /// \param el is the parsed form of the file
    pub fn new(f: &str, el: Rc<Element>) -> UnlaceResult<LoadImageXml> {
        // Extract architecture information
        if el.get_name() != "binaryimage" {
            return Err(UnlaceError::lowlevel(format!(
                "Missing binaryimage tag in {f}"
            )));
        }
        let archtype = el.get_attribute_value("arch")?.to_vec();
        Ok(LoadImageXml {
            filename: f.to_string(),
            rootel: el,
            archtype,
            readonlyset: BTreeSet::new(),
            chunk: BTreeMap::new(),
            addrtosymbol: BTreeMap::new(),
            cursymbol: RefCell::new(None),
        })
    }

    /// Encode the image to a stream.
    ///
    /// Encode the byte chunks and symbols as elements
    /// \param encoder is the stream encoder
    pub fn encode(&self, encoder: &mut dyn Encoder) -> UnlaceResult<()> {
        encoder.open_element(&ELEM_BINARYIMAGE);
        encoder.write_string(&ATTRIB_ARCH, &self.archtype);

        for (addr, vec) in &self.chunk {
            if vec.is_empty() {
                continue;
            }
            encoder.open_element(&ELEM_BYTECHUNK);
            addr_space(addr).encode_attributes(encoder, addr.get_offset())?;
            if self.readonlyset.contains(addr) {
                // C++ `encoder.writeBool(ATTRIB_READONLY, "true")`: the
                // string literal converts to the bool `true`
                encoder.write_bool(&ATTRIB_READONLY, true);
            }
            // hex, width-2, zero-padded bytes; a '\n' after every 20th
            // byte and a trailing '\n'
            let mut s = String::from("\n");
            for (i, b) in vec.iter().enumerate() {
                write!(s, "{b:02x}").expect("writing to a String cannot fail");
                if i % 20 == 19 {
                    s.push('\n');
                }
            }
            s.push('\n');
            encoder.write_string(&ATTRIB_CONTENT, s.as_bytes());
            encoder.close_element(&ELEM_BYTECHUNK);
        }

        for (addr, nm) in &self.addrtosymbol {
            encoder.open_element(&ELEM_SYMBOL);
            addr_space(addr).encode_attributes(encoder, addr.get_offset())?;
            encoder.write_string(&ATTRIB_NAME, nm);
            encoder.close_element(&ELEM_SYMBOL);
        }
        encoder.close_element(&ELEM_BINARYIMAGE);
        Ok(())
    }

    /// Read XML tags into the containers.
    /// \param m is for looking up address space
    /// \param registry holds the name -> id tables (C++ global static
    /// registration; an explicit parameter per the W1 marshal conventions)
    pub fn open(&mut self, m: &AddrSpaceManager, registry: &IdRegistry) -> UnlaceResult<()> {
        // (C++ stores `manage = m` here; the Rust port does not keep the
        // back-pointer — see module docs)
        let mut sz: u32 = 0; // unused size

        // Read parsed xml file
        let root = Rc::clone(&self.rootel);
        let mut decoder = XmlDecode::new_with_root(m, registry, &root, 0);
        let elem_id = decoder.open_element_id(&ELEM_BINARYIMAGE)?;
        loop {
            let sub_id = decoder.open_element()?;
            if sub_id == 0 {
                break;
            }
            if sub_id == ELEM_SYMBOL {
                let base = decoder.read_space_id(&ATTRIB_SPACE)?;
                let addr = Address::new(
                    Rc::clone(&base),
                    base.decode_attributes(&mut decoder, &mut sz)?,
                );
                let nm = decoder.read_string_id(&ATTRIB_NAME)?;
                self.addrtosymbol.insert(addr, nm);
            } else if sub_id == ELEM_BYTECHUNK {
                let base = decoder.read_space_id(&ATTRIB_SPACE)?;
                let addr = Address::new(
                    Rc::clone(&base),
                    base.decode_attributes(&mut decoder, &mut sz)?,
                );
                let vec = self.chunk.entry(addr.clone()).or_default();
                vec.clear();
                decoder.rewind_attributes();
                loop {
                    let attrib_id = decoder.get_next_attribute_id()?;
                    if attrib_id == 0 {
                        break;
                    }
                    if attrib_id == ATTRIB_READONLY && decoder.read_bool()? {
                        self.readonlyset.insert(addr.clone());
                    }
                }
                // istringstream over the content attribute: whitespace is
                // skipped before each hex *pair* (never between the two
                // digits of a pair), and any non-positive char — EOF or a
                // high-bit byte — terminates the loop
                let content = decoder.read_string_id(&ATTRIB_CONTENT)?;
                let mut pos: usize = 0;
                skip_ws(&content, &mut pos); // is >> ws
                let mut c1 = istream_get(&content, &mut pos);
                let mut c2 = istream_get(&content, &mut pos);
                while c1 > 0 && c2 > 0 {
                    let val = i32::from(hex_digit(c1)) * 16 + i32::from(hex_digit(c2));
                    vec.push(val as u8); // cast: (uint1)val truncation
                    skip_ws(&content, &mut pos); // is >> ws
                    c1 = istream_get(&content, &mut pos);
                    c2 = istream_get(&content, &mut pos);
                }
            } else {
                return Err(UnlaceError::lowlevel("Unknown LoadImageXml tag"));
            }
            decoder.close_element(sub_id)?;
        }
        decoder.close_element(elem_id)?;
        self.pad();
        Ok(())
    }

    /// Clear out all the caches
    pub fn clear(&mut self) {
        self.archtype.clear();
        // (C++ also nulls the `manage` back-pointer, which the Rust port
        // does not store.  Note it does NOT clear `readonlyset`.)
        self.chunk.clear();
        self.addrtosymbol.clear();
    }

    /// Prune covered chunks in address order, then pad each surviving chunk
    /// by up to 512 bytes without crossing the next chunk or the space boundary.
    fn pad(&mut self) {
        let mut previous: Option<(Address, u64)> = None;
        self.chunk.retain(|key, bytes| {
            let end = key.get_offset().wadd(bytes.len() as u64).wsub(1);
            if let Some((last, last_end)) = &previous
                && Rc::ptr_eq(addr_space(last), addr_space(key)) && *last_end >= end {
                    return false;
                }
            previous = Some((key.clone(), end));
            true
        });

        // C++ inserts pad chunks *while* iterating; every insertion lands
        // strictly between the current and the next original chunk (or
        // after the last), so the freshly inserted pads are never
        // themselves visited.  Iterating the pre-collected surviving key
        // list reproduces that exactly.
        let keys: Vec<Address> = self.chunk.keys().cloned().collect();
        for i in 0..keys.len() {
            let curkey = &keys[i];
            // Address operator+ wraps through AddrSpace::wrapOffset
            let endaddr = curkey + self.chunk[curkey].len() as i64; // cast: size_t -> the int8 operator+ argument
            if endaddr < *curkey {
                continue; // All the way to end of space
            }
            let mut maxsize: i32 = 512;
            let mut room: u64 = addr_space(&endaddr)
                .get_highest()
                .wsub(endaddr.get_offset())
                .wadd(1);
            // (uintb)maxsize: the int4 sign-extends into the comparison
            if maxsize as i64 as u64 > room {
                maxsize = room as i32; // cast: (int4)room truncation as in C++
            }
            if i + 1 < keys.len() && Rc::ptr_eq(addr_space(&keys[i + 1]), addr_space(&endaddr)) {
                if endaddr.get_offset() >= keys[i + 1].get_offset() {
                    continue;
                }
                room = keys[i + 1].get_offset().wsub(endaddr.get_offset());
                if maxsize as i64 as u64 > room {
                    maxsize = room as i32; // cast: (int4)room truncation as in C++
                }
            }
            // operator[] creates the entry if absent (it can hit the
            // current chunk itself when its size is 0)
            let vec = self.chunk.entry(endaddr).or_default();
            vec.extend(std::iter::repeat_n(0, maxsize.max(0) as usize));
        }
    }
}

impl LoadImage for LoadImageXml {
    fn get_file_name(&self) -> &str {
        &self.filename
    }

    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> UnlaceResult<()> {
        // cast: the C++ `int4 size` parameter (slice length; see trait docs)
        let mut size: i32 = ptr.len() as i32;
        let mut dest: usize = 0; // the C++ output pointer cursor
        let mut emptyhit = false;

        let mut curaddr: Address = addr.clone();
        // C++: the last chunk with key <= curaddr (upper_bound, then --iter)
        let mut iter_key: Option<Address> = match self.chunk.range(..=curaddr.clone()).next_back() {
            Some((k, _)) => Some(k.clone()),
            // upper_bound == begin(): the iterator stays at begin(),
            // which may be a chunk above curaddr or end() (empty map)
            None => self.chunk.keys().next().cloned(),
        };
        while size > 0 {
            let Some(key) = iter_key else {
                break; // iter == chunk.end()
            };
            let chnk = &self.chunk[&key];
            // cast: int4 chnksize = chnk.size() (C++ size_t -> int4)
            let mut chnksize: i32 = chnk.len() as i32;
            let over = curaddr.overlap(0, &key, chnksize);
            if over != -1 {
                if chnksize - over > size {
                    chnksize = over + size;
                }
                let mut i = over;
                while i < chnksize {
                    ptr[dest] = chnk[i as usize]; // cast: int4 index, non-negative here
                    dest += 1;
                    i += 1;
                }
                size -= chnksize - over;
                curaddr = &curaddr + i64::from(chnksize - over);
                // ++iter
                iter_key = self
                    .chunk
                    .range((Bound::Excluded(key), Bound::Unbounded))
                    .next()
                    .map(|(k, _)| k.clone());
            } else {
                emptyhit = true;
                break;
            }
        }
        if size > 0 || emptyhit {
            let mut errmsg = String::from("Bytes at ");
            curaddr.print_raw(&mut errmsg)?;
            errmsg.push_str(" are not mapped");
            return Err(UnlaceError::data_unavail(errmsg));
        }
        Ok(())
    }

    fn open_symbols(&self) {
        *self.cursymbol.borrow_mut() = self.addrtosymbol.keys().next().cloned();
    }

    fn get_next_symbol(&self, record: &mut LoadImageFunc) -> bool {
        let cur = self.cursymbol.borrow().clone();
        let Some(addr) = cur else {
            return false;
        };
        // (A cursor whose key has vanished — the map was mutated since
        // openSymbols — is iterator-invalidation UB in C++)
        let Some(name) = self.addrtosymbol.get(&addr) else {
            return false;
        };
        record.name = name.clone();
        record.address = addr.clone();
        // ++cursymbol
        *self.cursymbol.borrow_mut() = self
            .addrtosymbol
            .range((Bound::Excluded(addr), Bound::Unbounded))
            .next()
            .map(|(k, _)| k.clone());
        true
    }

    fn get_readonly(&self, list: &mut RangeList) {
        // List all the readonly chunks
        for (addr, chnk) in &self.chunk {
            if self.readonlyset.contains(addr) {
                let start = addr.get_offset();
                // stop = start + chnk.size() - 1 in wrapping uintb arithmetic
                let stop = start.wadd(chnk.len() as u64).wsub(1); // cast: size_t chunk length
                list.insert_range(Rc::clone(addr_space(addr)), start, stop);
            }
        }
    }

    fn get_arch_type(&self) -> Vec<u8> {
        self.archtype.clone()
    }

    fn adjust_vma(&mut self, adjust: i64) {
        relocate_entries(&mut self.chunk, adjust);
        relocate_entries(&mut self.addrtosymbol, adjust);
    }
}

#[cfg(test)]
mod tests;
