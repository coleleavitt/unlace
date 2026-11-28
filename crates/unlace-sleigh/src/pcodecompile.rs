//! P-code expression and statement construction, based on
//! `decompiler/cpp/pcodecompile.{hh,cc}`.
//!
//! [`PcodeCompile`] shares builder methods between `unlace-slacomp::SleighCompile`
//! and [`crate::pcodeparse::PcodeSnippet`]. Implementors provide spaces, temporary
//! allocation, symbol registration and diagnostics. Location queries use symbol
//! names; the compiler resolves them while runtime snippets return no location.
//!
//! [`ExprTree`] owns its operations and output. Builders consume and return
//! trees rather than transferring raw pointers. [`PcodeCompileSymbol`] carries
//! varnode or label declarations; shared [`LabelSymbol`] values use `Cell` for
//! placement and reference counts. Bit-range builders take an already-resolved
//! varnode and name from their caller.
//!
//! Size propagation addresses an output or input by its `(op_index, slot)`
//! rather than aliasing a pointer into the vector being updated. The traversal
//! still visits the target's own slot, where a matching size is a no-op.

use std::cell::Cell;
use std::rc::Rc;

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::AddrSpace;
use unlace_base::types::Wrap;
use unlace_num::opcodes::OpCode;

use crate::semantics::{ConstTpl, ConstType, ConstructTpl, LABELBUILD, OpTpl, VField, VarnodeTpl};
use crate::slghsymbol::{SleighSymbol, UserOpSymbol};

// ---------------------------------------------------------------------------
// Location
// ---------------------------------------------------------------------------

/// C++ `Location`: a source file / line number pair for error reporting.
#[derive(Debug, Clone, Default)]
pub struct Location {
    filename: Vec<u8>,
    lineno: i32,
}

impl Location {
    /// C++ `Location(const string &fname,const int4 line)`.
    pub fn new(fname: &[u8], line: i32) -> Location {
        Location {
            filename: fname.to_vec(),
            lineno: line,
        }
    }

    /// C++ `getFilename`.
    pub fn get_filename(&self) -> &[u8] {
        &self.filename
    }

    /// C++ `getLineno`.
    pub fn get_lineno(&self) -> i32 {
        self.lineno
    }

    /// C++ `format`: `"<filename>:<lineno>"`.
    pub fn format(&self) -> String {
        format!(
            "{}:{}",
            String::from_utf8_lossy(&self.filename),
            self.lineno
        )
    }
}

// ---------------------------------------------------------------------------
// StarQuality / LabelSymbol
// ---------------------------------------------------------------------------

/// C++ `StarQuality`: the parsed `*[space]:size` qualifier of a
/// load/store.
#[derive(Debug, Clone)]
pub struct StarQuality {
    /// The space id template (C++ `ConstTpl id`).
    pub id: ConstTpl,
    /// The explicit size, 0 if unspecified (C++ `uint4 size`).
    pub size: u32,
}

/// A p-code branch label shared between local scopes and grammar values.
/// Placement and reference counts use `Cell` behind the shared `Rc`.
#[derive(Debug, Default)]
pub struct LabelSymbol {
    /// Symbol name (C++ `SleighSymbol::name`).
    name: Vec<u8>,
    /// Local 1-up index of label (C++ `uint4 index`).
    index: u32,
    /// Has the label been placed (not just referenced)?
    isplaced: Cell<bool>,
    /// Number of references to this label (C++ `uint4 refcount`).
    refcount: Cell<u32>,
}

impl LabelSymbol {
    /// C++ `LabelSymbol(const string &nm,uint4 i)`.
    pub fn new(nm: &[u8], i: u32) -> LabelSymbol {
        LabelSymbol {
            name: nm.to_vec(),
            index: i,
            isplaced: Cell::new(false),
            refcount: Cell::new(0),
        }
    }

    /// C++ `SleighSymbol::getName`.
    pub fn get_name(&self) -> &[u8] {
        &self.name
    }

    /// C++ `getIndex`.
    pub fn get_index(&self) -> u32 {
        self.index
    }

    /// C++ `incrementRefCount`.
    pub fn increment_ref_count(&self) {
        self.refcount.set(self.refcount.get().wadd(1));
    }

    /// C++ `getRefCount`.
    pub fn get_ref_count(&self) -> u32 {
        self.refcount.get()
    }

    /// C++ `setPlaced`.
    pub fn set_placed(&self) {
        self.isplaced.set(true);
    }

    /// C++ `isPlaced`.
    pub fn is_placed(&self) -> bool {
        self.isplaced.get()
    }
}

/// The payload of [`PcodeCompile::add_symbol`] (C++ `addSymbol(SleighSymbol
/// *)`): the builder creates either `VarnodeSymbol`s (as [`SleighSymbol`])
/// or snippet-local [`LabelSymbol`]s.
#[derive(Debug)]
pub enum PcodeCompileSymbol {
    /// A `SleighSymbol` (the `VarnodeSymbol`s `newOutput` /
    /// `newLocalDefinition` create).
    Sleigh(Box<SleighSymbol>),
    /// A snippet-local branch label created by `defineLabel`.
    Label(Rc<LabelSymbol>),
}

impl PcodeCompileSymbol {
    /// The symbol's name (C++ `SleighSymbol::getName`, used by implementors
    /// to key their scope).
    pub fn get_name(&self) -> &[u8] {
        match self {
            PcodeCompileSymbol::Sleigh(sym) => sym.get_name(),
            PcodeCompileSymbol::Label(lab) => lab.get_name(),
        }
    }
}

// ---------------------------------------------------------------------------
// ExprTree
// ---------------------------------------------------------------------------

/// C++ `ExprTree`: a flattened expression tree — the ops making up the
/// expression plus the output varnode (a COPY of the last op's output when
/// that op has one).
#[derive(Debug, Default)]
pub struct ExprTree {
    /// C++ `vector<OpTpl *> *ops` (the null pointer state collapses to the
    /// empty vector; see module docs).
    pub(crate) ops: Vec<OpTpl>,
    /// C++ `VarnodeTpl *outvn`.
    pub(crate) outvn: Option<VarnodeTpl>,
}

impl ExprTree {
    /// C++ `ExprTree(VarnodeTpl *vn)`.
    pub fn new(vn: VarnodeTpl) -> ExprTree {
        ExprTree {
            ops: Vec::new(),
            outvn: Some(vn),
        }
    }

