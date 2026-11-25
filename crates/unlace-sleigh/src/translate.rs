//! Disassembly and p-code translation interfaces, from
//! `decompiler/cpp/translate.{hh,cc}`.
//!
//! [`Translate`] extends [`RegisterLookup`] and exposes [`TranslateBase`]
//! configuration. Engines own an [`AddrSpaceManager`]; register lookup is
//! installed separately so base-level decode paths can resolve named registers.
//!
//! Address-space management and join records live in `unlace-base` and are
//! re-exported here. [`varnode_data_from_storage`] and
//! [`storage_from_varnode_data`] convert between base-level [`VarnodeStorage`]
//! and numeric p-code varnodes.
//!
//! [`PcodeEmit`] receives decoded operations; [`AssemblyEmit`] receives assembly
//! text. [`register_translate_ids`] registers the translation marshal identifiers,
//! including the identifiers shared with `unlace-base` and `unlace-num`.

use std::collections::BTreeMap;

use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::{
    ATTRIB_SIZE, ATTRIB_SPACE, AttributeId, Decoder, ElementId, IdRegistry,
};
use unlace_base::xml::DocumentStorage;
use unlace_num::float::FloatFormat;
use unlace_num::opcodes::{OpCode, OpcodeDecoder};
use unlace_num::pcoderaw::{PcodeOpRaw, VarnodeData};

// Names from translate.hh whose port lives in unlace-base (see module docs);
// re-exported so the C++ header maps onto this module.
pub use unlace_base::space::{
    AddrSpaceManager, AddressResolver, JoinRecord, RegisterLookup, SpacebaseSpace, VarnodeStorage,
};

// Marshal ids from translate.cc.  Those needed by unlace-base/unlace-num decode
// paths are defined (and documented) there; the rest are defined here.
pub use unlace_base::space::{
    ATTRIB_CONTAIN, ATTRIB_DEFAULTSPACE, ELEM_SPACE_BASE, ELEM_SPACE_OTHER, ELEM_SPACE_OVERLAY,
    ELEM_SPACE_UNIQUE, ELEM_SPACES,
};
pub use unlace_num::pcoderaw::{ATTRIB_CODE, ELEM_SPACEID};

/// Marshaling attribute "uniqbase"
pub const ATTRIB_UNIQBASE: AttributeId = AttributeId::new("uniqbase", 46);

/// Marshaling element \<op>
pub const ELEM_OP: ElementId = ElementId::new("op", 27);
/// Marshaling element \<sleigh>
pub const ELEM_SLEIGH: ElementId = ElementId::new("sleigh", 28);
/// Marshaling element \<space>
pub const ELEM_SPACE: ElementId = ElementId::new("space", 29);
/// Marshaling element \<truncate_space>
pub const ELEM_TRUNCATE_SPACE: ElementId = ElementId::new("truncate_space", 36);

/// Register every translate.cc AttributeId/ElementId on the given registry
/// (the explicit stand-in for the C++ static-object registration; follow-up
/// to `IdRegistry::with_base_ids`, which covers only the unlace-base tables).
pub fn register_translate_ids(registry: &mut IdRegistry) {
    registry.register_attribute(&ATTRIB_CODE);
    registry.register_attribute(&ATTRIB_CONTAIN);
    registry.register_attribute(&ATTRIB_DEFAULTSPACE);
    registry.register_attribute(&ATTRIB_UNIQBASE);
    registry.register_element(&ELEM_OP);
    registry.register_element(&ELEM_SLEIGH);
    registry.register_element(&ELEM_SPACE);
    registry.register_element(&ELEM_SPACEID);
    registry.register_element(&ELEM_SPACES);
    registry.register_element(&ELEM_SPACE_BASE);
    registry.register_element(&ELEM_SPACE_OTHER);
    registry.register_element(&ELEM_SPACE_OVERLAY);
    registry.register_element(&ELEM_SPACE_UNIQUE);
    registry.register_element(&ELEM_TRUNCATE_SPACE);
}

/// Convert a unlace-base storage triple into the canonical unlace-num
/// `VarnodeData` (both port the C++ `VarnodeData`; see module docs).
pub fn varnode_data_from_storage(vs: &VarnodeStorage) -> VarnodeData {
    VarnodeData {
        space: vs.space.clone(),
        offset: vs.offset,
        size: vs.size,
    }
}

