//! Encode a [`Funcdata`] as the `<function>`/`<ast>` document that answers
//! Ghidra's `decompileAt` request — a faithful port of `Funcdata::encode`
//! (`decompiler/cpp/funcdata.cc:734`) and the sub-encoders it drives.
//!
//! The consumer of this document is the Java `HighFunction.decode`
//! (`PcodeSyntaxTree.decode`), which rebuilds the SSA AST and keys every node by
//! integer ref (`Varnode::getCreateIndex`) / time (`PcodeOp::getTime`).  The
//! markup C emitted alongside it (`p9_emit/prettyprint.rs`, `EmitMarkup`) then
//! resolves each token back to those same ids, so the click-to-address contract
//! holds **by construction**: this encoder emits exactly what
//! `get_create_index()` / `get_time()` return, unmodified (see the id-consistency
//! note below).
//!
//! ## Scope (v1)
//!
//! This is the minimal `<function>` that satisfies `HighFunction.decode` and the
//! click-to-address contract: `<function id name size [nocode]>` + `<addr>`
//! (baseaddr) + `<ast>`.  The `<ast>` is `<varnodes>` (every non-`IPTR_IOP`
//! Varnode, full form) + per basic block a `<block index>` (cover `<rangelist>`
//! + each `<op>`) + per in-edged block a `<blockedge index>` of `<edge>`s.
//!
//! The larger secondary encoders are **deferred** (marked `// v1.1:` at their
//! skip sites in [`Funcdata::encode`]): `<prototype>` (`FuncProto::encode`,
//! optional in `HighFunction.decode`), `<localdb>` (`LocalSymbolMap`),
//! `<highlist>`/`<jumptablelist>` (Phase 4), and `<override>`.
//!
//! ## C++ origins
//!
//!   * [`Funcdata::encode`]      → `decompiler/cpp/funcdata.cc:734`
//!   * [`Funcdata::encode_tree`] → `decompiler/cpp/funcdata.cc:686` (`encodeTree`)
//!   * [`Funcdata::encode_varnode`] → `decompiler/cpp/varnode.cc:1201` (`Varnode::encode`)
//!   * [`Funcdata::encode_op`]   → `decompiler/cpp/op.cc:412` (`PcodeOp::encode`)
//!   * `<seqnum>`                → `decompiler/cpp/address.cc:60` (`SeqNum::encode`)
//!   * cover `<rangelist>`       → `decompiler/cpp/block.cc` (`BlockBasic::encodeBody`)
//!   * `<blockedge>`/`<edge>`    → `decompiler/cpp/block.cc:2489,35` (`FlowBlock::encodeEdges`/`BlockEdge::encode`)

use unlace_base::address::ELEM_ADDR;
use unlace_base::error::UnlaceResult;
use unlace_base::marshal::{
    ATTRIB_ID, ATTRIB_INDEX, ATTRIB_NAME, ATTRIB_REF, ATTRIB_SIZE, ATTRIB_VALUE, AttributeId,
    ELEM_VOID, ElementId, Encoder,
};
use unlace_base::space::spacetype;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::{ATTRIB_CODE, ELEM_SPACEID};
use unlace_sleigh::translate::ELEM_OP;

use crate::block::{ELEM_BLOCK, ELEM_BLOCKEDGE};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

// ---------------------------------------------------------------------------
// New marshaling ids (DECOMPILER scope).
//
// These live in a separate id namespace from the SLEIGH-compiler attributes
// that reuse the same numbers (`unlace-sleigh/src/slaformat.rs` etc.) — exactly
// the coexistence unlace already relies on for ATTRIB_NAME (sleigh=12 vs
// decomp=14).  Encoding writes `id.get_id()` directly (no registry lookup), so
// these are never registered on any `IdRegistry`; a duplicate numeric id on the
// SLEIGH registry would panic, so if any of these are ever registered for a
// decode round-trip they must go on the decompiler/ghidra registry only.
// ---------------------------------------------------------------------------

