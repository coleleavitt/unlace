//! (unlace) The parts of a `.sla` that a load decodes on first use.
//!
//! A symbol table is mostly its subtables: x86-64's 9,121 constructors, their
//! p-code templates and the decision trees that pick among them are 80% of the
//! inflated stream, and one run resolves a few dozen constructors. A lazy load
//! keeps the inflated stream ([`SlaSource`]) and walks the subtable bodies once
//! with the flat [`Scan`] cursor, recording where each constructor and each
//! decision tree lies, instead of decoding them. The regular decoders then run
//! over those byte ranges the first time something is read: a constructor when
//! it is resolved, printed or built ([`LazySubtable::constructor`]), its
//! templates when the p-code builder needs them ([`SlaSource::template`]), a
//! decision node when a resolution walks through it ([`LazyDecision`]). Every
//! decode is the eager one over the same bytes, so the values are those an
//! eager load makes; a corrupt element is reported at its first use instead of
//! at load. The non-subtable symbols are decoded at load as before.
//!
//! Constructor bodies and decision trees carry no address-space attributes, so
//! they decode against an empty manager; templates decode against the engine's
//! manager, whose spaces keep the indices the `.sla` gave them.
//! `UNLACE_SLA_LAZY=0` decodes everything at load, as the XML path does.

use std::cell::OnceCell;
use std::collections::BTreeMap;
use std::fmt;
use std::rc::Rc;

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::{Decoder, PackedDecode};
use unlace_base::space::{AddrSpace, AddrSpaceManager};
use unlace_num::opcodes::OpcodeDecoder;

use crate::semantics::ConstructTpl;
use crate::slaformat as sla;
use crate::slascan::{Record, Scan};
use crate::slghpatexpress::OperandValueResolver;
use crate::slghpattern::DisjointPattern;
use crate::slghsymbol::{
    ConstructTplHandle, Constructor, DecisionNode, SleighBaseTrans, SymbolWalker,
};

/// The environment switch: `0` decodes the whole `.sla` at load.
pub const LAZY_ENV: &str = "UNLACE_SLA_LAZY";

/// Is lazy decoding on (`$UNLACE_SLA_LAZY` is not `0`)?
pub fn lazy_enabled() -> bool {
    std::env::var_os(LAZY_ENV).is_none_or(|v| v != "0")
}

/// The inflated `.sla` stream, split at the symbol contents: everything before
/// `content_start` (header, spaces, scopes, symbol headers) is decoded at load
/// through a regular decoder; the contents are scanned by [`Self::scan_contents`].
pub struct SlaStream {
    bytes: Vec<u8>,
    content_start: usize,
}

impl SlaStream {
    /// Inflate a compressed `.sla` image.
    pub fn inflate(sla_bytes: &[u8]) -> UnlaceResult<SlaStream> {
        SlaStream::new(sla::inflate_sla(sla_bytes)?)
    }

    /// Split an inflated `<sleigh>` stream at its symbol contents.
    pub fn new(bytes: Vec<u8>) -> UnlaceResult<SlaStream> {
        let mut scan = Scan::new(&bytes, 0);
        scan.open_id(sla::ELEM_SLEIGH.get_id())?;
        scan.skip_attributes()?;
        loop {
            match scan.peek()? {
                Record::Start(id) if id == sla::ELEM_SYMBOL_TABLE => break,
                Record::Start(_) => scan.skip_element()?,
                _ => return Err(UnlaceError::decoder("Missing symbol table")),
            }
        }
        scan.open()?;
        let mut scopes: i64 = 0;
        let mut symbols: i64 = 0;
        while let Some((id, value)) = scan.attribute()? {
            if id == sla::ATTRIB_SCOPESIZE {
                scopes = value.signed()?;
            } else if id == sla::ATTRIB_SYMBOLSIZE {
                symbols = value.signed()?;
            }
        }
        if scopes < 0 || symbols < 0 {
            return Err(UnlaceError::sleigh("Bad symbol table size"));
        }
        for _ in 0..scopes.saturating_add(symbols) {
            scan.skip_element()?;
        }
        let content_start = scan.pos();
        Ok(SlaStream {
            bytes,
            content_start,
        })
    }

    /// Hand the stream up to the symbol contents to `decoder`.
    pub fn ingest_prefix(&self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        decoder.ingest_stream(&self.bytes[..self.content_start])
    }

