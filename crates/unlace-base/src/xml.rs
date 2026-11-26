//! Port of `decompiler/cpp/xml.hh` + `xml.cc` (generated from `xml.y`) — the
//! lightweight (and incomplete) XML parser used for marshaling data to and
//! from the decompiler (W1, item `w1-base-xml`).
//!
//! Per LOSS-006 (`docs/rust-port/losses.md`) the bison-generated automaton is
//! replaced by a hand-written parser that reproduces the *grammar semantics*
//! of `xml.y` exactly — the same accepted language (including the quirks
//! below), the same scanner-mode protocol, the same SAX callback sequence,
//! and the same error strings:
//!
//! - The scanner (`XmlScan`) is a line-for-line transcription, including
//!   the 4-byte lookahead, the synthetic `'\n'` injected at end of stream, a
//!   NUL byte acting as end of stream, and the **signed-char** semantics of
//!   the oracle platform (bytes >= 0x80 become negative lookahead values, so
//!   they fail `isChar` in comments/CDATA, and byte 0xFF is indistinguishable
//!   from end of stream — exactly as on x86-64 g++).
//! - bison maps any token value <= 0 to `$end`; the hand parser does too.
//! - The 8 declared shift/reduce conflicts (`%expect 8`) all resolve as
//!   shifts: whitespace runs are absorbed greedily, and `<?x` at the very
//!   start of the document is committed to the `<?xml ...?>` declaration.
//! - Quirks preserved deliberately: processing instructions are rejected
//!   ("Processing instructions are not supported"), DTDs are rejected
//!   ("DTD's not supported") — but a `<!DOCTYPE` as the *first* thing in the
//!   document is a plain "syntax error" because `doctypepro` only follows a
//!   non-empty `prologpre`; a closing tag's name is **not** checked against
//!   its opening tag (`xml.y:191` discards it); the document grammar accepts
//!   exactly one trailing `Misc` after the root element, so a trailing
//!   comment can never parse (the synthetic `'\n'` always follows it);
//!   unknown entity references decode to byte 0xFF (`(char)-1`); character
//!   references append only the **low byte** of the converted value.
//! - Content and attribute values are **byte strings** (`Vec<u8>`), exactly
//!   like the C++ `std::string`: datatest `<bytechunk>` payloads and
//!   reference-decoded bytes (e.g. `&#xc2;&#xa3;`) round-trip byte-for-byte
//!   and need not be valid UTF-8.  Element and attribute *names* are
//!   scanner-restricted to ASCII and exposed as `&str`.
//! - All-whitespace content runs go to `ContentHandler::ignorable_whitespace`
//!   (which the DOM builder drops), mirroring `print_content` in `xml.y`.
//!
//! Deliberate API departures (all invisible to the C++ oracle's tests):
//!
//! - Input is `&[u8]` instead of `std::istream` (callers read files/strings
//!   into memory first; `DocumentStorage::open_document` does the read).
//! - `Element::getParent` is not ported: the Rust DOM is an owned tree
//!   (children held as `Rc<Element>` so `DocumentStorage::register_tag` can
//!   alias into it).  No vendored C++ outside `xml.cc` calls `getParent`.
//! - `ContentHandler::setDocumentLocator` is not ported (`Locator` is a
//!   `void*` placeholder upstream and the parser never invokes it).
//! - `xml_parse`'s `dbg` parameter (bison's `yydebug` trace) is dropped.
//! - `DecoderError` is [`UnlaceError::Decoder`] (see `error.rs`): it stays
//!   *outside* the C++ `LowlevelError` hierarchy.
//!
//! Nesting depth note (LOSS-010): bison's parse stack grows on the heap up
//! to a hard cap (`YYMAXDEPTH` 10000, xml.cc:971), so the C++ parser rejects
//! deeply nested documents cleanly — element nesting to depth 4997 parses,
//! depth >= 4998 fails with "memory exhausted" and `xml_parse` returns 2
//! (xml.cc:2042-2043).  The hand parser is *iterative* over element nesting
//! (an explicit open-element stack) and does **not** emulate the cap:
//! arbitrarily deep documents are accepted, a documented accept/reject
//! divergence on pathological input (`docs/rust-port/losses.md` LOSS-010).
//! Teardown is likewise non-recursive ([`Element`]'s worklist `Drop`), so
//! neither parsing nor dropping a deep DOM can overflow the Rust call stack.

use std::collections::BTreeMap;
use std::rc::Rc;

use crate::error::{UnlaceError, UnlaceResult};

// ---------------------------------------------------------------------------
// Token codes (XmlScan::token, xml.y:45-53). Values <= 255 are byte values.
// ---------------------------------------------------------------------------

const CHARDATA_TOK: i32 = 258;
const CDATA_TOK: i32 = 259;
const ATTVALUE_TOK: i32 = 260;
const COMMENT_TOK: i32 = 261;
const CHARREF_TOK: i32 = 262;
const NAME_TOK: i32 = 263;
const SNAME_TOK: i32 = 264;
const ELEMBRACE_TOK: i32 = 265;
const COMMBRACE_TOK: i32 = 266;
/// bison `$end`: every token value `<= 0` is normalized to this (the
/// generated parser does `if (yychar <= YYEOF) yytoken = YYEOF`).
const TOK_EOF: i32 = 0;

/// The error message bison emits for any plain parse error
/// (`YYERROR_VERBOSE` is 0 in the generated `xml.cc`).
const SYNTAX_ERROR: &str = "syntax error";

/// `Attributes::bogus_uri` — placeholder namespace URI (`xml.y:31`).
pub const BOGUS_URI: &str = "http://unused.uri";

#[inline]
const fn ch(c: u8) -> i32 {
    c as i32
}

#[inline]
fn is_whitespace_tok(t: i32) -> bool {
    // grammar `whitespace: ' ' | '\n' | '\r' | '\t'` (xml.y:143-146)
    t == ch(b' ') || t == ch(b'\n') || t == ch(b'\r') || t == ch(b'\t')
}

// ---------------------------------------------------------------------------
// Attributes
// ---------------------------------------------------------------------------

/// The \e attributes for a single XML element.
///
/// A container for name/value pairs for the formal attributes, as collected
/// during parsing.  This object is used to initialize the [`Element`] object
/// but is not part of the final, in-memory DOM model.  Attribute *values* are
/// byte strings (see module docs).
pub struct Attributes {
    /// The name of the XML element
    elementname: String,
    /// List of names for each formal XML attribute
    name: Vec<String>,
    /// List of values for each formal XML attribute
    value: Vec<Vec<u8>>,
}

impl Attributes {
    /// Construct from element name (C++ `Attributes(string *el)`).
    pub fn new(el: String) -> Self {
        Attributes {
            elementname: el,
            name: Vec::new(),
            value: Vec::new(),
        }
    }

    /// Get the namespace URI associated with this element (always the
    /// placeholder [`BOGUS_URI`], as in C++).
    pub fn get_elem_uri(&self) -> &str {
        BOGUS_URI
    }

    /// Get the name of this element.
    pub fn get_elem_name(&self) -> &str {
        &self.elementname
    }

