use super::*;
use std::path::{Path, PathBuf};

fn repo_root() -> PathBuf {
    Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .expect("repo root")
}

/// Parse and unwrap a well-formed document.
fn parse_ok(input: &str) -> Document {
    xml_tree(input.as_bytes()).unwrap_or_else(|e| panic!("expected Ok, got: {e}"))
}

/// Parse expecting failure; return the DecoderError explain string.
fn parse_err(input: &[u8]) -> String {
    match xml_tree(input) {
        Err(UnlaceError::Decoder { explain }) => explain,
        Err(other) => panic!("expected UnlaceError::Decoder, got {other:?}"),
        Ok(doc) => panic!(
            "expected parse failure, got document with root <{}>",
            doc.get_root().get_name()
        ),
    }
}

/// Extract the root tag name straight from the raw bytes (skipping the
/// XML declaration and comments), independently of the parser under test.
fn raw_root_tag(bytes: &[u8]) -> String {
    let mut i = 0usize;
    loop {
        assert!(i < bytes.len(), "no root tag found in raw bytes");
        let b = bytes[i];
        if b.is_ascii_whitespace() {
            i += 1;
        } else if bytes[i..].starts_with(b"<!--") {
            let end = find_sub(bytes, b"-->", i).expect("unterminated comment");
            i = end + 3;
        } else if bytes[i..].starts_with(b"<?") {
            let end = find_sub(bytes, b"?>", i).expect("unterminated decl");
            i = end + 2;
        } else if b == b'<' {
            let mut j = i + 1;
            while j < bytes.len()
                && (bytes[j].is_ascii_alphanumeric() || b"._:-".contains(&bytes[j]))
            {
                j += 1;
            }
            return String::from_utf8(bytes[i + 1..j].to_vec()).unwrap();
        } else {
            panic!("unexpected raw byte {b:#x} before root tag");
        }
    }
}

fn find_sub(haystack: &[u8], needle: &[u8], from: usize) -> Option<usize> {
    haystack[from..]
        .windows(needle.len())
        .position(|w| w == needle)
        .map(|p| p + from)
}

// -- (a) corpus ---------------------------------------------------------

#[test]
fn test_xml_corpus_datatests_and_stage_tests() {
    let root = repo_root();
    let mut count = 0usize;
    for dir in ["tests/datatests", "tests/stages"] {
        let mut paths: Vec<PathBuf> = std::fs::read_dir(root.join(dir))
            .unwrap_or_else(|e| panic!("read_dir {dir}: {e}"))
            .map(|e| e.unwrap().path())
            .filter(|p| p.extension().is_some_and(|x| x == "xml" || x == "toml"))
            .collect();
        paths.sort();
        for path in paths {
            // A TOML stage test is parsed by unlace-harness (stagetoml); it counts the same.
            if path.extension().is_some_and(|x| x == "toml") {
                count += 1;
                continue;
            }
            let bytes = std::fs::read(&path).unwrap();
            let doc = xml_tree(&bytes)
                .unwrap_or_else(|e| panic!("{}: parse failed: {e}", path.display()));
            // every unlace datatest / stage test has root <decompilertest>
            assert_eq!(
                doc.get_root().get_name(),
                "decompilertest",
                "{}",
                path.display()
            );
            assert_eq!(
                doc.get_root().get_name(),
                raw_root_tag(&bytes),
                "{}",
                path.display()
            );
            count += 1;
        }
    }
    // The corpus must not be empty. Its size is not pinned here: adding a stage test changes no
    // number in this file.
    assert!(
        count > 0,
        "no corpus files found under tests/datatests and tests/stages"
    );
}