    /// Walk the symbol contents: each `<subtable_sym>` becomes a
    /// [`LazySubtable`] (returned with its symbol id), and the other elements
    /// are copied, in order, into one stream to decode now.
    pub fn scan_contents(
        self,
        const_space: Rc<AddrSpace>,
    ) -> UnlaceResult<(Rc<SlaSource>, Vec<(u32, LazySubtable)>, Vec<u8>)> {
        let mut scan = Scan::new(&self.bytes, self.content_start);
        let mut layouts: Vec<(u32, SubtableLayout)> = Vec::new();
        let mut rest: Vec<u8> = Vec::new();
        let mut templates: usize = 0;
        loop {
            match scan.peek()? {
                Record::Start(id) if id == sla::ELEM_SUBTABLE_SYM => {
                    layouts.push(scan_subtable(&mut scan, &mut templates)?);
                }
                Record::Start(_) => {
                    let start = scan.pos();
                    scan.skip_element()?;
                    rest.extend_from_slice(&self.bytes[start..scan.pos()]);
                }
                Record::End(_) => break,
                Record::Attribute(_) => return Err(UnlaceError::decoder("Corrupt stream")),
            }
        }
        let source = Rc::new(SlaSource {
            bytes: self.bytes,
            templates: (0..templates).map(|_| TemplateSlot::default()).collect(),
            subtable_sizes: layouts
                .iter()
                .map(|(id, layout)| (*id, layout.constructors.len() as i32)) // size_t -> int4 as in C++
                .collect(),
            const_space,
            no_spaces: AddrSpaceManager::new(),
        });
        let subtables = layouts
            .into_iter()
            .map(|(id, layout)| {
                let lazy = LazySubtable {
                    source: Rc::clone(&source),
                    id,
                    constructors: layout.constructors,
                    tree: layout.tree,
                    has_commits: layout.has_commits,
                };
                (id, lazy)
            })
            .collect();
        Ok((source, subtables, rest))
    }
}

/// What every lazily decoded piece of one `.sla` shares: the inflated stream,
/// the constructor-template handle space, and the constructor count of every
/// subtable (for validating `OperandValue`s before their table is decoded).
pub struct SlaSource {
    bytes: Vec<u8>,
    templates: Vec<TemplateSlot>,
    subtable_sizes: BTreeMap<u32, i32>,
    const_space: Rc<AddrSpace>,
    /// The manager constructor bodies and decision trees decode against: they
    /// contain no address-space attributes, so it stays empty.
    no_spaces: AddrSpaceManager,
}

impl fmt::Debug for SlaSource {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.debug_struct("SlaSource")
            .field("bytes", &self.bytes.len())
            .field("templates", &self.templates.len())
            .field("subtable_sizes", &self.subtable_sizes)
            .finish()
    }
}

impl SlaSource {
    /// Number of constructor templates (the handle space).
    pub fn num_templates(&self) -> usize {
        self.templates.len()
    }

    /// A decoder over `bytes[start..end]` against the empty manager.
    fn decoder(&self, start: usize, end: usize) -> UnlaceResult<PackedDecode<'_>> {
        let mut decoder = PackedDecode::new(&self.no_spaces);
        decoder.ingest_stream(&self.bytes[start..end])?;
        Ok(decoder)
    }

    fn slot(&self, handle: ConstructTplHandle) -> UnlaceResult<&KeptTemplate> {
        self.templates
            .get(handle)
            .and_then(|slot| slot.0.get())
            .ok_or_else(|| UnlaceError::sleigh("bad ConstructTpl handle"))
    }

    /// The template behind `handle`, decoded now if this is its first use.
    pub fn template(
        &self,
        handle: ConstructTplHandle,
        manager: &AddrSpaceManager,
    ) -> UnlaceResult<&ConstructTpl> {
        let kept = self.slot(handle)?;
        if let Some(tpl) = kept.tpl.get() {
            return Ok(tpl);
        }
        let mut decoder = PackedDecode::new(manager);
        decoder.ingest_stream(&kept.bytes)?;
        let mut tpl = ConstructTpl::new();
        tpl.decode(&mut decoder)?;
        Ok(kept.tpl.get_or_init(|| tpl))
    }

    /// The delay-slot count of a template, without decoding it.
    pub fn template_delay_slot(&self, handle: ConstructTplHandle) -> UnlaceResult<u32> {
        Ok(self.slot(handle)?.delayslot)
    }

    /// Every template, decoded, in handle order (the encoder needs them all;
    /// every constructor must have been decoded first).
    pub fn all_templates(&self, manager: &AddrSpaceManager) -> UnlaceResult<Vec<ConstructTpl>> {
        (0..self.templates.len())
            .map(|handle| self.template(handle, manager).cloned())
            .collect()
    }
}