/// Marshaling element `<iop>` (C++ `ELEM_IOP`, `op.cc`, id 113).
pub const ELEM_IOP: ElementId = ElementId::new("iop", 113);
/// Marshaling element `<ast>` (C++ `ELEM_AST`, `funcdata.cc`, id 115).
pub const ELEM_AST: ElementId = ElementId::new("ast", 115);
/// Marshaling element `<highlist>` (C++ `ELEM_HIGHLIST`, `funcdata.cc`, id 117).
pub const ELEM_HIGHLIST: ElementId = ElementId::new("highlist", 117);
/// Marshaling element `<jumptablelist>` (C++ `ELEM_JUMPTABLELIST`,
/// `funcdata.cc`, id 118).
pub const ELEM_JUMPTABLELIST: ElementId = ElementId::new("jumptablelist", 118);
/// Marshaling element `<function>` (C++ `ELEM_FUNCTION`, `funcdata.cc`, id 116).
///
/// Re-exported by `p9_emit/prettyprint.rs`'s `ids` module (the markup
/// `<function>` document uses the same numeric id), replacing the placeholder
/// that anticipated this port.
pub const ELEM_FUNCTION: ElementId = ElementId::new("function", 116);
/// Marshaling element `<varnodes>` (C++ `ELEM_VARNODES`, `funcdata.cc`, id 119).
pub const ELEM_VARNODES: ElementId = ElementId::new("varnodes", 119);

/// Marshaling attribute "addrtied" (C++ `ATTRIB_ADDRTIED`, `funcdata.cc`, id 30).
pub const ATTRIB_ADDRTIED: AttributeId = AttributeId::new("addrtied", 30);
/// Marshaling attribute "grp" (C++ `ATTRIB_GRP`, `funcdata.cc`, id 31).
pub const ATTRIB_GRP: AttributeId = AttributeId::new("grp", 31);
/// Marshaling attribute "input" (C++ `ATTRIB_INPUT`, `funcdata.cc`, id 32).
pub const ATTRIB_INPUT: AttributeId = AttributeId::new("input", 32);
/// Marshaling attribute "persists" (C++ `ATTRIB_PERSISTS`, `funcdata.cc`, id 33).
pub const ATTRIB_PERSISTS: AttributeId = AttributeId::new("persists", 33);
/// Marshaling attribute "unaff" (C++ `ATTRIB_UNAFF`, `funcdata.cc`, id 34).
pub const ATTRIB_UNAFF: AttributeId = AttributeId::new("unaff", 34);
/// Marshaling attribute "volatile" (C++ `ATTRIB_VOLATILE`, `database.cc`, id 65).
pub const ATTRIB_VOLATILE: AttributeId = AttributeId::new("volatile", 65);
/// Marshaling attribute "nocode" (C++ `ATTRIB_NOCODE`, `funcdata.cc`, id 84).
pub const ATTRIB_NOCODE: AttributeId = AttributeId::new("nocode", 84);

