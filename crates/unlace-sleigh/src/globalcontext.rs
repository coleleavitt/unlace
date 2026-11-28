//! Address-based decoding context and tracked register values.
//!
//! [`ContextDatabase`] defines the interface; [`ContextInternal`] stores context
//! in address partitions, and [`ContextCache`] caches the current flow range.
//! Context values use `u32` words. Variable names are byte strings ordered
//! lexicographically by byte.
//!
//! Region updates call back for each context blob in database order. Explicit
//! assignments mark change points; a flowing update stops where the affected
//! bits are already marked. Cloning `FreeArray` copies values and clears masks,
//! so a split inherits values without marking another explicit assignment.
//!
//! The cache receives its database as a method parameter and fetches values
//! even on a range hit. Reads therefore observe direct database changes,
//! including new split points inside the cached range; unlike the upstream
//! cached pointer, no old context blob is retained.

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_base::address::{Address, Range, calc_mask};
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::{ATTRIB_NAME, ATTRIB_VAL, Decoder, ElementId, Encoder, IdRegistry};
use unlace_base::partmap::PartMap;
use unlace_base::space::AddrSpace;
use unlace_base::types::Wrap;
use unlace_num::pcoderaw::VarnodeData;

// ---------------------------------------------------------------------------
// Marshaling ids (globalcontext.cc; numeric values pinned by the packed
// wire format)
// ---------------------------------------------------------------------------

/// Marshaling element \<context_data>
pub const ELEM_CONTEXT_DATA: ElementId = ElementId::new("context_data", 120);
/// Marshaling element \<context_points>
pub const ELEM_CONTEXT_POINTS: ElementId = ElementId::new("context_points", 121);
/// Marshaling element \<context_pointset>
pub const ELEM_CONTEXT_POINTSET: ElementId = ElementId::new("context_pointset", 122);
/// Marshaling element \<context_set>
pub const ELEM_CONTEXT_SET: ElementId = ElementId::new("context_set", 123);
/// Marshaling element \<set>
pub const ELEM_SET: ElementId = ElementId::new("set", 124);
/// Marshaling element \<tracked_pointset>
pub const ELEM_TRACKED_POINTSET: ElementId = ElementId::new("tracked_pointset", 125);
/// Marshaling element \<tracked_set>
pub const ELEM_TRACKED_SET: ElementId = ElementId::new("tracked_set", 126);

/// The element ids defined by `globalcontext.cc` (in C++ these register
/// themselves via global constructors; see `unlace_base::marshal::IdRegistry`).
pub static GLOBALCONTEXT_ELEMENT_IDS: &[&ElementId] = &[
    &ELEM_CONTEXT_DATA,
    &ELEM_CONTEXT_POINTS,
    &ELEM_CONTEXT_POINTSET,
    &ELEM_CONTEXT_SET,
    &ELEM_SET,
    &ELEM_TRACKED_POINTSET,
    &ELEM_TRACKED_SET,
];

/// Register every globalcontext element id with the given registry
/// (the explicit replacement for the C++ global-constructor registration).
pub fn register_globalcontext_ids(registry: &mut IdRegistry) {
    for e in GLOBALCONTEXT_ELEMENT_IDS {
        registry.register_element(e);
    }
}

// ---------------------------------------------------------------------------
// ContextBitRange
// ---------------------------------------------------------------------------

/// A contiguous value packed within one 32-bit context word.
/// Bit indices run from the most significant bit (0) to the least significant
/// bit (31). `Default` zeroes all fields.
#[derive(Debug, Clone, Copy, Default)]
pub struct ContextBitRange {
    /// Index of word containing this context value
    word: i32,
    /// First bit within the word, numbered from the most significant bit.
    #[allow(dead_code)]
    startbit: i32,
    /// Last bit within the word.
    #[allow(dead_code)]
    endbit: i32,
    /// Right-shift amount to apply when unpacking this value from its word
    shift: i32,
    /// Mask to apply (after shifting) when unpacking this value from its word
    mask: u32,
}

impl ContextBitRange {
    /// Describe the inclusive range `sbit..=ebit` in the whole context blob.
    /// Callers must supply ordered, nonnegative indices within one 32-bit word;
    /// this constructor does not validate them.
    pub fn new(sbit: i32, ebit: i32) -> ContextBitRange {
        let word = sbit / 32;
        let startbit = sbit - word * 32;
        let endbit = ebit - word * 32;
        let shift = 32 - endbit - 1;
        let mask = (!0u32) >> ((startbit + shift) as u32);
        ContextBitRange {
            word,
            startbit,
            endbit,
            shift,
            mask,
        }
    }

    /// Right shift needed to unpack the value.
    pub fn get_shift(&self) -> i32 {
        self.shift
    }

    /// Mask applied after shifting to unpack the value.
    pub fn get_mask(&self) -> u32 {
        self.mask
    }

    /// Index of the context word containing the value.
    pub fn get_word(&self) -> i32 {
        self.word
    }

    /// Store the low bits of `val`, preserving the rest of the context word.
    pub fn set_value(&self, vec: &mut [u32], val: u32) {
        let word = self.word as usize; // cast: word index, non-negative
        let mut newval = vec[word];
        newval &= !(self.mask << self.shift);
        newval |= (val & self.mask) << self.shift;
        vec[word] = newval;
    }

    /// Read the value from the context blob.
    pub fn get_value(&self, vec: &[u32]) -> u32 {
        (vec[self.word as usize] >> self.shift) & self.mask // cast: word index
    }
}

// ---------------------------------------------------------------------------
// TrackedContext / TrackedSet
// ---------------------------------------------------------------------------

/// \brief A tracked register (Varnode) and the value it contains
///
/// This is the object returned when querying for tracked registers, via
/// [`ContextDatabase::get_tracked_set`].  It holds the storage details of
/// the register and the actual value it holds at the point of the query.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct TrackedContext {
    /// Storage details of the register being tracked
    pub loc: VarnodeData,
    /// The value of the register
    pub val: u64,
}