    /// C++ `ExprTree(OpTpl *op)`: `outvn` becomes a COPY of the op's
    /// output, if it has one.
    pub fn new_from_op(op: OpTpl) -> ExprTree {
        let outvn = op.get_out().cloned();
        ExprTree {
            ops: vec![op],
            outvn,
        }
    }

    /// C++ `setOutput`: force the output of the expression to be `newout`.
    /// If the original output is named, this requires an extra COPY op.
    pub fn set_output(&mut self, newout: VarnodeTpl) -> UnlaceResult<()> {
        let outvn = match self.outvn.take() {
            None => return Err(UnlaceError::sleigh("Expression has no output")),
            Some(vn) => vn,
        };
        if outvn.is_unnamed() {
            // (C++ deletes outvn)
            let op = self
                .ops
                .last_mut()
                .expect("ExprTree::setOutput on an opless expression (C++ ops->back() is UB)");
            op.clear_output();
            op.set_output(newout.clone());
        } else {
            let mut op = OpTpl::new(OpCode::CPUI_COPY);
            op.add_input(outvn);
            op.set_output(newout.clone());
            self.ops.push(op);
        }
        // C++ `outvn = new VarnodeTpl(*newout)`
        self.outvn = Some(newout);
        Ok(())
    }

    /// C++ `getOut` (nullable).
    pub fn get_out(&self) -> Option<&VarnodeTpl> {
        self.outvn.as_ref()
    }

    /// C++ `getSize` (C++ dereferences `outvn` unconditionally).
    pub fn get_size(&self) -> &ConstTpl {
        self.outvn
            .as_ref()
            .expect("ExprTree::getSize on an expression without output (C++ dereferences null)")
            .get_size()
    }

    /// C++ static `appendParams`: create an op with the entire list of
    /// expression inputs.
    pub fn append_params(mut op: OpTpl, params: Vec<ExprTree>) -> Vec<OpTpl> {
        let mut res: Vec<OpTpl> = Vec::new();

        for mut param in params {
            res.append(&mut param.ops);
            op.add_input(param.outvn.take().expect(
                "appendParams: parameter expression has no output (C++ would push a null input)",
            ));
        }
        res.push(op);
        res
    }

    /// C++ static `toVector`: grab the op vector and delete the output
    /// expression.
    pub fn to_vector(expr: ExprTree) -> Vec<OpTpl> {
        expr.ops
    }
}

// ---------------------------------------------------------------------------
// size propagation statics (C++ PcodeCompile static members)
// ---------------------------------------------------------------------------

/// Identifies a varnode slot within an op for in-vector size forcing
/// (the port's stand-in for the C++ `VarnodeTpl *` aliased into `ops`).
#[derive(Debug, Clone, Copy)]
enum VtSlot {
    /// The op's output.
    Out,
    /// Input slot `i` (C++ `int4`).
    In(i32),
}

/// The propagation loop of C++ `PcodeCompile::force_size`: set `size` on
/// every local-temp varnode in `ops` whose offset matches `vt_offset`.
fn force_size_propagate(
    vt_offset: &ConstTpl,
    size: &ConstTpl,
    ops: &mut [OpTpl],
) -> UnlaceResult<()> {
    for op in ops.iter_mut() {
        if let Some(vn) = op.get_out_mut()
            && vn.is_local_temp() && *vn.get_offset() == *vt_offset {
                if size.get_type() == ConstType::Real
                    && vn.get_size().get_type() == ConstType::Real
                    && vn.get_size().get_real() != 0
                    && vn.get_size().get_real() != size.get_real()
                {
                    return Err(UnlaceError::sleigh("Localtemp size mismatch"));
                }
                vn.set_size(size.clone());
            }
        for j in 0..op.num_input() {
            let vn = op.get_in_mut(j);
            if vn.is_local_temp() && *vn.get_offset() == *vt_offset {
                if size.get_type() == ConstType::Real
                    && vn.get_size().get_type() == ConstType::Real
                    && vn.get_size().get_real() != 0
                    && vn.get_size().get_real() != size.get_real()
                {
                    return Err(UnlaceError::sleigh("Localtemp size mismatch"));
                }
                vn.set_size(size.clone());
            }
        }
    }
    Ok(())
}

/// C++ static `PcodeCompile::force_size` for a target varnode living
/// *outside* `ops` (e.g. an `ExprTree::outvn`): if `vt` has no size yet,
/// set it, and if `vt` is a local temporary propagate the size to its other
/// uses in `ops`.
pub fn force_size(vt: &mut VarnodeTpl, size: &ConstTpl, ops: &mut [OpTpl]) -> UnlaceResult<()> {
    if vt.get_size().get_type() != ConstType::Real || vt.get_size().get_real() != 0 {
        return Ok(()); // Size already exists
    }
    vt.set_size(size.clone());
    if !vt.is_local_temp() {
        return Ok(());
    }
    // If the variable is a local temporary the size may need to be
    // propagated to the various uses of the variable
    let offset = vt.get_offset().clone();
    force_size_propagate(&offset, size, ops)
}

/// C++ `force_size` where the target varnode is `ops[op_index]`'s `slot`
/// (C++ aliases a pointer into the vector; the propagation loop revisiting
/// the target slot re-sets the same size, a no-op, exactly as in C++).
fn force_size_at(
    ops: &mut [OpTpl],
    op_index: usize,
    slot: VtSlot,
    size: &ConstTpl,
) -> UnlaceResult<()> {
    let offset = {
        let op = &mut ops[op_index];
        let vt = match slot {
            VtSlot::Out => op
                .get_out_mut()
                .expect("force_size target output is null (C++ dereferences null)"),
            VtSlot::In(j) => op.get_in_mut(j),
        };
        if vt.get_size().get_type() != ConstType::Real || vt.get_size().get_real() != 0 {
            return Ok(()); // Size already exists
        }
        vt.set_size(size.clone());
        if !vt.is_local_temp() {
            return Ok(());
        }
        vt.get_offset().clone()
    };
    force_size_propagate(&offset, size, ops)
}

