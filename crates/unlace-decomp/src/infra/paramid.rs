//! Port of `decompiler/cpp/paramid.{cc,hh}` — the standalone parameter-ID
//! pipeline variant (`ParamMeasure` / `ParamIDAnalysis`, item `w8-sig-pack`).
//!
//! `ParamIDAnalysis` backs the `paramid` pipeline variant: it ranks how strongly
//! each candidate input/output storage location behaves like a real parameter or
//! return by walking the data-flow graph forward (inputs) or backward (outputs)
//! from a base Varnode and folding the encountered op kinds into a [`ParamRank`].
//!
//! # Faithfulness
//!
//! The walk is transcribed op-for-op from `paramid.cc` (the
//! `BRANCH`/`CBRANCH`/`CALL`/`CALLOTHER`/`RETURN`/`INDIRECT`/`MULTIEQUAL`/default
//! dispatch and the `MAXDEPTH`/terminal-rank cutoffs).  The IR is the W3 arena
//! model (ADR 0001): the C++ `Varnode *` / `PcodeOp *` become arena keys
//! dereferenced through `&Funcdata`.  Loop-edge avoidance on `MULTIEQUAL` uses the
//! op's parent block `isLoopIn` (the same edge the C++ reads through
//! `op->getParent()->isLoopIn(slot)`).
//!
//! # Completeness
//!
//! Fully ported (Phase 4 unstubbed the marshal): both constructor paths — the
//! `justproto` prototype walk over the real [`crate::fspec::FuncProto`] on
//! `Funcdata::funcp` and the input-Varnode listing — plus
//! [`ParamMeasure::encode`] / [`ParamIDAnalysis::encode`] over
//! `Datatype::encode_ref`, producing the `<parammeasures>` document the
//! `paramid` action answers (Java `HighParamID.decode`; the `<rank>` child is
//! REQUIRED by `ParamMeasure.decode`, so `moredetail` should stay `true` on
//! the wire path, matching both upstream ghidra_process call sites).

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::marshal::ElementId;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use crate::context::{OpId, VarnodeId};
use crate::dtype::Datatype;
use crate::funcdata::Funcdata;
use crate::varnode::varnode_flags;

// ===========================================================================
// Marshaling identifiers (paramid.cc:20-22)
// ===========================================================================

/// Marshaling element `<parammeasures>` (paramid.cc:20).
pub const ELEM_PARAMMEASURES: ElementId = ElementId::new("parammeasures", 106);
/// Marshaling element `<proto>` (paramid.cc:21).
pub const ELEM_PROTO: ElementId = ElementId::new("proto", 107);
/// Marshaling element `<rank>` (paramid.cc:22).
pub const ELEM_RANK: ElementId = ElementId::new("rank", 108);

// ===========================================================================
// ParamMeasure enums (paramid.hh:27-51)
// ===========================================================================

/// Whether a measure tracks an input or an output location (C++
/// `ParamMeasure::ParamIDIO`, paramid.hh:29-32).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ParamIDIO {
    /// An input location (`INPUT = 0`).
    Input,
    /// An output location (`OUTPUT = 1`).
    Output,
}

