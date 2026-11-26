//! Compiler-side p-code builders, ported from Ghidra's slgh_compile.cc.
//!
//! [`SleighPcode`] supplies compiler callbacks for the shared p-code builder;
//! [`MacroBuilder`] expands macro templates with parameter substitution.
//! Both access the driver's state through [`CompilerHost`].

use std::rc::Rc;

use unlace_base::error::UnlaceResult;
use unlace_base::space::AddrSpace;
use unlace_num::opcodes::OpCode;
use unlace_sleigh::pcodecompile::{Location, PcodeCompileSymbol};
use unlace_sleigh::semantics::{ConstTpl, ConstType, HandleTpl, OpTpl, PcodeBuilder, VarnodeTpl};

/// Compiler state used by [`SleighPcode`] and [`MacroBuilder`].
///
/// | C++ call               | trait method         | C++ anchor                  |
/// |------------------------|----------------------|-----------------------------|
/// | `getUniqueAddr()`      | `get_unique_addr`    | slgh_compile.cc:2465        |
/// | `getUniqueSpace()`     | `get_unique_space`   | (SleighBase / spacemanager) |
/// | `getConstantSpace()`   | `get_constant_space` | (SleighBase / spacemanager) |
/// | `getLocation(sym)`     | `get_location`       | slgh_compile.cc:3119        |
/// | `addSymbol(sym)`       | `add_symbol`         | slgh_compile.cc:1954        |
/// | `reportError(loc,msg)` | `report_error`       | slgh_compile.cc:1942/1800   |
/// | `reportWarning(loc,m)` | `report_warning`     | slgh_compile.cc:1948        |
pub trait CompilerHost {
    /// C++ `SleighCompile::getUniqueAddr` (slgh_compile.cc:2465): the next free
    /// unique-space temporary offset (bumps the unique base by
    /// `SleighBase::MAX_UNIQUE_SIZE`).
    fn get_unique_addr(&mut self) -> u32;

    /// C++ `getUniqueSpace` (the temporary-register address space).
    fn get_unique_space(&self) -> Rc<AddrSpace>;

    /// C++ `getConstantSpace` (the constant address space).
    fn get_constant_space(&self) -> Rc<AddrSpace>;

    /// C++ `SleighCompile::getLocation(SleighSymbol *)` (slgh_compile.cc:3119),
    /// keyed by symbol name in the port (matching the `PcodeCompile` trait).
    fn get_location(&self, symbol_name: &[u8]) -> Option<Location>;

    /// C++ `SleighCompile::addSymbol(SleighSymbol *)`.
    fn add_symbol(&mut self, sym: PcodeCompileSymbol);

    /// C++ `SleighCompile::reportError(loc, msg)`.
    fn report_error(&mut self, loc: Option<&Location>, msg: &str);

    /// C++ `SleighCompile::reportWarning(loc, msg)`.
    fn report_warning(&mut self, loc: Option<&Location>, msg: &str);
}

/// P-code parser state and compiler-host callbacks
/// (`SleighPcode`, slgh_compile.hh:282).
#[derive(Default)]
pub struct SleighPcode {
    /// Retained for compatibility; temporary allocation uses the host's unique base.
    pub unique_base: u32,
    /// Number of labels in the current constructor (`local_labelcount`).
    pub local_labelcount: u32,
    /// Whether the `local` keyword is required for temporaries (`enforceLocalKey`).
    pub enforce_local_key: bool,
}

impl SleighPcode {
    /// Construct an empty p-code compiler (`SleighPcode::SleighPcode`,
    /// slgh_compile.hh:290).  In C++ the `compiler` back-pointer is null until
    /// `setCompiler`; here the host is supplied per-call.
    pub fn new() -> SleighPcode {
        SleighPcode::default()
    }

    /// Allocate the next temporary register offset (`SleighPcode::allocateTemp`,
    /// slgh_compile.cc:1930-1934) -- routes to `SleighCompile::getUniqueAddr`.
    pub fn allocate_temp(&mut self, host: &mut dyn CompilerHost) -> u32 {
        host.get_unique_addr()
    }

    /// Look up a symbol's defining location (`SleighPcode::getLocation`,
    /// slgh_compile.cc:1936-1940) -- routes to `SleighCompile::getLocation`.
    pub fn get_location(&self, host: &dyn CompilerHost, symbol_name: &[u8]) -> Option<Location> {
        host.get_location(symbol_name)
    }

    /// Report a parse error (`SleighPcode::reportError`,
    /// slgh_compile.cc:1942-1946) -- routes to `SleighCompile::reportError`.
    pub fn report_error(&self, host: &mut dyn CompilerHost, loc: Option<&Location>, msg: &str) {
        host.report_error(loc, msg);
    }