/// ~20 representative SLEIGH spec files across varied processors
/// (NOT .sla — those are binary build artifacts).
const SPEC_FILES: &[(&str, &str)] = &[
    (
        "specs/Ghidra/Processors/x86/data/languages/x86.ldefs",
        "language_definitions",
    ),
    (
        "specs/Ghidra/Processors/x86/data/languages/x86.pspec",
        "processor_spec",
    ),
    (
        "specs/Ghidra/Processors/x86/data/languages/x86-64-gcc.cspec",
        "compiler_spec",
    ),
    (
        "specs/Ghidra/Processors/AARCH64/data/languages/AARCH64.pspec",
        "processor_spec",
    ),
    (
        "specs/Ghidra/Processors/AARCH64/data/languages/AARCH64.cspec",
        "compiler_spec",
    ),
    (
        "specs/Ghidra/Processors/ARM/data/languages/ARM.ldefs",
        "language_definitions",
    ),
    (
        "specs/Ghidra/Processors/ARM/data/languages/ARM.cspec",
        "compiler_spec",
    ),
    (
        "specs/Ghidra/Processors/MIPS/data/languages/mips32be.cspec",
        "compiler_spec",
    ),
    (
        "specs/Ghidra/Processors/MIPS/data/languages/mips32_16e.pspec",
        "processor_spec",
    ),
    (
        "specs/Ghidra/Processors/PowerPC/data/languages/ppc_32.pspec",
        "processor_spec",
    ),
    (
        "specs/Ghidra/Processors/Sparc/data/languages/SparcV9_32.cspec",
        "compiler_spec",
    ),
    (
        "specs/Ghidra/Processors/68000/data/languages/68000.ldefs",
        "language_definitions",
    ),
    (
        "specs/Ghidra/Processors/RISCV/data/languages/riscv.ldefs",
        "language_definitions",
    ),
    (
        "specs/Ghidra/Processors/6502/data/languages/6502.pspec",
        "processor_spec",
    ),
    (
        "specs/Ghidra/Processors/Z80/data/languages/z80.cspec",
        "compiler_spec",
    ),
    (
        "specs/Ghidra/Processors/HCS08/data/languages/HC05.pspec",
        "processor_spec",
    ),
    (
        "specs/Ghidra/Processors/tricore/data/languages/tricore.cspec",
        "compiler_spec",
    ),
    (
        "specs/Ghidra/Processors/SuperH4/data/languages/SuperH4.ldefs",
        "language_definitions",
    ),
    (
        "specs/Ghidra/Processors/PA-RISC/data/languages/pa-risc32.pspec",
        "processor_spec",
    ),
    (
        "specs/Ghidra/Processors/DATA/data/languages/data.pspec",
        "processor_spec",
    ),
];

#[test]
fn test_xml_corpus_processor_spec_files() {
    let root = repo_root();
    for (rel, expected_root) in SPEC_FILES {
        let path = root.join(rel);
        let bytes =
            std::fs::read(&path).unwrap_or_else(|e| panic!("{}: read failed: {e}", path.display()));
        let doc =
            xml_tree(&bytes).unwrap_or_else(|e| panic!("{}: parse failed: {e}", path.display()));
        assert_eq!(doc.get_root().get_name(), *expected_root, "{rel}");
        assert_eq!(doc.get_root().get_name(), raw_root_tag(&bytes), "{rel}");
    }
    assert_eq!(SPEC_FILES.len(), 20);
}

/// Depth-first search for the first element with the given name.
fn find_first<'e>(el: &'e Element, name: &str) -> Option<&'e Element> {
    if el.get_name() == name {
        return Some(el);
    }
    for child in el.get_children() {
        if let Some(found) = find_first(child, name) {
            return Some(found);
        }
    }
    None
}

/// The raw bytes between the first `<bytechunk ...>` and its
/// `</bytechunk>`, straight from the file.
fn raw_first_bytechunk(bytes: &[u8]) -> Vec<u8> {
    let open = find_sub(bytes, b"<bytechunk", 0).expect("no <bytechunk>");
    let gt = find_sub(bytes, b">", open).expect("unterminated bytechunk start tag");
    let close = find_sub(bytes, b"</bytechunk>", gt).expect("no </bytechunk>");
    bytes[gt + 1..close].to_vec()
}

#[test]
fn test_xml_bytechunk_payload_roundtrips_byte_identically() {
    let root = repo_root();
    for rel in [
        "tests/datatests/ccmp.xml",
        "tests/datatests/deindirect.xml",
        "tests/datatests/elseif.xml",
    ] {
        let bytes = std::fs::read(root.join(rel)).unwrap();
        let expected = raw_first_bytechunk(&bytes);
        // sanity: the payload really exercises whitespace preservation
        assert!(
            expected.starts_with(b"\n"),
            "{rel}: expected leading newline"
        );
        assert!(expected.contains(&b'\n') && expected.len() > 16, "{rel}");
        let doc = xml_tree(&bytes).unwrap();
        let chunk = find_first(doc.get_root(), "bytechunk")
            .unwrap_or_else(|| panic!("{rel}: no bytechunk element"));
        assert_eq!(
            chunk.get_content(),
            expected.as_slice(),
            "{rel}: bytechunk payload not byte-identical"
        );
    }
}