    /// Add a formal attribute.
    pub fn add_attribute(&mut self, nm: String, vl: Vec<u8>) {
        self.name.push(nm);
        self.value.push(vl);
    }

    // The official SAX interface

    /// Get the number of attributes associated with the element.
    pub fn get_length(&self) -> i32 {
        // cast: size_t -> int4 narrowing, as the C++ `getLength` return
        self.name.len() as i32
    }

    /// Get the namespace URI associated with the i-th attribute (always the
    /// placeholder [`BOGUS_URI`], as in C++).
    pub fn get_uri(&self, _i: i32) -> &str {
        BOGUS_URI
    }

    /// Get the local name of the i-th attribute.
    pub fn get_local_name(&self, i: i32) -> &str {
        &self.name[i as usize]
    }

    /// Get the qualified name of the i-th attribute.
    pub fn get_qname(&self, i: i32) -> &str {
        &self.name[i as usize]
    }

    /// Get the value of the i-th attribute.
    pub fn get_value(&self, i: i32) -> &[u8] {
        &self.value[i as usize]
    }

    /// Get the value of the attribute with the given qualified name.
    ///
    /// C++ quirk preserved: a missing attribute returns the *bogus URI*
    /// string, not an error (`xml.hh:73-77`).
    pub fn get_value_by_name(&self, qualified_name: &str) -> &[u8] {
        for i in 0..self.name.len() {
            if self.name[i] == qualified_name {
                return &self.value[i];
            }
        }
        BOGUS_URI.as_bytes()
    }
}

// ---------------------------------------------------------------------------
// ContentHandler (the SAX interface)
// ---------------------------------------------------------------------------

/// The SAX interface for parsing XML documents.
///
/// This is the formal interface for handling the low-level string pieces of
/// an XML document as they are scanned by the parser.  All methods are
/// required, mirroring the C++ pure-virtual interface.  Methods that the
/// parser never invokes (`start_prefix_mapping`, `end_prefix_mapping`,
/// `processing_instruction`, `skipped_entity`) are retained for interface
/// parity; `setDocumentLocator` is not ported (see module docs).
pub trait ContentHandler {
    /// Start processing a new XML document.
    fn start_document(&mut self);
    /// End processing for the current XML document.
    fn end_document(&mut self);
    /// Start a new prefix to namespace URI mapping (never invoked).
    fn start_prefix_mapping(&mut self, prefix: &str, uri: &str);
    /// Finish the current prefix (never invoked).
    fn end_prefix_mapping(&mut self, prefix: &str);
    /// Callback indicating a new XML element has started.
    fn start_element(
        &mut self,
        namespace_uri: &str,
        local_name: &str,
        qualified_name: &str,
        atts: &Attributes,
    );
    /// Callback indicating parsing of the current XML element is finished.
    fn end_element(&mut self, namespace_uri: &str, local_name: &str, qualified_name: &str);
    /// Callback with raw characters to be inserted in the current XML element
    /// (`text[start..start+length]`, indices as C++ `int4`).
    fn characters(&mut self, text: &[u8], start: i32, length: i32);
    /// Callback with whitespace character data for the current XML element.
    fn ignorable_whitespace(&mut self, text: &[u8], start: i32, length: i32);
    /// Set the XML version as specified by the current document.
    fn set_version(&mut self, version: &[u8]);
    /// Set the character encoding as specified by the current document.
    fn set_encoding(&mut self, encoding: &[u8]);
    /// Callback for a formal \e processing \e instruction (never invoked:
    /// the grammar rejects processing instructions).
    fn processing_instruction(&mut self, target: &str, data: &str);
    /// Callback for an XML entity skipped by the parser (never invoked).
    fn skipped_entity(&mut self, name: &str);
    /// Callback for handling an error condition during XML parsing.
    fn set_error(&mut self, errmsg: &str);
}

// ---------------------------------------------------------------------------
// Element / Document
// ---------------------------------------------------------------------------

/// A list of XML elements (C++ `typedef vector<Element *> List`).
pub type List = Vec<Rc<Element>>;

/// An XML element.  A node in the DOM tree.
///
/// This is the main node for the in-memory representation of the XML (DOM)
/// tree.  Unlike C++ there is no parent pointer (see module docs): the tree
/// is owned top-down, children shared via `Rc` so [`DocumentStorage`] can
/// register elements by name.
#[derive(Debug, Default)]
pub struct Element {
    /// The (local) name of the element
    name: String,
    /// Character content of the element (byte string)
    content: Vec<u8>,
    /// A list of attribute names for \b this element
    attr: Vec<String>,
    /// A (corresponding) list of attribute values for \b this element
    value: Vec<Vec<u8>>,
    /// A list of child Element objects
    children: List,
}

impl Element {
    /// Construct an empty element (C++ `Element(Element *par)`; the parent
    /// link is not ported).
    pub fn new() -> Self {
        Self::default()
    }

    /// Set the local name of the element.
    pub fn set_name(&mut self, nm: &str) {
        self.name = nm.to_string();
    }

    /// Append new character content to \b this element:
    /// `str[start..start+length]` (C++ `addContent`).
    pub fn add_content(&mut self, str_: &[u8], start: i32, length: i32) {
        self.content
            .extend_from_slice(&str_[start as usize..(start + length) as usize]);
    }

    /// Add a new child Element to the model, with \b this as the parent.
    pub fn add_child(&mut self, child: Rc<Element>) {
        self.children.push(child);
    }

    /// Add a new name/value attribute pair to \b this element.
    pub fn add_attribute(&mut self, nm: &str, vl: &[u8]) {
        self.attr.push(nm.to_string());
        self.value.push(vl.to_vec());
    }

    /// Get the local name of \b this element.
    pub fn get_name(&self) -> &str {
        &self.name
    }

    /// Get the list of child elements.
    pub fn get_children(&self) -> &List {
        &self.children
    }

    /// Get the character content of \b this element (byte string; see
    /// module docs for why this is not guaranteed UTF-8).
    pub fn get_content(&self) -> &[u8] {
        &self.content
    }

    /// Get an attribute value by name.
    ///
    /// Look up the value for the given attribute name and return it (the
    /// *first* match, as in C++).  `Err(UnlaceError::Decoder)` with explain
    /// `"Unknown attribute: <nm>"` if the attribute does not exist
    /// (C++ throws `DecoderError`).
    pub fn get_attribute_value(&self, nm: &str) -> UnlaceResult<&[u8]> {
        for i in 0..self.attr.len() {
            if self.attr[i] == nm {
                return Ok(&self.value[i]);
            }
        }
        Err(UnlaceError::decoder(format!("Unknown attribute: {nm}")))
    }

    /// Get the number of attributes for \b this element.
    pub fn get_num_attributes(&self) -> i32 {
        // cast: size_t -> int4 narrowing, as the C++ `getNumAttributes` return
        self.attr.len() as i32
    }

    /// Get the name of the i-th attribute.
    pub fn get_attribute_name(&self, i: i32) -> &str {
        &self.attr[i as usize]
    }

    /// Get the value of the i-th attribute (C++ `getAttributeValue(int4)`).
    pub fn get_attribute_value_at(&self, i: i32) -> &[u8] {
        &self.value[i as usize]
    }
}