/// Convert a unlace-num `VarnodeData` into the unlace-base storage triple.
pub fn storage_from_varnode_data(vd: &VarnodeData) -> VarnodeStorage {
    VarnodeStorage {
        space: vd.space.clone(),
        offset: vd.offset,
        size: vd.size,
    }
}

/// One context write a translated instruction committed: `mask` and `value`
/// are the already-shifted bits of context word `word`, taking effect at `addr`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ContextCommitRecord {
    pub addr: Address,
    pub word: i32,
    pub mask: u32,
    pub value: u32,
}

/// \brief Object for describing how a space should be truncated
///
/// This can turn up in various XML configuration files and essentially acts
/// as a command to override the size of an address space as defined by the
/// architecture.  (The C++ `AddrSpaceManager::truncateSpace(const
/// TruncationTag &)` overload is
/// `AddrSpaceManager::truncate_space(tag.get_name(), tag.get_size())`.)
#[derive(Debug, Clone, Default)]
pub struct TruncationTag {
    /// Name of space to be truncated
    space_name: String,
    /// Size truncated addresses into the space
    size: u32,
}

impl TruncationTag {
    /// Parse a \<truncate_space> element to configure \b this object
    /// \param decoder is the stream decoder
    pub fn decode(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        let elem_id = decoder.open_element_id(&ELEM_TRUNCATE_SPACE)?;
        self.space_name =
            String::from_utf8_lossy(&decoder.read_string_id(&ATTRIB_SPACE)?).into_owned();
        self.size = decoder.read_unsigned_integer_id(&ATTRIB_SIZE)? as u32; // cast: uintb -> uint4 member
        decoder.close_element(elem_id)
    }

    /// Get name of address space being truncated
    pub fn get_name(&self) -> &str {
        &self.space_name
    }

    /// Size (of pointers) for new truncated space
    pub fn get_size(&self) -> u32 {
        self.size
    }
}

/// \brief Abstract class for emitting pcode to an application
///
/// Translation engines pass back the generated pcode for an instruction to
/// the application using this class.
pub trait PcodeEmit {
    /// \brief The main pcode emit method.
    ///
    /// A single pcode instruction is returned to the application via this
    /// method.  Particular applications override it to tailor how the
    /// operations are used.
    /// \param addr is the Address of the machine instruction
    /// \param opc is the opcode of the particular pcode instruction
    /// \param outvar if not None describes the output varnode
    /// \param vars is the slice of input varnodes (C++ passes a raw
    ///        `VarnodeData *vars` array plus `int4 isize`; the slice length
    ///        is `isize`)
    fn dump(
        &mut self,
        addr: &Address,
        opc: OpCode,
        outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    );

    /// Emit pcode directly from an \<op> element (C++ `PcodeEmit::decodeOp`,
    /// a non-virtual member; a provided method here).
    ///
    /// A convenience method for passing around p-code operations via stream.
    /// A single p-code operation is parsed from an \<op> element and
    /// returned to the application via the dump method.
    /// \param addr is the address (of the instruction) to associate with the
    ///        p-code op
    /// \param decoder is the stream decoder
    fn decode_op(&mut self, addr: &Address, decoder: &mut dyn OpcodeDecoder) -> UnlaceResult<()> {
        let elem_id = decoder.open_element_id(&ELEM_OP)?;
        let isize = decoder.read_signed_integer_id(&ATTRIB_SIZE)? as i32; // cast: intb -> int4 (truncating)
        // (the C++ nests this check inside `isize <= 16` — the 16-entry
        // stack-array path — but a negative isize always takes that path,
        // so the flat check is equivalent)
        if isize < 0 {
            return Err(UnlaceError::decoder("Bad <op> size attribute"));
        }
        // The C++ uses a 16-entry stack array for small isize and a heap
        // vector otherwise — an allocation optimization with identical
        // behavior; one buffer here.
        let mut invar = vec![VarnodeData::default(); isize as usize]; // cast: isize >= 0 checked above
        let mut outvar = Some(VarnodeData::default()); // C++ outptr = &outvar
        let opcode = PcodeOpRaw::decode(decoder, isize, &mut invar, &mut outvar)?;
        decoder.close_element(elem_id)?;
        self.dump(addr, opcode, outvar.as_ref(), &invar);
        Ok(())
    }
}