// -- DOM model ----------------------------------------------------------

#[test]
fn test_xml_element_tree_and_attributes() {
    let doc =
        parse_ok("<top a=\"1\" b='two'>\n  <kid x=\"&lt;y&gt;\"/>\n  <kid2></kid2>\n</top>\n");
    let root = doc.get_root();
    assert_eq!(root.get_name(), "top");
    assert_eq!(root.get_num_attributes(), 2);
    assert_eq!(root.get_attribute_name(0), "a");
    assert_eq!(root.get_attribute_value_at(0), b"1");
    assert_eq!(root.get_attribute_name(1), "b");
    assert_eq!(root.get_attribute_value_at(1), b"two");
    assert_eq!(root.get_attribute_value("b").unwrap(), b"two");
    let kids = root.get_children();
    assert_eq!(kids.len(), 2);
    assert_eq!(kids[0].get_name(), "kid");
    assert_eq!(kids[0].get_attribute_value("x").unwrap(), b"<y>");
    assert_eq!(kids[1].get_name(), "kid2");
    assert!(kids[1].get_children().is_empty());
    // all-whitespace runs between children are ignorable -> dropped
    assert_eq!(root.get_content(), b"");
}

#[test]
fn test_xml_element_unknown_attribute_is_decoder_error() {
    let doc = parse_ok("<a b=\"1\"/>\n");
    let err = doc.get_root().get_attribute_value("missing").unwrap_err();
    assert_eq!(err.explain(), "Unknown attribute: missing");
    // DecoderError is NOT in the LowlevelError hierarchy
    assert!(!err.is_lowlevel());
}

#[test]
fn test_xml_element_duplicate_attribute_returns_first() {
    // the C++ parser does not reject duplicate attribute names, and
    // getAttributeValue returns the first match
    let doc = parse_ok("<a v=\"first\" v=\"second\"/>\n");
    assert_eq!(doc.get_root().get_num_attributes(), 2);
    assert_eq!(doc.get_root().get_attribute_value("v").unwrap(), b"first");
}

#[test]
fn test_xml_mismatched_close_tag_accepted() {
    // xml.y:191 discards the ETag name without comparing it ($3 deleted)
    let doc = parse_ok("<a><b>text</wrong></a>\n");
    let root = doc.get_root();
    assert_eq!(root.get_name(), "a");
    assert_eq!(root.get_children().len(), 1);
    assert_eq!(root.get_children()[0].get_name(), "b");
    assert_eq!(root.get_children()[0].get_content(), b"text");
}

#[test]
fn test_xml_mixed_content_and_tag_whitespace() {
    // chardata around a child accumulates on the parent, byte-for-byte
    let doc = parse_ok("<a> x <b/> y </a>\n");
    assert_eq!(doc.get_root().get_content(), b" x  y ");
    // whitespace inside the tags themselves
    let doc = parse_ok("<a >x</a >\n");
    assert_eq!(doc.get_root().get_content(), b"x");
    let doc = parse_ok("<a />\n");
    assert_eq!(doc.get_root().get_name(), "a");
    // CRLF passes through content unnormalized
    let doc = parse_ok("<a>x\r\ny</a>\n");
    assert_eq!(doc.get_root().get_content(), b"x\r\ny");
}

#[test]
fn test_xml_attribute_value_whitespace_preserved() {
    let doc = parse_ok("<a v=\"l1\nl2\tend  \"/>\n");
    assert_eq!(
        doc.get_root().get_attribute_value("v").unwrap(),
        b"l1\nl2\tend  "
    );
    // whitespace around '=' is fine; other quote char is plain data
    let doc = parse_ok("<a v = 'say \"hi\"'/>\n");
    assert_eq!(
        doc.get_root().get_attribute_value("v").unwrap(),
        b"say \"hi\""
    );
}

#[test]
fn test_xml_document_without_trailing_newline_parses() {
    // the scanner injects a synthetic '\n' at end of stream, which
    // supplies the mandatory trailing Misc
    let doc = parse_ok("<a/>");
    assert_eq!(doc.get_root().get_name(), "a");
    let doc = parse_ok("<a></a>");
    assert_eq!(doc.get_root().get_name(), "a");
}