/// Non-recursive teardown.  The C++ `Element::~Element` (xml.cc:2417-2424)
/// deletes its children recursively — safe there only because bison's
/// `YYMAXDEPTH` cap bounds the DOM depth below ~5000.  The Rust parser
/// accepts unbounded nesting (LOSS-010), so the default (recursive) drop
/// glue could overflow the call stack on a deep DOM; instead the subtree is
/// drained iteratively through a worklist.
impl Drop for Element {
    fn drop(&mut self) {
        let mut worklist: List = std::mem::take(&mut self.children);
        while let Some(child) = worklist.pop() {
            if let Ok(mut el) = Rc::try_unwrap(child) {
                // Sole owner: steal the grandchildren so `el` drops at the
                // end of this iteration with empty `children` (its own Drop
                // then has nothing left to walk).
                worklist.append(&mut el.children);
            }
            // else: the child is shared (e.g. registered in
            // `DocumentStorage::tagmap`); dropping the handle only
            // decrements the strong count, and the surviving owner tears
            // the subtree down the same way later.
        }
    }
}

/// A complete in-memory XML document.
///
/// This is actually just an [`Element`] object itself (`Deref` mirrors the
/// C++ inheritance for read access), with the document's \e root element as
/// its only child.
#[derive(Debug, Default)]
pub struct Document {
    element: Element,
}

impl Document {
    /// Construct an (empty) document.
    pub fn new() -> Self {
        Self::default()
    }

    /// Get the root Element of the document.
    ///
    /// Panics if the document has no root (C++ dereferences
    /// `*children.begin()` — undefined behavior — only reachable through a
    /// successfully parsed document, which always has a root).
    pub fn get_root(&self) -> &Rc<Element> {
        self.element
            .children
            .first()
            .expect("Document::get_root: document has no root element")
    }
}

impl std::ops::Deref for Document {
    type Target = Element;
    fn deref(&self) -> &Element {
        &self.element
    }
}

// ---------------------------------------------------------------------------
// TreeHandler
// ---------------------------------------------------------------------------

/// A SAX interface implementation for constructing an in-memory DOM model.
///
/// This implementation builds a DOM model of the XML stream being parsed,
/// creating an [`Element`] object for each XML element tag in the stream.
/// Where the C++ handler mutates elements through parent pointers, this one
/// keeps the open elements on an explicit stack (`stack[0]` is the
/// document-level element, the top is C++ `cur`) and links each element into
/// its parent when it *ends* — child order is identical because a parent
/// acquires no other children while one child is open.
pub struct TreeHandler {
    /// Open elements: `[0]` = document element, last = the \e current element
    stack: Vec<Element>,
    /// The last error condition returned by the parser (if not empty)
    error: String,
}

impl TreeHandler {
    /// Constructor (owns the document-level element; cf. C++
    /// `TreeHandler(Element *rt)`).
    pub fn new() -> Self {
        TreeHandler {
            stack: vec![Element::new()],
            error: String::new(),
        }
    }

    /// Get the current error message.
    pub fn get_error(&self) -> &str {
        &self.error
    }

    /// Yield the finished document element (only meaningful after a
    /// successful parse).
    fn into_document(mut self) -> Document {
        let element = self
            .stack
            .pop()
            .expect("TreeHandler invariant: document element missing");
        Document { element }
    }
}

impl Default for TreeHandler {
    fn default() -> Self {
        Self::new()
    }
}

impl ContentHandler for TreeHandler {
    fn start_document(&mut self) {}
    fn end_document(&mut self) {}
    fn start_prefix_mapping(&mut self, _prefix: &str, _uri: &str) {}
    fn end_prefix_mapping(&mut self, _prefix: &str) {}

    fn start_element(
        &mut self,
        _namespace_uri: &str,
        local_name: &str,
        _qualified_name: &str,
        atts: &Attributes,
    ) {
        let mut newel = Element::new();
        newel.set_name(local_name);
        for i in 0..atts.get_length() {
            newel.add_attribute(atts.get_local_name(i), atts.get_value(i));
        }
        self.stack.push(newel);
    }

    fn end_element(&mut self, _namespace_uri: &str, _local_name: &str, _qualified_name: &str) {
        let el = self
            .stack
            .pop()
            .expect("TreeHandler invariant: endElement without startElement");
        self.stack
            .last_mut()
            .expect("TreeHandler invariant: document element missing")
            .add_child(Rc::new(el));
    }

    fn characters(&mut self, text: &[u8], start: i32, length: i32) {
        self.stack
            .last_mut()
            .expect("TreeHandler invariant: document element missing")
            .add_content(text, start, length);
    }

    fn ignorable_whitespace(&mut self, _text: &[u8], _start: i32, _length: i32) {}
    fn processing_instruction(&mut self, _target: &str, _data: &str) {}
    fn set_version(&mut self, _val: &[u8]) {}
    fn set_encoding(&mut self, _val: &[u8]) {}
    fn skipped_entity(&mut self, _name: &str) {}

    fn set_error(&mut self, errmsg: &str) {
        self.error = errmsg.to_string();
    }
}

// ---------------------------------------------------------------------------
// DocumentStorage
// ---------------------------------------------------------------------------

/// A container for parsed XML documents.
///
/// This holds multiple XML documents that have already been parsed.
/// Documents can be put in this container, either by handing it raw bytes
/// via [`DocumentStorage::parse_document`] or a filename via
/// [`DocumentStorage::open_document`].  If they are explicitly registered,
/// specific XML Elements can be looked up by name via
/// [`DocumentStorage::get_tag`].
#[derive(Default)]
pub struct DocumentStorage {
    /// The list of documents held by this container
    doclist: Vec<Document>,
    /// The map from name to registered XML elements
    tagmap: BTreeMap<String, Rc<Element>>,
}

impl DocumentStorage {
    /// Construct an empty container.
    pub fn new() -> Self {
        Self::default()
    }

    /// Parse an XML document from the given bytes.
    ///
    /// Parsing starts immediately, attempting to make an in-memory DOM tree.
    /// `Err(UnlaceError::Decoder)` for any parsing error (C++ throws an
    /// "XmlException", i.e. `DecoderError`).  On error nothing is added to
    /// the storage (the C++ version leaves an inert null slot in `doclist`).
    pub fn parse_document(&mut self, s: &[u8]) -> UnlaceResult<&Document> {
        let doc = xml_tree(s)?;
        self.doclist.push(doc);
        Ok(self.doclist.last().expect("just pushed"))
    }

    /// Open and parse an XML file.
    ///
    /// The given filename is opened on the local filesystem and an attempt is
    /// made to parse its contents into an in-memory DOM tree.
    /// `Err(UnlaceError::Decoder)` with explain
    /// `"Unable to open xml document <filename>"` if the file cannot be read.
    pub fn open_document(&mut self, filename: &str) -> UnlaceResult<&Document> {
        let bytes = std::fs::read(filename)
            .map_err(|_| UnlaceError::decoder(format!("Unable to open xml document {filename}")))?;
        self.parse_document(&bytes)
    }