    /// Report a parse warning (`SleighPcode::reportWarning`,
    /// slgh_compile.cc:1948-1952) -- routes to `SleighCompile::reportWarning`.
    pub fn report_warning(&self, host: &mut dyn CompilerHost, loc: Option<&Location>, msg: &str) {
        host.report_warning(loc, msg);
    }

    /// Register a symbol (`SleighPcode::addSymbol`,
    /// slgh_compile.cc:1954-1958) -- routes to `SleighCompile::addSymbol`.
    pub fn add_symbol(&self, host: &mut dyn CompilerHost, sym: PcodeCompileSymbol) {
        host.add_symbol(sym);
    }
}

/// Expands a `macro` directive's body into a caller's `OpTpl` list, substituting
/// the call-site arguments for the macro's formal parameters
/// (`MacroBuilder`, slgh_compile.hh:256-275; bodies slgh_compile.cc:1785-1928).
///
/// [`PcodeBuilder`] dispatches expansion to this implementation, which copies
/// templates into `outvec` and substitutes parameter handles. The compiler is
/// borrowed for the expansion to allocate unique storage and resolve spaces.
pub struct MacroBuilder<'a> {
    /// The partial op list to expand the macro into (`outvec`).
    pub outvec: &'a mut Vec<OpTpl>,
    /// Parameter handles to substitute (`params`).
    pub params: Vec<HandleTpl>,
    /// Set true if expansion hit an error (`haserror`).
    pub haserror: bool,
    /// The C++ private `PcodeBuilder::labelbase` field.
    label_base: u32,
    /// The C++ private `PcodeBuilder::labelcount` field.
    label_count: u32,
    /// The compiler back-pointer (C++ `SleighCompile *slgh`).
    host: &'a mut dyn CompilerHost,
}

impl<'a> MacroBuilder<'a> {
    /// Construct a builder targeting `outvec`, with `labelbase` label offset and
    /// the owning compiler `host` (`MacroBuilder::MacroBuilder`,
    /// slgh_compile.hh:266 -- `PcodeBuilder(lbcnt)` initializes both
    /// `labelbase` and `labelcount` to `lbcnt`).
    pub fn new(
        host: &'a mut dyn CompilerHost,
        outvec: &'a mut Vec<OpTpl>,
        labelbase: u32,
    ) -> MacroBuilder<'a> {
        MacroBuilder {
            outvec,
            params: Vec::new(),
            haserror: false,
            label_base: labelbase,
            label_count: labelbase,
            host,
        }
    }

    /// Report an error encountered expanding the macro and flag `haserror`
    /// (`MacroBuilder::reportError`, slgh_compile.cc:1800-1805).
    fn report_error(&mut self, loc: Option<&Location>, val: &str) {
        self.host.report_error(loc, val);
        self.haserror = true;
    }

    /// Establish the `MACRO` directive op to expand (`setMacroOp`,
    /// slgh_compile.cc:1809-1820).  Inputs `1..numInput` of the MACRO op are the
    /// actual call-site arguments; each becomes a `HandleTpl` parameter
    /// (input 0 is the macro symbol itself).
    pub fn set_macro_op(&mut self, macroop: &OpTpl) -> UnlaceResult<()> {
        // C++ free(): clear any prior params.
        self.params.clear();
        for i in 1..macroop.num_input() {
            let vn = macroop.get_in(i);
            self.params.push(HandleTpl::new_from_varnode(vn));
        }
        Ok(())
    }

    /// Clone one op template into `outvec`, substituting parameter handles
    /// (`transferOp`, slgh_compile.cc:1833-1884).
    ///
    /// VarnodeTpls used by the op are examined to see if they are derived from
    /// parameters of the macro; if so, the actual passed parameters are
    /// substituted in.  Truncation operations on a macro parameter may insert an
    /// additional `CPUI_SUBPIECE` op and certain forms are illegal.
    ///
    /// Takes the cloned `op` by value (the C++ caller has already cloned it via
    /// `dump`) and, on success, pushes it (plus any inserted subpiece ops) into
    /// `outvec`.  Returns `true` if there were no illegal truncations.  The C++
    /// passes `params` explicitly but always as `this->params`; the port reads
    /// `self.params` directly.
    fn transfer_op(&mut self, mut op: OpTpl) -> UnlaceResult<bool> {
        // Fix handle details of a macro generated OpTpl relative to its specific
        // invocation and transfer it into the output stream.
        let mut handle_index: i32 = 0;
        let mut hasrealsize = false;
        let mut realsize: u64 = 0;

        if let Some(outvn) = op.get_out_mut() {
            let plus = outvn.transfer(&self.params)?;
            if plus >= 0 {
                self.report_error(
                    None,
                    "Cannot currently assign to bitrange of macro parameter that is a temporary",
                );
                return Ok(false);
            }
        }
        for i in 0..op.num_input() {
            {
                let vn = op.get_in(i);
                if vn.get_offset().get_type() == ConstType::Handle {
                    handle_index = vn.get_offset().get_handle_index();
                    hasrealsize = vn.get_size().get_type() == ConstType::Real;
                    realsize = vn.get_size().get_real();
                }
            }
            let plus = op.get_in_mut(i).transfer(&self.params)?;
            if plus >= 0 {
                if !hasrealsize {
                    self.report_error(None, "Problem with bit range operator in macro");
                    return Ok(false);
                }
                // Generate a new temporary location.
                let newtemp = u64::from(self.host.get_unique_addr());

                // Generate a SUBPIECE op that implements the offset_plus.
                let mut subpieceop = OpTpl::new(OpCode::CPUI_SUBPIECE);
                let newvn = VarnodeTpl::new(
                    ConstTpl::new_space(self.host.get_unique_space()),
                    ConstTpl::new_real(ConstType::Real, newtemp),
                    ConstTpl::new_real(ConstType::Real, realsize),
                );
                subpieceop.set_output(newvn.clone());
                let hand = &self.params[handle_index as usize];
                let origvn = VarnodeTpl::new(
                    hand.get_space().clone(),
                    hand.get_ptr_offset().clone(),
                    hand.get_size().clone(),
                );
                subpieceop.add_input(origvn);
                let plusvn = VarnodeTpl::new(
                    ConstTpl::new_space(self.host.get_constant_space()),
                    ConstTpl::new_real(ConstType::Real, plus as u64), // cast: C++ uintb(plus)
                    ConstTpl::new_real(ConstType::Real, 4),
                );
                subpieceop.add_input(plusvn);
                self.outvec.push(subpieceop);

                // Replace original varnode with output of subpiece.
                op.set_input(newvn, i);
            }
        }
        self.outvec.push(op);
        Ok(true)
    }

    /// Return whether expansion encountered an error (`hasError`).
    pub fn has_error(&self) -> bool {
        self.haserror
    }
}