/// The rank of a parameter/return measure (C++ `ParamMeasure::ParamRank`,
/// paramid.hh:33-46).
///
/// The C++ enum gives several names the same integer value (`BESTRANK` ==
/// `DIRECTWRITEWITHOUTREAD` == 1, `DIRECTREAD` == `DIRECTWRITEWITHREAD` == 2,
/// etc.); they are kept as associated constants below so `updaterank`'s
/// `min`/`max` arithmetic and the terminal-rank comparisons transcribe exactly.
/// The measure stores the rank as the bare integer.
pub mod param_rank {
    /// Best possible rank (`BESTRANK = 1`).
    pub const BESTRANK: i32 = 1;
    /// Output: direct write without a subsequent read (`DIRECTWRITEWITHOUTREAD = 1`).
    pub const DIRECTWRITEWITHOUTREAD: i32 = 1;
    /// Input: a direct read (`DIRECTREAD = 2`).  Must equal `DIRECTWRITEWITHREAD`
    /// so a forward walk used inside a backward walk works.
    pub const DIRECTREAD: i32 = 2;
    /// Output: direct write with a read (`DIRECTWRITEWITHREAD = 2`).
    pub const DIRECTWRITEWITHREAD: i32 = 2;
    /// Output: direct write with an unknown read (`DIRECTWRITEUNKNOWNREAD = 3`).
    #[allow(dead_code)]
    pub const DIRECTWRITEUNKNOWNREAD: i32 = 3;
    /// Input: passed to a sub-function (`SUBFNPARAM = 4`).
    pub const SUBFNPARAM: i32 = 4;
    /// Output: this function's parameter (`THISFNPARAM = 4`).
    pub const THISFNPARAM: i32 = 4;
    /// Output: a sub-function's return (`SUBFNRETURN = 5`).
    pub const SUBFNRETURN: i32 = 5;
    /// Input: this function's return (`THISFNRETURN = 5`).
    pub const THISFNRETURN: i32 = 5;
    /// Input or output: through an INDIRECT (`INDIRECT = 6`).
    pub const INDIRECT: i32 = 6;
    /// Worst possible rank (`WORSTRANK = 7`).
    pub const WORSTRANK: i32 = 7;
}

/// Maximum data-flow walk depth (C++ `#define MAXDEPTH 10`, paramid.cc:36).
const MAXDEPTH: i32 = 10;

/// Per-walk transient state (C++ `ParamMeasure::WalkState`, paramid.hh:47-51).
struct WalkState {
    /// Whether we are seeking the best (min) or worst (max) rank.
    best: bool,
    /// Current recursion depth.
    depth: i32,
    /// The rank at which the walk short-circuits.
    terminalrank: i32,
}

// ===========================================================================
// ParamMeasure (paramid.hh:27-68, paramid.cc:37-184)
// ===========================================================================

/// A measure of how strongly a storage location behaves like a parameter or a
/// return value (C++ `ParamMeasure`, paramid.hh:27-68).
pub struct ParamMeasure {
    /// Storage location (space/offset/size) (C++ `vndata`).
    vndata: VarnodeData,
    /// Data-type of the location (`None` for the C++ null) (C++ `vntype`).
    vntype: Option<Rc<Datatype>>,
    /// The computed rank (C++ `rank`).
    rank: i32,
    /// Input or output (C++ `io`).
    io: ParamIDIO,
    /// Number of sub-function calls encountered (C++ `numcalls`).
    numcalls: i32,
}

impl ParamMeasure {
    /// Construct a measure for a given storage location (C++
    /// `ParamMeasure::ParamMeasure`, paramid.hh:62-63).
    pub fn new(
        addr: &Address,
        sz: i32,
        dt: Option<Rc<Datatype>>,
        io_in: ParamIDIO,
    ) -> ParamMeasure {
        ParamMeasure {
            vndata: VarnodeData {
                space: addr.get_space().cloned(),
                offset: addr.get_offset(),
                size: sz as u32,
            },
            vntype: dt,
            io: io_in,
            rank: param_rank::WORSTRANK,
            numcalls: 0,
        }
    }

    /// Get the computed measure (C++ `getMeasure`, paramid.hh:67).
    pub fn get_measure(&self) -> i32 {
        self.rank
    }

    /// Update the rank, taking the min (best) or max (worst) (C++
    /// `updaterank`, paramid.hh:60).
    fn updaterank(&mut self, rank_in: i32, best: bool) {
        self.rank = if best {
            self.rank.min(rank_in)
        } else {
            self.rank.max(rank_in)
        };
    }