/// A constructor template's handle slot: empty until its constructor is decoded.
#[derive(Debug, Default)]
struct TemplateSlot(OnceCell<KeptTemplate>);

/// One template's encoded bytes, its `delay` attribute, and the template once
/// decoded.
#[derive(Debug)]
struct KeptTemplate {
    bytes: Vec<u8>,
    delayslot: u32,
    tpl: OnceCell<ConstructTpl>,
}

/// The `section` and `delay` attributes of one encoded `<construct_tpl>`, read
/// as `ConstructTpl::decode` reads them (section -1 and delay 0 when absent).
fn template_header(bytes: &[u8]) -> UnlaceResult<(i32, u32)> {
    let mut scan = Scan::new(bytes, 0);
    scan.open_id(sla::ELEM_CONSTRUCT_TPL.get_id())?;
    let mut sectionid: i32 = -1;
    let mut delayslot: u32 = 0;
    while let Some((id, value)) = scan.attribute()? {
        if id == sla::ATTRIB_DELAY {
            delayslot = value.signed()? as u32; // C++ intb -> uint4
        } else if id == sla::ATTRIB_SECTION {
            sectionid = value.signed()? as i32; // C++ intb -> int4
        }
    }
    Ok((sectionid, delayslot))
}

/// Where a subtable's pieces lie in the stream.
struct SubtableLayout {
    constructors: Vec<LazyConstructor>,
    tree: Option<LazyDecision>,
    has_commits: bool,
}

/// Walk one `<subtable_sym>` element: its id, every constructor's byte range
/// and template count, and the decision tree's range. (`numct` is not read:
/// the eager decode only reserves with it, and counts what it decodes.)
fn scan_subtable(
    scan: &mut Scan<'_>,
    templates: &mut usize,
) -> UnlaceResult<(u32, SubtableLayout)> {
    scan.open()?;
    let mut id: Option<u32> = None;
    while let Some((attrib, value)) = scan.attribute()? {
        if attrib == sla::ATTRIB_ID {
            id = Some(value.unsigned()? as u32); // C++ implicit uintb -> uintm
        }
    }
    let id = id.ok_or_else(|| UnlaceError::decoder("Attribute missing: id"))?;
    let mut layout = SubtableLayout {
        constructors: Vec::new(),
        tree: None,
        has_commits: false,
    };
    loop {
        match scan.peek()? {
            Record::Start(el) if el == sla::ELEM_CONSTRUCTOR => {
                let start = scan.pos();
                let first_template = *templates;
                scan.skip_element_with(|child| {
                    if child == sla::ELEM_CONSTRUCT_TPL {
                        *templates += 1;
                    } else if child == sla::ELEM_COMMIT {
                        layout.has_commits = true;
                    }
                })?;
                layout.constructors.push(LazyConstructor {
                    start,
                    end: scan.pos(),
                    first_template,
                    ct: OnceCell::new(),
                });
            }
            Record::Start(el) if el == sla::ELEM_DECISION => {
                layout.tree = Some(LazyDecision::scan(scan)?);
            }
            Record::Start(_) => scan.skip_element()?,
            Record::End(_) => break,
            Record::Attribute(_) => return Err(UnlaceError::decoder("Corrupt stream")),
        }
    }
    scan.close()?;
    Ok((id, layout))
}

/// A subtable kept as its `.sla` bytes: constructors and decision nodes are
/// decoded the first time they are read.
#[derive(Debug, Clone)]
pub struct LazySubtable {
    source: Rc<SlaSource>,
    /// This subtable's symbol id.
    id: u32,
    constructors: Vec<LazyConstructor>,
    tree: Option<LazyDecision>,
    /// Whether any constructor carries a `<commit>` (a SLEIGH `globalset`).
    has_commits: bool,
}