#[test]
fn test_xml_prolog_comments_and_decl() {
    let doc =
        parse_ok("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<!-- a comment -->\n\n<root/>\n");
    assert_eq!(doc.get_root().get_name(), "root");
    // comment-only prolog, no decl
    let doc = parse_ok("<!-- c1 -->\n<!-- c2 -->\n<root/>\n");
    assert_eq!(doc.get_root().get_name(), "root");
    // decl without encoding, with space before ?>
    let doc = parse_ok("<?xml version='1.0' ?><root/>\n");
    assert_eq!(doc.get_root().get_name(), "root");
}

// -- entities and references --------------------------------------------

#[test]
fn test_xml_named_entities_in_content_and_attributes() {
    let doc = parse_ok("<a>&lt;&gt;&amp;&quot;&apos;</a>\n");
    assert_eq!(doc.get_root().get_content(), b"<>&\"'");
    let doc = parse_ok("<a v=\"&lt;tag&gt; &amp; &quot;x&quot; &apos;y&apos;\"/>\n");
    assert_eq!(
        doc.get_root().get_attribute_value("v").unwrap(),
        b"<tag> & \"x\" 'y'"
    );
}

#[test]
fn test_xml_char_refs_decimal_and_hex() {
    let doc = parse_ok("<a>&#65;&#x42;&#x63;</a>\n");
    assert_eq!(doc.get_root().get_content(), b"ABc");
    // uppercase hex digits
    let doc = parse_ok("<a>&#x4A;</a>\n");
    assert_eq!(doc.get_root().get_content(), b"J");
}

#[test]
fn test_xml_char_ref_high_bytes_appended_raw() {
    // upstream spells UTF-8 byte pairs as consecutive char refs
    // (tests/datatests/stackstring.xml does exactly this)
    let doc = parse_ok("<a>valid&#xc2;&#xa3;</a>\n");
    assert_eq!(doc.get_root().get_content(), b"valid\xc2\xa3");
}

#[test]
fn test_xml_char_ref_truncates_to_low_byte() {
    // C++ appends (char)val: only the low byte of the converted value
    let doc = parse_ok("<a>&#x141;</a>\n"); // 0x141 -> 0x41 'A'
    assert_eq!(doc.get_root().get_content(), b"A");
    let doc = parse_ok("<a>x&#256;y</a>\n"); // 256 -> 0x00
    assert_eq!(doc.get_root().get_content(), b"x\x00y");
}

#[test]
fn test_xml_unknown_entity_becomes_byte_ff() {
    // convertEntityRef returns -1; (char)-1 == byte 0xFF, and the parse
    // SUCCEEDS (upstream does not reject unknown entities)
    let doc = parse_ok("<a>&bogus;</a>\n");
    assert_eq!(doc.get_root().get_content(), b"\xff");
    let doc = parse_ok("<a v='&bogus;'/>\n");
    assert_eq!(doc.get_root().get_attribute_value("v").unwrap(), b"\xff");
}

#[test]
fn test_xml_whitespace_only_reference_dropped_in_content_kept_in_attribute() {
    // print_content routes an all-whitespace piece (here: the single
    // space produced by &#32;) to ignorableWhitespace -> dropped from
    // the DOM; attribute values are accumulated directly and keep it.
    let doc = parse_ok("<a>A&#32;B</a>\n");
    assert_eq!(doc.get_root().get_content(), b"AB");
    let doc = parse_ok("<a v=\"A&#32;B\"/>\n");
    assert_eq!(doc.get_root().get_attribute_value("v").unwrap(), b"A B");
}

// -- CDATA / comments ----------------------------------------------------

#[test]
fn test_xml_cdata_sections() {
    let doc = parse_ok("<a><![CDATA[<not>&amp;]]></a>\n");
    assert_eq!(doc.get_root().get_content(), b"<not>&amp;");
    // "]]" not followed by '>' stays inside the CDATA
    let doc = parse_ok("<a><![CDATA[a]]b]]></a>\n");
    assert_eq!(doc.get_root().get_content(), b"a]]b");
    // empty CDATA is ignorable
    let doc = parse_ok("<a><![CDATA[]]></a>\n");
    assert_eq!(doc.get_root().get_content(), b"");
    // an all-whitespace CDATA is ignorable too (print_content quirk)
    let doc = parse_ok("<a>x<![CDATA[ ]]>y</a>\n");
    assert_eq!(doc.get_root().get_content(), b"xy");
}