    /// Register the given XML Element object under its tag name.
    ///
    /// Only one Element can be stored on \b this object per tag name (a
    /// later registration replaces the earlier, as the C++ `map` assignment
    /// does).
    pub fn register_tag(&mut self, el: &Rc<Element>) {
        self.tagmap.insert(el.get_name().to_string(), Rc::clone(el));
    }

    /// Retrieve a registered XML Element by name; `None` if there is no
    /// matching registered element (C++ returns a null pointer).
    pub fn get_tag(&self, nm: &str) -> Option<&Element> {
        self.tagmap.get(nm).map(|rc| rc.as_ref())
    }
}

// ---------------------------------------------------------------------------
// XmlScan — the XML character scanner (xml.y:33-104, 222-449)
// ---------------------------------------------------------------------------

/// Modes of the scanner (`XmlScan::mode`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Mode {
    CharData,
    CData,
    AttValueSingle,
    AttValueDouble,
    Comment,
    CharRef,
    Name,
    SName,
    Single,
}

/// The XML character scanner.
///
/// Tokenize a byte stream suitably for the main XML parser.  The scanner
/// expects an ASCII or UTF-8 encoding.  Characters in XML tag and attribute
/// names are restricted to ASCII "letters", but extended UTF-8 characters can
/// be used in any other character data: attribute values, content, comments.
///
/// Transcription notes: the C++ scanner reads `char` (signed on the oracle
/// platform) into an `int4` lookahead, so bytes >= 0x80 appear as *negative*
/// values; `getxmlchar` injects a synthetic `'\n'` when the stream ends (or
/// when a NUL byte is read) and `-1` thereafter.  Both behaviors are
/// reproduced exactly.
struct XmlScan<'a> {
    /// The current scanning mode
    curmode: Mode,
    /// The bytes being scanned (replaces the C++ `istream`)
    input: &'a [u8],
    /// Index of the next byte to pull from `input`
    inpos: usize,
    /// Lookahead into the byte stream
    lookahead: [i32; 4],
    /// Current position in the lookahead buffer
    pos: usize,
    /// Has end of stream been reached
    endofstream: bool,
}

/// A scanned token: the token code (byte value, or one of the `*_TOK`
/// constants) plus the token string for codes > 255 (C++ `yylval.str`).
type ScanToken = (i32, Option<Vec<u8>>);

impl<'a> XmlScan<'a> {
    /// Construct scanner given the input bytes.
    fn new(input: &'a [u8]) -> Self {
        let mut scan = XmlScan {
            curmode: Mode::Single,
            input,
            inpos: 0,
            lookahead: [0; 4],
            pos: 0,
            endofstream: false,
        };
        // Fill lookahead buffer (return values discarded, as in C++)
        scan.getxmlchar();
        scan.getxmlchar();
        scan.getxmlchar();
        scan.getxmlchar();
        scan
    }

    /// Set the scanning mode.
    fn setmode(&mut self, m: Mode) {
        self.curmode = m;
    }

    /// Get the next byte in the stream.
    ///
    /// Maintain a lookahead of 4 bytes at all times so that we can check for
    /// special XML character sequences without consuming.
    fn getxmlchar(&mut self) -> i32 {
        let ret = self.lookahead[self.pos];
        if !self.endofstream {
            match self.input.get(self.inpos) {
                // C++ reads into a (signed) char: s.get(c); eof or '\0' ends
                // the stream with a synthetic '\n', otherwise the *signed*
                // value is buffered.
                Some(&b) if b != 0 => {
                    self.lookahead[self.pos] = i32::from(b as i8); // signed char semantics
                    self.inpos += 1;
                }
                _ => {
                    self.endofstream = true;
                    self.lookahead[self.pos] = ch(b'\n');
                }
            }
        } else {
            self.lookahead[self.pos] = -1;
        }
        self.pos = (self.pos + 1) & 3;
        ret
    }

    /// Peek at the next (i-th) byte without consuming.
    fn next(&self, i: usize) -> i32 {
        self.lookahead[(self.pos + i) & 3]
    }

    /// Is the given byte a \e letter.
    fn is_letter(val: i32) -> bool {
        (0x41..=0x5a).contains(&val) || (0x61..=0x7a).contains(&val)
    }

    /// Is the given byte/character the valid start of an XML name.
    fn is_initial_name_char(val: i32) -> bool {
        Self::is_letter(val) || val == ch(b'_') || val == ch(b':')
    }

    /// Is the given byte/character valid for an XML name.
    fn is_name_char(val: i32) -> bool {
        Self::is_letter(val)
            || (ch(b'0')..=ch(b'9')).contains(&val)
            || val == ch(b'.')
            || val == ch(b'-')
            || val == ch(b'_')
            || val == ch(b':')
    }

    /// Is the given byte/character valid as an XML character.
    fn is_char(val: i32) -> bool {
        // Negative values (bytes >= 0x80 under signed char, or end of
        // stream) fail this test, exactly as in the C++ oracle build.
        val >= 0x20 || val == 0xd || val == 0xa || val == 0x9
    }

    /// Scan for the next token in Single Character mode.
    fn scan_single(&mut self) -> ScanToken {
        let res = self.getxmlchar();
        if res == ch(b'<') {
            if Self::is_initial_name_char(self.next(0)) {
                return (ELEMBRACE_TOK, None);
            }
            return (COMMBRACE_TOK, None);
        }
        (res, None)
    }

    /// Scan for the next token in Character Data mode.
    fn scan_char_data(&mut self) -> ScanToken {
        let mut lvalue: Vec<u8> = Vec::new();

        while self.next(0) != -1 {
            // look for '<' '&' or ']]>'
            if self.next(0) == ch(b'<') {
                break;
            }
            if self.next(0) == ch(b'&') {
                break;
            }
            if self.next(0) == ch(b']') && self.next(1) == ch(b']') && self.next(2) == ch(b'>') {
                break;
            }
            lvalue.push(self.getxmlchar() as u8); // (char) low byte, as C++ string +=
        }
        if lvalue.is_empty() {
            return self.scan_single();
        }
        (CHARDATA_TOK, Some(lvalue))
    }

    /// Scan for the next token in CDATA mode.
    fn scan_cdata(&mut self) -> ScanToken {
        let mut lvalue: Vec<u8> = Vec::new();

        while self.next(0) != -1 {
            // Look for "]]>" and non-Char
            if self.next(0) == ch(b']') && self.next(1) == ch(b']') && self.next(2) == ch(b'>') {
                break;
            }
            if !Self::is_char(self.next(0)) {
                break;
            }
            lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
        }
        (CDATA_TOK, Some(lvalue)) // CData can be empty
    }

    /// Scan for the next token in Character Reference mode.
    fn scan_char_ref(&mut self) -> ScanToken {
        let mut lvalue: Vec<u8> = Vec::new();
        if self.next(0) == ch(b'x') {
            lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
            while self.next(0) != -1 {
                let v = self.next(0);
                if v < ch(b'0') {
                    break;
                }
                if v > ch(b'9') && v < ch(b'A') {
                    break;
                }
                if v > ch(b'F') && v < ch(b'a') {
                    break;
                }
                if v > ch(b'f') {
                    break;
                }
                lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
            }
            if lvalue.len() == 1 {
                return (ch(b'x'), None); // Must be at least 1 hex digit
            }
        } else {
            while self.next(0) != -1 {
                let v = self.next(0);
                if v < ch(b'0') {
                    break;
                }
                if v > ch(b'9') {
                    break;
                }
                lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
            }
            if lvalue.is_empty() {
                return self.scan_single();
            }
        }
        (CHARREF_TOK, Some(lvalue))
    }