impl PcodeBuilder for MacroBuilder<'_> {
    fn get_label_base(&self) -> u32 {
        self.label_base
    }

    fn set_label_base(&mut self, val: u32) {
        self.label_base = val;
    }

    fn get_label_count(&self) -> u32 {
        self.label_count
    }

    fn set_label_count(&mut self, val: u32) {
        self.label_count = val;
    }

    /// `MacroBuilder::dump` (slgh_compile.cc:1886-1910): clone `op`, fix up
    /// relative (label) operands against the current `labelbase`, then
    /// substitute macro parameters via `transferOp`.
    fn dump(&mut self, op: &OpTpl) -> UnlaceResult<()> {
        let mut clone = OpTpl::new(op.get_opcode());
        if let Some(vn) = op.get_out() {
            clone.set_output(vn.clone());
        }
        let label_base = self.get_label_base();
        for i in 0..op.num_input() {
            let mut v_clone = op.get_in(i).clone();
            if v_clone.is_relative() {
                // Adjust relative index, depending on the labelbase.
                let val = v_clone
                    .get_offset()
                    .get_real()
                    .wrapping_add(u64::from(label_base));
                v_clone.set_relative(val);
            }
            clone.add_input(v_clone);
        }
        // C++ deletes the clone on failure; in Rust `transfer_op` consumes it,
        // so a non-transferred clone is simply dropped.
        self.transfer_op(clone)?;
        Ok(())
    }

    /// BUILD directive -> `dump` (C++ `appendBuild(bld,secnum){ dump(bld); }`).
    fn append_build(&mut self, bld: &OpTpl, _secnum: i32) -> UnlaceResult<()> {
        self.dump(bld)
    }

    /// DELAY_SLOT directive -> `dump` (C++ `delaySlot(op){ dump(op); }`).
    fn delay_slot(&mut self, op: &OpTpl) -> UnlaceResult<()> {
        self.dump(op)
    }

    /// `MacroBuilder::setLabel` (slgh_compile.cc:1912-1928): a label within a
    /// macro is local to the macro; when expanded, its index must be adjusted by
    /// `labelbase` so it fits with the parent's labels.
    fn set_label(&mut self, op: &OpTpl) -> UnlaceResult<()> {
        let mut clone = OpTpl::new(op.get_opcode());
        let mut v_clone = op.get_in(0).clone(); // Clone the label index
        // Make adjustment to macro local value so that it is parent local.
        let val = v_clone
            .get_offset()
            .get_real()
            .wrapping_add(u64::from(self.get_label_base()));
        v_clone.set_offset(val);
        clone.add_input(v_clone);
        self.outvec.push(clone);
        Ok(())
    }

    /// CROSSBUILD directive -> `dump` (C++ `appendCrossBuild(bld,secnum){ dump(bld); }`).
    fn append_cross_build(&mut self, bld: &OpTpl, _secnum: i32) -> UnlaceResult<()> {
        self.dump(bld)
    }
}

#[cfg(test)]
mod tests;