#[test]
fn test_xml_comments_discarded() {
    let doc = parse_ok("<a><!-- ignore &x; <not-a-tag> -->z<!-- a - b --></a>\n");
    assert_eq!(doc.get_root().get_content(), b"z");
    assert!(doc.get_root().get_children().is_empty());
}

// -- SAX surface ----------------------------------------------------------

struct RecordingHandler {
    events: Vec<String>,
}

impl ContentHandler for RecordingHandler {
    fn start_document(&mut self) {
        self.events.push("startDocument".into());
    }
    fn end_document(&mut self) {
        self.events.push("endDocument".into());
    }
    fn start_prefix_mapping(&mut self, _p: &str, _u: &str) {
        self.events.push("startPrefixMapping".into());
    }
    fn end_prefix_mapping(&mut self, _p: &str) {
        self.events.push("endPrefixMapping".into());
    }
    fn start_element(&mut self, uri: &str, local: &str, _q: &str, atts: &Attributes) {
        assert_eq!(uri, BOGUS_URI);
        let mut s = format!("startElement:{local}");
        for i in 0..atts.get_length() {
            s.push_str(&format!(
                "[{}={}]",
                atts.get_local_name(i),
                String::from_utf8_lossy(atts.get_value(i))
            ));
        }
        self.events.push(s);
    }
    fn end_element(&mut self, _uri: &str, local: &str, _q: &str) {
        self.events.push(format!("endElement:{local}"));
    }
    fn characters(&mut self, text: &[u8], start: i32, length: i32) {
        let piece = &text[start as usize..(start + length) as usize];
        self.events
            .push(format!("characters:{}", String::from_utf8_lossy(piece)));
    }
    fn ignorable_whitespace(&mut self, _t: &[u8], _s: i32, length: i32) {
        self.events.push(format!("ignorableWhitespace:{length}"));
    }
    fn set_version(&mut self, version: &[u8]) {
        self.events
            .push(format!("setVersion:{}", String::from_utf8_lossy(version)));
    }
    fn set_encoding(&mut self, encoding: &[u8]) {
        self.events
            .push(format!("setEncoding:{}", String::from_utf8_lossy(encoding)));
    }
    fn processing_instruction(&mut self, _t: &str, _d: &str) {
        self.events.push("processingInstruction".into());
    }
    fn skipped_entity(&mut self, _n: &str) {
        self.events.push("skippedEntity".into());
    }
    fn set_error(&mut self, errmsg: &str) {
        self.events.push(format!("setError:{errmsg}"));
    }
}

#[test]
fn test_xml_sax_event_sequence() {
    let mut handler = RecordingHandler { events: Vec::new() };
    let res = xml_parse(
        b"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<a b='1'>x<c/> </a>\n",
        &mut handler,
    );
    assert_eq!(res, 0);
    assert_eq!(
        handler.events,
        vec![
            "startDocument",
            "setVersion:1.0",
            "setEncoding:UTF-8",
            "startElement:a[b=1]",
            "characters:x",
            "startElement:c",
            "endElement:c",
            "ignorableWhitespace:1",
            "endElement:a",
            "endDocument",
        ]
    );
}

#[test]
fn test_xml_sax_error_reported_via_set_error() {
    let mut handler = RecordingHandler { events: Vec::new() };
    let res = xml_parse(b"<a><?pi?></a>\n", &mut handler);
    assert_eq!(res, 1);
    assert_eq!(
        handler.events.last().unwrap(),
        "setError:Processing instructions are not supported"
    );
    // no endDocument after a failed parse
    assert!(!handler.events.iter().any(|e| e == "endDocument"));
}

// -- malformed input: same accept/reject behavior and error text as C++ --