impl TrackedContext {
    /// The register storage and value are encoded as a \<set> element.
    /// \param encoder is the stream encoder
    pub fn encode(&self, encoder: &mut dyn Encoder) -> UnlaceResult<()> {
        encoder.open_element(&ELEM_SET);
        self.loc
            .space
            .as_ref()
            .expect("TrackedContext::encode: null space pointer (C++ UB)")
            // cast: VarnodeData::size is uint4, encodeAttributes takes int4
            .encode_attributes_sized(encoder, self.loc.offset, self.loc.size as i32)?;
        encoder.write_unsigned_integer(&ATTRIB_VAL, self.val);
        encoder.close_element(&ELEM_SET);
        Ok(())
    }

    /// Parse a \<set> element to fill in the storage and value details.
    /// \param decoder is the stream decoder
    pub fn decode(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        let elem_id = decoder.open_element_id(&ELEM_SET)?;
        self.loc.decode_from_attributes(decoder)?;
        self.val = decoder.read_unsigned_integer_id(&ATTRIB_VAL)?;
        decoder.close_element(elem_id)
    }
}

/// A set of tracked registers and their values (at one code point)
pub type TrackedSet = Vec<TrackedContext>;

/// \brief Encode all tracked register values for a specific address to a
/// stream
///
/// Encode all the tracked register values associated with a specific target
/// address as a \<tracked_pointset> tag.
/// (C++ `ContextDatabase::encodeTracked`, a protected static method.)
/// \param encoder is the stream encoder
/// \param addr is the specific address we have tracked values for
/// \param vec is the list of tracked values
pub fn encode_tracked(
    encoder: &mut dyn Encoder,
    addr: &Address,
    vec: &TrackedSet,
) -> UnlaceResult<()> {
    if vec.is_empty() {
        return Ok(());
    }
    encoder.open_element(&ELEM_TRACKED_POINTSET);
    addr.get_space()
        .expect("encodeTracked: invalid address (C++ UB)")
        .encode_attributes(encoder, addr.get_offset())?;
    for tcont in vec.iter() {
        tcont.encode(encoder)?;
    }
    encoder.close_element(&ELEM_TRACKED_POINTSET);
    Ok(())
}

/// \brief Restore a sequence of tracked register values from the given
/// stream decoder
///
/// Parse a \<tracked_pointset> element, decoding each child in turn to
/// populate a list of TrackedContext objects.
/// (C++ `ContextDatabase::decodeTracked`, a protected static method.)
/// \param decoder is the given stream decoder
/// \param vec is the container that will hold the new TrackedContext objects
pub fn decode_tracked(decoder: &mut dyn Decoder, vec: &mut TrackedSet) -> UnlaceResult<()> {
    vec.clear(); // Clear out any old stuff
    while decoder.peek_element()? != 0 {
        let mut tcont = TrackedContext::default();
        tcont.decode(decoder)?;
        vec.push(tcont);
    }
    Ok(())
}

// ---------------------------------------------------------------------------
// ContextDatabase
// ---------------------------------------------------------------------------

/// C++ raw-pointer equality on optional space fields (null == null), as in
/// `unlace_num::pcoderaw`.
fn space_ptr_eq(a: &Option<Rc<AddrSpace>>, b: &Option<Rc<AddrSpace>>) -> bool {
    match (a, b) {
        (Some(a), Some(b)) => Rc::ptr_eq(a, b),
        (None, None) => true,
        _ => false,
    }
}

/// \brief An interface to a database of disassembly/decompiler \b context
/// information
///
/// \b Context \b information is a set of named variables that hold concrete
/// values at specific addresses in the target executable being analyzed. A
/// variable can hold different values at different addresses, but a specific
/// value at a specific address never changes. Analysis recovers these values
/// over time, populating this database, and querying this database lets
/// analysis provide concrete values for memory locations in context.
///
/// Context variables come in two flavors:
///  - \b Low-level \b context \b variables:
///    These can affect instruction decoding. These can be as small as a
///    single bit and need to be defined in the Sleigh specification (so
///    that Sleigh knows how they effect disassembly).  These variables are
///    not mapped to normal memory locations with an address space and
///    offset (although they often have a corresponding embedding into a
///    normal memory location).  The model to keep in mind is a control
///    register with specialized bit-fields within it.
///  - \b High-level \b tracked \b variables:
///    These are normal memory locations that are to be treated as
///    constants across some range of code. These are normally registers
///    that are being tracked by the compiler outside the domain of normal
///    local and global variables. They have a specific value established
///    by the compiler coming into a function but are not supposed to be
///    interpreted as a high-level variable. Typical examples are the
///    direction flag (for \e string instructions) and segment registers.
///    All tracked variables are interpreted as a constant value at the
///    start of a function, although the memory location can be recycled
///    for other calculations later in the function.
///
/// Low-level context variables can be queried and set by name --
/// get_variable_value(), set_variable(), set_variable_region() -- but the
/// disassembler accesses all the variables at an address as a group via
/// get_context(), set_context_change_point(), set_context_region().  In this
/// setting, all the values are packed together in an array of words, a
/// context \e blob (See ContextBitRange).
///
/// Tracked variables are also queried as a group via get_tracked_set() and
/// create_set().  These return a list of TrackedContext objects.
pub trait ContextDatabase {
    /// Copy mutable context, including explicit-set masks and tracked registers.
    /// Unlike split-point copies, this preserves the behavior of future writes.
    fn clone_for_speculation(&self) -> Box<dyn ContextDatabase>;

    /// Begin an undo journal for decoder context writes. Defaults, variable
    /// registration and tracked registers must not be changed inside this scope.
    fn begin_decode_context(&mut self);