/// \brief Abstract class for emitting disassembly to an application
///
/// Translation engines pass back the disassembly character data for decoded
/// machine instructions to an application using this class.
pub trait AssemblyEmit {
    /// \brief The main disassembly emitting method.
    ///
    /// The disassembly strings for a single machine instruction are passed
    /// back to an application through this method.  Particular applications
    /// can tailor the use of the disassembly by overriding this method.
    /// \param addr is the Address of the machine instruction
    /// \param mnem is the decoded instruction mnemonic
    /// \param body is the decode body (or operands) of the instruction
    fn dump(&mut self, addr: &Address, mnem: &str, body: &str);
}

struct AssemblyStringEmit<'a> {
    mnemonic: &'a mut String,
    body: &'a mut String,
}

impl AssemblyEmit for AssemblyStringEmit<'_> {
    fn dump(&mut self, _addr: &Address, mnem: &str, body: &str) {
        self.mnemonic.clear();
        self.mnemonic.push_str(mnem);
        self.body.clear();
        self.body.push_str(body);
    }
}

/// Tagged addresses in the \e unique address space (C++
/// `Translate::UniqueLayout`)
#[allow(non_camel_case_types)] // C++ enumerator names (spacetype precedent)
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum UniqueLayout {
    /// Location of the runtime temporary for boolean inversion
    RUNTIME_BOOLEAN_INVERT = 0,
    /// Location of the runtime temporary storing the return value
    RUNTIME_RETURN_LOCATION = 0x80,
    /// Location of the runtime temporary for storing an effective address
    RUNTIME_BITRANGE_EA = 0x100,
    /// Range of temporaries for use in compiling p-code snippets
    INJECT = 0x200,
    /// Range of temporaries for use during decompiler analysis
    ANALYSIS = 0x10000000,
}

/// The concrete data members of the C++ abstract class `Translate`
/// (`target_isbigendian`, `unique_base`, `alignment`, `floatformats`) plus
/// their non-virtual methods.  An engine implementing [`Translate`] embeds
/// one and exposes it through [`Translate::translate_base`].
#[derive(Debug)]
pub struct TranslateBase {
    /// \b true if the general endianness of the process is big endian
    target_isbigendian: bool,
    /// Starting offset into unique space
    unique_base: u32,
    /// Byte modulo on which instructions are aligned (C++ protected; same
    /// crate access for the engine)
    pub(crate) alignment: i32,
    /// Floating point formats utilized by the processor (C++ protected)
    pub(crate) floatformats: Vec<FloatFormat>,
}

impl TranslateBase {
    /// Constructor for the translator (C++ `Translate::Translate`).
    ///
    /// This constructs only a shell for the Translate object.  It won't be
    /// usable until it is initialized for a specific processor.  The main
    /// entry point for this is the `Translate::initialize` method.
    pub fn new() -> Self {
        TranslateBase {
            target_isbigendian: false,
            unique_base: 0,
            alignment: 1,
            floatformats: Vec::new(),
        }
    }

    /// Set general endianness to \b big if val is \b true (C++ protected
    /// `setBigEndian`).
    ///
    /// Although endianness is usually specified on the space, most languages
    /// set an endianness across the entire processor.
    pub fn set_big_endian(&mut self, val: bool) {
        self.target_isbigendian = val;
    }

    /// Set the base offset for new temporary registers (C++ protected
    /// `setUniqueBase`).
    ///
    /// This routine sets the boundary of the portion of the \e unique space
    /// allocated for the pcode engine, and sets the base offset where
    /// registers created by the simplification process can start being
    /// allocated.
    pub fn set_unique_base(&mut self, val: u32) {
        if val > self.unique_base {
            self.unique_base = val;
        }
    }

    /// If no explicit float formats, set up default formats.
    ///
    /// If no floating-point format objects were registered by the
    /// \b initialize method, this method will fill in some suitable default
    /// formats.  These defaults are based on the 4-byte and 8-byte encoding
    /// specified by the IEEE 754 standard, plus (unlace) the 2-byte binary16
    /// half-precision encoding that AArch64 FP16 and RISC-V Zfh operate on.
    pub fn set_default_float_formats(&mut self) {
        if self.floatformats.is_empty() {
            // Default IEEE 754 float formats
            self.floatformats.push(FloatFormat::new(4));
            self.floatformats.push(FloatFormat::new(8));
            self.floatformats.push(FloatFormat::new(2));
        }
    }