/// C++ static `PcodeCompile::matchSize`: find something to fill in the
/// zero-size varnode at slot `j` (-1 = output) of `ops[op_index]`; don't
/// consider the output as a source if `inputonly`.  (The C++ signature
/// passes the op by aliased pointer; the port passes its index.)
pub fn match_size(j: i32, op_index: usize, inputonly: bool, ops: &mut [OpTpl]) -> UnlaceResult<()> {
    // read-only scan for a matching nonzero-size varnode
    let matched: Option<ConstTpl> = {
        let op = &ops[op_index];
        let mut found: Option<&VarnodeTpl> = None;
        if !inputonly
            && let Some(out) = op.get_out()
                && !out.is_zero_size() {
                    found = Some(out);
                }
        let inputsize = op.num_input();
        for i in 0..inputsize {
            if found.is_some() {
                break;
            }
            if op.get_in(i).is_zero_size() {
                continue;
            }
            found = Some(op.get_in(i));
        }
        found.map(|vn| vn.get_size().clone())
    };
    if let Some(size) = matched {
        let slot = if j == -1 { VtSlot::Out } else { VtSlot::In(j) };
        force_size_at(ops, op_index, slot, &size)?;
    }
    Ok(())
}

/// C++ static `PcodeCompile::fillinZero`: try to get rid of zero-size
/// varnodes in `ops[op_index]`.  Right now this is written assuming
/// operands for the constructor are built before any other pcode in the
/// constructor is generated.  (The C++ signature passes the op by aliased
/// pointer; the port passes its index.)
pub fn fillin_zero(op_index: usize, ops: &mut [OpTpl]) -> UnlaceResult<()> {
    let opc = ops[op_index].get_opcode();
    match opc {
        // Instructions where all inputs and output are same size
        OpCode::CPUI_COPY
        | OpCode::CPUI_INT_ADD
        | OpCode::CPUI_INT_SUB
        | OpCode::CPUI_INT_2COMP
        | OpCode::CPUI_INT_NEGATE
        | OpCode::CPUI_INT_XOR
        | OpCode::CPUI_INT_AND
        | OpCode::CPUI_INT_OR
        | OpCode::CPUI_INT_MULT
        | OpCode::CPUI_INT_DIV
        | OpCode::CPUI_INT_SDIV
        | OpCode::CPUI_INT_REM
        | OpCode::CPUI_INT_SREM
        | OpCode::CPUI_FLOAT_ADD
        | OpCode::CPUI_FLOAT_DIV
        | OpCode::CPUI_FLOAT_MULT
        | OpCode::CPUI_FLOAT_SUB
        | OpCode::CPUI_FLOAT_NEG
        | OpCode::CPUI_FLOAT_ABS
        | OpCode::CPUI_FLOAT_SQRT
        | OpCode::CPUI_FLOAT_CEIL
        | OpCode::CPUI_FLOAT_FLOOR
        | OpCode::CPUI_FLOAT_ROUND => {
            if ops[op_index].get_out().is_some_and(|o| o.is_zero_size()) {
                match_size(-1, op_index, false, ops)?;
            }
            let inputsize = ops[op_index].num_input();
            for i in 0..inputsize {
                if ops[op_index].get_in(i).is_zero_size() {
                    match_size(i, op_index, false, ops)?;
                }
            }
        }
        // Instructions with bool output
        OpCode::CPUI_INT_EQUAL
        | OpCode::CPUI_INT_NOTEQUAL
        | OpCode::CPUI_INT_SLESS
        | OpCode::CPUI_INT_SLESSEQUAL
        | OpCode::CPUI_INT_LESS
        | OpCode::CPUI_INT_LESSEQUAL
        | OpCode::CPUI_INT_CARRY
        | OpCode::CPUI_INT_SCARRY
        | OpCode::CPUI_INT_SBORROW
        | OpCode::CPUI_FLOAT_EQUAL
        | OpCode::CPUI_FLOAT_NOTEQUAL
        | OpCode::CPUI_FLOAT_LESS
        | OpCode::CPUI_FLOAT_LESSEQUAL
        | OpCode::CPUI_FLOAT_NAN
        | OpCode::CPUI_BOOL_NEGATE
        | OpCode::CPUI_BOOL_XOR
        | OpCode::CPUI_BOOL_AND
        | OpCode::CPUI_BOOL_OR => {
            // (C++ dereferences getOut() unconditionally here)
            if ops[op_index]
                .get_out()
                .expect("bool-output op without output (C++ dereferences null)")
                .is_zero_size()
            {
                force_size_at(
                    ops,
                    op_index,
                    VtSlot::Out,
                    &ConstTpl::new_real(ConstType::Real, 1),
                )?;
            }
            let inputsize = ops[op_index].num_input();
            for i in 0..inputsize {
                if ops[op_index].get_in(i).is_zero_size() {
                    match_size(i, op_index, true, ops)?;
                }
            }
        }
        // The shift amount does not necessarily have to be the same size,
        // but if no size is specified, assume it is the same size
        OpCode::CPUI_INT_LEFT
        | OpCode::CPUI_INT_RIGHT
        | OpCode::CPUI_INT_SRIGHT
        | OpCode::CPUI_SUBPIECE => {
            if opc != OpCode::CPUI_SUBPIECE {
                let out_zero = ops[op_index]
                    .get_out()
                    .expect("shift op without output (C++ dereferences null)")
                    .is_zero_size();
                if out_zero {
                    if !ops[op_index].get_in(0).is_zero_size() {
                        let size = ops[op_index].get_in(0).get_size().clone();
                        force_size_at(ops, op_index, VtSlot::Out, &size)?;
                    }
                } else if ops[op_index].get_in(0).is_zero_size() {
                    let size = ops[op_index]
                        .get_out()
                        .expect("shift op without output (C++ dereferences null)")
                        .get_size()
                        .clone();
                    force_size_at(ops, op_index, VtSlot::In(0), &size)?;
                }
            }
            // C++ fallthru to subpiece constant check
            if ops[op_index].get_in(1).is_zero_size() {
                force_size_at(
                    ops,
                    op_index,
                    VtSlot::In(1),
                    &ConstTpl::new_real(ConstType::Real, 4),
                )?;
            }
        }
        OpCode::CPUI_CPOOLREF => {
            let out_zero = ops[op_index]
                .get_out()
                .expect("cpoolref op without output (C++ dereferences null)")
                .is_zero_size();
            if out_zero && !ops[op_index].get_in(0).is_zero_size() {
                let size = ops[op_index].get_in(0).get_size().clone();
                force_size_at(ops, op_index, VtSlot::Out, &size)?;
            }
            let out_zero = ops[op_index]
                .get_out()
                .expect("cpoolref op without output (C++ dereferences null)")
                .is_zero_size();
            if ops[op_index].get_in(0).is_zero_size() && !out_zero {
                let size = ops[op_index]
                    .get_out()
                    .expect("cpoolref op without output (C++ dereferences null)")
                    .get_size()
                    .clone();
                force_size_at(ops, op_index, VtSlot::In(0), &size)?;
            }
            for i in 1..ops[op_index].num_input() {
                if ops[op_index].get_in(i).is_zero_size() {
                    // sizeof(uintb) == 8
                    force_size_at(
                        ops,
                        op_index,
                        VtSlot::In(i),
                        &ConstTpl::new_real(ConstType::Real, 8),
                    )?;
                }
            }
        }
        _ => {}
    }
    Ok(())
}