    /// Scan for the next token in Attribute Value mode.
    fn scan_att_value(&mut self, quote: i32) -> ScanToken {
        let mut lvalue: Vec<u8> = Vec::new();
        while self.next(0) != -1 {
            if self.next(0) == quote {
                break;
            }
            if self.next(0) == ch(b'<') {
                break;
            }
            if self.next(0) == ch(b'&') {
                break;
            }
            lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
        }
        if lvalue.is_empty() {
            return self.scan_single();
        }
        (ATTVALUE_TOK, Some(lvalue))
    }

    /// Scan for the next token in Comment mode.
    fn scan_comment(&mut self) -> ScanToken {
        let mut lvalue: Vec<u8> = Vec::new();

        while self.next(0) != -1 {
            if self.next(0) == ch(b'-') && self.next(1) == ch(b'-') {
                break;
            }
            if !Self::is_char(self.next(0)) {
                break;
            }
            lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
        }
        (COMMENT_TOK, Some(lvalue))
    }

    /// Scan a Name or return single non-name character.
    fn scan_name(&mut self) -> ScanToken {
        if !Self::is_initial_name_char(self.next(0)) {
            return self.scan_single();
        }
        // cast: (char) low byte, as C++ string +=
        let mut lvalue: Vec<u8> = vec![self.getxmlchar() as u8];
        while self.next(0) != -1 {
            if !Self::is_name_char(self.next(0)) {
                break;
            }
            lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
        }
        (NAME_TOK, Some(lvalue))
    }

    /// Scan Name, allow white space before.
    fn scan_sname(&mut self) -> ScanToken {
        let mut whitecount = 0;
        while is_whitespace_tok(self.next(0)) {
            whitecount += 1;
            self.getxmlchar();
        }
        if !Self::is_initial_name_char(self.next(0)) {
            // First non-whitespace is not Name char
            if whitecount > 0 {
                return (ch(b' '), None);
            }
            return self.scan_single();
        }
        // cast: (char) low byte, as C++ string +=
        let mut lvalue: Vec<u8> = vec![self.getxmlchar() as u8];
        while self.next(0) != -1 {
            if !Self::is_name_char(self.next(0)) {
                break;
            }
            lvalue.push(self.getxmlchar() as u8); // cast: (char) low byte, as C++ string +=
        }
        if whitecount > 0 {
            return (SNAME_TOK, Some(lvalue));
        }
        (NAME_TOK, Some(lvalue))
    }

    /// Get the next token.  The mode resets to `Single` before every scan
    /// unless an action re-arms it, exactly as `XmlScan::nexttoken`.
    fn nexttoken(&mut self) -> ScanToken {
        let mymode = self.curmode;
        self.curmode = Mode::Single;
        match mymode {
            Mode::CharData => self.scan_char_data(),
            Mode::CData => self.scan_cdata(),
            Mode::AttValueSingle => self.scan_att_value(ch(b'\'')),
            Mode::AttValueDouble => self.scan_att_value(ch(b'"')),
            Mode::Comment => self.scan_comment(),
            Mode::CharRef => self.scan_char_ref(),
            Mode::Name => self.scan_name(),
            Mode::SName => self.scan_sname(),
            Mode::Single => self.scan_single(),
        }
    }
}

// ---------------------------------------------------------------------------
// Grammar action helpers (xml.y:451-502)
// ---------------------------------------------------------------------------

/// Send character data to the ContentHandler (`print_content`, xml.y:451):
/// an all-whitespace run is reported as ignorable whitespace.
fn print_content(handler: &mut dyn ContentHandler, s: &[u8]) {
    let mut i = 0usize;
    while i < s.len() {
        match s[i] {
            b' ' | b'\n' | b'\r' | b'\t' => i += 1,
            _ => break,
        }
    }
    // cast: size_t -> int4, as the C++ `str.size()` call arguments
    if i == s.len() {
        handler.ignorable_whitespace(s, 0, s.len() as i32);
    } else {
        handler.characters(s, 0, s.len() as i32);
    }
}

/// Convert an XML entity to its equivalent character (`convertEntityRef`).
/// Unknown entities yield -1, which the actions append as byte 0xFF.
fn convert_entity_ref(r: &[u8]) -> i32 {
    match r {
        b"lt" => ch(b'<'),
        b"amp" => ch(b'&'),
        b"gt" => ch(b'>'),
        b"quot" => ch(b'"'),
        b"apos" => ch(b'\''),
        _ => -1,
    }
}

/// Convert an XML character reference to its character value
/// (`convertCharRef`).  Returns -1 for a non-digit, a value past U+10FFFF, or a
/// code point XML does not allow as a character.
fn convert_char_ref(r: &[u8]) -> i32 {
    const MAX_CODE_POINT: u32 = 0x10FFFF;
    let (start, base): (usize, u32) = if r.first() == Some(&b'x') {
        (1, 16)
    } else {
        (0, 10)
    };
    if start == r.len() {
        return -1;
    }
    let mut val: u32 = 0;
    for &b in &r[start..] {
        let Some(digit) = (b as char).to_digit(base) else {
            return -1;
        };
        if val > (MAX_CODE_POINT - digit) / base {
            return -1;
        }
        val = val * base + digit;
    }
    if !is_xml_char(val) {
        return -1;
    }
    i32::try_from(val).unwrap_or(-1)
}

fn is_xml_char(val: u32) -> bool {
    matches!(
        val,
        0x9 | 0xA | 0xD | 0x20..=0xD7FF | 0xE000..=0xFFFD | 0x10000..=0x10FFFF
    )
}

// ---------------------------------------------------------------------------
// The parser — hand-written replacement for the bison automaton (LOSS-006)
// ---------------------------------------------------------------------------
//
// Faithfulness notes: the bison grammar arms the scanner mode inside
// reduction actions that all fire as *default reductions* (no lookahead is
// fetched first), so a recursive parser that sets the mode immediately
// before each fetch consumes the byte stream identically.  The shift/reduce
// conflicts (`%expect 8`) resolve as shifts: whitespace runs extend `S`
// greedily, and `<?` followed by `x` at the very start of the document is
// committed to the XML declaration.  bison normalizes any token <= 0 to
// `$end`, which `fetch` reproduces.

struct Parser<'a, 'b> {
    scan: XmlScan<'a>,
    handler: &'b mut dyn ContentHandler,
}

impl Parser<'_, '_> {
    /// Pull the next token, applying bison's `yychar <= YYEOF` => `$end`
    /// normalization (a raw 0xFF byte scans as -1 and is likewise `$end`).
    fn fetch(&mut self) -> ScanToken {
        let (tok, lval) = self.scan.nexttoken();
        if tok <= 0 {
            return (TOK_EOF, None);
        }
        (tok, lval)
    }