/// A constructor's byte range, its first template handle, and the constructor
/// once decoded.
#[derive(Debug, Clone)]
struct LazyConstructor {
    start: usize,
    end: usize,
    first_template: ConstructTplHandle,
    ct: OnceCell<Constructor>,
}

impl LazySubtable {
    /// C++ `SubtableSymbol::getNumConstructors` (`size_t` as `int4`).
    pub fn num_constructors(&self) -> i32 {
        self.constructors.len() as i32
    }

    /// Does any constructor commit context (`ContextChange::Commit`)?
    pub fn has_commits(&self) -> bool {
        self.has_commits
    }

    /// C++ `SubtableSymbol::getConstructor(uintm id)`, decoding it on first use.
    pub fn constructor(&self, id: u32) -> UnlaceResult<&Constructor> {
        let lazy = self.constructors.get(id as usize).ok_or_else(|| {
            UnlaceError::sleigh("constructor id out of range (C++ indexes unchecked)")
        })?;
        if let Some(ct) = lazy.ct.get() {
            return Ok(ct);
        }
        let mut decoder = self.source.decoder(lazy.start, lazy.end)?;
        // C++ addConstructor(ct) BEFORE ct->decode: the table's live count
        // during this constructor's decode includes it.
        let resolver = SizeResolver {
            sizes: &self.source.subtable_sizes,
            current: (self.id, id as i32 + 1),
        };
        let mut sink = TemplateSink {
            source: &self.source,
            next: lazy.first_template,
        };
        let mut ct = Constructor::decode(&mut decoder, &resolver, &mut sink)?;
        ct.set_id(id); // C++ setId(construct.size())
        Ok(lazy.ct.get_or_init(|| ct))
    }

    /// Every constructor, decoded, in id order.
    pub fn constructors(&self) -> UnlaceResult<Vec<&Constructor>> {
        (0..self.constructors.len())
            .map(|id| self.constructor(id as u32)) // usize -> uintm constructor id
            .collect()
    }

    /// C++ `SubtableSymbol::resolve` through the lazy decision tree.
    pub fn resolve_matched(
        &self,
        walker: &(impl SymbolWalker + ?Sized),
    ) -> UnlaceResult<&(DisjointPattern, u32)> {
        let tree = self
            .tree
            .as_ref()
            .ok_or_else(|| UnlaceError::sleigh("subtable has no decision tree (not decoded)"))?;
        tree.resolve_matched(walker, &self.source, self.num_constructors())
    }

    /// The whole decision tree, decoded eagerly (the encoder needs it).
    pub fn decision_tree(&self) -> UnlaceResult<Option<DecisionNode>> {
        match &self.tree {
            None => Ok(None),
            Some(tree) => {
                let mut decoder = self.source.decoder(tree.start, tree.end)?;
                Ok(Some(DecisionNode::decode(
                    &mut decoder,
                    self.num_constructors(),
                )?))
            }
        }
    }
}

/// `OperandValue` validation during a lazy constructor decode: the current
/// table reports its live count, every other its `numct`.
struct SizeResolver<'a> {
    sizes: &'a BTreeMap<u32, i32>,
    current: (u32, i32),
}

impl OperandValueResolver for SizeResolver<'_> {
    fn num_constructors(&self, table_id: u32) -> UnlaceResult<i32> {
        if table_id == self.current.0 {
            return Ok(self.current.1);
        }
        self.sizes.get(&table_id).copied().ok_or_else(|| {
            UnlaceError::sleigh(format!(
                "symbol id {table_id} is not a subtable symbol (C++ casts unchecked)"
            ))
        })
    }
}

/// The `SleighBaseTrans` of a lazy constructor decode: each `<construct_tpl>`
/// is kept as bytes in the constructor's next handle slot.
struct TemplateSink<'a> {
    source: &'a SlaSource,
    next: ConstructTplHandle,
}

impl SleighBaseTrans for TemplateSink<'_> {
    fn get_constant_space(&self) -> Rc<AddrSpace> {
        Rc::clone(&self.source.const_space)
    }

    fn decode_construct_tpl(
        &mut self,
        decoder: &mut dyn OpcodeDecoder,
    ) -> UnlaceResult<(i32, ConstructTplHandle)> {
        let mut bytes = Vec::new();
        if !decoder.skip_element_raw(&mut bytes)? {
            return Err(UnlaceError::sleigh(
                "lazy constructor decode needs a byte decoder",
            ));
        }
        let (sectionid, delayslot) = template_header(&bytes)?;
        let slot = self
            .source
            .templates
            .get(self.next)
            .ok_or_else(|| UnlaceError::sleigh("more templates than the load scan counted"))?;
        // A slot already filled (the constructor decoded before) holds these bytes.
        let _ = slot.0.set(KeptTemplate {
            bytes,
            delayslot,
            tpl: OnceCell::new(),
        });
        let handle = self.next;
        self.next += 1;
        Ok((sectionid, handle))
    }
}