    /// Calculate the rank by walking the data-flow from a base Varnode (C++
    /// `ParamMeasure::calculateRank`, paramid.cc:141-159).
    ///
    /// `best` selects min/max accumulation; `basevn` is the starting Varnode;
    /// `ignoreop` is an op to skip on the first hop (the op the caller arrived
    /// from).
    pub fn calculate_rank(
        &mut self,
        fd: &Funcdata,
        best: bool,
        basevn: VarnodeId,
        ignoreop: Option<OpId>,
    ) {
        let mut state = WalkState {
            best,
            depth: 0,
            terminalrank: 0,
        };
        if best {
            self.rank = param_rank::WORSTRANK;
            state.terminalrank = if self.io == ParamIDIO::Input {
                param_rank::DIRECTREAD
            } else {
                param_rank::DIRECTWRITEWITHOUTREAD
            };
        } else {
            self.rank = param_rank::BESTRANK;
            state.terminalrank = param_rank::INDIRECT;
        }
        self.numcalls = 0;
        if self.io == ParamIDIO::Input {
            self.walkforward(fd, &mut state, ignoreop, basevn);
        } else {
            self.walkbackward(fd, &mut state, ignoreop, basevn);
        }
    }

    /// Walk forward through the descendants of `vn`, folding op kinds into the
    /// rank (C++ `ParamMeasure::walkforward`, paramid.cc:37-88).
    fn walkforward(
        &mut self,
        fd: &Funcdata,
        state: &mut WalkState,
        ignoreop: Option<OpId>,
        vn: VarnodeId,
    ) {
        state.depth += 1;
        if state.depth >= MAXDEPTH {
            state.depth -= 1;
            return;
        }
        // Snapshot the descend list.
        let descend = fd.descend_snapshot(vn);
        let mut iter = descend.iter();
        while self.rank != state.terminalrank {
            let op = match iter.next() {
                None => break,
                Some(&o) => o,
            };
            if Some(op) != ignoreop {
                let o = fd.obank().get(op).expect("walkforward: stale op");
                let oc = o.code();
                match oc {
                    OpCode::CPUI_BRANCH | OpCode::CPUI_BRANCHIND => {
                        if o.get_slot(vn) == 0 {
                            self.updaterank(param_rank::DIRECTREAD, state.best);
                        }
                    }
                    OpCode::CPUI_CBRANCH => {
                        if o.get_slot(vn) < 2 {
                            self.updaterank(param_rank::DIRECTREAD, state.best);
                        }
                    }
                    OpCode::CPUI_CALL | OpCode::CPUI_CALLIND => {
                        if o.get_slot(vn) == 0 {
                            self.updaterank(param_rank::DIRECTREAD, state.best);
                        } else {
                            self.numcalls += 1;
                            self.updaterank(param_rank::SUBFNPARAM, state.best);
                        }
                    }
                    OpCode::CPUI_CALLOTHER => {
                        self.updaterank(param_rank::DIRECTREAD, state.best);
                    }
                    OpCode::CPUI_RETURN => {
                        self.updaterank(param_rank::THISFNRETURN, state.best);
                    }
                    OpCode::CPUI_INDIRECT => {
                        self.updaterank(param_rank::INDIRECT, state.best);
                    }
                    OpCode::CPUI_MULTIEQUAL => {
                        // The only op that can form a loop in the graph.  Walk
                        // forward only if the path is not part of a loop.
                        let slot = o.get_slot(vn);
                        if !self.parent_is_loop_in(fd, op, slot) {
                            let out = o
                                .get_out()
                                .expect("walkforward: MULTIEQUAL getOut null (C++ UB)");
                            self.walkforward(fd, state, None, out);
                        }
                    }
                    _ => {
                        self.updaterank(param_rank::DIRECTREAD, state.best);
                    }
                }
            }
        }
        state.depth -= 1;
    }