/// C++ static `PcodeCompile::propagateSize`: fill in sizes for varnodes
/// with size 0; returns false if some zero-size varnode could not be filled
/// in, true otherwise.
pub fn propagate_size(ct: &mut ConstructTpl) -> UnlaceResult<bool> {
    let ops = ct.get_opvec_mut();
    let mut zerovec: Vec<usize> = Vec::new();
    for i in 0..ops.len() {
        if ops[i].is_zero_size() {
            fillin_zero(i, ops)?;
            if ops[i].is_zero_size() {
                zerovec.push(i);
            }
        }
    }
    let mut lastsize = zerovec.len() + 1;
    while zerovec.len() < lastsize {
        lastsize = zerovec.len();
        let mut zerovec2: Vec<usize> = Vec::new();
        for &i in &zerovec {
            fillin_zero(i, ops)?;
            if ops[i].is_zero_size() {
                zerovec2.push(i);
            }
        }
        zerovec = zerovec2;
    }
    Ok(lastsize == 0)
}

// ---------------------------------------------------------------------------
// PcodeCompile
// ---------------------------------------------------------------------------

/// C++ `PcodeCompile`: the expression/statement builder.  See the module
/// docs for the trait-shape mapping.  Initialize the backing state to the
/// C++ constructor values: null spaces, `local_labelcount = 0`,
/// `enforceLocalKey = false`.
pub trait PcodeCompile {
    // -- C++ data members (backed by the implementor) -------------------------

    /// C++ `getDefaultSpace` (the `defaultspace` member; `None` is the C++
    /// null initial value).
    fn get_default_space(&self) -> Option<Rc<AddrSpace>>;
    /// C++ `setDefaultSpace`.
    fn set_default_space(&mut self, spc: Rc<AddrSpace>);
    /// C++ `getConstantSpace` (the `constantspace` member).
    fn get_constant_space(&self) -> Option<Rc<AddrSpace>>;
    /// C++ `setConstantSpace`.
    fn set_constant_space(&mut self, spc: Rc<AddrSpace>);
    /// The C++ `uniqspace` member (no C++ getter; used by
    /// `buildTemporary`).
    fn get_unique_space(&self) -> Option<Rc<AddrSpace>>;
    /// C++ `setUniqueSpace`.
    fn set_unique_space(&mut self, spc: Rc<AddrSpace>);
    /// The C++ `enforceLocalKey` member.
    fn is_enforce_local_key(&self) -> bool;
    /// C++ `setEnforceLocalKey`.
    fn set_enforce_local_key(&mut self, val: bool);
    /// The C++ `local_labelcount` member.
    fn local_label_count(&self) -> u32;
    /// Setter for the C++ `local_labelcount` member.
    fn set_local_label_count(&mut self, val: u32);

    // -- C++ pure virtuals -----------------------------------------------------

    /// C++ pure virtual `allocateTemp`.
    fn allocate_temp(&mut self) -> u32;
    /// C++ pure virtual `addSymbol`.
    fn add_symbol(&mut self, sym: PcodeCompileSymbol);
    /// C++ pure virtual `getLocation(SleighSymbol *)`, keyed by symbol name
    /// in the port (see module docs).
    fn get_location(&self, symbol_name: &[u8]) -> Option<Location>;
    /// C++ pure virtual `reportError`.
    fn report_error(&mut self, loc: Option<&Location>, msg: &str);
    /// C++ pure virtual `reportWarning`.
    fn report_warning(&mut self, loc: Option<&Location>, msg: &str);

    // -- concrete C++ methods (pcodecompile.cc) ---------------------------------

    /// C++ `resetLabelCount`.
    fn reset_label_count(&mut self) {
        self.set_local_label_count(0);
    }

    /// C++ `buildTemporary`: build a temporary variable (with zerosize).
    fn build_temporary(&mut self) -> VarnodeTpl {
        let uniqspace = self
            .get_unique_space()
            .expect("PcodeCompile unique space not set (C++ would store a null space)");
        let temp = self.allocate_temp();
        let mut res = VarnodeTpl::new(
            ConstTpl::new_space(uniqspace),
            ConstTpl::new_real(ConstType::Real, u64::from(temp)),
            ConstTpl::new_real(ConstType::Real, 0),
        );
        res.set_unnamed(true);
        res
    }

    /// C++ `defineLabel`: create a label symbol and add it to the local
    /// scope.
    fn define_label(&mut self, name: &[u8]) -> Rc<LabelSymbol> {
        let count = self.local_label_count();
        let labsym = Rc::new(LabelSymbol::new(name, count));
        self.set_local_label_count(count.wadd(1)); // C++ local_labelcount++
        self.add_symbol(PcodeCompileSymbol::Label(Rc::clone(&labsym)));
        labsym
    }

    /// C++ `placeLabel`: create the placeholder OpTpl for a label.
    fn place_label(&mut self, labsym: &Rc<LabelSymbol>) -> Vec<OpTpl> {
        if labsym.is_placed() {
            let loc = self.get_location(labsym.get_name());
            let msg = format!(
                "Label '{}' is placed more than once",
                String::from_utf8_lossy(labsym.get_name())
            );
            self.report_error(loc.as_ref(), &msg);
        }
        labsym.set_placed();
        let constantspace = self
            .get_constant_space()
            .expect("PcodeCompile constant space not set (C++ would store a null space)");
        let mut res = Vec::new();
        let mut op = OpTpl::new(LABELBUILD);
        let idvn = VarnodeTpl::new(
            ConstTpl::new_space(constantspace),
            ConstTpl::new_real(ConstType::Real, u64::from(labsym.get_index())),
            ConstTpl::new_real(ConstType::Real, 4),
        );
        op.add_input(idvn);
        res.push(op);
        res
    }