    /// Undo the innermost decoder journal, including values and split masks.
    fn rollback_decode_context(&mut self);

    /// \brief Retrieve the context variable description object by name
    ///
    /// If the variable doesn't exist an error is returned.  (C++ protected
    /// virtual returning a reference; the Rust returns the `Copy` POD by
    /// value — it is immutable after registration.)
    /// \param nm is the name of the context value
    /// \return the ContextBitRange object matching the name
    fn get_variable(&self, nm: &[u8]) -> UnlaceResult<ContextBitRange>;

    /// \brief Grab the context blob(s) for the given address range, marking
    /// bits that will be set
    ///
    /// This is an internal routine for obtaining the actual memory regions
    /// holding context values for the address range.  This also informs the
    /// system which bits are getting set. A split is forced at the first
    /// address, and at least one memory region is passed back. The second
    /// address can be invalid in which case the memory region passed back is
    /// valid from the first address to whatever the next split point is.
    /// (The C++ passes back a `vector<uintm *>`; the Rust invokes \b each on
    /// every blob in the same order — see module docs.)
    /// \param addr1 is the starting address of the range
    /// \param addr2 is (1 past) the last address of the range or is invalid
    /// \param num is the word index for the context value that will be set
    /// \param mask is a mask of the value being set (within its word)
    /// \param each is invoked on each memory region in the range
    fn get_region_for_set(
        &mut self,
        addr1: &Address,
        addr2: &Address,
        num: i32,
        mask: u32,
        each: &mut dyn FnMut(&mut [u32]),
    );

    /// \brief Grab the context blob(s) starting at the given address up to
    /// the first point of change
    ///
    /// This is an internal routine for obtaining the actual memory regions
    /// holding context values starting at the given address.  A specific
    /// context value is specified, and all memory regions are visited up to
    /// the first address where that particular context value changes.
    /// \param addr is the starting address of the regions to fetch
    /// \param num is the word index for the specific context value being set
    /// \param mask is a mask of the context value being set (within its word)
    /// \param each is invoked on each memory region being passed back
    fn get_region_to_change_point(
        &mut self,
        addr: &Address,
        num: i32,
        mask: u32,
        each: &mut dyn FnMut(&mut [u32]),
    );

    /// \brief Retrieve the memory region holding all default context values
    ///
    /// This fetches the active memory holding the default context values on
    /// top of which all other context values are overlaid.
    /// \return the memory region holding all the default context values
    fn get_default_value(&self) -> &[u32];

    /// \brief Retrieve the memory region holding all default context values
    /// (mutable flavor of the C++ non-const overload)
    fn get_default_value_mut(&mut self) -> &mut [u32];

    /// \brief Retrieve the number of words (u32) in a context \e blob
    ///
    /// \return the number of words
    fn get_context_size(&self) -> i32;

    /// \brief Register a new named context variable (as a bit range) with
    /// the database
    ///
    /// A new variable is registered by providing a name and the range of
    /// bits the value will occupy within the context blob.  The full blob
    /// size is automatically increased if necessary.  The variable must be
    /// contained within a single word, and all variables must be registered
    /// before any values can be set.
    /// \param nm is the name of the new variable
    /// \param sbit is the position of the variable's most significant bit
    /// within the blob
    /// \param ebit is the position of the variable's least significant bit
    /// within the blob
    fn register_variable(&mut self, nm: &[u8], sbit: i32, ebit: i32) -> UnlaceResult<()>;

    /// \brief Get the context blob of values associated with a given address
    ///
    /// \param addr is the given address
    /// \return the memory region holding the context values for the address
    fn get_context(&self, addr: &Address) -> &[u32];

    /// \brief Get the context blob of values associated with a given address
    /// and its bounding offsets
    ///
    /// In addition to the memory region, the range of addresses for which
    /// the region is valid is passed back as offsets into the address space.
    /// (C++ `getContext(addr,first,last)`; the Rust returns
    /// `(region, first, last)`.)
    /// \param addr is the given address
    /// \return the memory region, the starting offset of the valid range,
    /// and the ending offset of the valid range
    fn get_context_bounds(&self, addr: &Address) -> (&[u32], u64, u64);

    /// \brief Get the set of default values for all tracked registers
    ///
    /// \return the list of TrackedContext objects
    fn get_tracked_default(&mut self) -> &mut TrackedSet;

    /// \brief Get the set of tracked register values associated with the
    /// given address
    ///
    /// \param addr is the given address
    /// \return the list of TrackedContext objects
    fn get_tracked_set(&self, addr: &Address) -> &TrackedSet;

    /// Snapshot the entire tracked-register part-map (the `set track` database).
    ///
    /// The per-function `ArchHandle` is a detached skeleton that does not hold
    /// the engine's `ContextDatabase`; `ActionConstbase` needs to query the
    /// tracked set for the function's entry address through that skeleton, so
    /// `build_arch_handle` clones this map onto the `ArchHandle`.
    fn clone_trackbase(&self) -> PartMap<Address, TrackedSet>;

    /// \brief Create a tracked register set that is valid over the given
    /// range
    ///
    /// This really should be an internal routine.  The created set is empty,
    /// old values are blown away.  If old/default values are to be
    /// preserved, they must be copied back in.
    /// \param addr1 is the starting address of the given range
    /// \param addr2 is (1 past) the ending address of the given range
    /// \return the empty set of tracked register values
    fn create_set(&mut self, addr1: &Address, addr2: &Address) -> &mut TrackedSet;

    /// \brief Encode the entire database to a stream
    ///
    /// \param encoder is the stream encoder
    fn encode(&self, encoder: &mut dyn Encoder) -> UnlaceResult<()>;