    /// Walk backward through the definition of `vn`, folding op kinds into the
    /// rank (C++ `ParamMeasure::walkbackward`, paramid.cc:90-139).
    fn walkbackward(
        &mut self,
        fd: &Funcdata,
        state: &mut WalkState,
        ignoreop: Option<OpId>,
        vn: VarnodeId,
    ) {
        let v = fd.vbank().get(vn).expect("walkbackward: stale vn");
        if v.is_input() {
            self.updaterank(param_rank::THISFNPARAM, state.best);
            return;
        } else if !v.is_written() {
            self.updaterank(param_rank::THISFNPARAM, state.best); // TODO: not sure about this.
            return;
        }

        let opid = v.get_def().expect("walkbackward: written vn has a def");
        let o = fd.obank().get(opid).expect("walkbackward: stale op");
        let oc = o.code();
        match oc {
            OpCode::CPUI_BRANCH
            | OpCode::CPUI_BRANCHIND
            | OpCode::CPUI_CBRANCH
            | OpCode::CPUI_CALL
            | OpCode::CPUI_CALLIND => {}
            OpCode::CPUI_CALLOTHER => {
                if o.get_out().is_some() {
                    self.updaterank(param_rank::DIRECTREAD, state.best);
                }
            }
            OpCode::CPUI_RETURN => {
                self.updaterank(param_rank::SUBFNRETURN, state.best);
            }
            OpCode::CPUI_INDIRECT => {
                self.updaterank(param_rank::INDIRECT, state.best);
            }
            OpCode::CPUI_MULTIEQUAL => {
                // The only op that can form a loop in the graph.  Walk backward
                // only if the path is not part of a loop.
                let ninput = o.num_input();
                let mut slot = 0;
                while slot < ninput && self.rank != state.terminalrank {
                    if !self.parent_is_loop_in(fd, opid, slot) {
                        let inv = fd
                            .obank()
                            .get(opid)
                            .expect("walkbackward: stale op")
                            .get_in(slot)
                            .expect("walkbackward: MULTIEQUAL getIn null (C++ UB)");
                        self.walkbackward(fd, state, Some(opid), inv);
                    }
                    slot += 1;
                }
            }
            _ => {
                // Might be DIRECTWRITEWITHOUTREAD, but we do not know yet.  Try to
                // walk forward to see if there is at least one path forward (other
                // than the one we took here) without a direct read of this write.
                let vaddr = v.get_addr().clone();
                let vsize = v.get_size();
                let vtype = v.get_type().clone();
                let mut pmfw = ParamMeasure::new(&vaddr, vsize, Some(vtype), ParamIDIO::Input);
                pmfw.calculate_rank(fd, false, vn, ignoreop);
                if pmfw.get_measure() == param_rank::DIRECTREAD {
                    self.updaterank(param_rank::DIRECTWRITEWITHREAD, state.best);
                } else {
                    self.updaterank(param_rank::DIRECTWRITEWITHOUTREAD, state.best);
                }
            }
        }
    }

    /// `op->getParent()->isLoopIn(slot)` (paramid.cc:78/124).
    ///
    /// A null parent (op not yet placed in a block) cannot have a loop edge;
    /// matches the C++ where every walked op is in the placed graph.
    fn parent_is_loop_in(&self, fd: &Funcdata, op: OpId, slot: i32) -> bool {
        match fd
            .obank()
            .get(op)
            .expect("parent_is_loop_in: stale op")
            .get_parent()
        {
            None => false,
            Some(bl) => fd.bblocks_ref().block(bl).is_loop_in(slot),
        }
    }

    /// Write a plain-text description of the measure (C++
    /// `ParamMeasure::savePretty`, paramid.cc:177-184).
    pub fn save_pretty(&self, s: &mut String, _moredetail: bool) {
        let spacename = self
            .vndata
            .space
            .as_ref()
            .map(|sp| sp.get_name())
            .unwrap_or("");
        s.push_str(&format!("  Space: {spacename}\n"));
        s.push_str(&format!("  Addr: {}\n", self.vndata.offset));
        s.push_str(&format!("  Size: {}\n", self.vndata.size));
        s.push_str(&format!("  Rank: {}\n", self.rank));
    }

    /// Encode the measure under `tag` (C++ `ParamMeasure::encode`,
    /// paramid.cc:161-175): the sized `<addr>`, the type reference, and — when
    /// `moredetail` — the REQUIRED `<rank val>` child (both upstream
    /// ghidra_process call sites pass `moredetail=true`; Java's
    /// `ParamMeasure.decode` throws without it).
    pub fn encode(
        &self,
        encoder: &mut dyn unlace_base::marshal::Encoder,
        tag: &ElementId,
        moredetail: bool,
    ) -> UnlaceResult<()> {
        encoder.open_element(tag);
        encoder.open_element(&unlace_base::address::ELEM_ADDR);
        if let Some(spc) = &self.vndata.space {
            spc.encode_attributes_sized(encoder, self.vndata.offset, self.vndata.size as i32)?;
        }
        encoder.close_element(&unlace_base::address::ELEM_ADDR);
        match &self.vntype {
            Some(t) => t.encode_ref(encoder)?,
            None => {
                encoder.open_element(&unlace_base::marshal::ELEM_VOID);
                encoder.close_element(&unlace_base::marshal::ELEM_VOID);
            }
        }
        if moredetail {
            encoder.open_element(&ELEM_RANK);
            encoder.write_signed_integer(&unlace_base::marshal::ATTRIB_VAL, self.rank as i64);
            encoder.close_element(&ELEM_RANK);
        }
        encoder.close_element(tag);
        Ok(())
    }
}