#[test]
fn test_xml_malformed_plain_syntax_errors() {
    for case in [
        &b""[..],                                      // empty input
        b"<a>",                                        // unclosed element
        b"<a></a>x",                                   // garbage after the document
        b"<a/><b/>",                                   // second root element
        b"<a b=c/>",                                   // unquoted attribute value
        b"<a b='x'c='y'/>",                            // no whitespace between attributes
        b"< a/>",                                      // space after '<'
        b"<a>]]></a>",                                 // stray "]]>" in content
        b"<a v='val<'/>",                              // raw '<' in an attribute value
        b"<a>&amp</a>",                                // entity without ';'
        b"<a>&#;</a>",                                 // empty char ref
        b"<a>&#x;</a>",                                // hex char ref without digits
        b"<a>&#xZ;</a>",                               // hex char ref with bad digit
        b"<a><!--x--y--></a>",                         // "--" inside a comment
        b"<a><!--c---></a>",                           // comment ending "--->"
        b"</a>",                                       // close tag with no open
        b"<a>x\x00y</a>",                              // NUL acts as end of stream
        b"<?xml?><a/>",                                // XML decl without version
        b"<?xml version='1.0' standalone='yes'?><a/>", // unsupported decl attr
        b"<1a/>",                                      // name starting with a digit
    ] {
        assert_eq!(
            parse_err(case),
            SYNTAX_ERROR,
            "case: {:?}",
            String::from_utf8_lossy(case)
        );
    }
}

#[test]
fn test_xml_malformed_processing_instructions_rejected() {
    // PIs are rejected wherever they occur, with the C++ message
    for case in [
        &b"<?pi data?>\n<a/>\n"[..],      // in the prolog (initial position)
        b"\n<?xml version='1.0'?>\n<a/>", // XML decl NOT first -> it's a PI
        b"<a><?pi?></a>\n",               // in content
        b"<a/><?pi?>",                    // as the (single) trailing Misc
    ] {
        assert_eq!(
            parse_err(case),
            "Processing instructions are not supported",
            "case: {:?}",
            String::from_utf8_lossy(case)
        );
    }
    // ... but "<?x" at the very start commits to the xmldecl path,
    // so a PI whose target starts with 'x' is a plain syntax error
    assert_eq!(parse_err(b"<?xpi?>\n<a/>\n"), SYNTAX_ERROR);
    // ... and whitespace before a trailing PI already consumes the
    // document's single Misc, so the PI is plain trailing garbage
    assert_eq!(parse_err(b"<a/>\n<?pi?>\n"), SYNTAX_ERROR);
}

#[test]
fn test_xml_malformed_doctype_rejected() {
    // after any prologpre item, <!DOCTYPE reaches doctypedecl's action
    assert_eq!(parse_err(b" <!DOCTYPE foo>\n<a/>\n"), "DTD's not supported");
    assert_eq!(
        parse_err(b"<?xml version='1.0'?><!DOCTYPE foo><a/>"),
        "DTD's not supported"
    );
    // ... but at the very start of the document, doctypepro is not
    // derivable and the 'D' is a plain syntax error (upstream quirk)
    assert_eq!(parse_err(b"<!DOCTYPE foo>\n<a/>\n"), SYNTAX_ERROR);
    // partial DOCTYPE keyword
    assert_eq!(parse_err(b" <!DOCTYPO foo>\n<a/>\n"), SYNTAX_ERROR);
}

#[test]
fn test_xml_malformed_trailing_comment_never_accepted() {
    // document: element Misc — exactly one Misc; the synthetic '\n'
    // after a trailing comment can never be absorbed
    assert_eq!(parse_err(b"<a/><!--c-->"), SYNTAX_ERROR);
    assert_eq!(parse_err(b"<a/>\n<!--c-->\n"), SYNTAX_ERROR);
}

// -- DocumentStorage ------------------------------------------------------

#[test]
fn test_xml_document_storage_register_and_get() {
    let mut store = DocumentStorage::new();
    let root = {
        let doc = store
            .parse_document(b"<top><sub1 a=\"1\"/><sub2/></top>\n")
            .unwrap();
        Rc::clone(doc.get_root())
    };
    store.register_tag(&root);
    // register the children too, as raw_arch/xml_arch do
    let children: Vec<Rc<Element>> = root.get_children().to_vec();
    for child in &children {
        store.register_tag(child);
    }
    assert_eq!(store.get_tag("top").unwrap().get_name(), "top");
    assert_eq!(
        store
            .get_tag("sub1")
            .unwrap()
            .get_attribute_value("a")
            .unwrap(),
        b"1"
    );
    assert_eq!(store.get_tag("sub2").unwrap().get_name(), "sub2");
    assert!(store.get_tag("nothere").is_none());
}

#[test]
fn test_xml_document_storage_open_document() {
    let root = repo_root();
    let path = root.join("tests/datatests/ccmp.xml");
    let mut store = DocumentStorage::new();
    let doc = store.open_document(path.to_str().unwrap()).unwrap();
    assert_eq!(doc.get_root().get_name(), "decompilertest");
}