    /// C++ `newOutput`: assign `rhs` to a fresh named temporary, define the
    /// symbol, and return the statement ops (C++ default `size = 0`).
    fn new_output(
        &mut self,
        uses_local_key: bool,
        mut rhs: ExprTree,
        varname: &[u8],
        size: u32,
    ) -> UnlaceResult<Vec<OpTpl>> {
        let mut tmpvn = self.build_temporary();
        if size != 0 {
            // Size was explicitly specified
            tmpvn.set_size(ConstTpl::new_real(ConstType::Real, u64::from(size)));
        } else if rhs.get_size().get_type() == ConstType::Real && rhs.get_size().get_real() != 0 {
            // Inherit size from unnamed expression result.  Only inherit if
            // the size is real, otherwise we cannot build the VarnodeSymbol
            // with a placeholder constant.
            tmpvn.set_size(rhs.get_size().clone());
        }
        // capture the symbol triple before tmpvn moves into the expression
        // (C++ keeps reading through the tmpvn pointer after setOutput)
        let sym_space = tmpvn.get_space().get_space();
        let sym_offset = tmpvn.get_offset().get_real();
        // cast: C++ implicit uintb -> int4 (VarnodeSymbol size parameter)
        let sym_size = tmpvn.get_size().get_real() as i32;
        rhs.set_output(tmpvn)?;
        // Create new symbol regardless
        let sym = SleighSymbol::new_varnode(varname, sym_space, sym_offset, sym_size);
        self.add_symbol(PcodeCompileSymbol::Sleigh(Box::new(sym)));
        if !uses_local_key && self.is_enforce_local_key() {
            let loc = self.get_location(varname);
            let msg = format!(
                "Must use 'local' keyword to define symbol '{}'",
                String::from_utf8_lossy(varname)
            );
            self.report_error(loc.as_ref(), &msg);
        }
        Ok(ExprTree::to_vector(rhs))
    }

    /// C++ `newLocalDefinition`: create a new temporary symbol (without
    /// generating any pcode; C++ default `size = 0`).
    fn new_local_definition(&mut self, varname: &[u8], size: u32) {
        let uniqspace = self
            .get_unique_space()
            .expect("PcodeCompile unique space not set (C++ would store a null space)");
        let temp = self.allocate_temp();
        let sym = SleighSymbol::new_varnode(
            varname,
            uniqspace,
            u64::from(temp),
            size as i32, // cast: C++ implicit uint4 -> int4 (VarnodeSymbol size)
        );
        self.add_symbol(PcodeCompileSymbol::Sleigh(Box::new(sym)));
    }

    /// C++ `createOp(OpCode,ExprTree *)` (unary): new expression performing
    /// `opc` on `vn`; frees (consumes) the input expression.
    fn create_op(&mut self, opc: OpCode, mut vn: ExprTree) -> ExprTree {
        let outvn = self.build_temporary();
        let mut op = OpTpl::new(opc);
        op.add_input(
            vn.outvn
                .take()
                .expect("createOp: input expression has no output (C++ would push a null input)"),
        );
        op.set_output(outvn.clone());
        vn.ops.push(op);
        vn.outvn = Some(outvn); // C++ `new VarnodeTpl(*outvn)`
        vn
    }

    /// C++ `createOp(OpCode,ExprTree *,ExprTree *)` (binary): new
    /// expression performing `opc` on `vn1`, `vn2`; frees (consumes) the
    /// input expressions.
    fn create_op2(&mut self, opc: OpCode, mut vn1: ExprTree, mut vn2: ExprTree) -> ExprTree {
        let outvn = self.build_temporary();
        vn1.ops.append(&mut vn2.ops);
        let mut op = OpTpl::new(opc);
        op.add_input(
            vn1.outvn
                .take()
                .expect("createOp: input expression has no output (C++ would push a null input)"),
        );
        op.add_input(
            vn2.outvn
                .take()
                .expect("createOp: input expression has no output (C++ would push a null input)"),
        );
        op.set_output(outvn.clone());
        vn1.ops.push(op);
        vn1.outvn = Some(outvn); // C++ `new VarnodeTpl(*outvn)`
        vn1
    }

    /// C++ `createOpOut`: an op with explicit output and two inputs.
    fn create_op_out(
        &mut self,
        outvn: VarnodeTpl,
        opc: OpCode,
        mut vn1: ExprTree,
        mut vn2: ExprTree,
    ) -> ExprTree {
        vn1.ops.append(&mut vn2.ops);
        let mut op = OpTpl::new(opc);
        op.add_input(
            vn1.outvn.take().expect(
                "createOpOut: input expression has no output (C++ would push a null input)",
            ),
        );
        op.add_input(
            vn2.outvn.take().expect(
                "createOpOut: input expression has no output (C++ would push a null input)",
            ),
        );
        op.set_output(outvn.clone());
        vn1.ops.push(op);
        vn1.outvn = Some(outvn); // C++ `new VarnodeTpl(*outvn)`
        vn1
    }

    /// C++ `createOpOutUnary`: an op with explicit output and one input.
    fn create_op_out_unary(
        &mut self,
        outvn: VarnodeTpl,
        opc: OpCode,
        mut vn: ExprTree,
    ) -> ExprTree {
        let mut op = OpTpl::new(opc);
        op.add_input(vn.outvn.take().expect(
            "createOpOutUnary: input expression has no output (C++ would push a null input)",
        ));
        op.set_output(outvn.clone());
        vn.ops.push(op);
        vn.outvn = Some(outvn); // C++ `new VarnodeTpl(*outvn)`
        vn
    }

    /// C++ `createOpNoOut(OpCode,ExprTree *)` (unary): statement op with
    /// `opc` and single input; frees (consumes) the input expression.
    fn create_op_no_out(&mut self, opc: OpCode, mut vn: ExprTree) -> Vec<OpTpl> {
        let mut op = OpTpl::new(opc);
        op.add_input(
            vn.outvn.take().expect(
                "createOpNoOut: input expression has no output (C++ would push a null input)",
            ),
        );
        // There is no longer an output to this expression
        let mut res = std::mem::take(&mut vn.ops);
        res.push(op);
        res
    }