    /// Require the next token to be the single character `c`.
    fn expect_char(&mut self, c: u8) -> Result<(), String> {
        let (t, _) = self.fetch();
        if t != ch(c) {
            return Err(SYNTAX_ERROR.to_string());
        }
        Ok(())
    }

    /// `document: element Misc | prolog element Misc` (xml.y:141-142).
    fn parse(&mut self) -> Result<(), String> {
        // --- prolog: prologpre [doctypepro] (xml.y:166-188) ---
        // have_prologpre: at least one prologpre item (XMLDecl or Misc) seen.
        // The XML declaration is only derivable as the *first* prologpre
        // item, and doctypedecl only *after* a prologpre.
        let mut have_prologpre = false;
        let mut tok = self.fetch();
        loop {
            let t = tok.0;
            if t == ELEMBRACE_TOK {
                break; // the root element begins
            }
            if is_whitespace_tok(t) {
                // Misc: S (whitespace absorbed greedily — the shift-preferred
                // resolution of the S conflicts)
                have_prologpre = true;
                tok = self.fetch();
                continue;
            }
            if t == COMMBRACE_TOK {
                let (t2, _) = self.fetch();
                if t2 == ch(b'!') {
                    let (t3, _) = self.fetch();
                    if t3 == ch(b'-') {
                        // commentstart: COMMBRACE '!' '-' '-' (xml.y:159)
                        self.expect_char(b'-')?;
                        self.parse_comment_tail()?;
                        have_prologpre = true;
                        tok = self.fetch();
                        continue;
                    }
                    if t3 == ch(b'D') && have_prologpre {
                        // doctypedecl: COMMBRACE '!' 'D' 'O' 'C' 'T' 'Y' 'P' 'E'
                        // (xml.y:174) — reachable only after a prologpre;
                        // a leading <!DOCTYPE is a plain syntax error.
                        for &c in b"OCTYPE" {
                            self.expect_char(c)?;
                        }
                        return Err("DTD's not supported".to_string());
                    }
                    return Err(SYNTAX_ERROR.to_string());
                }
                if t2 == ch(b'?') {
                    if !have_prologpre {
                        // Initial position: xmldeclstart vs PI — the bison
                        // shift/reduce conflict resolves as shift on 'x'.
                        let (t3, _) = self.fetch();
                        if t3 == ch(b'x') {
                            // xmldeclstart: COMMBRACE '?' 'x' 'm' 'l' VersionInfo
                            self.expect_char(b'm')?;
                            self.expect_char(b'l')?;
                            self.parse_xmldecl_tail()?;
                            have_prologpre = true;
                            tok = self.fetch();
                            continue;
                        }
                    }
                    // PI: COMMBRACE '?' { yyerror(...); YYERROR; } (xml.y:161)
                    return Err("Processing instructions are not supported".to_string());
                }
                return Err(SYNTAX_ERROR.to_string());
            }
            return Err(SYNTAX_ERROR.to_string());
        }

        // --- the root element (ELEMBRACE consumed) ---
        self.parse_element()?;

        // --- exactly ONE trailing Misc, then $end (document: element Misc).
        // The scanner's synthetic '\n' guarantees at least one whitespace
        // token after the last real byte, so a document ending in a comment
        // can never be accepted (faithful upstream quirk). ---
        let (t, _) = self.fetch();
        if is_whitespace_tok(t) {
            let mut t2 = self.fetch().0;
            while is_whitespace_tok(t2) {
                t2 = self.fetch().0;
            }
            if t2 != TOK_EOF {
                return Err(SYNTAX_ERROR.to_string());
            }
        } else if t == COMMBRACE_TOK {
            let (t2, _) = self.fetch();
            if t2 == ch(b'?') {
                return Err("Processing instructions are not supported".to_string());
            }
            if t2 != ch(b'!') {
                return Err(SYNTAX_ERROR.to_string());
            }
            self.expect_char(b'-')?;
            self.expect_char(b'-')?;
            self.parse_comment_tail()?;
            if self.fetch().0 != TOK_EOF {
                return Err(SYNTAX_ERROR.to_string());
            }
        } else {
            return Err(SYNTAX_ERROR.to_string());
        }
        Ok(())
    }

    /// `Comment: commentstart COMMENT '-' '-' '>'` with `commentstart`
    /// already consumed; the comment text is discarded (xml.y:160).
    fn parse_comment_tail(&mut self) -> Result<(), String> {
        // commentstart action: setmode(CommentMode)
        self.scan.setmode(Mode::Comment);
        let (t, _lval) = self.fetch();
        if t != COMMENT_TOK {
            return Err(SYNTAX_ERROR.to_string());
        }
        self.expect_char(b'-')?;
        self.expect_char(b'-')?;
        self.expect_char(b'>')?;
        Ok(())
    }

    /// Rest of the XML declaration after `<?xml`:
    /// `VersionInfo [EncodingDecl] [S] '?' '>'` (xml.y:182-188).
    fn parse_xmldecl_tail(&mut self) -> Result<(), String> {
        // VersionInfo: S 'v' 'e' 'r' 's' 'i' 'o' 'n' Eq AttValue (xml.y:182)
        let mut t = self.fetch().0;
        if !is_whitespace_tok(t) {
            return Err(SYNTAX_ERROR.to_string());
        }
        while is_whitespace_tok(t) {
            t = self.fetch().0;
        }
        if t != ch(b'v') {
            return Err(SYNTAX_ERROR.to_string());
        }
        for &c in b"ersion" {
            self.expect_char(c)?;
        }
        let q = self.parse_eq()?;
        let version = self.parse_att_value(q)?;
        self.handler.set_version(&version);

        // XMLDecl: xmldeclstart ['?' '>' | S '?' '>' | EncodingDecl '?' '>'
        //          | EncodingDecl S '?' '>'] (xml.y:185-188)
        let mut t = self.fetch().0;
        let mut had_ws = false;
        while is_whitespace_tok(t) {
            had_ws = true;
            t = self.fetch().0;
        }
        if had_ws && t == ch(b'e') {
            // EncodingDecl: S 'e' 'n' 'c' 'o' 'd' 'i' 'n' 'g' Eq AttValue
            // (xml.y:183) — the leading S is required.
            for &c in b"ncoding" {
                self.expect_char(c)?;
            }
            let q = self.parse_eq()?;
            let encoding = self.parse_att_value(q)?;
            self.handler.set_encoding(&encoding);
            t = self.fetch().0;
            while is_whitespace_tok(t) {
                t = self.fetch().0;
            }
        }
        if t != ch(b'?') {
            return Err(SYNTAX_ERROR.to_string());
        }
        self.expect_char(b'>')?;
        Ok(())
    }

    /// `Eq: '=' | S '=' | Eq S` (xml.y:175-177): whitespace around `=`,
    /// absorbed greedily (shift-preferred).  Returns the first token *after*
    /// the Eq — the attribute-value opening quote in valid input.
    fn parse_eq(&mut self) -> Result<i32, String> {
        let mut t = self.fetch().0;
        while is_whitespace_tok(t) {
            t = self.fetch().0;
        }
        if t != ch(b'=') {
            return Err(SYNTAX_ERROR.to_string());
        }
        t = self.fetch().0;
        while is_whitespace_tok(t) {
            t = self.fetch().0;
        }
        Ok(t)
    }