impl Funcdata {
    /// C++ `Funcdata::encode(Encoder&,uint8 id,bool savetree)` (`funcdata.cc:734`).
    ///
    /// Emits the `<function>` document consumed by Ghidra's `HighFunction.decode`,
    /// in the upstream child order: baseaddr `<addr>` → `<localdb>` → (savetree)
    /// `<ast>` → (savetree + high-level on) `<highlist>` → `<jumptablelist>` →
    /// `<prototype>`.  `<override>` (Java-skipped) stays deferred.
    ///
    /// Takes `&mut self` (the C++ method is const): the Phase-4 encode runs the
    /// [`Funcdata::unlace_link_high_symbols`] linking pass — the encode-time
    /// stand-in for C++ `ActionNameVars::linkSymbols`, which upstream ran during
    /// analysis — and the HighVariable reads re-derive dirty state.
    pub fn encode(&mut self, enc: &mut dyn Encoder, id: u64, savetree: bool) -> UnlaceResult<()> {
        enc.open_element(&ELEM_FUNCTION);
        if id != 0 {
            enc.write_unsigned_integer(&ATTRIB_ID, id);
        }
        enc.write_string(&ATTRIB_NAME, self.get_name().as_bytes());
        enc.write_signed_integer(&ATTRIB_SIZE, self.get_size() as i64);
        if self.has_no_code() {
            enc.write_bool(&ATTRIB_NOCODE, true);
        }
        self.get_address().encode(enc)?;
        // The symbol-link pass must run BEFORE <localdb> so linked-in symbols
        // are part of the encoded scope (the ids <highlist> symrefs resolve
        // against — Java throws "HighLocal is missing symbol" otherwise).
        // It is idempotent: the ghidra-mode driver runs it earlier still, so
        // the printed markup's `<vardecl symref>` can carry the same real ids.
        if savetree && self.is_high_on() {
            self.unlace_link_high_symbols();
        }
        // localmap->encodeRecursive(encoder,false): the <localdb> scope.  The
        // unlace ScopeLocal owns a private single-scope database — no child
        // scopes to recurse into.
        let mut encodable: std::collections::BTreeSet<u64> = std::collections::BTreeSet::new();
        if !self.has_no_code() {
            crate::p0_knowledge::wrappedstackmap::wire_storage(self);
            let wire_symbols = std::mem::take(&mut self.unlace_wire_symbols);
            if let Some(lm) = self.get_scope_local() {
                lm.encode_with_storage(&wire_symbols, &self.unlace_wrapped_wire_storage, enc)?;
                encodable = lm.encodable_symbol_ids();
                // Only the wire symbols the encode above actually WROTE (the
                // `is_encodable` filter): a reference to a skipped one is the
                // orphan-symref hard-throw the filter exists to avoid.  And
                // when `has_no_code()` this whole block is skipped, so
                // `encodable` stays EMPTY and every symref — wire ids included
                // — is withheld: there is no `<localdb>` to resolve against.
                encodable.extend(
                    wire_symbols
                        .iter()
                        .filter(|w| w.is_encodable())
                        .map(|w| w.id),
                );
            }
            self.unlace_wire_symbols = wire_symbols;
        }
        if savetree {
            self.encode_tree(enc)?;
            self.encode_high(enc, &encodable)?;
        }
        self.encode_jump_table(enc)?;
        // funcp.encode: "Must be saved after database" (funcdata.cc:758).  A
        // store-less proto (a partial/jump-table-recovery clone) has nothing
        // encodable; `<prototype>` is optional to HighFunction.decode.
        if self.get_func_proto().has_store() {
            self.get_func_proto().encode(enc)?;
        }
        // v1.1: localoverride.encode(encoder,name)  (<override>) — Java skips it.
        enc.close_element(&ELEM_FUNCTION);
        Ok(())
    }

    /// C++ `Funcdata::encodeJumpTable(Encoder&)` (`funcdata.cc:625-635`): the
    /// `<jumptablelist>` of recovered `JumpTable`s, omitted when there are none.
    /// Emitted independently of `savetree` — the switch analyzer requests
    /// `notree`+`noc`+`jumpload` and consumes ONLY this list.
    fn encode_jump_table(&self, enc: &mut dyn Encoder) -> UnlaceResult<()> {
        let tables = self.jumpvec_slice();
        if tables.is_empty() {
            return Ok(());
        }
        enc.open_element(&ELEM_JUMPTABLELIST);
        for jt in tables {
            // C++ JumpTable::encode throws on an unrecovered table; a table
            // that survived to the encode without recovery must not kill the
            // whole response (unlace divergence: skip it — Java drops empty
            // tables anyway via isEmpty()).
            if !jt.is_recovered() {
                continue;
            }
            jt.encode(enc)?;
        }
        enc.close_element(&ELEM_JUMPTABLELIST);
        Ok(())
    }