// ===========================================================================
// ParamIDAnalysis (paramid.hh:70-79, paramid.cc:186-282)
// ===========================================================================

/// The standalone parameter-ID pipeline for a function (C++ `ParamIDAnalysis`,
/// paramid.hh:70-79).
///
/// Collects [`ParamMeasure`]s for the input and output locations of a function
/// and ranks each by walking the data-flow.
pub struct ParamIDAnalysis {
    /// The function's display name (cached for `savePretty`/`encode`).
    fdname: String,
    /// The function's entry address (C++ `fd->getAddress()`, for `encode`).
    fdaddr: Address,
    /// The recovered prototype's model name (C++ `getFuncProto().getModelName()`).
    model_name: String,
    /// The recovered prototype's extrapop (C++ `getFuncProto().getExtraPop()`).
    extrapop: i32,
    /// Measures for input locations (C++ `InputParamMeasures`).
    input_param_measures: Vec<ParamMeasure>,
    /// Measures for output locations (C++ `OutputParamMeasures`).
    output_param_measures: Vec<ParamMeasure>,
}

impl ParamIDAnalysis {
    /// Build the analysis for a function (C++ `ParamIDAnalysis::ParamIDAnalysis`,
    /// paramid.cc:186-235).
    ///
    /// `justproto = true` restricts collection to the recovered prototype
    /// (`numParams`/`getParam(i)`/`getOutput` + `findVarnodeInput` + the
    /// RETURN-op output scan); `justproto = false` lists the input Varnodes
    /// outside the model (the `beginDef(input)` range).
    pub fn new(fd: &Funcdata, justproto: bool) -> UnlaceResult<ParamIDAnalysis> {
        let proto = fd.get_func_proto();
        // C++ always has a model + store by analysis end; hand-built fixtures
        // may not — degrade to the "default" model spelling / no measures
        // rather than panic.
        let model_name = if proto.has_model() {
            proto.get_model_name().to_string()
        } else {
            "default".into()
        };
        let mut analysis = ParamIDAnalysis {
            fdname: fd.get_name().to_string(),
            fdaddr: fd.get_address().clone(),
            model_name,
            extrapop: proto.get_extra_pop(),
            input_param_measures: Vec::new(),
            output_param_measures: Vec::new(),
        };
        if justproto {
            // We only provide info on the recovered prototype.
            let num = if proto.has_store() {
                proto.num_params()
            } else {
                0
            };
            for i in 0..num {
                let param = match proto.get_param(i) {
                    Some(p) => p,
                    None => continue,
                };
                let addr = param.get_address();
                let size = param.get_size();
                let ty = param.get_type().cloned();
                let mut pm = ParamMeasure::new(&addr, size, ty, ParamIDIO::Input);
                if let Some(vn) = fd.find_varnode_input(size, &addr) {
                    pm.calculate_rank(fd, true, vn, None);
                }
                analysis.input_param_measures.push(pm);
            }
            if !proto.has_store() {
                return Ok(analysis);
            }
            let outparam = proto.get_output();
            let out_addr = outparam.get_address();
            if !out_addr.is_invalid() {
                // If we don't have a void type.
                let mut pm = ParamMeasure::new(
                    &out_addr,
                    outparam.get_size(),
                    outparam.get_type().cloned(),
                    ParamIDIO::Output,
                );
                // For a RETURN op, input1 (if present) is the returned Varnode.
                for rtn_op in fd.obank().iter_code(OpCode::CPUI_RETURN) {
                    let o = match fd.obank().get(rtn_op) {
                        Some(o) => o,
                        None => continue,
                    };
                    if o.num_input() == 2
                        && let Some(ovn) = o.get_in(1) {
                            pm.calculate_rank(fd, true, ovn, Some(rtn_op));
                            break;
                        }
                }
                analysis.output_param_measures.push(pm);
            }
        } else {
            // Need to list input varnodes that are outside of the model.
            let inputs: Vec<VarnodeId> = fd.vbank().iter_def_flag(varnode_flags::input).collect();
            for invn in inputs {
                let v = fd
                    .vbank()
                    .get(invn)
                    .expect("ParamIDAnalysis: stale input vn");
                let addr = v.get_addr().clone();
                let size = v.get_size();
                let vtype = v.get_type().clone();
                let mut pm = ParamMeasure::new(&addr, size, Some(vtype), ParamIDIO::Input);
                pm.calculate_rank(fd, true, invn, None);
                analysis.input_param_measures.push(pm);
            }
        }
        Ok(analysis)
    }