    /// C++ `createOpNoOut(OpCode,ExprTree *,ExprTree *)` (binary).
    fn create_op_no_out2(
        &mut self,
        opc: OpCode,
        mut vn1: ExprTree,
        mut vn2: ExprTree,
    ) -> Vec<OpTpl> {
        let mut res = std::mem::take(&mut vn1.ops);
        res.append(&mut vn2.ops);
        let mut op = OpTpl::new(opc);
        op.add_input(
            vn1.outvn.take().expect(
                "createOpNoOut: input expression has no output (C++ would push a null input)",
            ),
        );
        op.add_input(
            vn2.outvn.take().expect(
                "createOpNoOut: input expression has no output (C++ would push a null input)",
            ),
        );
        res.push(op);
        res
    }

    /// C++ `createOpConst`: statement op whose single input is a constant.
    fn create_op_const(&mut self, opc: OpCode, val: u64) -> Vec<OpTpl> {
        let constantspace = self
            .get_constant_space()
            .expect("PcodeCompile constant space not set (C++ would store a null space)");
        let vn = VarnodeTpl::new(
            ConstTpl::new_space(constantspace),
            ConstTpl::new_real(ConstType::Real, val),
            ConstTpl::new_real(ConstType::Real, 4),
        );
        let mut res = Vec::new();
        let mut op = OpTpl::new(opc);
        op.add_input(vn);
        res.push(op);
        res
    }

    /// C++ `createLoad`: new load expression; frees (consumes) the pointer
    /// expression and the qualifier.
    fn create_load(&mut self, qual: StarQuality, mut ptr: ExprTree) -> UnlaceResult<ExprTree> {
        let outvn = self.build_temporary();
        let mut op = OpTpl::new(OpCode::CPUI_LOAD);
        // The first varnode input to the load is a constant reference to the
        // AddrSpace being loaded from.  Internally, we really store the
        // pointer to the AddrSpace as the reference, but this isn't platform
        // independent.  So officially, we assume that the constant reference
        // will be the AddrSpace index.  (Upstream comment; the emitted size
        // below is 8, as in the C++ code.)
        let constantspace = self
            .get_constant_space()
            .expect("PcodeCompile constant space not set (C++ would store a null space)");
        let spcvn = VarnodeTpl::new(
            ConstTpl::new_space(constantspace),
            qual.id.clone(),
            ConstTpl::new_real(ConstType::Real, 8),
        );
        op.add_input(spcvn);
        op.add_input(
            ptr.outvn
                .take()
                .expect("createLoad: pointer expression has no output (C++ would push null)"),
        );
        op.set_output(outvn);
        ptr.ops.push(op);
        if qual.size > 0 {
            // C++ force_size(outvn, ...): the output varnode lives in the op
            // just pushed
            let last = ptr.ops.len() - 1;
            force_size_at(
                &mut ptr.ops,
                last,
                VtSlot::Out,
                &ConstTpl::new_real(ConstType::Real, u64::from(qual.size)),
            )?;
        }
        // re-copy the output varnode into outvn (after the force_size)
        ptr.outvn = ptr.ops.last().and_then(|op| op.get_out()).cloned();
        Ok(ptr)
    }

    /// C++ `createStore`: frees (consumes) the qualifier and both
    /// expressions.
    fn create_store(
        &mut self,
        qual: StarQuality,
        mut ptr: ExprTree,
        mut val: ExprTree,
    ) -> UnlaceResult<Vec<OpTpl>> {
        let mut res = std::mem::take(&mut ptr.ops);
        res.append(&mut val.ops);
        let mut op = OpTpl::new(OpCode::CPUI_STORE);
        // (same constant-space-reference comment as createLoad)
        let constantspace = self
            .get_constant_space()
            .expect("PcodeCompile constant space not set (C++ would store a null space)");
        let spcvn = VarnodeTpl::new(
            ConstTpl::new_space(constantspace),
            qual.id.clone(),
            ConstTpl::new_real(ConstType::Real, 8),
        );
        op.add_input(spcvn);
        op.add_input(
            ptr.outvn
                .take()
                .expect("createStore: pointer expression has no output (C++ would push null)"),
        );
        op.add_input(
            val.outvn
                .take()
                .expect("createStore: value expression has no output (C++ would push null)"),
        );
        res.push(op);
        // C++ force_size(val->outvn,...) — val's output is input slot 2 of
        // the op just pushed (unconditional, unlike createLoad)
        let last = res.len() - 1;
        force_size_at(
            &mut res,
            last,
            VtSlot::In(2),
            &ConstTpl::new_real(ConstType::Real, u64::from(qual.size)),
        )?;
        Ok(res)
    }

    /// C++ `createUserOp`: a user-defined pcode op with an output.
    fn create_user_op(&mut self, sym: &UserOpSymbol, param: Vec<ExprTree>) -> ExprTree {
        let outvn = self.build_temporary();
        let mut ops = self.create_user_op_no_out(sym, param);
        ops.last_mut()
            .expect("createUserOpNoOut returned no ops (internal invariant)")
            .set_output(outvn.clone());
        ExprTree {
            ops,
            outvn: Some(outvn), // C++ `new VarnodeTpl(*outvn)`
        }
    }

    /// C++ `createUserOpNoOut`.
    fn create_user_op_no_out(&mut self, sym: &UserOpSymbol, param: Vec<ExprTree>) -> Vec<OpTpl> {
        let constantspace = self
            .get_constant_space()
            .expect("PcodeCompile constant space not set (C++ would store a null space)");
        let mut op = OpTpl::new(OpCode::CPUI_CALLOTHER);
        let vn = VarnodeTpl::new(
            ConstTpl::new_space(constantspace),
            ConstTpl::new_real(ConstType::Real, u64::from(sym.get_index())),
            ConstTpl::new_real(ConstType::Real, 4),
        );
        op.add_input(vn);
        ExprTree::append_params(op, param)
    }

    /// C++ `createVariadic`.
    fn create_variadic(&mut self, opc: OpCode, param: Vec<ExprTree>) -> ExprTree {
        let outvn = self.build_temporary();
        let op = OpTpl::new(opc);
        let mut ops = ExprTree::append_params(op, param);
        ops.last_mut()
            .expect("appendParams returned no ops (internal invariant)")
            .set_output(outvn.clone());
        ExprTree {
            ops,
            outvn: Some(outvn), // C++ `new VarnodeTpl(*outvn)`
        }
    }