    /// C++ `Funcdata::encodeHigh(Encoder&)` (`funcdata.cc:658-683`): one
    /// `<high>` per distinct HighVariable of any non-annotation Varnode, in
    /// varnode-loc first-appearance order.  Emitted only when the high-level
    /// (HighVariable) analysis ran.  `offsets` is the per-high wire
    /// `offset` attribute computed by [`Funcdata::unlace_link_high_symbols`]
    /// (C++ `HighVariable::symboloffset`; absent = -1 = whole symbol).
    fn encode_high(
        &mut self,
        enc: &mut dyn Encoder,
        encodable_symbols: &std::collections::BTreeSet<u64>,
    ) -> UnlaceResult<()> {
        use crate::variable::{ATTRIB_CLASS, ATTRIB_REPREF, ATTRIB_SYMREF, ELEM_HIGH};
        if !self.is_high_on() {
            return Ok(());
        }
        // Distinct highs in first-appearance loc order (the C++ mark/clearMark
        // dedup, realized as an ordered set — no second clearing pass needed).
        let vns: Vec<VarnodeId> = self.vbank().iter_loc().collect();
        let mut seen: std::collections::BTreeSet<crate::context::HighVariableId> =
            std::collections::BTreeSet::new();
        let mut order: Vec<crate::context::HighVariableId> = Vec::new();
        for vn in &vns {
            let v = self.vbank().get(*vn).expect("encode_high: stale vn");
            if v.is_annotation() {
                continue;
            }
            if let Some(h) = v.get_high()
                && seen.insert(h) {
                    order.push(h);
                }
        }
        enc.open_element(&ELEM_HIGHLIST);
        for high in order {
            // Phase 1: the &mut HighVariable reads (predicates / type / name
            // representative / instances) under the field-split borrow.
            let (rep, spacebase, implied, persist, addrtied, constant, typelock, dtype, insts) =
                self.with_high_split(|hb, ctx| {
                    let h = hb.get_mut(high).expect("encode_high: stale high");
                    let rep = h.get_name_representative(ctx);
                    let spacebase = h.is_spacebase(ctx);
                    let implied = h.is_implied(ctx);
                    let persist = h.is_persist(ctx);
                    let addrtied = h.is_addr_tied(ctx);
                    let constant = h.is_constant(ctx);
                    let typelock = h.is_type_lock(ctx, None);
                    let dtype = h.get_type(ctx, None);
                    let n = h.num_instances();
                    let insts: Vec<VarnodeId> = (0..n).map(|i| h.get_instance(i)).collect();
                    (
                        rep, spacebase, implied, persist, addrtied, constant, typelock, dtype,
                        insts,
                    )
                });
            let rep_index = self
                .vbank()
                .get(rep)
                .expect("encode_high: stale representative")
                .get_create_index() as u64;
            // Phase 2: the symbol linkage (the C++ `symbol`/`symboloffset`
            // members).  Locals/params resolve through the attached local
            // SymbolId; globals resolve their REAL id through the global-scope
            // snapshot (ghidra-mode: the host DB id delivered with the mapped
            // symbol; 0 = unknown ⇒ symref is omitted, never fabricated).
            let attached = self.high_bank().get(high).and_then(|h| {
                h.unlace_link_symbol()
                    .or_else(|| h.unlace_dynamic_symbol())
                    .or_else(|| h.unlace_equate_symbol())
            });
            // A wire-only symbol (the analysis left the high symbol-less) is
            // referenced by its reserved id and is never a parameter.
            let wire = self
                .unlace_wire_symbol_for_high
                .get(&high)
                .and_then(|i| self.unlace_wire_symbols.get(*i))
                .map(|w| w.id);
            let (local_symref, category) = match (attached, wire, self.get_scope_local()) {
                // The wire arm takes the SAME encodable gate as the attached
                // one: an id that was filtered out of `<localdb>` (or a whole
                // `<localdb>` that a `has_no_code()` function never emitted) is
                // the "HighLocal is missing symbol" hard-throw, which discards
                // the entire result.  Withholding it drops the class to
                // `"other"`, which Java decodes happily.
                (None, Some(id), _) if encodable_symbols.contains(&id) => {
                    (Some(id), crate::database::symbol_category::NO_CATEGORY)
                }
                (Some(sid), _, Some(lm)) => {
                    let (id, cat) = lm.symbol_id_and_category(sid);
                    // Only reference a symbol the `<localdb>` actually
                    // encoded: an orphan `<high class=local|param symref>` is
                    // a Java hard-throw that discards the entire result.
                    if encodable_symbols.contains(&id) {
                        (Some(id), cat)
                    } else {
                        (None, crate::database::symbol_category::NO_CATEGORY)
                    }
                }
                _ => (None, crate::database::symbol_category::NO_CATEGORY),
            };
            let is_global_class = persist && addrtied;
            // class per variable.cc:839-855 (order load-bearing).
            let class: &str = if spacebase || implied {
                "other"
            } else if is_global_class {
                "global"
            } else if constant {
                "constant"
            } else if !persist && local_symref.is_some() {
                if category == crate::database::symbol_category::FUNCTION_PARAMETER {
                    "param"
                } else {
                    "local"
                }
            } else {
                "other"
            };
            enc.open_element(&ELEM_HIGH);
            enc.write_unsigned_integer(&ATTRIB_REPREF, rep_index);
            enc.write_string(&ATTRIB_CLASS, class.as_bytes());
            if typelock {
                enc.write_bool(&unlace_base::marshal::ATTRIB_TYPELOCK, true);
            }
            let mut symbol_offset: i64 = -1;
            let symref: Option<u64> = if is_global_class {
                // The global-scope symbol id + partial-offset resolution.
                let rep_vn = self.vbank().get(rep).expect("encode_high: stale rep");
                let rep_addr = rep_vn.get_addr().clone();
                let rep_size = rep_vn.get_size();
                match self.get_arch().query_container_global(
                    &rep_addr,
                    1,
                    &unlace_base::address::Address::new_invalid(),
                ) {
                    Some(gc) if gc.symbol_id != 0 => {
                        let delta = rep_addr
                            .get_offset()
                            .wrapping_sub(gc.entry_addr.get_offset())
                            as i64;
                        if delta != 0 || gc.symbol_offset != 0 {
                            symbol_offset = delta + gc.symbol_offset as i64;
                        }
                        let _ = rep_size;
                        Some(gc.symbol_id)
                    }
                    _ => None,
                }
            } else {
                // C++ `HighVariable::symboloffset` — written only when >= 0
                // (a PARTIAL symbol match).  The naming pass records it when
                // it binds a high into a composite/parameter entry.
                let off = self
                    .high_bank()
                    .get(high)
                    .map(|h| h.get_symbol_offset())
                    .unwrap_or(-1);
                if off >= 0 {
                    symbol_offset = off as i64;
                }
                local_symref
            };
            if let Some(id) = symref {
                enc.write_unsigned_integer(&ATTRIB_SYMREF, id);
                if symbol_offset >= 0 {
                    enc.write_signed_integer(&unlace_base::marshal::ATTRIB_OFFSET, symbol_offset);
                }
            }
            dtype.encode_ref(enc)?;
            for ivn in insts {
                let create = self
                    .vbank()
                    .get(ivn)
                    .expect("encode_high: stale instance")
                    .get_create_index();
                self.encode_bare_ref(enc, create);
            }
            enc.close_element(&ELEM_HIGH);
        }
        enc.close_element(&ELEM_HIGHLIST);
        Ok(())
    }