/// A decision node kept as its byte range until a resolution walks through it.
#[derive(Debug, Clone)]
pub struct LazyDecision {
    start: usize,
    end: usize,
    node: OnceCell<Node>,
}

/// A visited decision node: a terminal one is decoded whole (its pattern list
/// is what resolution reads); an inner one keeps its children lazy.
#[derive(Debug, Clone)]
enum Node {
    Leaf(DecisionNode),
    Inner {
        contextdecision: bool,
        startbit: i32,
        bitsize: i32,
        children: Vec<LazyDecision>,
    },
}

impl LazyDecision {
    /// Walk the `<decision>` at the cursor. An inner node's children become
    /// pending nodes right away (the walk passes over them anyway); a terminal
    /// node is left for `DecisionNode::decode` at its first visit.
    fn scan(scan: &mut Scan<'_>) -> UnlaceResult<LazyDecision> {
        let start = scan.pos();
        scan.open_id(sla::ELEM_DECISION.get_id())?;
        let mut contextdecision = false;
        let mut startbit: i32 = 0;
        let mut bitsize: i32 = 0;
        while let Some((id, value)) = scan.attribute()? {
            if id == sla::ATTRIB_CONTEXT {
                contextdecision = value.boolean()?;
            } else if id == sla::ATTRIB_STARTBIT {
                startbit = value.signed()? as i32; // C++ implicit intb -> int4
            } else if id == sla::ATTRIB_SIZE {
                bitsize = value.signed()? as i32; // C++ implicit intb -> int4
            }
        }
        let mut children = Vec::new();
        loop {
            match scan.peek()? {
                Record::Start(el) => {
                    let child_start = scan.pos();
                    scan.skip_element()?;
                    if bitsize != 0 && el == sla::ELEM_DECISION {
                        children.push(LazyDecision {
                            start: child_start,
                            end: scan.pos(),
                            node: OnceCell::new(),
                        });
                    }
                }
                Record::End(_) => break,
                Record::Attribute(_) => return Err(UnlaceError::decoder("Corrupt stream")),
            }
        }
        scan.close()?;
        let node = OnceCell::new();
        if bitsize != 0 {
            let _ = node.set(Node::Inner {
                contextdecision,
                startbit,
                bitsize,
                children,
            });
        }
        Ok(LazyDecision {
            start,
            end: scan.pos(),
            node,
        })
    }

    fn node(&self, source: &SlaSource, numct: i32) -> UnlaceResult<&Node> {
        if let Some(node) = self.node.get() {
            return Ok(node);
        }
        let scanned = LazyDecision::scan(&mut Scan::new(&source.bytes, self.start))?;
        let node = match scanned.node.into_inner() {
            Some(inner) => inner,
            None => {
                let mut decoder = source.decoder(self.start, self.end)?;
                Node::Leaf(DecisionNode::decode(&mut decoder, numct)?)
            }
        };
        Ok(self.node.get_or_init(|| node))
    }

    /// C++ `DecisionNode::resolve`, decoding each node on the way down on its
    /// first visit.
    fn resolve_matched(
        &self,
        walker: &(impl SymbolWalker + ?Sized),
        source: &SlaSource,
        numct: i32,
    ) -> UnlaceResult<&(DisjointPattern, u32)> {
        match self.node(source, numct)? {
            Node::Leaf(node) => node.resolve_matched(walker),
            Node::Inner {
                contextdecision,
                startbit,
                bitsize,
                children,
            } => {
                let val = if *contextdecision {
                    walker.get_context_bits(*startbit, *bitsize)?
                } else {
                    walker.get_instruction_bits(*startbit, *bitsize)?
                };
                children
                    .get(val as usize)
                    .ok_or_else(|| UnlaceError::decoder("Decision node has too few children"))?
                    .resolve_matched(walker, source, numct)
            }
        }
    }
}