    /// \brief Restore the state of \b this database object from the given
    /// stream decoder
    ///
    /// \param decoder is the given stream decoder
    fn decode(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()>;

    /// \brief Add initial context state from elements in the
    /// compiler/processor specifications
    ///
    /// Parse a \<context_data> element from the given stream decoder from
    /// either the compiler or processor specification file for the
    /// architecture, initializing this database.
    /// \param decoder is the given stream decoder
    fn decode_from_spec(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()>;

    // -- Non-virtual helper methods (provided) --

    /// Provide a default value for a context variable.
    ///
    /// The default value is returned for addresses that have not been
    /// overlaid with other values.
    /// \param nm is the name of the context variable
    /// \param val is the default value to establish
    fn set_variable_default(&mut self, nm: &[u8], val: u32) -> UnlaceResult<()> {
        let var = self.get_variable(nm)?;
        var.set_value(self.get_default_value_mut(), val);
        Ok(())
    }

    /// Retrieve the default value for a context variable
    /// (C++ `getDefaultValue(const string &)`).
    ///
    /// This will return the default value used for addresses that have not
    /// been overlaid with other values.
    /// \param nm is the name of the context variable
    /// \return the variable's default value
    fn get_default_value_by_name(&self, nm: &[u8]) -> UnlaceResult<u32> {
        let var = self.get_variable(nm)?;
        Ok(var.get_value(self.get_default_value()))
    }

    /// Set a context value at the given address.
    ///
    /// The variable will be changed to the new value, starting at the given
    /// address up to the next point of change.
    /// \param nm is the name of the context variable
    /// \param addr is the given address
    /// \param value is the new value to set
    fn set_variable(&mut self, nm: &[u8], addr: &Address, value: u32) -> UnlaceResult<()> {
        let bitrange = self.get_variable(nm)?;
        let num = bitrange.get_word();
        let mask = bitrange.get_mask() << bitrange.get_shift();

        self.get_region_to_change_point(addr, num, mask, &mut |blob| {
            bitrange.set_value(blob, value)
        });
        Ok(())
    }

    /// Retrieve a context value at the given address
    /// (C++ `getVariable(const string &,const Address &)`).
    ///
    /// If a value has not been explicitly set for an address range
    /// containing the given address, the default value for the variable is
    /// returned.
    /// \param nm is the name of the context variable
    /// \param addr is the address for which the specific value is needed
    /// \return the context variable value for the address
    fn get_variable_value(&self, nm: &[u8], addr: &Address) -> UnlaceResult<u32> {
        let bitrange = self.get_variable(nm)?;

        let context = self.get_context(addr);
        Ok(bitrange.get_value(context))
    }

    /// \brief Set a specific context value starting at the given address
    ///
    /// The new value is \e painted across an address range, starting with
    /// the given address up to the point where another change for the
    /// variable was specified. No other context variable is changed, inside
    /// (or outside) the range.
    /// \param addr is the given starting address
    /// \param num is the index of the word (within the context blob) of the
    /// context variable
    /// \param mask is the mask delimiting the context variable (within its
    /// word)
    /// \param value is the (already shifted) value being set
    fn set_context_change_point(&mut self, addr: &Address, num: i32, mask: u32, value: u32) {
        self.get_region_to_change_point(addr, num, mask, &mut |newcontext| {
            let word = num as usize; // cast: word index, non-negative
            let mut val = newcontext[word];
            val &= !mask; // Clear range to zero
            val |= value;
            newcontext[word] = val;
        });
    }

    /// \brief Set a context variable value over a given range of addresses
    ///
    /// The new value is \e painted over an explicit range of addresses. No
    /// other context variable is changed inside (or outside) the range.
    /// \param addr1 is the starting address of the given range
    /// \param addr2 is the ending address of the given range
    /// \param num is the index of the word (within the context blob) of the
    /// context variable
    /// \param mask is the mask delimiting the context variable (within its
    /// word)
    /// \param value is the (already shifted) value being set
    fn set_context_region(
        &mut self,
        addr1: &Address,
        addr2: &Address,
        num: i32,
        mask: u32,
        value: u32,
    ) {
        self.get_region_for_set(addr1, addr2, num, mask, &mut |vec| {
            let word = num as usize; // cast: word index, non-negative
            vec[word] = (vec[word] & !mask) | value;
        });
    }

    /// \brief Set a context variable by name over a given range of addresses
    ///
    /// The new value is \e painted over an explicit range of addresses. No
    /// other context variable is changed inside (or outside) the range.
    /// \param nm is the name of the context variable to set
    /// \param begad is the starting address of the given range
    /// \param endad is the ending address of the given range
    /// \param value is the new value to set
    fn set_variable_region(
        &mut self,
        nm: &[u8],
        begad: &Address,
        endad: &Address,
        value: u32,
    ) -> UnlaceResult<()> {
        let bitrange = self.get_variable(nm)?;

        self.get_region_for_set(
            begad,
            endad,
            bitrange.get_word(),
            bitrange.get_mask() << bitrange.get_shift(),
            &mut |blob| bitrange.set_value(blob, value),
        );
        Ok(())
    }

    /// \brief Get the value of a tracked register at a specific address
    ///
    /// A specific storage region and code address is given.  If the region
    /// is tracked the value at the address is retrieved.  If the specified
    /// storage region is contained in the tracked region, the retrieved
    /// value is trimmed to match the containment before returning it. If the
    /// region is not tracked, a value of 0 is returned.
    /// \param mem is the specified storage region
    /// \param point is the code address
    /// \return the tracked value or zero
    fn get_tracked_value(&self, mem: &VarnodeData, point: &Address) -> u64 {
        tracked_value(self.get_tracked_set(point), mem)
    }
}

/// The value a tracked set gives the storage `mem`: the containing entry's
/// value trimmed to `mem`, or 0 when no entry contains it (the body of C++
/// `ContextDatabase::getTrackedValue`, shared with snapshots of the tracked sets).
pub fn tracked_value(tset: &TrackedSet, mem: &VarnodeData) -> u64 {
    // C++ `mem.offset + mem.size - 1`: defined unsigned wraparound
    let endoff = mem.offset.wadd(u64::from(mem.size)).wsub(1);
    for tcont in tset.iter() {
        // tcont must contain -mem- (space comparison is by pointer)
        if !space_ptr_eq(&tcont.loc.space, &mem.space) {
            continue;
        }
        if tcont.loc.offset > mem.offset {
            continue;
        }
        let tendoff = tcont.loc.offset.wadd(u64::from(tcont.loc.size)).wsub(1);
        if tendoff < endoff {
            continue;
        }
        let mut res = tcont.val;
        // If we have proper containment, trim value based on endianness.
        // (C++ dereferences the space pointer here: null is UB.)
        let spc = tcont
            .loc
            .space
            .as_ref()
            .expect("getTrackedValue: null tracked space pointer (C++ UB)");
        // Shift amounts below stay < 64 for tracked registers of size
        // <= 8; anything larger is C++ UB (oversized shift).
        if spc.is_big_endian() {
            if endoff != tendoff {
                res >>= 8 * (tendoff - mem.offset);
            }
        } else if mem.offset != tcont.loc.offset {
            res >>= 8 * (mem.offset - tcont.loc.offset);
        }
        res &= calc_mask(mem.size as i32); // Final trim based on size (cast: uint4 -> int4 as in C++)
        return res;
    }
    0
}

// ---------------------------------------------------------------------------
// ContextInternal
// ---------------------------------------------------------------------------

/// \brief A context blob, holding context values across some range of code
/// addresses
///
/// This is an internal object that holds the actual "array of words" for a
/// context blob.  An associated mask array holds 1-bits for context
/// variables that were explicitly set for the specific split point.
#[derive(Debug, Default)]
struct FreeArray {
    /// The "array of words" holding context variable values
    array: Vec<u32>,
    /// The mask array indicating which variables are explicitly set
    mask: Vec<u32>,
}

impl FreeArray {
    fn snapshot(&self) -> Self {
        Self {
            array: self.array.clone(),
            mask: self.mask.clone(),
        }
    }

    /// Resize the context blob, preserving old values.
    ///
    /// The "array of words" and mask array are resized to the given value.
    /// Old values are preserved, chopping off the last values, or appending
    /// zeroes, as needed.
    /// \param sz is the new number of words to resize array to
    fn reset(&mut self, sz: i32) {
        let sz = sz as usize; // cast: word count, non-negative by construction
        self.array.resize(sz, 0);
        self.mask.resize(sz, 0);
    }
}

impl Clone for FreeArray {
    /// Transcribes the C++ assignment `operator=` (the only copy path the
    /// C++ exercises, via `partmap`'s `database[pnt] = ...`): the value
    /// array is copied at the split point, "but not fact that value is
    /// being set" — the mask is zeroed.
    fn clone(&self) -> FreeArray {
        FreeArray {
            array: self.array.clone(),         // Copy value at split point
            mask: vec![0u32; self.mask.len()], // but not fact that value is being set
        }
    }
}

/// \brief An in-memory implementation of the ContextDatabase interface
///
/// Context blobs are held in a partition map on addresses.  Any address
/// within the map indicates a \e split point, where the value of a context
/// variable was explicitly changed.  Sets of tracked registers are held in a
/// separate partition map.
#[derive(Debug, Default)]
pub struct ContextInternal {
    /// Number of words in a context blob (for this architecture)
    size: i32,
    /// Map from context variable name to description object
    variables: BTreeMap<Vec<u8>, ContextBitRange>,
    /// Partition map of context blobs (FreeArray)
    database: PartMap<Address, FreeArray>,
    /// Partition map of tracked register sets
    trackbase: PartMap<Address, TrackedSet>,
    /// Original values of touched splits; None marks a newly introduced split.
    decode_journals: Vec<BTreeMap<Address, Option<FreeArray>>>,
}

impl ContextInternal {
    /// Construct an empty context database
    pub fn new() -> ContextInternal {
        ContextInternal::default()
    }

    fn record_decode_split(&mut self, addr: &Address) {
        if let Some(journal) = self.decode_journals.last_mut() {
            journal.entry(addr.clone()).or_insert_with(|| {
                let (value, before, _, _) = self.database.bounds(addr);
                (before == Some(addr)).then(|| value.snapshot())
            });
        }
    }

    /// \brief Encode a single context block to a stream
    ///
    /// The blob is broken up into individual values and written out as a
    /// series of \<set> elements within a parent \<context_pointset>
    /// element.
    /// \param encoder is the stream encoder
    /// \param addr is the address of the split point where the blob is valid
    /// \param vec is the array of words holding the blob values
    fn encode_context(
        &self,
        encoder: &mut dyn Encoder,
        addr: &Address,
        vec: &[u32],
    ) -> UnlaceResult<()> {
        encoder.open_element(&ELEM_CONTEXT_POINTSET);
        addr.get_space()
            .expect("encodeContext: invalid address (C++ UB)")
            .encode_attributes(encoder, addr.get_offset())?;
        for (name, bitrange) in self.variables.iter() {
            let val = bitrange.get_value(vec);
            encoder.open_element(&ELEM_SET);
            encoder.write_string(&ATTRIB_NAME, name);
            encoder.write_unsigned_integer(&ATTRIB_VAL, u64::from(val));
            encoder.close_element(&ELEM_SET);
        }
        encoder.close_element(&ELEM_CONTEXT_POINTSET);
        Ok(())
    }

    /// \brief Restore a context blob for given address range from a stream
    /// decoder
    ///
    /// Parse either a \<context_pointset> or \<context_set> element. In
    /// either case, children are parsed to get context variable values.
    /// Then a context blob is reconstructed from the values.  The new blob
    /// is added to the interval map based on the address range.  If the
    /// start address is invalid, the default value of the context variables
    /// are painted.  The second address can be invalid, if only a split
    /// point is known.
    /// \param decoder is the stream decoder
    /// \param addr1 is the starting address of the given range
    /// \param addr2 is the ending address of the given range
    fn decode_context(
        &mut self,
        decoder: &mut dyn Decoder,
        addr1: &Address,
        addr2: &Address,
    ) -> UnlaceResult<()> {
        loop {
            let sub_id = decoder.open_element()?;
            if sub_id != ELEM_SET.get_id() {
                break;
            }
            // cast: C++ stores readUnsignedInteger (uintb) into uintm,
            // an implicit truncation
            let val = decoder.read_unsigned_integer_id(&ATTRIB_VAL)? as u32;
            let name = decoder.read_string_id(&ATTRIB_NAME)?;
            let var = self.get_variable(&name)?;
            if addr1.is_invalid() {
                // Invalid addr1, indicates we should set default value.
                // (As in C++, the default blob is re-zeroed for *each*
                // <set> child before the value is painted.)
                let default_buffer = self.get_default_value_mut();
                default_buffer.fill(0);
                var.set_value(default_buffer, val);
            } else {
                self.get_region_for_set(
                    addr1,
                    addr2,
                    var.get_word(),
                    var.get_mask() << var.get_shift(),
                    &mut |blob| var.set_value(blob, val),
                );
            }
            decoder.close_element(sub_id)?;
        }
        Ok(())
    }
}

impl ContextDatabase for ContextInternal {
    fn clone_for_speculation(&self) -> Box<dyn ContextDatabase> {
        let copy = FreeArray::snapshot;
        let mut database = PartMap::new(copy(self.database.default_value()));
        for (addr, value) in self.database.iter() {
            *database.split(addr) = copy(value);
        }
        Box::new(Self {
            size: self.size,
            variables: self.variables.clone(),
            database,
            trackbase: self.trackbase.clone(),
            decode_journals: Vec::new(),
        })
    }

    fn begin_decode_context(&mut self) {
        self.decode_journals.push(BTreeMap::new());
    }

    fn rollback_decode_context(&mut self) {
        for (addr, original) in self
            .decode_journals
            .pop()
            .expect("active decode context journal")
        {
            if let Some(value) = original {
                *self.database.split(&addr) = value;
            } else {
                self.database.remove_split(&addr);
            }
        }
    }

    fn get_variable(&self, nm: &[u8]) -> UnlaceResult<ContextBitRange> {
        match self.variables.get(nm) {
            Some(bitrange) => Ok(*bitrange),
            None => Err(UnlaceError::lowlevel(format!(
                "Non-existent context variable: {}",
                String::from_utf8_lossy(nm)
            ))),
        }
    }

    fn get_region_for_set(
        &mut self,
        addr1: &Address,
        addr2: &Address,
        num: i32,
        mask: u32,
        each: &mut dyn FnMut(&mut [u32]),
    ) {
        self.record_decode_split(addr1);
        self.database.split(addr1);
        // C++: biter = end if addr2 invalid, else split(addr2) then begin(addr2)
        if !addr2.is_invalid() {
            self.record_decode_split(addr2);
            self.database.split(addr2);
        }
        for (key, freearray) in self.database.iter_from_mut(addr1) {
            if !addr2.is_invalid() && key >= addr2 {
                break; // reached biter
            }
            if let Some(journal) = self.decode_journals.last_mut() {
                journal
                    .entry(key.clone())
                    .or_insert_with(|| Some(freearray.snapshot()));
            }
            let word = num as usize; // cast: word index, non-negative
            freearray.mask[word] |= mask; // Mark that this value is being definitely set
            each(&mut freearray.array);
        }
    }

    fn get_region_to_change_point(
        &mut self,
        addr: &Address,
        num: i32,
        mask: u32,
        each: &mut dyn FnMut(&mut [u32]),
    ) {
        self.record_decode_split(addr);
        self.database.split(addr);
        let word = num as usize; // cast: word index, non-negative
        let mut iter = self.database.iter_from_mut(addr);
        match iter.next() {
            None => return,
            Some((_, freearray)) => {
                freearray.mask[word] |= mask;
                each(&mut freearray.array);
            }
        }
        for (key, freearray) in iter {
            if (freearray.mask[word] & mask) != 0 {
                break; // Reached point where this value was definitively set before
            }
            if let Some(journal) = self.decode_journals.last_mut() {
                journal
                    .entry(key.clone())
                    .or_insert_with(|| Some(freearray.snapshot()));
            }
            each(&mut freearray.array);
        }
    }

    fn get_default_value(&self) -> &[u32] {
        &self.database.default_value().array
    }

    fn get_default_value_mut(&mut self) -> &mut [u32] {
        &mut self.database.default_value_mut().array
    }

    fn get_context_size(&self) -> i32 {
        self.size
    }

    fn register_variable(&mut self, nm: &[u8], sbit: i32, ebit: i32) -> UnlaceResult<()> {
        if !self.database.empty() {
            return Err(UnlaceError::lowlevel(
                "Cannot register new context variables after database is initialized",
            ));
        }
        let bitrange = ContextBitRange::new(sbit, ebit);
        // 8*sizeof(uintm) == 32 (C++ unsigned division; identical for the
        // non-negative bit positions)
        let sz = sbit / 32 + 1;
        if ebit / 32 + 1 != sz {
            return Err(UnlaceError::lowlevel(
                "Context variable does not fit in one word",
            ));
        }
        if sz > self.size {
            self.size = sz;
            self.database.default_value_mut().reset(self.size);
        }
        self.variables.insert(nm.to_vec(), bitrange);
        Ok(())
    }

    fn get_context(&self, addr: &Address) -> &[u32] {
        &self.database.get_value(addr).array
    }

    fn get_context_bounds(&self, addr: &Address) -> (&[u32], u64, u64) {
        let (value, before, after, valid) = self.database.bounds(addr);
        let res = value.array.as_slice();
        // C++: first = before.getOffset(), else 0 when (valid&1) or before in another space
        let first = match before {
            Some(before) if (valid & 1) == 0
                && space_eq(before, addr) => {
                    before.get_offset()
                }
            _ => 0,
        };
        // C++: last = after.getOffset()-1, else space->getHighest() when (valid&2) or after in another space
        let last = match after {
            Some(after) if (valid & 2) == 0 && space_eq(after, addr) => {
                // C++ `after.getOffset()-1`: defined unsigned wraparound
                after.get_offset().wsub(1)
            }
            _ => addr
                .get_space()
                .expect("getContext: invalid address (C++ UB)")
                .get_highest(),
        };
        (res, first, last)
    }

    fn get_tracked_default(&mut self) -> &mut TrackedSet {
        self.trackbase.default_value_mut()
    }

    fn get_tracked_set(&self, addr: &Address) -> &TrackedSet {
        self.trackbase.get_value(addr)
    }

    fn clone_trackbase(&self) -> PartMap<Address, TrackedSet> {
        self.trackbase.clone()
    }

    fn create_set(&mut self, addr1: &Address, addr2: &Address) -> &mut TrackedSet {
        let res = self.trackbase.clear_range(addr1, addr2);
        res.clear();
        res
    }

    fn encode(&self, encoder: &mut dyn Encoder) -> UnlaceResult<()> {
        if self.database.empty() && self.trackbase.empty() {
            return Ok(());
        }

        encoder.open_element(&ELEM_CONTEXT_POINTS);

        // Save context at each changepoint
        for (addr, freearray) in self.database.iter() {
            self.encode_context(encoder, addr, &freearray.array)?;
        }

        for (addr, trackedset) in self.trackbase.iter() {
            encode_tracked(encoder, addr, trackedset)?;
        }

        encoder.close_element(&ELEM_CONTEXT_POINTS);
        Ok(())
    }

    fn decode(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        let elem_id = decoder.open_element_id(&ELEM_CONTEXT_POINTS)?;
        loop {
            let sub_id = decoder.open_element()?;
            if sub_id == 0 {
                break;
            }
            if sub_id == ELEM_CONTEXT_POINTSET.get_id() {
                let attrib_id = decoder.get_next_attribute_id()?;
                decoder.rewind_attributes();
                if attrib_id == 0 {
                    // Restore the default value
                    self.decode_context(decoder, &Address::default(), &Address::default())?;
                } else {
                    let mut v_data = VarnodeData::default();
                    v_data.decode_from_attributes(decoder)?;
                    self.decode_context(decoder, &v_data.get_addr(), &Address::default())?;
                }
            } else if sub_id == ELEM_TRACKED_POINTSET.get_id() {
                let mut v_data = VarnodeData::default();
                v_data.decode_from_attributes(decoder)?;
                let addr = v_data.get_addr();
                decode_tracked(decoder, self.trackbase.split(&addr))?;
            } else {
                return Err(UnlaceError::lowlevel("Bad <context_points> tag"));
            }
            decoder.close_element(sub_id)?;
        }
        decoder.close_element(elem_id)
    }

    fn decode_from_spec(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        let elem_id = decoder.open_element_id(&ELEM_CONTEXT_DATA)?;
        loop {
            let sub_id = decoder.open_element()?;
            if sub_id == 0 {
                break;
            }
            // There MUST be a range
            let range = Range::decode_from_attributes(decoder)?;
            let addr1 = range.get_first_addr();
            let addr2 = range.get_last_addr_open(decoder.get_addr_space_manager());
            if sub_id == ELEM_CONTEXT_SET.get_id() {
                self.decode_context(decoder, &addr1, &addr2)?;
            } else if sub_id == ELEM_TRACKED_SET.get_id() {
                decode_tracked(decoder, self.create_set(&addr1, &addr2))?;
            } else {
                return Err(UnlaceError::lowlevel("Bad <context_data> tag"));
            }
            decoder.close_element(sub_id)?;
        }
        decoder.close_element(elem_id)
    }
}

/// C++ `before.getSpace() != addr.getSpace()` style raw-pointer comparison
/// between the spaces of two addresses (null == null).
fn space_eq(a: &Address, b: &Address) -> bool {
    match (a.get_space(), b.get_space()) {
        (Some(a), Some(b)) => Rc::ptr_eq(a, b),
        (None, None) => true,
        _ => false,
    }
}

// ---------------------------------------------------------------------------
// ContextCache
// ---------------------------------------------------------------------------

/// \brief A helper class for caching the active context blob to minimize
/// database lookups
///
/// This caches the range of addresses over which the current context blob is
/// valid.  It exposes a minimal interface (get_context() and set_context()).
///
/// Differences from the C++ (see module docs): the encapsulated
/// `ContextDatabase *` is an explicit parameter on each method, and instead
/// of caching the raw blob pointer the cache re-fetches the blob through the
/// single-lookup [`ContextDatabase::get_context`] on a hit (the expensive
/// bounds query is what the cache skips).
#[derive(Debug, Clone)]
pub struct ContextCache {
    /// If set to \b false, any set_context() call is dropped
    allowset: bool,
    /// Bits that translation may write in each context word (all by default).
    write_masks: Vec<u32>,
    /// Per context word, the `(mask, value)` that every read reports in place
    /// of the database's bits (none by default).
    read_overrides: Vec<(u32, u32)>,
    /// Address space of the current valid range (`None` = cache invalid,
    /// the C++ null `curspace`)
    curspace: Option<Rc<AddrSpace>>,
    /// Starting offset of the current valid range
    first: u64,
    /// Ending offset of the current valid range
    last: u64,
}

impl Default for ContextCache {
    fn default() -> ContextCache {
        ContextCache::new()
    }
}

impl ContextCache {
    /// Construct a context cache (C++ takes the context database that will
    /// be encapsulated; here the database is passed to each method).
    pub fn new() -> ContextCache {
        ContextCache {
            curspace: None, // Mark cache as invalid
            allowset: true,
            write_masks: Vec::new(),
            read_overrides: Vec::new(),
            // C++ leaves first/last uninitialized (they are only read once
            // curspace is set); zeroed here
            first: 0,
            last: 0,
        }
    }

    /// Toggle whether set_context() calls are ignored
    pub fn allow_set(&mut self, val: bool) {
        self.allowset = val;
    }

    /// Replace the writable bits for one context word, returning the old mask.
    /// This filter also applies to bounded commits; `allow_set(false)` still
    /// suppresses every write regardless of these masks.
    pub fn set_write_mask(&mut self, word: usize, mask: u32) -> u32 {
        if self.write_masks.len() <= word {
            self.write_masks.resize(word + 1, u32::MAX);
        }
        std::mem::replace(&mut self.write_masks[word], mask)
    }

    /// Replace the `(mask, value)` that reads of one context word report in
    /// place of the database's bits, returning the old pair. A zero mask
    /// reads the database unchanged.
    pub fn set_read_override(&mut self, word: usize, mask: u32, value: u32) -> (u32, u32) {
        if self.read_overrides.len() <= word {
            self.read_overrides.resize(word + 1, (0, 0));
        }
        std::mem::replace(&mut self.read_overrides[word], (mask, value & mask))
    }

    /// Context words as seen by the decoder, including read overrides.
    pub(crate) fn effective_context<'a>(
        &'a self,
        context: &'a [u32],
    ) -> impl Iterator<Item = u32> + 'a {
        context.iter().enumerate().map(|(i, &word)| {
            let (mask, value) = self.read_overrides.get(i).copied().unwrap_or_default();
            (word & !mask) | value
        })
    }