    /// The Phase-4 encode-time symbol-link pass: the unlace stand-in for C++
    /// `ActionNameVars::linkSymbols` → `Funcdata::linkSymbol`
    /// (`funcdata_varnode.cc:1189-1216`), which upstream runs during analysis so
    /// every named HighVariable carries a localmap `Symbol` by encode time.
    /// unlace's naming pass binds plain name strings (`unlace_name`) instead, so the
    /// `Symbol` objects the `<localdb>`/`<highlist>` wire contract needs are
    /// materialized here, on demand, just before encoding:
    ///
    ///   * a named, non-persist, non-constant high whose name-representative
    ///     storage is covered by an existing localmap entry (a parameter from
    ///     `link_proto_params`, a restructured stack local) is ATTACHED to that
    ///     entry's Symbol;
    ///   * a named high with no covering entry gets a fresh mapped Symbol at its
    ///     representative storage (the C++ `localmap->addSymbol("",...)` branch,
    ///     with the high's name instead of a `$$undef` placeholder);
    ///   * equate/dynamic symbols attached during analysis are kept.
    ///
    /// Returns the per-high wire `offset` attribute (C++
    /// `HighVariable::symboloffset`; the map carries only offsets >= 0).  The
    /// pass never touches `HighVariable::symbol_offset` (a printer input) — the
    /// encode is not allowed to perturb the rendered C.
    pub fn unlace_link_high_symbols(&mut self) {
        use unlace_base::address::Address;
        if !self.is_high_on() || self.get_scope_local().is_none() {
            return;
        }
        let vns: Vec<VarnodeId> = self.vbank().iter_loc().collect();
        let mut seen: std::collections::BTreeSet<crate::context::HighVariableId> =
            std::collections::BTreeSet::new();
        for vn in vns {
            let v = match self.vbank().get(vn) {
                Some(v) => v,
                None => continue,
            };
            if v.is_annotation() {
                continue;
            }
            let high = match v.get_high() {
                Some(h) => h,
                None => continue,
            };
            if !seen.insert(high) {
                continue;
            }
            // Symbol already attached — during analysis (equate / dynamic) or
            // by the naming pass's recorded bind decision
            // (`unlace_link_symbol`), which INCLUDES a previous run of this
            // idempotent pass.
            let (has_symbol, named) = match self.high_bank().get(high) {
                Some(h) => (
                    h.unlace_dynamic_symbol()
                        .or_else(|| h.unlace_equate_symbol())
                        .or_else(|| h.unlace_link_symbol())
                        .is_some(),
                    h.unlace_name().is_some(),
                ),
                None => continue,
            };
            // Idempotent: a previous run of this pass already gave the high a
            // wire symbol (the ghidra driver runs it before the markup, the
            // encode runs it again).
            if has_symbol || !named || self.unlace_wire_symbol_for_high.contains_key(&high) {
                continue;
            }
            let (rep, spacebase, implied, persist, constant, dtype) =
                self.with_high_split(|hb, ctx| {
                    let h = hb.get_mut(high).expect("link_high_symbols: stale high");
                    let rep = h.get_name_representative(ctx);
                    (
                        rep,
                        h.is_spacebase(ctx),
                        h.is_implied(ctx),
                        h.is_persist(ctx),
                        h.is_constant(ctx),
                        h.get_type(ctx, None),
                    )
                });
            // Only local (non-persist) nameable storage acquires a Symbol —
            // the C++ `if (!vn->isPersist())` create guard; constants take the
            // equate path, spacebase/implied never carry symbols.
            if persist || constant || spacebase || implied {
                continue;
            }
            let rep_vn = match self.vbank().get(rep) {
                Some(v) => v,
                None => continue,
            };
            if rep_vn.get_space().get_type() == spacetype::IPTR_CONSTANT
                || rep_vn.get_space().get_type() == spacetype::IPTR_IOP
            {
                continue;
            }
            let rep_addr = rep_vn.get_addr().clone();
            let rep_addrtied = rep_vn.is_addr_tied();
            let usepoint = self.vn_use_point(rep);
            // The naming pass left this high symbol-less.  There are exactly
            // two reasons, and they need OPPOSITE treatment:
            //
            //  * no Symbol covers the storage at all — the C++ `linkSymbol`
            //    `addSymbol("",...)` branch: a register/unique/stack temp the
            //    naming pass named `vN`.  Give it a MAPPED wire symbol at that
            //    storage.
            //  * a Symbol DOES cover it but the naming pass rejected the bind
            //    as a storage CONFLICT (the narrower addr-tied return over a
            //    wider scalar parameter, the float8 lane over a float4 param —
            //    `coreaction_cleanup.rs`'s conflict scan).  C++ answers with
            //    `buildDynamicSymbol` — a data-flow-HASHED symbol of its own.
            //    Re-deriving the container binding here would hand the high
            //    the PARAMETER's symbol id, so a rename from this variable's
            //    token would rename the parameter.  Never do that: hash it, or
            //    (no unique hash) leave it symbol-less — it then encodes as
            //    `<high class="other">` with no `symref`, which Java tolerates.
            //
            // Both produce a WIRE-ONLY symbol ([`WireSymbol`]): the analysis
            // scope is never touched, so this pass cannot change the emitted C
            // no matter when it runs (the ghidra driver runs it BEFORE the
            // markup so `<vardecl symref>` can carry the real ids).
            let covered = self
                .get_scope_local()
                .and_then(|lm| lm.container_symbol_link(&rep_addr, &usepoint))
                .is_some();
            let name = self
                .high_bank()
                .get(high)
                .and_then(|h| h.unlace_name())
                .expect("named checked above")
                .to_string();
            // A 0-sized (void/undefined-empty) data-type takes the hashed shape
            // too, whatever the coverage: Java's `MappedEntry.decode` throws
            // "Invalid symbol 0-sized data-type" and discards the whole result,
            // while `DynamicEntry.decode` has no size check at all.  (The
            // `is_encodable` filter on the encode is the backstop if the hash
            // also fails.)
            let hash = if covered || dtype.get_size() < 1 {
                // The collision budget is pinned at the UPSTREAM 8 on the wire
                // path: Java computes its own hash for the same variable with a
                // hardcoded `maxduplicates = 8` (`DynamicHash.java:440`), and a
                // hash the two sides disagree on cannot round-trip a rename.
                // Deliberately NOT unlace's own budget
                // (`dynamichashmax::MAX_DUPLICATES`): the wire value must
                // match what Java recomputes.
                match crate::dynamic::dynamic_unique_hash(rep, 8, self) {
                    Ok((h, _)) if h != 0 => h,
                    _ => continue, // no unique hash: stay symbol-less
                }
            } else {
                0
            };
            let Some(id) = self
                .get_scope_local_mut()
                .map(|lm| lm.reserve_internal_symbol_id())
            else {
                continue;
            };
            let idx = self.unlace_wire_symbols.len();
            self.unlace_wire_symbols.push(crate::database::WireSymbol {
                id,
                name,
                dtype,
                addr: if hash != 0 {
                    Address::new_invalid()
                } else {
                    rep_addr
                },
                hash,
                // A mapped addr-tied storage is valid function-wide (empty
                // uselimit); everything else is scoped to its use point, which
                // is also the address a DYNAMIC entry hashes at.
                usepoint: if hash == 0 && rep_addrtied {
                    Address::new_invalid()
                } else {
                    usepoint
                },
            });
            self.unlace_wire_symbol_for_high.insert(high, idx);
        }
    }