    /// Number of input measures collected.
    pub fn num_input_measures(&self) -> usize {
        self.input_param_measures.len()
    }

    /// Number of output measures collected.
    pub fn num_output_measures(&self) -> usize {
        self.output_param_measures.len()
    }

    /// Borrow the i-th input measure.
    pub fn input_measure(&self, i: usize) -> &ParamMeasure {
        &self.input_param_measures[i]
    }

    /// Write a plain-text description of the analysis (C++
    /// `ParamIDAnalysis::savePretty`, paramid.cc:264-282).
    ///
    /// The C++ leading line also prints the function's address and the recovered
    /// model/extrapop; those read the W3/W4 `FuncProto` placeholder, so this port
    /// prints the function name + the measures (the prototype-derived header
    /// fields STUB with the prototype itself).
    pub fn save_pretty(&self, s: &mut String, moredetail: bool) {
        s.push_str(&format!("Param Measures\nFunction: {}\n", self.fdname));
        s.push_str(&format!(
            "Num Params: {}\n",
            self.input_param_measures.len()
        ));
        for pm in &self.input_param_measures {
            pm.save_pretty(s, moredetail);
        }
        s.push_str(&format!(
            "Num Returns: {}\n",
            self.output_param_measures.len()
        ));
        for pm in &self.output_param_measures {
            pm.save_pretty(s, moredetail);
        }
        s.push('\n');
    }

    /// Encode the analysis as a `<parammeasures>` element (C++
    /// `ParamIDAnalysis::encode`, paramid.cc:237-262): the function name +
    /// entry address, the `<proto model extrapop>` child, then each
    /// input/output measure.
    pub fn encode(
        &self,
        encoder: &mut dyn unlace_base::marshal::Encoder,
        moredetail: bool,
    ) -> UnlaceResult<()> {
        use unlace_base::marshal::{ATTRIB_MODEL, ATTRIB_NAME};
        encoder.open_element(&ELEM_PARAMMEASURES);
        encoder.write_string(&ATTRIB_NAME, self.fdname.as_bytes());
        self.fdaddr.encode(encoder)?;
        encoder.open_element(&ELEM_PROTO);
        encoder.write_string(&ATTRIB_MODEL, self.model_name.as_bytes());
        if self.extrapop == crate::fspec::EXTRAPOP_UNKNOWN {
            encoder.write_string(&crate::remote_provider::ATTRIB_EXTRAPOP, b"unknown");
        } else {
            encoder.write_signed_integer(
                &crate::remote_provider::ATTRIB_EXTRAPOP,
                self.extrapop as i64,
            );
        }
        encoder.close_element(&ELEM_PROTO);
        for pm in &self.input_param_measures {
            pm.encode(encoder, &unlace_base::marshal::ELEM_INPUT, moredetail)?;
        }
        for pm in &self.output_param_measures {
            pm.encode(encoder, &unlace_base::marshal::ELEM_OUTPUT, moredetail)?;
        }
        encoder.close_element(&ELEM_PARAMMEASURES);
        Ok(())
    }
}

#[cfg(test)]
mod tests;