    /// Is the processor big endian?
    pub fn is_big_endian(&self) -> bool {
        self.target_isbigendian
    }

    /// Get format for a particular floating point encoding.
    ///
    /// The pcode model for floating point encoding assumes that a consistent
    /// encoding is used for all values of a given size.  This routine
    /// fetches the FloatFormat object given the size, in bytes, of the
    /// desired encoding.  (C++ returns a null pointer when none matches.)
    pub fn get_float_format(&self, size: i32) -> Option<&FloatFormat> {
        self.floatformats.iter().find(|fmt| fmt.get_size() == size)
    }

    /// All floating-point formats the processor uses (C++ `Translate::floatformats`).
    pub fn float_formats(&self) -> &[FloatFormat] {
        &self.floatformats
    }

    /// Get the instruction alignment for the processor.
    ///
    /// If machine instructions need to have a specific alignment for this
    /// processor, this routine returns it. I.e. a return value of 4 means
    /// that the address of all instructions must be a multiple of 4. If
    /// there is no specific alignment requirement, this routine returns 1.
    pub fn get_alignment(&self) -> i32 {
        self.alignment
    }

    /// Get the base offset for new temporary registers.
    ///
    /// Return the first offset within the \e unique space after the range
    /// statically reserved by Translate.  This is generally the starting
    /// offset where dynamic temporary registers can start to be allocated.
    pub fn get_unique_base(&self) -> u32 {
        self.unique_base
    }

    /// Get a tagged address within the \e unique space.
    ///
    /// Regions of the \e unique space are reserved for specific uses. We
    /// select the start of a specific region based on the given tag.
    /// \param layout is the given tag
    /// \return the absolute offset into the \e unique space
    pub fn get_unique_start(&self, layout: UniqueLayout) -> u32 {
        if layout != UniqueLayout::ANALYSIS {
            // layout + unique_base: uint4 arithmetic
            (layout as u32).wrapping_add(self.unique_base)
        } else {
            layout as u32
        }
    }
}

impl Default for TranslateBase {
    fn default() -> Self {
        Self::new()
    }
}

/// \brief The interface to a translation engine for a processor.
///
/// This interface performs translations of instruction data for a particular
/// processor.  It has two main functions:
///     - Disassemble single machine instructions
///     - %Translate single machine instructions into \e pcode.
///
/// It is also the repository for information about the exact configuration
/// of the reverse engineering model associated with the processor. In
/// particular, it knows about all the address spaces, registers, and
/// spacebases for the processor.
///
/// Mapping from the C++ class (see module docs): the register-name virtuals
/// (`getRegister`/`getRegisterName`/`getExactRegisterName`) come from the
/// [`RegisterLookup`] supertrait (unlace-base types, so the manager-installed
/// lookup serves the unlace-base decode paths); the inherited
/// `AddrSpaceManager` becomes an owned `unlace_base::space::AddrSpaceManager`
/// on the implementor; and the concrete base-class members live in the
/// [`TranslateBase`] reached via [`Translate::translate_base`], whose
/// non-virtual methods are mirrored here as provided methods.
pub trait Translate: RegisterLookup {
    /// Access the concrete C++ base-class state (unlace boundary; see trait docs).
    fn translate_base(&self) -> &TranslateBase;

    /// Mutable access to the concrete C++ base-class state.
    fn translate_base_mut(&mut self) -> &mut TranslateBase;

    /// \brief Initialize the translator given XML configuration documents
    ///
    /// A translator gets initialized once, possibly using XML documents to
    /// configure it.
    /// \param store is a set of configuration documents
    fn initialize(&mut self, store: &mut DocumentStorage) -> UnlaceResult<()>;

    /// \brief Add a new context variable to the model for this processor
    ///
    /// Add the name of a context register used by the processor and how
    /// that register is packed into the context state. This information is
    /// used by a ContextDatabase to associate names with context information
    /// and to pack context into a single state variable for the translation
    /// engine.
    /// \param name is the name of the new context variable
    /// \param sbit is the first bit of the variable in the packed state
    /// \param ebit is the last bit of the variable in the packed state
    fn register_context(&mut self, _name: &str, _sbit: i32, _ebit: i32) {}

    /// \brief Set the default value for a particular context variable
    ///
    /// Set the value to be returned for a context variable when there are no
    /// explicit address ranges specifying a value for the variable.
    /// \param name is the name of the context variable
    /// \param val is the value to be considered default
    fn set_context_default(&mut self, _name: &str, _val: u32) {}