    /// C++ `Funcdata::encodeTree(Encoder&)` (`funcdata.cc:686`).
    ///
    /// `<ast>` = `<varnodes>` (every non-`IPTR_IOP` Varnode) + per basic block a
    /// `<block index>` (cover + ops) + per in-edged block a `<blockedge index>`.
    fn encode_tree(&self, enc: &mut dyn Encoder) -> UnlaceResult<()> {
        enc.open_element(&ELEM_AST);

        // <varnodes>: all Varnodes except the iop space (funcdata.cc:695).  The
        // iop-space annotation Varnode (an INDIRECT's second input) is referenced
        // instead from inside its <op> as <iop value=time/>, never as an <addr>.
        enc.open_element(&ELEM_VARNODES);
        for vn in self.vbank().iter_loc() {
            let v = self
                .vbank()
                .get(vn)
                .expect("encode_tree: stale loc Varnode");
            if v.get_space().get_type() == spacetype::IPTR_IOP {
                continue;
            }
            self.encode_varnode(enc, vn)?;
        }
        enc.close_element(&ELEM_VARNODES);

        let n = self.bblocks_get_size();
        // Per basic block: <block index> = cover <rangelist> + each <op>.
        for i in 0..n {
            let bl = self.bblocks_get_block(i);
            enc.open_element(&ELEM_BLOCK);
            // The block's OWN index (Java places blocks by it), not the loop
            // counter `i` — they can differ.
            enc.write_signed_integer(
                &ATTRIB_INDEX,
                self.bblocks_ref().block(bl).get_index() as i64,
            );
            // BlockBasic::encodeBody: the cover <rangelist> (mandatory — emitted
            // even when empty).
            self.bblocks_ref().encode_body(bl, enc);
            for op in self.bb_ops(bl) {
                self.encode_op(enc, op)?;
            }
            enc.close_element(&ELEM_BLOCK);
        }
        // Per block with in-edges: <blockedge index> = each in <edge>.
        for i in 0..n {
            let bl = self.bblocks_get_block(i);
            if self.bblocks_ref().block(bl).size_in() != 0 {
                enc.open_element(&ELEM_BLOCKEDGE);
                enc.write_signed_integer(
                    &ATTRIB_INDEX,
                    self.bblocks_ref().block(bl).get_index() as i64,
                );
                self.bblocks_ref().encode_edges(bl, enc);
                enc.close_element(&ELEM_BLOCKEDGE);
            }
        }

        enc.close_element(&ELEM_AST);
        Ok(())
    }