    /// `AttValue: attsinglemid '\'' | attdoublemid '"'` (xml.y:150-157).
    /// `open_tok` is the (already consumed) opening quote token.
    fn parse_att_value(&mut self, open_tok: i32) -> Result<Vec<u8>, String> {
        let mode = if open_tok == ch(b'\'') {
            Mode::AttValueSingle
        } else if open_tok == ch(b'"') {
            Mode::AttValueDouble
        } else {
            return Err(SYNTAX_ERROR.to_string());
        };
        let mut buf: Vec<u8> = Vec::new();
        loop {
            // each attsinglemid/attdoublemid action re-arms the value mode
            self.scan.setmode(mode);
            let (t, lval) = self.fetch();
            if t == ATTVALUE_TOK {
                buf.extend_from_slice(&lval.expect("scanner invariant: ATTVALUE carries lvalue"));
            } else if t == open_tok {
                return Ok(buf);
            } else if t == ch(b'&') {
                let v = self.parse_reference()?;
                // C++ `*$$ += $2`: int4 -> char truncation keeps the low byte
                buf.push(v as u8);
            } else {
                // raw '<' (scanned as a brace token), EOF, ... — all invalid
                return Err(SYNTAX_ERROR.to_string());
            }
        }
    }

    /// `Reference: EntityRef | CharRef` (xml.y:213-219); the leading `&` is
    /// already consumed.  Returns the converted character value as C++
    /// `int4` (-1 for an unknown entity).
    fn parse_reference(&mut self) -> Result<i32, String> {
        // refstart action: setmode(NameMode) (xml.y:216)
        self.scan.setmode(Mode::Name);
        let (t, lval) = self.fetch();
        if t == NAME_TOK {
            // EntityRef: refstart NAME ';' (xml.y:219)
            self.expect_char(b';')?;
            Ok(convert_entity_ref(
                &lval.expect("scanner invariant: NAME carries lvalue"),
            ))
        } else if t == ch(b'#') {
            // charrefstart: refstart '#' { setmode(CharRefMode) } (xml.y:217)
            self.scan.setmode(Mode::CharRef);
            let (t2, lv2) = self.fetch();
            if t2 != CHARREF_TOK {
                return Err(SYNTAX_ERROR.to_string());
            }
            // CharRef: charrefstart CHARREF ';' (xml.y:218)
            self.expect_char(b';')?;
            let value = convert_char_ref(&lv2.expect("scanner invariant: CHARREF carries lvalue"));
            if value < 0 {
                return Err(SYNTAX_ERROR.to_string());
            }
            Ok(value)
        } else {
            Err(SYNTAX_ERROR.to_string())
        }
    }