    /// Return \b true if the cached range covers the given address (the
    /// C++ `addr.getSpace()==curspace` raw-pointer test plus offset bounds).
    fn cache_covers(&self, addr: &Address) -> bool {
        let space_hit = match (&self.curspace, addr.get_space()) {
            (Some(cur), Some(spc)) => Rc::ptr_eq(cur, spc),
            _ => false,
        };
        space_hit && self.first <= addr.get_offset() && self.last >= addr.get_offset()
    }

    /// Retrieve the context blob for the given address.
    ///
    /// Check if the address is in the current valid range. If it is not,
    /// make a (bounds) call to the database and cache a new valid range.
    /// (C++ is `const` with mutable cache fields; Rust takes `&mut self`.)
    /// \param database is the context database (the C++ encapsulated member)
    /// \param addr is the given address
    /// \param buf is where the blob should be stored
    pub fn get_context(&mut self, database: &dyn ContextDatabase, addr: &Address, buf: &mut [u32]) {
        // C++: (addr.getSpace()!=curspace)||(first>addr.getOffset())||
        //      (last<addr.getOffset())
        let n = database.get_context_size() as usize; // cast: word count
        let context = if !self.cache_covers(addr) {
            self.curspace = addr.get_space().cloned();
            let (context, first, last) = database.get_context_bounds(addr);
            self.first = first;
            self.last = last;
            context
        } else {
            database.get_context(addr)
        };
        for (word, effective) in buf[..n]
            .iter_mut()
            .zip(self.effective_context(&context[..n]))
        {
            *word = effective;
        }
    }