    /// C++ `Varnode::encode(Encoder&)` (`varnode.cc:1201`).
    ///
    /// The **full** `<addr>` form under `<varnodes>` carries space, offset, size,
    /// ref, and the guarded flag attributes.  Do NOT use `Address::encode_sized`
    /// — it closes the element before ref/flags can be written.
    fn encode_varnode(&self, enc: &mut dyn Encoder, vn: VarnodeId) -> UnlaceResult<()> {
        let v = self.vbank().get(vn).expect("encode_varnode: stale Varnode");
        enc.open_element(&ELEM_ADDR);
        v.get_space()
            .encode_attributes_sized(enc, v.get_offset(), v.get_size())?;
        enc.write_unsigned_integer(&ATTRIB_REF, v.get_create_index() as u64);
        let mergegroup = v.get_merge_group();
        if mergegroup != 0 {
            enc.write_signed_integer(&ATTRIB_GRP, mergegroup as i64);
        }
        // Flag order matches varnode.cc exactly.
        if v.is_persist() {
            enc.write_bool(&ATTRIB_PERSISTS, true);
        }
        if v.is_addr_tied() {
            enc.write_bool(&ATTRIB_ADDRTIED, true);
        }
        if v.is_unaffected() {
            enc.write_bool(&ATTRIB_UNAFF, true);
        }
        if v.is_input() {
            enc.write_bool(&ATTRIB_INPUT, true);
        }
        if v.is_volatile() {
            enc.write_bool(&ATTRIB_VOLATILE, true);
        }
        enc.close_element(&ELEM_ADDR);
        Ok(())
    }