    /// Parse one complete element (the leading ELEMBRACE already consumed),
    /// iteratively over nesting via an explicit open-element stack.
    fn parse_element(&mut self) -> Result<(), String> {
        // Names of the currently open (STag'd but not yet ETag'd) elements.
        // C++ keeps the equivalent state as Attributes* on the bison value
        // stack; only the element name survives until endElement.
        let mut open: Vec<String> = Vec::new();
        'new_element: loop {
            // elemstart: ELEMBRACE { setmode(NameMode) } (xml.y:158)
            self.scan.setmode(Mode::Name);
            let (t, lval) = self.fetch();
            if t != NAME_TOK {
                return Err(SYNTAX_ERROR.to_string());
            }
            let name_bytes = lval.expect("scanner invariant: NAME carries lvalue");
            let name =
                String::from_utf8(name_bytes).expect("scanner invariant: XML names are ASCII");
            let mut atts = Attributes::new(name);

            // stagstart: elemstart NAME | stagstart SAttribute (xml.y:198-199)
            // — SNameMode is armed before every token in this loop.
            let empty_elem: bool;
            loop {
                self.scan.setmode(Mode::SName);
                let (t, lval) = self.fetch();
                if t == SNAME_TOK {
                    // SAttribute: SNAME Eq AttValue (xml.y:200)
                    let aname_bytes = lval.expect("scanner invariant: SNAME carries lvalue");
                    let aname = String::from_utf8(aname_bytes)
                        .expect("scanner invariant: XML names are ASCII");
                    let q = self.parse_eq()?;
                    let aval = self.parse_att_value(q)?;
                    atts.add_attribute(aname, aval);
                } else if t == ch(b'>') {
                    // STag: stagstart '>' (xml.y:193)
                    empty_elem = false;
                    break;
                } else if t == ch(b'/') {
                    // EmptyElemTag: stagstart '/' '>' (xml.y:195)
                    self.expect_char(b'>')?;
                    empty_elem = true;
                    break;
                } else if t == ch(b' ') {
                    // scanSName consumed a whole whitespace run followed by a
                    // non-name character: grammar S in STag/EmptyElemTag.
                    // The next character is non-whitespace by construction.
                    let (t2, _) = self.fetch();
                    if t2 == ch(b'>') {
                        empty_elem = false; // STag: stagstart S '>'
                        break;
                    }
                    if t2 == ch(b'/') {
                        self.expect_char(b'>')?; // EmptyElemTag: stagstart S '/' '>'
                        empty_elem = true;
                        break;
                    }
                    return Err(SYNTAX_ERROR.to_string());
                } else {
                    // includes NAME: an attribute without preceding
                    // whitespace is a syntax error, as in bison
                    return Err(SYNTAX_ERROR.to_string());
                }
            }

            // STag/EmptyElemTag action: handler->startElement (xml.y:193-196)
            self.handler.start_element(
                BOGUS_URI,
                atts.get_elem_name(),
                atts.get_elem_name(),
                &atts,
            );
            if empty_elem {
                // element: EmptyElemTag { handler->endElement } (xml.y:190)
                self.handler
                    .end_element(BOGUS_URI, atts.get_elem_name(), atts.get_elem_name());
                if open.is_empty() {
                    return Ok(()); // the root element was empty
                }
                // fall through into the enclosing element's content loop
            } else {
                open.push(atts.elementname);
            }

            // content loop of the innermost open element (xml.y:205-211);
            // every content action re-arms CharDataMode before the next token
            loop {
                self.scan.setmode(Mode::CharData);
                let (t, lval) = self.fetch();
                if t == CHARDATA_TOK {
                    // content CHARDATA { print_content($2) } (xml.y:206)
                    print_content(
                        &mut *self.handler,
                        &lval.expect("scanner invariant: CHARDATA carries lvalue"),
                    );
                } else if t == ELEMBRACE_TOK {
                    // content element (xml.y:207)
                    continue 'new_element;
                } else if t == ch(b'&') {
                    // content Reference: a single converted char (xml.y:208)
                    let v = self.parse_reference()?;
                    print_content(&mut *self.handler, &[v as u8]);
                } else if t == COMMBRACE_TOK {
                    let (t2, _) = self.fetch();
                    if t2 == ch(b'/') {
                        // etagbrace: COMMBRACE '/' { setmode(NameMode) } (xml.y:201)
                        self.scan.setmode(Mode::Name);
                        let (t3, _etag_name) = self.fetch();
                        if t3 != NAME_TOK {
                            return Err(SYNTAX_ERROR.to_string());
                        }
                        // NOTE: the closing tag's name is NOT compared with
                        // the opening tag's (xml.y:191 discards $3).
                        // ETag: etagbrace NAME ['S'] '>' (xml.y:202-203)
                        let mut t4 = self.fetch().0;
                        while is_whitespace_tok(t4) {
                            t4 = self.fetch().0;
                        }
                        if t4 != ch(b'>') {
                            return Err(SYNTAX_ERROR.to_string());
                        }
                        let nm = open
                            .pop()
                            .expect("parser invariant: ETag with no open element");
                        self.handler.end_element(BOGUS_URI, &nm, &nm);
                        if open.is_empty() {
                            return Ok(()); // the root element is closed
                        }
                        // now in the parent's content loop
                    } else if t2 == ch(b'!') {
                        let (t3, _) = self.fetch();
                        if t3 == ch(b'-') {
                            // content Comment (xml.y:211)
                            self.expect_char(b'-')?;
                            self.parse_comment_tail()?;
                        } else if t3 == ch(b'[') {
                            // CDStart: COMMBRACE '!' '[' 'C' 'D' 'A' 'T' 'A' '['
                            // (xml.y:163)
                            for &c in b"CDATA[" {
                                self.expect_char(c)?;
                            }
                            self.scan.setmode(Mode::CData);
                            let (t4, lv4) = self.fetch();
                            if t4 != CDATA_TOK {
                                return Err(SYNTAX_ERROR.to_string());
                            }
                            // CDEnd: ']' ']' '>' (xml.y:164)
                            self.expect_char(b']')?;
                            self.expect_char(b']')?;
                            self.expect_char(b'>')?;
                            // content CDSect { print_content($2) } (xml.y:209)
                            print_content(
                                &mut *self.handler,
                                &lv4.expect("scanner invariant: CDATA carries lvalue"),
                            );
                        } else {
                            return Err(SYNTAX_ERROR.to_string());
                        }
                    } else if t2 == ch(b'?') {
                        // content PI -> always an error (xml.y:161)
                        return Err("Processing instructions are not supported".to_string());
                    } else {
                        return Err(SYNTAX_ERROR.to_string());
                    }
                } else {
                    // ']' (a stray "]]>" in content), EOF, ... — all invalid
                    return Err(SYNTAX_ERROR.to_string());
                }
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Public parse entry points
// ---------------------------------------------------------------------------

/// Start-up the XML parser given input bytes and a handler.
///
/// This runs the low-level XML parser.  Returns 0 if there is no error
/// during parsing or a (non-zero) error condition (in which case the error
/// message was delivered to [`ContentHandler::set_error`]), matching the C++
/// `xml_parse` / bison `yyparse` contract.  (The C++ `dbg` trace parameter
/// is not ported.)
pub fn xml_parse(input: &[u8], handler: &mut dyn ContentHandler) -> i32 {
    let mut parser = Parser {
        scan: XmlScan::new(input),
        handler,
    };
    parser.handler.start_document();
    match parser.parse() {
        Ok(()) => {
            parser.handler.end_document();
            0
        }
        Err(msg) => {
            parser.handler.set_error(&msg);
            1
        }
    }
}

/// Parse the given XML bytes into an in-memory document.
///
/// The input is parsed using the standard [`TreeHandler`] for producing an
/// in-memory DOM representation of the XML document.
/// `Err(UnlaceError::Decoder)` carrying the parser's error message on failure
/// (C++ throws `DecoderError`).
pub fn xml_tree(input: &[u8]) -> UnlaceResult<Document> {
    let mut handle = TreeHandler::new();
    if 0 != xml_parse(input, &mut handle) {
        return Err(UnlaceError::decoder(handle.get_error()));
    }
    Ok(handle.into_document())
}

/// Send the given bytes to a stream, escaping characters with special XML
/// meaning (`xml_escape`).
///
/// This makes the following character substitutions:
///   - `<` => `&lt;`
///   - `>` => `&gt;`
///   - `&` => `&amp;`
///   - `"` => `&quot;`
///   - `'` => `&apos;`
///
/// (The C++ version stops at a NUL terminator; the slice length is the
/// boundary here.)
pub fn xml_escape(s: &mut Vec<u8>, str_: &[u8]) {
    for &b in str_ {
        match b {
            b'<' => s.extend_from_slice(b"&lt;"),
            b'>' => s.extend_from_slice(b"&gt;"),
            b'&' => s.extend_from_slice(b"&amp;"),
            b'"' => s.extend_from_slice(b"&quot;"),
            b'\'' => s.extend_from_slice(b"&apos;"),
            _ => s.push(b),
        }
    }
}

// Some helper functions for writing XML documents directly to a stream

/// Output an XML attribute name/value pair to stream (`a_v`).
pub fn a_v(s: &mut Vec<u8>, attr: &str, val: &[u8]) {
    s.push(b' ');
    s.extend_from_slice(attr.as_bytes());
    s.extend_from_slice(b"=\"");
    xml_escape(s, val);
    s.push(b'"');
}

/// Output the given signed integer (decimal) as an XML attribute value
/// (`a_v_i`; C++ `intb` -> `i64`).
pub fn a_v_i(s: &mut Vec<u8>, attr: &str, val: i64) {
    s.push(b' ');
    s.extend_from_slice(attr.as_bytes());
    s.extend_from_slice(b"=\"");
    s.extend_from_slice(format!("{val}").as_bytes());
    s.push(b'"');
}

/// Output the given unsigned integer (`0x` hex) as an XML attribute value
/// (`a_v_u`; C++ `uintb` -> `u64`).
pub fn a_v_u(s: &mut Vec<u8>, attr: &str, val: u64) {
    s.push(b' ');
    s.extend_from_slice(attr.as_bytes());
    s.extend_from_slice(b"=\"0x");
    s.extend_from_slice(format!("{val:x}").as_bytes());
    s.push(b'"');
}

/// Output the given boolean value as an XML attribute (`a_v_b`).
pub fn a_v_b(s: &mut Vec<u8>, attr: &str, val: bool) {
    s.push(b' ');
    s.extend_from_slice(attr.as_bytes());
    s.extend_from_slice(b"=\"");
    s.extend_from_slice(if val {
        b"true".as_slice()
    } else {
        b"false".as_slice()
    });
    s.push(b'"');
}

/// Read an XML attribute value as a boolean (`xml_readbool`).
///
/// This method is intended to recognize the strings "true", "yes", and "1"
/// as a \b true value.  Anything else is returned as \b false.
pub fn xml_readbool(attr: &[u8]) -> bool {
    if attr.is_empty() {
        return false;
    }
    let firstc = attr[0];
    if firstc == b't' {
        return true;
    }
    if firstc == b'1' {
        return true;
    }
    if firstc == b'y' {
        return true; // For backward compatibility
    }
    false
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests;