    /// C++ `appendOp`: take the output of `res`, combine with a constant
    /// using `opc`, leaving the result as `res`'s new output.
    fn append_op(&mut self, opc: OpCode, res: &mut ExprTree, constval: u64, constsz: i32) {
        let constantspace = self
            .get_constant_space()
            .expect("PcodeCompile constant space not set (C++ would store a null space)");
        let mut op = OpTpl::new(opc);
        let constvn = VarnodeTpl::new(
            ConstTpl::new_space(constantspace),
            ConstTpl::new_real(ConstType::Real, constval),
            // cast: C++ implicit int4 -> uintb sign extension
            ConstTpl::new_real(ConstType::Real, i64::from(constsz) as u64),
        );
        let outvn = self.build_temporary();
        op.add_input(
            res.outvn
                .take()
                .expect("appendOp: expression has no output (C++ would push a null input)"),
        );
        op.add_input(constvn);
        op.set_output(outvn.clone());
        res.ops.push(op);
        res.outvn = Some(outvn); // C++ `new VarnodeTpl(*outvn)`
    }

    /// C++ `buildTruncatedVarnode`: build a truncated form of `basevn`
    /// matching the bitrange `[bitoffset, numbits]` if possible using just
    /// ConstTpl mechanics, otherwise return `None` (C++ null).
    fn build_truncated_varnode(
        &self,
        basevn: &VarnodeTpl,
        bitoffset: u32,
        numbits: u32,
    ) -> UnlaceResult<Option<VarnodeTpl>> {
        let byteoffset = bitoffset / 8; // Convert to byte units
        let numbytes = numbits / 8;
        let mut fullsz: u64 = 0;
        if basevn.get_size().get_type() == ConstType::Real {
            // If we know the size of base, make sure the bit range is in
            // bounds
            fullsz = basevn.get_size().get_real();
            if fullsz == 0 {
                return Ok(None);
            }
            // C++ adds the two uint4s first (can wrap) then widens for the
            // uintb comparison
            if u64::from(byteoffset.wadd(numbytes)) > fullsz {
                return Err(UnlaceError::sleigh("Requested bit range out of bounds"));
            }
        }

        if !bitoffset.is_multiple_of(8) {
            return Ok(None);
        }
        if !numbits.is_multiple_of(8) {
            return Ok(None);
        }

        let offset_type = basevn.get_offset().get_type();
        if offset_type != ConstType::Real && offset_type != ConstType::Handle {
            return Ok(None);
        }

        let specialoff: ConstTpl = if offset_type == ConstType::Handle {
            // We put in the correct adjustment to offset assuming things are
            // little endian.  We defer the correct big endian calculation
            // until after the consistency check because we need to know the
            // subtable export sizes.
            ConstTpl::new_handle_plus(
                basevn.get_offset().get_handle_index(),
                VField::VOffsetPlus,
                u64::from(byteoffset),
            )
        } else {
            if basevn.get_size().get_type() != ConstType::Real {
                return Err(UnlaceError::sleigh(
                    "Could not construct requested bit range",
                ));
            }
            let defaultspace = self
                .get_default_space()
                .expect("PcodeCompile default space not set (C++ dereferences null)");
            let plus: u64 = if defaultspace.is_big_endian() {
                fullsz.wsub(u64::from(byteoffset.wadd(numbytes)))
            } else {
                u64::from(byteoffset)
            };
            ConstTpl::new_real(ConstType::Real, basevn.get_offset().get_real().wadd(plus))
        };
        let res = VarnodeTpl::new(
            basevn.get_space().clone(),
            specialoff,
            ConstTpl::new_real(ConstType::Real, u64::from(numbytes)),
        );
        Ok(Some(res))
    }

    /// C++ `assignBitRange`: create an expression assigning the rhs to a
    /// bitrange within the symbol varnode `vn`.
    fn assign_bit_range(
        &mut self,
        vn: VarnodeTpl,
        bitoffset: u32,
        numbits: u32,
        mut rhs: ExprTree,
    ) -> UnlaceResult<Vec<OpTpl>> {
        let mut errmsg = String::new();
        if numbits == 0 {
            errmsg = "Size of bitrange is zero".to_string();
        }
        let smallsize = numbits.wadd(7) / 8; // Size of input (output of rhs)
        let shiftneeded = bitoffset != 0;
        let mut zextneeded = true;
        let mut mask: u64 = 2;
        // (C++ shifts are UB for counts >= 64 / numbits == 0; the wrapping
        // helpers wrap the counts instead)
        mask = !(mask.wshl(numbits.wsub(1)).wsub(1).wshl(bitoffset));

        if vn.get_size().get_type() == ConstType::Real {
            // If we know the size of the bitranged varnode, we can do some
            // immediate checks, and possibly simplify things
            let mut symsize = vn.get_size().get_real() as u32; // cast: C++ implicit uintb -> uint4
            if symsize > 0 {
                zextneeded = symsize > smallsize;
            }
            symsize = symsize.wmul(8); // Convert to number of bits
            if bitoffset >= symsize || bitoffset.wadd(numbits) > symsize {
                errmsg = "Assigned bitrange is bad".to_string();
            } else if bitoffset == 0 && numbits == symsize {
                errmsg = "Assigning to bitrange is superfluous".to_string();
            }
        }

        if !errmsg.is_empty() {
            // Was there an error condition: report it and pass through the
            // old expression (C++ deletes vn and rhs)
            self.report_error(None, &errmsg);
            return Ok(std::mem::take(&mut rhs.ops));
        }

        // We know what the size of the input has to be
        {
            let rhs_ops = &mut rhs.ops;
            let rhs_out = rhs
                .outvn
                .as_mut()
                .expect("assignBitRange: rhs expression has no output (C++ dereferences null)");
            force_size(
                rhs_out,
                &ConstTpl::new_real(ConstType::Real, u64::from(smallsize)),
                rhs_ops,
            )?;
        }

        let finalout = self.build_truncated_varnode(&vn, bitoffset, numbits)?;
        let mut res = if let Some(finalout) = finalout {
            // (C++ deletes vn — don't keep the original varnode object)
            self.create_op_out_unary(finalout, OpCode::CPUI_COPY, rhs)
        } else {
            if bitoffset.wadd(numbits) > 64 {
                errmsg = "Assigned bitrange extends past first 64 bits".to_string();
            }
            // C++ reads vn again (unmutated) for finalout after building the
            // AND chain; clone up front
            let finalout = vn.clone();
            let mut lhs = ExprTree::new(vn);
            self.append_op(OpCode::CPUI_INT_AND, &mut lhs, mask, 0);
            if zextneeded {
                rhs = self.create_op(OpCode::CPUI_INT_ZEXT, rhs);
            }
            if shiftneeded {
                self.append_op(OpCode::CPUI_INT_LEFT, &mut rhs, u64::from(bitoffset), 4);
            }
            self.create_op_out(finalout, OpCode::CPUI_INT_OR, lhs, rhs)
        };
        if !errmsg.is_empty() {
            self.report_error(None, &errmsg);
        }
        Ok(std::mem::take(&mut res.ops))
    }