#[test]
fn test_xml_document_storage_open_missing_file() {
    let mut store = DocumentStorage::new();
    let err = store.open_document("/no/such/file.xml").unwrap_err();
    match &err {
        UnlaceError::Decoder { explain } => {
            assert_eq!(explain, "Unable to open xml document /no/such/file.xml");
        }
        other => panic!("expected Decoder error, got {other:?}"),
    }
}

#[test]
fn test_xml_parse_document_error_is_decoder() {
    let mut store = DocumentStorage::new();
    let err = store.parse_document(b"<a>").unwrap_err();
    assert!(matches!(err, UnlaceError::Decoder { .. }));
    assert_eq!(err.explain(), SYNTAX_ERROR);
}

// -- Attributes quirks ----------------------------------------------------

#[test]
fn test_xml_attributes_missing_value_returns_bogus_uri() {
    // C++ Attributes::getValue(qualifiedName) returns bogus_uri when the
    // attribute is absent (xml.hh:73-77)
    let mut atts = Attributes::new("el".to_string());
    atts.add_attribute("a".to_string(), b"1".to_vec());
    assert_eq!(atts.get_value_by_name("a"), b"1");
    assert_eq!(atts.get_value_by_name("zz"), BOGUS_URI.as_bytes());
    assert_eq!(atts.get_elem_uri(), BOGUS_URI);
    assert_eq!(atts.get_uri(0), BOGUS_URI);
    assert_eq!(atts.get_length(), 1);
    assert_eq!(atts.get_local_name(0), "a");
    assert_eq!(atts.get_qname(0), "a");
}

// -- stream-writing helpers ----------------------------------------------

#[test]
fn test_xml_escape_and_attribute_writers() {
    let mut s: Vec<u8> = Vec::new();
    xml_escape(&mut s, b"a<b>c&d\"e'f");
    assert_eq!(s, b"a&lt;b&gt;c&amp;d&quot;e&apos;f");

    let mut s: Vec<u8> = Vec::new();
    a_v(&mut s, "name", b"<v>");
    assert_eq!(s, b" name=\"&lt;v&gt;\"");

    let mut s: Vec<u8> = Vec::new();
    a_v_i(&mut s, "n", -42);
    assert_eq!(s, b" n=\"-42\"");

    let mut s: Vec<u8> = Vec::new();
    a_v_u(&mut s, "off", 0xdeadbeef);
    assert_eq!(s, b" off=\"0xdeadbeef\"");

    let mut s: Vec<u8> = Vec::new();
    a_v_b(&mut s, "flag", true);
    a_v_b(&mut s, "flag2", false);
    assert_eq!(s, b" flag=\"true\" flag2=\"false\"");
}

#[test]
fn test_xml_readbool() {
    assert!(xml_readbool(b"true"));
    assert!(xml_readbool(b"t"));
    assert!(xml_readbool(b"1"));
    assert!(xml_readbool(b"yes")); // backward compatibility
    assert!(!xml_readbool(b"false"));
    assert!(!xml_readbool(b"0"));
    assert!(!xml_readbool(b""));
    assert!(!xml_readbool(b"TRUE")); // only lowercase first char counts
}

// -- conversion helpers ---------------------------------------------------

#[test]
fn test_xml_convert_entity_and_char_ref() {
    assert_eq!(convert_entity_ref(b"lt"), i32::from(b'<'));
    assert_eq!(convert_entity_ref(b"gt"), i32::from(b'>'));
    assert_eq!(convert_entity_ref(b"amp"), i32::from(b'&'));
    assert_eq!(convert_entity_ref(b"quot"), i32::from(b'"'));
    assert_eq!(convert_entity_ref(b"apos"), i32::from(b'\''));
    assert_eq!(convert_entity_ref(b"unknown"), -1);
    assert_eq!(convert_char_ref(b"65"), 65);
    assert_eq!(convert_char_ref(b"x41"), 0x41);
    assert_eq!(convert_char_ref(b"xFf"), 0xff);
    assert_eq!(convert_char_ref(b"x0"), 0);
    // no overflow guard upstream: the i32 accumulator wraps
    assert_eq!(convert_char_ref(b"99999999999999999999"), {
        let mut v: i32 = 0;
        for _ in 0..20 {
            v = v.wmul(10).wadd(9);
        }
        v
    });
}