    /// \brief Toggle whether disassembly is allowed to affect context
    ///
    /// By default the disassembly/pcode translation engine can change the
    /// global context, thereby affecting later disassembly.  Context may be
    /// getting determined by something other than control flow in the
    /// disassembly, in which case this function can turn off changes made by
    /// the disassembly.  (`const` in C++ — engines use interior mutability.)
    /// \param val is \b true to allow context changes, \b false prevents changes
    fn allow_context_set(&self, _val: bool) {}

    /// Isolate speculative context writes until the returned scope is committed.
    /// Stateless translators need no scope.
    fn context_scope(&self) -> Option<crate::contextscope::ContextScope<'_>> {
        None
    }

    /// Isolate decoder commits with an undo journal, restoring them on scope exit.
    /// Do not change defaults, registered variables or tracked registers here.
    fn decode_context_scope(&self) -> Option<crate::contextscope::DecodeContextScope<'_>> {
        None
    }

    /// Replace the writable bits in one context word for translation commits,
    /// returning the previous mask so a temporary restriction can be restored.
    fn set_context_write_mask(&self, _word: usize, _mask: u32) -> u32 {
        u32::MAX
    }

    /// Make every decode read `value` for the bits `mask` of context word
    /// `word`, whatever the context database holds there, returning the
    /// previous `(mask, value)`. A zero mask restores plain reads. The
    /// default implementation has no context to override.
    fn set_context_read_override(&self, _word: usize, _mask: u32, _value: u32) -> (u32, u32) {
        (0, 0)
    }

    /// The context writes (`globalset`) the most recent
    /// [`one_instruction`](Translate::one_instruction) committed, delay slots
    /// included, recorded before any write mask filtered them.
    fn last_context_commits(&self) -> Vec<ContextCommitRecord> {
        Vec::new()
    }

    /// \brief Get a list of all register names and the corresponding location
    ///
    /// Most processors have a list of named registers and possibly other
    /// memory locations that are specific to it.  This function populates a
    /// map from the location information to the name, for every named
    /// location known by the translator.
    /// \param reglist is the map which will be populated by the call
    // mutable_key_type: AddrSpace's interior-mutable fields (flags/shortcut
    // Cells) do not participate in VarnodeData's Ord, which reads only the
    // immutable space index, offset and size — the key order cannot change
    // while a key is in the map.
    #[allow(clippy::mutable_key_type)]
    fn get_all_registers(&self, reglist: &mut BTreeMap<VarnodeData, String>);

    /// \brief Get a list of all \e user-defined pcode ops
    ///
    /// The pcode model allows processors to define new pcode instructions
    /// that are specific to that processor. These \e user-defined
    /// instructions are all identified by a name and an index.  This method
    /// returns a list of these ops in index order.
    /// \param res is the resulting vector of user op names
    fn get_user_op_names(&self, res: &mut Vec<String>);

    /// \brief Get the length of a machine instruction
    ///
    /// This method decodes an instruction at a specific address just enough
    /// to find the number of bytes it uses within the instruction stream.
    /// \param baseaddr is the Address of the instruction
    /// \return the number of bytes in the instruction
    fn instruction_length(&self, baseaddr: &Address) -> UnlaceResult<i32>;

    /// \brief Transform a single machine instruction into pcode
    ///
    /// This is the main interface to the pcode translation engine.  The
    /// \e dump method in the \e emit object is invoked exactly once for each
    /// pcode operation in the translation for the machine instruction at the
    /// given address.  This routine can err with `UnlaceError::Unimpl` or
    /// `UnlaceError::BadData` (the C++ `UnimplError`/`BadDataError` throws).
    /// (`const` in C++ — engines cache through interior mutability.)
    /// \param emit is the tailored pcode emitting object
    /// \param baseaddr is the Address of the machine instruction
    /// \return the number of bytes in the machine instruction
    fn one_instruction(&self, emit: &mut dyn PcodeEmit, baseaddr: &Address) -> UnlaceResult<i32>;

    /// Validate the actual consumed bytes before committing context or emitting p-code.
    /// Translators without this contract must explicitly decline checked decoding.
    fn one_instruction_checked(
        &self,
        _emit: &mut dyn PcodeEmit,
        _baseaddr: &Address,
        _image: &dyn crate::loadimage::ImageBytes,
    ) -> UnlaceResult<i32> {
        Err(UnlaceError::lowlevel(
            "Checked instruction translation is unsupported",
        ))
    }

    /// \brief Disassemble a single machine instruction
    ///
    /// This is the main interface to the disassembler for the processor.  It
    /// disassembles a single instruction and returns the result to the
    /// application via the \e dump method in the \e emit object.
    /// \param emit is the disassembly emitting object
    /// \param baseaddr is the address of the machine instruction to disassemble
    fn print_assembly(&self, emit: &mut dyn AssemblyEmit, baseaddr: &Address) -> UnlaceResult<i32>;

    /// Lift an instruction and capture its assembly text. Assembly failure is
    /// best-effort: it does not replace a successful lift or its consumed length.
    /// Emitters must not change the image or translation context during this call.
    fn one_instruction_with_assembly(
        &self,
        pcode: &mut dyn PcodeEmit,
        assembly: &mut dyn AssemblyEmit,
        baseaddr: &Address,
    ) -> UnlaceResult<i32> {
        let length = self.one_instruction(pcode, baseaddr)?;
        let _ = self.print_assembly(assembly, baseaddr);
        Ok(length)
    }

    /// Optionally certify that this lift reads only this instruction's bytes and
    /// context words and commits no context. Reuse requires an unchanged image,
    /// translator, address and the returned effective context words (including
    /// read overrides). Unknown effects decline.
    /// Emitters must not change the image or translation context.
    fn one_instruction_reusable(
        &self,
        pcode: &mut dyn PcodeEmit,
        assembly: &mut dyn AssemblyEmit,
        baseaddr: &Address,
        context: &mut Option<Vec<u32>>,
    ) -> UnlaceResult<i32> {
        *context = None;
        self.one_instruction_with_assembly(pcode, assembly, baseaddr)
    }

    /// Check a context key returned by `one_instruction_reusable`.
    fn matches_decode_context(&self, _addr: &Address, _context: &[u32]) -> bool {
        false
    }

    /// Disassemble into reusable caller-owned strings.
    ///
    /// Both output strings are cleared before decoding and remain empty if
    /// decoding fails. Implementors can override this to render without
    /// allocating intermediate strings.
    fn print_assembly_into(
        &self,
        baseaddr: &Address,
        mnemonic: &mut String,
        body: &mut String,
    ) -> UnlaceResult<i32> {
        mnemonic.clear();
        body.clear();
        let result = {
            let mut emit = AssemblyStringEmit { mnemonic, body };
            self.print_assembly(&mut emit, baseaddr)
        };
        if result.is_err() {
            mnemonic.clear();
            body.clear();
        }
        result
    }

    // --- C++ non-virtual members, provided over translate_base() ---

    /// Is the processor big endian? (C++ `Translate::isBigEndian`)
    fn is_big_endian(&self) -> bool {
        self.translate_base().is_big_endian()
    }

    /// Get format for a particular floating point encoding (C++
    /// `Translate::getFloatFormat`).
    fn get_float_format(&self, size: i32) -> Option<&FloatFormat> {
        self.translate_base().get_float_format(size)
    }

    /// All floating-point formats the processor uses (C++ `Translate::floatformats`).
    fn float_formats(&self) -> &[FloatFormat] {
        self.translate_base().float_formats()
    }

    /// Get the instruction alignment for the processor (C++
    /// `Translate::getAlignment`).
    fn get_alignment(&self) -> i32 {
        self.translate_base().get_alignment()
    }

    /// Get the base offset for new temporary registers (C++
    /// `Translate::getUniqueBase`).
    fn get_unique_base(&self) -> u32 {
        self.translate_base().get_unique_base()
    }

    /// Get a tagged address within the \e unique space (C++
    /// `Translate::getUniqueStart`).
    fn get_unique_start(&self, layout: UniqueLayout) -> u32 {
        self.translate_base().get_unique_start(layout)
    }

    /// C++ `getRegister` with the canonical unlace-num `VarnodeData` payload
    /// (the abstract lookup itself is `RegisterLookup::get_register`, in
    /// unlace-base types).
    fn get_register_data(&self, nm: &str) -> UnlaceResult<VarnodeData> {
        Ok(varnode_data_from_storage(&self.get_register(nm)?))
    }
}

#[cfg(test)]
mod tests;