    /// C++ `createBitRange(SpecificSymbol *sym,...)`: create an expression
    /// computing the indicated bitrange of the symbol.  The result is
    /// truncated to the smallest byte size that can contain the indicated
    /// number of bits, with the desired bits shifted all the way to the
    /// right.  The port takes the already-resolved `sym->getVarnode()` as
    /// `vn` and `sym->getName()` as `sym_name` (see module docs).
    fn create_bit_range(
        &mut self,
        mut vn: VarnodeTpl,
        sym_name: &[u8],
        bitoffset: u32,
        numbits: u32,
    ) -> UnlaceResult<ExprTree> {
        let mut bitoffset = bitoffset;
        let mut errmsg = String::new();
        if numbits == 0 {
            errmsg = "Size of bitrange is zero".to_string();
        }
        let finalsize = numbits.wadd(7) / 8; // Round up to nearest byte size
        let mut truncshift: u32 = 0;
        let mut maskneeded = !numbits.is_multiple_of(8);
        let mut truncneeded = true;

        // Special case where we can set the size, without invoking a
        // truncation operator
        if errmsg.is_empty()
            && bitoffset == 0
            && !maskneeded
            && vn.get_space().get_type() == ConstType::Handle
            && vn.is_zero_size()
        {
            vn.set_size(ConstTpl::new_real(ConstType::Real, u64::from(finalsize)));
            return Ok(ExprTree::new(vn));
        }

        if errmsg.is_empty() {
            let truncvn = self.build_truncated_varnode(&vn, bitoffset, numbits)?;
            if let Some(truncvn) = truncvn {
                // If we are able to construct a simple truncated varnode,
                // return just the varnode as an expression (C++ deletes vn)
                return Ok(ExprTree::new(truncvn));
            }
        }

        if vn.get_size().get_type() == ConstType::Real {
            // If we know the size of the input varnode, we can do some
            // immediate checks, and possibly simplify things
            let mut insize = vn.get_size().get_real() as u32; // cast: C++ implicit uintb -> uint4
            if insize > 0 {
                truncneeded = finalsize < insize;
                insize = insize.wmul(8); // Convert to number of bits
                if bitoffset >= insize || bitoffset.wadd(numbits) > insize {
                    errmsg = "Bitrange is bad".to_string();
                }
                if maskneeded && bitoffset.wadd(numbits) == insize {
                    maskneeded = false;
                }
            }
        }

        let mut mask: u64 = 2;
        mask = mask.wshl(numbits.wsub(1)).wsub(1);

        if truncneeded && bitoffset.is_multiple_of(8) {
            truncshift = bitoffset / 8;
            bitoffset = 0;
        }

        if bitoffset == 0 && !truncneeded && !maskneeded {
            errmsg = "Superfluous bitrange".to_string();
        }

        if maskneeded && finalsize > 8 {
            errmsg = format!(
                "Illegal masked bitrange producing varnode larger than 64 bits: {}",
                String::from_utf8_lossy(sym_name)
            );
        }

        let mut res = ExprTree::new(vn);

        if !errmsg.is_empty() {
            // Check for error condition
            let loc = self.get_location(sym_name);
            self.report_error(loc.as_ref(), &errmsg);
            return Ok(res);
        }

        if bitoffset != 0 {
            self.append_op(OpCode::CPUI_INT_RIGHT, &mut res, u64::from(bitoffset), 4);
        }
        if truncneeded {
            self.append_op(OpCode::CPUI_SUBPIECE, &mut res, u64::from(truncshift), 4);
        }
        if maskneeded {
            self.append_op(
                OpCode::CPUI_INT_AND,
                &mut res,
                mask,
                finalsize as i32, // cast: C++ implicit uint4 -> int4 (constsz parameter)
            );
        }
        {
            let res_ops = &mut res.ops;
            let res_out = res
                .outvn
                .as_mut()
                .expect("createBitRange: expression has no output (C++ dereferences null)");
            force_size(
                res_out,
                &ConstTpl::new_real(ConstType::Real, u64::from(finalsize)),
                res_ops,
            )?;
        }
        Ok(res)
    }

    /// C++ `addressOf`: produce the constant varnode that is the offset
    /// portion of varnode `var` (C++ default `size = 0`); consumes `var`.
    fn address_of(&self, var: VarnodeTpl, size: u32) -> VarnodeTpl {
        let mut size = size;
        if size == 0 {
            // If no size specified
            if var.get_space().get_type() == ConstType::Spaceid {
                // Look to the particular space to see if it has a standard
                // address size
                let spc = var.get_space().get_space();
                size = spc.get_addr_size();
            }
        }
        let constantspace = self
            .get_constant_space()
            .expect("PcodeCompile constant space not set (C++ would store a null space)");
        if var.get_offset().get_type() == ConstType::Real
            && var.get_space().get_type() == ConstType::Spaceid
        {
            let spc = var.get_space().get_space();
            let off = AddrSpace::byte_to_address(var.get_offset().get_real(), spc.get_word_size());
            VarnodeTpl::new(
                ConstTpl::new_space(constantspace),
                ConstTpl::new_real(ConstType::Real, off),
                ConstTpl::new_real(ConstType::Real, u64::from(size)),
            )
        } else {
            VarnodeTpl::new(
                ConstTpl::new_space(constantspace),
                var.get_offset().clone(),
                ConstTpl::new_real(ConstType::Real, u64::from(size)),
            )
        }
        // (C++ deletes var; the by-value parameter drops here)
    }
}

#[cfg(test)]
mod tests;