    /// \brief Change the value of a context variable at the given address
    /// with no bound
    ///
    /// The context value is set starting at the given address and \e paints
    /// memory up to the next explicit change point.
    /// \param database is the context database (the C++ encapsulated member)
    /// \param addr is the given starting address
    /// \param num is the word index of the context variable
    /// \param mask is the mask delimiting the context variable
    /// \param value is the (already shifted) value to set
    pub fn set_context(
        &mut self,
        database: &mut dyn ContextDatabase,
        addr: &Address,
        num: i32,
        mask: u32,
        value: u32,
    ) {
        if !self.allowset {
            return;
        }
        let mask = mask
            & self
                .write_masks
                .get(num as usize)
                .copied()
                .unwrap_or(u32::MAX);
        if mask == 0 {
            return;
        }
        database.set_context_change_point(addr, num, mask, value & mask);
        if self.cache_covers(addr) {
            self.curspace = None; // Invalidate cache
        }
    }

    /// \brief Change the value of a context variable across an explicit
    /// address range (C++ `setContext(addr1,addr2,...)`)
    ///
    /// The context value is \e painted across the range. The context
    /// variable is marked as explicitly changing at the starting address of
    /// the range.
    /// \param database is the context database (the C++ encapsulated member)
    /// \param addr1 is the starting address of the given range
    /// \param addr2 is the ending address of the given range
    /// \param num is the word index of the context variable
    /// \param mask is the mask delimiting the context variable
    /// \param value is the (already shifted) value to set
    pub fn set_context_region(
        &mut self,
        database: &mut dyn ContextDatabase,
        addr1: &Address,
        addr2: &Address,
        num: i32,
        mask: u32,
        value: u32,
    ) {
        if !self.allowset {
            return;
        }
        let mask = mask
            & self
                .write_masks
                .get(num as usize)
                .copied()
                .unwrap_or(u32::MAX);
        if mask == 0 {
            return;
        }
        database.set_context_region(addr1, addr2, num, mask, value & mask);
        if self.cache_covers(addr1) {
            self.curspace = None; // Invalidate cache
        }
        // The C++ second and third tests compare offsets only (no space
        // check) — transcribed as-is.
        if self.first <= addr2.get_offset() && self.last >= addr2.get_offset() {
            self.curspace = None; // Invalidate cache
        }
        if self.first >= addr1.get_offset() && self.first <= addr2.get_offset() {
            self.curspace = None; // Invalidate cache
        }
    }
}

#[cfg(test)]
mod tests;