    /// C++ `PcodeOp::encode(Encoder&)` (`op.cc:412`).
    ///
    /// `<op code>` + `<seqnum>` + the output (`<addr ref>` or `<void>`) + each
    /// input by the four-way rule (op.cc:426-462).
    fn encode_op(&self, enc: &mut dyn Encoder, op: OpId) -> UnlaceResult<()> {
        let o = self.obank().get(op).expect("encode_op: stale op");
        let code = o.code();
        enc.open_element(&ELEM_OP);
        enc.write_signed_integer(&ATTRIB_CODE, code as i64);
        o.get_seq_num().encode(enc)?;

        // Output: <addr ref/> (bare back-reference) or <void/>.
        match o.get_out() {
            Some(out) => {
                let create = self
                    .vbank()
                    .get(out)
                    .expect("encode_op: stale output")
                    .get_create_index();
                self.encode_bare_ref(enc, create);
            }
            None => self.encode_void(enc),
        }

        // Inputs — the four-way rule.
        let ninput = o.num_input();
        for i in 0..ninput {
            match o.get_in(i) {
                None => self.encode_void(enc),
                Some(invn) => {
                    let iv = self.vbank().get(invn).expect("encode_op: stale input");
                    let sptype = iv.get_space().get_type();
                    if sptype == spacetype::IPTR_IOP {
                        // INDIRECT's iop input: <iop value=indop.getTime()/>.  The
                        // iop offset encodes the guarded op (op_iop_encode); resolve
                        // it back and emit its time.  Any other iop input → <void/>.
                        if i == 1 && code == OpCode::CPUI_INDIRECT {
                            let indop = crate::funcdata_varnode::op_iop_decode(iv.get_offset());
                            let time = self
                                .obank()
                                .get(indop)
                                .expect("encode_op: stale INDIRECT iop target")
                                .get_time();
                            enc.open_element(&ELEM_IOP);
                            enc.write_unsigned_integer(&ATTRIB_VALUE, time as u64);
                            enc.close_element(&ELEM_IOP);
                        } else {
                            self.encode_void(enc);
                        }
                    } else if sptype == spacetype::IPTR_CONSTANT
                        && i == 0
                        && (code == OpCode::CPUI_STORE || code == OpCode::CPUI_LOAD)
                    {
                        // LOAD/STORE space operand: <spaceid name=space/>.  The
                        // constant's offset is the manager index of the space it
                        // encodes (C++ getSpaceFromConst).
                        let idx = iv.get_offset() as i32;
                        let spc = self
                            .get_arch()
                            .manage()
                            .get_space(idx)
                            .expect("encode_op: LOAD/STORE space operand out of range");
                        enc.open_element(&ELEM_SPACEID);
                        enc.write_space(&ATTRIB_NAME, spc);
                        enc.close_element(&ELEM_SPACEID);
                    } else {
                        // Ordinary input (including a non-space constant): a bare
                        // <addr ref/> back-reference.
                        self.encode_bare_ref(enc, iv.get_create_index());
                    }
                }
            }
        }

        enc.close_element(&ELEM_OP);
        Ok(())
    }

    /// A bare back-reference `<addr ref=createIndex/>` (op.cc output/input form) —
    /// only `ATTRIB_REF`, no space/offset.  `Varnode.decode` short-circuits on a
    /// known ref via `factory.getRef(ref)`, so the full space form appears only
    /// under `<varnodes>`.
    fn encode_bare_ref(&self, enc: &mut dyn Encoder, create_index: u32) {
        enc.open_element(&ELEM_ADDR);
        enc.write_unsigned_integer(&ATTRIB_REF, create_index as u64);
        enc.close_element(&ELEM_ADDR);
    }

    /// An empty `<void/>` element (a null / non-referable op slot).
    fn encode_void(&self, enc: &mut dyn Encoder) {
        enc.open_element(&ELEM_VOID);
        enc.close_element(&ELEM_VOID);
    }
}

#[cfg(test)]
mod tests;
