//! P-code execution and breakpoints, from `decompiler/cpp/emulate.{hh,cc}`.
//!
//! [`EmulateCore`] stores halt and current-behavior state; [`Emulate`] provides
//! dispatch and requires operation handlers. [`EmulateMemory`] exposes shared
//! memory and the current operation, with reusable handlers in [`emulate_memory`].
//! Concrete engines delegate to those handlers or supply their own behavior.
//!
//! Address-space constants contain manager indices. The emulator keeps an
//! explicit `Rc<AddrSpaceManager>` to resolve them. Cached operations are
//! immutable `Rc<PcodeOpRaw>` values and own their varnodes, so [`PcodeEmitCache`]
//! only manages the operation list.
//!
//! Breakpoint callbacks receive `&mut dyn EmulateMemory` during invocation rather
//! than storing an emulator back-pointer. Re-entering the same break table from
//! a callback panics on its active `RefCell` borrow. Operation and callback errors
//! propagate as `UnlaceResult` with their original messages.

use std::cell::RefCell;
use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::{AddrSpace, AddrSpaceManager};
use unlace_base::types::Wrap;
use unlace_num::float::FloatFormat;
use unlace_num::opbehavior::{FloatFormatProvider, OpBehavior, register_instructions};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::{PcodeOpRaw, VarnodeData};

use crate::memstate::MemoryState;
use crate::translate::{PcodeEmit, Translate};

// ---------------------------------------------------------------------------
// BreakCallBack / BreakTable / BreakTableCallBack
// ---------------------------------------------------------------------------

/// Breakpoint hooks that receive the active emulator on each invocation.
/// Override the hook for the kind of breakpoint being registered.
pub trait BreakCallBack {
    /// Handle a user-defined p-code operation. Return `true` to suppress its
    /// normal action. The default returns `true` without changing emulator state.
    fn pcode_callback(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        op: &PcodeOpRaw,
    ) -> UnlaceResult<bool> {
        let _ = (emulate, op);
        Ok(true)
    }

    /// Handle an instruction address. Return `true` to suppress execution of
    /// the entire instruction. The default returns `true` without changing state.
    fn address_callback(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        addr: &Address,
    ) -> UnlaceResult<bool> {
        let _ = (emulate, addr);
        Ok(true)
    }
}

/// Dispatch breakpoints for user-defined p-code operations or instruction
/// addresses. A `true` result suppresses normal execution at that breakpoint.
pub trait BreakTable {
    /// Invoke a matching operation callback. Return `true` if it replaces the
    /// normal p-code action, or `false` if execution should continue.
    fn do_pcode_op_break(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        curop: &PcodeOpRaw,
    ) -> UnlaceResult<bool>;

    /// Invoke a matching address callback. Return `true` if it replaces the
    /// entire machine instruction, or `false` if execution should continue.
    fn do_address_break(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        addr: &Address,
    ) -> UnlaceResult<bool>;
}

/// Breakpoint registry with shared, mutable callbacks.
///
/// One callback is stored per user-operation id or address; registering the same
/// key replaces its callback. The translator resolves user-operation names.
pub struct BreakTableCallBack {
    /// The translator
    trans: Rc<dyn Translate>,
    /// A container of address based breakpoints (C++ `map<Address,
    /// BreakCallBack *>`; ADR 0002 BTreeMap over the transcribed Address
    /// ordering).
    // mutable_key_type: Address's Ord reads only the space's immutable index
    // and the offset (unlace-base address.rs); the AddrSpace interior-mutable
    // Cells never participate, so a key's order cannot change in the map.
    #[allow(clippy::mutable_key_type)]
    addresscallback: BTreeMap<Address, Rc<RefCell<dyn BreakCallBack>>>,
    /// A container of pcode based breakpoints
    pcodecallback: BTreeMap<u64, Rc<RefCell<dyn BreakCallBack>>>,
}

impl BreakTableCallBack {
    /// Create a breakpoint table using the translator to resolve user-op names.
    pub fn new(t: Rc<dyn Translate>) -> Self {
        BreakTableCallBack {
            trans: t,
            addresscallback: BTreeMap::new(),
            pcodecallback: BTreeMap::new(),
        }
    }

    /// Register for the first matching user-operation name, replacing its prior
    /// callback. Unknown names return `UnlaceError::Lowlevel`. The table retains the
    /// supplied shared callback.
    pub fn register_pcode_callback(
        &mut self,
        name: &str,
        func: Rc<RefCell<dyn BreakCallBack>>,
    ) -> UnlaceResult<()> {
        let mut userops: Vec<String> = Vec::new();
        self.trans.get_user_op_names(&mut userops);
        let mut i: i32 = 0;
        while (i as usize) < userops.len() {
            // cast: C++ int4 i < vector::size() comparison
            if userops[i as usize] == name {
                self.pcodecallback.insert(i as u64, func); // cast: (uintb)i, i >= 0
                return Ok(());
            }
            i += 1;
        }
        Err(UnlaceError::lowlevel(format!("Bad userop name: {name}")))
    }

    /// Register a callback for an instruction address, replacing its prior
    /// callback. The table retains the supplied shared callback.
    pub fn register_address_callback(
        &mut self,
        addr: &Address,
        func: Rc<RefCell<dyn BreakCallBack>>,
    ) {
        self.addresscallback.insert(addr.clone(), func);
    }
}

impl BreakTable for BreakTableCallBack {
    /// Use input zero's offset as the user-operation id. Invoke its callback,
    /// or return `false` when no callback is registered.
    fn do_pcode_op_break(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        curop: &PcodeOpRaw,
    ) -> UnlaceResult<bool> {
        let val = curop.get_input(0).offset;

        match self.pcodecallback.get(&val) {
            None => Ok(false),
            Some(func) => func.borrow_mut().pcode_callback(emulate, curop),
        }
    }

    /// Invoke the callback registered for this address, or return `false`.
    fn do_address_break(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        addr: &Address,
    ) -> UnlaceResult<bool> {
        match self.addresscallback.get(addr) {
            None => Ok(false),
            Some(func) => func.borrow_mut().address_callback(emulate, addr),
        }
    }
}

// ---------------------------------------------------------------------------
// Emulate
// ---------------------------------------------------------------------------

/// Halt state and current operation behavior shared by emulator engines.
/// An engine exposes these fields through [`Emulate::emulate_core`].
pub struct EmulateCore {
    /// Set to \b true if the emulator is halted
    pub emu_halted: bool,
    /// Behavior of the next op to execute (C++ `OpBehavior *`, null when
    /// unset)
    pub current_behave: Option<Rc<dyn OpBehavior>>,
}

impl EmulateCore {
    /// Generic emulator constructor (C++ `Emulate::Emulate`).
    pub fn new() -> Self {
        EmulateCore {
            emu_halted: true,
            current_behave: None,
        }
    }
}

impl Default for EmulateCore {
    fn default() -> Self {
        Self::new()
    }
}

/// Execution interface for engines that step through individual p-code
/// operations. Engines provide operation handlers and machine-address tracking;
/// the trait supplies dispatch through the current operation behavior.
pub trait Emulate {
    /// Access the concrete C++ base-class members (unlace boundary; see
    /// [`EmulateCore`]).
    fn emulate_core(&self) -> &EmulateCore;

    /// Mutable access to the concrete C++ base-class members.
    fn emulate_core_mut(&mut self) -> &mut EmulateCore;

    /// Execute a unary arithmetic/logical operation
    fn execute_unary(&mut self) -> UnlaceResult<()>;

    /// Execute a binary arithmetic/logical operation
    fn execute_binary(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for a p-code LOAD
    fn execute_load(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for a p-code STORE
    fn execute_store(&mut self) -> UnlaceResult<()>;

    /// \brief Standard behavior for a BRANCH
    ///
    /// This routine performs a standard p-code BRANCH operation on the
    /// memory state.  This same routine is used for CBRANCH operations if
    /// the condition has evaluated to \b true.
    fn execute_branch(&mut self) -> UnlaceResult<()>;

    /// \brief Check if the conditional of a CBRANCH is \b true
    ///
    /// This routine only checks if the condition for a p-code CBRANCH is
    /// true.  It does \e not perform the actual branch.
    /// \return the boolean state indicated by the condition
    fn execute_cbranch(&mut self) -> UnlaceResult<bool>;

    /// Standard behavior for a BRANCHIND
    fn execute_branchind(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for a p-code CALL
    fn execute_call(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for a CALLIND
    fn execute_callind(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for a user-defined p-code op
    fn execute_callother(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for a MULTIEQUAL (phi-node)
    fn execute_multiequal(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for an INDIRECT op
    fn execute_indirect(&mut self) -> UnlaceResult<()>;

    /// Behavior for a SEGMENTOP
    fn execute_segment_op(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for a CPOOLREF (constant pool reference) op
    fn execute_cpool_ref(&mut self) -> UnlaceResult<()>;

    /// Standard behavior for (low-level) NEW op
    fn execute_new(&mut self) -> UnlaceResult<()>;

    /// Standard p-code fall-thru semantics
    fn fallthru_op(&mut self) -> UnlaceResult<()>;

    /// Set the address of the next instruction to emulate
    fn set_execute_address(&mut self, addr: &Address) -> UnlaceResult<()>;

    /// Get the address of the current instruction being executed
    fn get_execute_address(&self) -> Address;

    /// Set the \e halt state of the emulator.
    ///
    /// Applications and breakpoints can use this method and its companion
    /// get_halt() to terminate and restart the main emulator loop as needed.
    /// The emulator itself makes no use of this routine or the associated
    /// state variable \b emu_halted.
    /// \param val is what the halt state of the emulator should be set to
    fn set_halt(&mut self, val: bool) {
        self.emulate_core_mut().emu_halted = val;
    }

    /// Get the \e halt state of the emulator.
    /// \return \b true if the emulator is in a "halted" state.
    fn get_halt(&self) -> bool {
        self.emulate_core().emu_halted
    }

    /// Do a single pcode op step.
    ///
    /// This method executes a single pcode operation, the current one.  The
    /// MemoryState of the emulator is queried and changed as needed to
    /// accomplish this.  (C++ `Emulate::executeCurrentOp`, non-virtual.)
    fn execute_current_op(&mut self) -> UnlaceResult<()> {
        let current_behave = match &self.emulate_core().current_behave {
            None => {
                // Presumably a NO-OP
                return self.fallthru_op();
            }
            Some(behave) => Rc::clone(behave),
        };
        if current_behave.is_special() {
            match current_behave.get_opcode() {
                OpCode::CPUI_LOAD => {
                    self.execute_load()?;
                    self.fallthru_op()?;
                }
                OpCode::CPUI_STORE => {
                    self.execute_store()?;
                    self.fallthru_op()?;
                }
                OpCode::CPUI_BRANCH => {
                    self.execute_branch()?;
                }
                OpCode::CPUI_CBRANCH => {
                    if self.execute_cbranch()? {
                        self.execute_branch()?;
                    } else {
                        self.fallthru_op()?;
                    }
                }
                OpCode::CPUI_BRANCHIND => {
                    self.execute_branchind()?;
                }
                OpCode::CPUI_CALL => {
                    self.execute_call()?;
                }
                OpCode::CPUI_CALLIND => {
                    self.execute_callind()?;
                }
                OpCode::CPUI_CALLOTHER => {
                    self.execute_callother()?;
                }
                OpCode::CPUI_RETURN => {
                    self.execute_branchind()?;
                }
                OpCode::CPUI_MULTIEQUAL => {
                    self.execute_multiequal()?;
                    self.fallthru_op()?;
                }
                OpCode::CPUI_INDIRECT => {
                    self.execute_indirect()?;
                    self.fallthru_op()?;
                }
                OpCode::CPUI_SEGMENTOP => {
                    self.execute_segment_op()?;
                    self.fallthru_op()?;
                }
                OpCode::CPUI_CPOOLREF => {
                    self.execute_cpool_ref()?;
                    self.fallthru_op()?;
                }
                OpCode::CPUI_NEW => {
                    self.execute_new()?;
                    self.fallthru_op()?;
                }
                _ => return Err(UnlaceError::lowlevel("Bad special op")),
            }
        } else if current_behave.is_unary() {
            // Unary operation
            self.execute_unary()?;
            self.fallthru_op()?;
        } else {
            // Binary operation
            self.execute_binary()?;
            self.fallthru_op()?; // All binary ops are fallthrus
        }
        Ok(())
    }
}

// ---------------------------------------------------------------------------
// EmulateMemory
// ---------------------------------------------------------------------------

/// Engine access to shared memory, the current raw operation and address spaces.
///
/// Reusable operation handlers live in [`emulate_memory`]; engines delegate
/// their [`Emulate`] methods to these handlers or provide their own. Engines
/// provide fallthrough and instruction-address tracking through [`Emulate`].
/// The shared handlers reject CALLOTHER, MULTIEQUAL, INDIRECT, CPOOLREF,
/// SEGMENTOP and NEW with errors.
pub trait EmulateMemory: Emulate {
    /// Get the emulator's memory state (the C++ protected `memstate` member
    /// and the public `getMemoryState`; shared with the application).
    fn get_memory_state(&self) -> &Rc<RefCell<MemoryState>>;

    /// The current op to execute (the C++ protected `currentOp` member).
    fn current_op_raw(&self) -> Option<&Rc<PcodeOpRaw>>;

    /// unlace boundary: the `AddrSpaceManager` that the C++ `Translate`
    /// inheritance made implicitly reachable (resolves `<spaceid>` constants
    /// through `VarnodeData::get_space_from_const`; module docs).
    fn addr_space_manager(&self) -> &AddrSpaceManager;
}

/// The C++ `EmulateMemory` method bodies, as free functions over any
/// [`EmulateMemory`] engine.  A concrete engine's `impl Emulate` delegates
/// its `execute_*` methods here (the C++ inheritance edge); overriding a
/// C++ virtual means *not* delegating for that method.
pub mod emulate_memory {
    use super::*;

    fn current_op<T: EmulateMemory + ?Sized>(emu: &T) -> Rc<PcodeOpRaw> {
        Rc::clone(
            emu.current_op_raw()
                .expect("EmulateMemory: currentOp not set (C++ would dereference null)"),
        )
    }

    fn current_behave<T: EmulateMemory + ?Sized>(emu: &T) -> Rc<dyn OpBehavior> {
        Rc::clone(
            emu.emulate_core()
                .current_behave
                .as_ref()
                .expect("EmulateMemory: currentBehave not set (C++ would dereference null)"),
        )
    }

    /// C++ `EmulateMemory::executeUnary`
    pub fn execute_unary<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        let behave = current_behave(emu);
        let memstate = Rc::clone(emu.get_memory_state());
        let in1 = memstate.borrow().get_value_data(op.get_input(0))?;
        let out_vn = op
            .get_output()
            .expect("executeUnary: op without output (C++ UB)");
        let out = behave.evaluate_unary(
            out_vn.size as i32,          // cast: uint4 size as the C++ int4 param
            op.get_input(0).size as i32, // cast: uint4 size as the C++ int4 param
            in1,
        )?;
        memstate.borrow_mut().set_value_data(out_vn, out)?;
        Ok(())
    }

    /// C++ `EmulateMemory::executeBinary`
    pub fn execute_binary<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        let behave = current_behave(emu);
        let memstate = Rc::clone(emu.get_memory_state());
        let in1 = memstate.borrow().get_value_data(op.get_input(0))?;
        let in2 = memstate.borrow().get_value_data(op.get_input(1))?;
        let out_vn = op
            .get_output()
            .expect("executeBinary: op without output (C++ UB)");
        let out = behave.evaluate_binary(
            out_vn.size as i32,          // cast: uint4 size as the C++ int4 param
            op.get_input(0).size as i32, // cast: uint4 size as the C++ int4 param
            in1,
            in2,
        )?;
        memstate.borrow_mut().set_value_data(out_vn, out)?;
        Ok(())
    }

    /// C++ `EmulateMemory::executeLoad`
    pub fn execute_load<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        let memstate = Rc::clone(emu.get_memory_state());
        let off = memstate.borrow().get_value_data(op.get_input(1))?;
        let spc = op
            .get_input(0)
            .get_space_from_const(emu.addr_space_manager())
            .expect("executeLoad: <spaceid> constant does not resolve (C++ pointer always valid)");

        let off = AddrSpace::address_to_byte(off, spc.get_word_size());
        let out_vn = op
            .get_output()
            .expect("executeLoad: op without output (C++ UB)");
        let res = memstate.borrow().get_value(&spc, off, out_vn.size as i32)?; // cast: uint4 size as int4
        memstate.borrow_mut().set_value_data(out_vn, res)?;
        Ok(())
    }

    /// C++ `EmulateMemory::executeStore`
    pub fn execute_store<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        let memstate = Rc::clone(emu.get_memory_state());
        let val = memstate.borrow().get_value_data(op.get_input(2))?; // Value being stored
        let off = memstate.borrow().get_value_data(op.get_input(1))?; // Offset to store at
        let spc = op
            .get_input(0) // Space to store in
            .get_space_from_const(emu.addr_space_manager())
            .expect("executeStore: <spaceid> constant does not resolve (C++ pointer always valid)");

        let off = AddrSpace::address_to_byte(off, spc.get_word_size());
        memstate
            .borrow_mut()
            .set_value(&spc, off, op.get_input(2).size as i32, val)?; // cast: uint4 size as int4
        Ok(())
    }

    /// C++ `EmulateMemory::executeBranch`
    pub fn execute_branch<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        emu.set_execute_address(&op.get_input(0).get_addr())
    }

    /// C++ `EmulateMemory::executeCbranch`
    pub fn execute_cbranch<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<bool> {
        let op = current_op(emu);
        let memstate = Rc::clone(emu.get_memory_state());
        let cond = memstate.borrow().get_value_data(op.get_input(1))?;
        Ok(cond != 0)
    }

    /// C++ `EmulateMemory::executeBranchind`
    pub fn execute_branchind<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        let memstate = Rc::clone(emu.get_memory_state());
        let off = memstate.borrow().get_value_data(op.get_input(0))?;
        let spc = Rc::clone(
            op.get_addr()
                .get_space()
                .expect("executeBranchind: instruction address with null space (C++ UB)"),
        );
        emu.set_execute_address(&Address::new(spc, off))
    }

    /// C++ `EmulateMemory::executeCall`
    pub fn execute_call<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        emu.set_execute_address(&op.get_input(0).get_addr())
    }

    /// C++ `EmulateMemory::executeCallind`
    pub fn execute_callind<T: EmulateMemory + ?Sized>(emu: &mut T) -> UnlaceResult<()> {
        let op = current_op(emu);
        let memstate = Rc::clone(emu.get_memory_state());
        let off = memstate.borrow().get_value_data(op.get_input(0))?;
        let spc = Rc::clone(
            op.get_addr()
                .get_space()
                .expect("executeCallind: instruction address with null space (C++ UB)"),
        );
        emu.set_execute_address(&Address::new(spc, off))
    }

    /// C++ `EmulateMemory::executeCallother`
    pub fn execute_callother<T: EmulateMemory + ?Sized>(_emu: &mut T) -> UnlaceResult<()> {
        Err(UnlaceError::lowlevel(
            "CALLOTHER emulation not currently supported",
        ))
    }

    /// C++ `EmulateMemory::executeMultiequal`
    pub fn execute_multiequal<T: EmulateMemory + ?Sized>(_emu: &mut T) -> UnlaceResult<()> {
        Err(UnlaceError::lowlevel(
            "MULTIEQUAL appearing in unheritaged code?",
        ))
    }

    /// C++ `EmulateMemory::executeIndirect`
    pub fn execute_indirect<T: EmulateMemory + ?Sized>(_emu: &mut T) -> UnlaceResult<()> {
        Err(UnlaceError::lowlevel(
            "INDIRECT appearing in unheritaged code?",
        ))
    }

    /// C++ `EmulateMemory::executeSegmentOp`
    pub fn execute_segment_op<T: EmulateMemory + ?Sized>(_emu: &mut T) -> UnlaceResult<()> {
        Err(UnlaceError::lowlevel(
            "SEGMENTOP emulation not currently supported",
        ))
    }

    /// C++ `EmulateMemory::executeCpoolRef`
    pub fn execute_cpool_ref<T: EmulateMemory + ?Sized>(_emu: &mut T) -> UnlaceResult<()> {
        Err(UnlaceError::lowlevel(
            "Cannot currently emulate cpool operator",
        ))
    }

    /// C++ `EmulateMemory::executeNew`
    pub fn execute_new<T: EmulateMemory + ?Sized>(_emu: &mut T) -> UnlaceResult<()> {
        Err(UnlaceError::lowlevel(
            "Cannot currently emulate new operator",
        ))
    }
}

// ---------------------------------------------------------------------------
// PcodeEmitCache
// ---------------------------------------------------------------------------

/// \brief P-code emitter that dumps its raw Varnodes and PcodeOps to an in
/// memory cache
///
/// This is used for emulation when full Varnode and PcodeOp objects aren't
/// needed.  (The C++ `varcache` parameter disappears: the Rust `PcodeOpRaw`
/// owns its varnodes by value — module docs.)
pub struct PcodeEmitCache<'a> {
    /// The cache of current p-code ops
    opcache: &'a mut Vec<Rc<PcodeOpRaw>>,
    /// Array of behaviors for translating OpCode
    inst: &'a [Option<Rc<dyn OpBehavior>>],
    /// Starting offset for defining temporaries in \e unique space (C++
    /// `uintm`)
    uniq: u32,
}

impl<'a> PcodeEmitCache<'a> {
    /// Constructor.
    ///
    /// Provide the emitter with the container that will hold the cached
    /// p-code ops.
    /// \param ocache is the container for cached PcodeOpRaw
    /// \param in_ is the map of OpBehavior
    /// \param uniq_reserve is the starting offset for temporaries in the
    ///        \e unique space
    pub fn new(
        ocache: &'a mut Vec<Rc<PcodeOpRaw>>,
        in_: &'a [Option<Rc<dyn OpBehavior>>],
        uniq_reserve: u64,
    ) -> Self {
        PcodeEmitCache {
            opcache: ocache,
            inst: in_,
            uniq: uniq_reserve as u32, // cast: C++ stores the uintb uniqReserve into the uintm member (truncating)
        }
    }
}

impl PcodeEmit for PcodeEmitCache<'_> {
    fn dump(
        &mut self,
        addr: &Address,
        opc: OpCode,
        outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        // (C++ pushes the op into the cache and then mutates it through the
        // pointer; the Rust op is fully built first — same cached result)
        let mut op = PcodeOpRaw::default();
        op.set_seq_num(addr, self.uniq);
        // C++ setBehavior(inst[opc]) stores whatever pointer is in the
        // table; an unregistered (null) entry stays unset here, making the
        // op a NO-OP for executeCurrentOp, as in C++.
        if let Some(behave) = &self.inst[opc as usize] {
            op.set_behavior(Rc::clone(behave));
        }
        self.uniq = self.uniq.wadd(1); // uintm increment
        if let Some(outvar) = outvar {
            op.set_output(Some(outvar.clone()));
        }
        for vn in vars {
            op.add_input(vn.clone());
        }
        self.opcache.push(Rc::new(op));
    }
}

// ---------------------------------------------------------------------------
// EmulatePcodeCache
// ---------------------------------------------------------------------------

/// Exposes a translator's floating-point formats to instruction behaviors.
pub struct TranslateFloatFormats(pub Rc<dyn Translate>);

impl FloatFormatProvider for TranslateFloatFormats {
    fn get_float_format(&self, size: i32) -> Option<&FloatFormat> {
        self.0.get_float_format(size)
    }
}

/// \brief A SLEIGH based implementation of the Emulate interface
///
/// This implementation uses a Translate object to translate machine
/// instructions into pcode and caches pcode ops for later use by the
/// emulator.  The pcode is cached as soon as the execution address is set,
/// either explicitly, or via branches and fallthrus.  There are additional
/// methods for inspecting the pcode ops in the current instruction as a
/// sequence.
pub struct EmulatePcodeCache {
    /// C++ `Emulate` members
    core: EmulateCore,
    /// C++ `EmulateMemory::memstate` (shared with the application)
    memstate: Rc<RefCell<MemoryState>>,
    /// C++ `EmulateMemory::currentOp`
    current_op_ptr: Option<Rc<PcodeOpRaw>>,
    /// The SLEIGH translator
    trans: Rc<dyn Translate>,
    /// unlace manager boundary (module docs)
    manage: Rc<AddrSpaceManager>,
    /// The cache of current p-code ops (C++ also keeps a `varcache`; the
    /// Rust ops own their varnodes by value — module docs)
    opcache: Vec<Rc<PcodeOpRaw>>,
    /// Map from OpCode to OpBehavior
    inst: Vec<Option<Rc<dyn OpBehavior>>>,
    /// The table of breakpoints (shared with the application, which keeps
    /// registering breakpoints on it)
    breaktable: Rc<RefCell<dyn BreakTable>>,
    /// Address of current instruction being executed
    current_address: Address,
    /// \b true if next pcode op is start of instruction
    instruction_start: bool,
    /// Index of current pcode op within machine instruction
    current_op: i32,
    /// Length of current instruction in bytes
    instruction_length: i32,
}

impl EmulatePcodeCache {
    /// Pcode cache emulator constructor.
    ///
    /// \param t is the SLEIGH translator
    /// \param manage is the AddrSpaceManager the C++ `Translate` inherits
    ///        (unlace boundary; module docs)
    /// \param s is the MemoryState the emulator should manipulate
    /// \param b is the table of breakpoints the emulator should invoke
    pub fn new(
        t: Rc<dyn Translate>,
        manage: Rc<AddrSpaceManager>,
        s: Rc<RefCell<MemoryState>>,
        b: Rc<RefCell<dyn BreakTable>>,
    ) -> Self {
        let mut inst: Vec<Option<Rc<dyn OpBehavior>>> = Vec::new();
        let provider: Rc<dyn FloatFormatProvider> = Rc::new(TranslateFloatFormats(Rc::clone(&t)));
        register_instructions(&mut inst, &provider);
        // (C++ breaktable->setEmulate(this) is the replaced back-pointer —
        // the emulator is passed to the table at invocation time instead)
        EmulatePcodeCache {
            core: EmulateCore::new(),
            memstate: s,
            current_op_ptr: None,
            trans: t,
            manage,
            opcache: Vec::new(),
            inst,
            breaktable: b,
            // C++ leaves these uninitialized until createInstruction runs;
            // initialized to definite values here.
            current_address: Address::default(),
            instruction_start: false,
            current_op: 0,
            instruction_length: 0,
        }
    }

    /// Clear the p-code cache.
    ///
    /// (The C++ frees all the VarnodeData and PcodeOpRaw objects; here the
    /// `Rc`s drop.)
    fn clear_cache(&mut self) {
        self.opcache.clear();
    }

    /// Cache pcode for instruction at given address.
    ///
    /// This is a private routine which does the work of translating a
    /// machine instruction into pcode, putting it into the cache, and
    /// setting up the iterators
    /// \param addr is the address of the instruction to translate
    fn create_instruction(&mut self, addr: &Address) -> UnlaceResult<()> {
        self.clear_cache();
        let trans = Rc::clone(&self.trans);
        let mut emit = PcodeEmitCache::new(&mut self.opcache, &self.inst, 0);
        // (a C++ throw from oneInstruction leaves instruction_length /
        // current_op / instruction_start untouched — same here via `?`)
        self.instruction_length = trans.one_instruction(&mut emit, addr)?;
        self.current_op = 0;
        self.instruction_start = true;
        Ok(())
    }

    /// Set-up currentOp and currentBehave
    fn establish_op(&mut self) {
        if (self.current_op as usize) < self.opcache.len() {
            // cast: C++ int4 < vector::size() comparison (int converts)
            let op = Rc::clone(&self.opcache[self.current_op as usize]);
            self.core.current_behave = op.get_behavior().cloned();
            self.current_op_ptr = Some(op);
            return;
        }
        self.current_op_ptr = None;
        self.core.current_behave = None;
    }

    /// Return \b true if we are at an instruction start.
    ///
    /// Since the emulator can single step through individual pcode
    /// operations, the machine state may be halted in the \e middle of a
    /// single machine instruction, unlike conventional debuggers.  This
    /// routine can be used to determine if execution is actually at the
    /// beginning of a machine instruction.
    /// \return \b true if the next pcode operation is at the start of the
    ///         instruction translation
    pub fn is_instruction_start(&self) -> bool {
        self.instruction_start
    }

    /// Return number of pcode ops in translation of current instruction.
    ///
    /// A typical machine instruction translates into a sequence of pcode
    /// ops.
    /// \return the number of ops in the sequence
    pub fn num_current_ops(&self) -> i32 {
        self.opcache.len() as i32 // cast: C++ int4 return of vector::size()
    }

    /// Get the index of current pcode op within current instruction.
    ///
    /// This routine can be used to determine where, within the sequence of
    /// ops in the translation of the entire machine instruction, the
    /// currently executing op is.
    /// \return the index of the current (next) pcode op.
    pub fn get_current_op_index(&self) -> i32 {
        self.current_op
    }

    /// Get pcode op in current instruction translation by index.
    ///
    /// This routine can be used to examine ops other than the currently
    /// executing op in the machine instruction's translation sequence.
    /// \param i is the desired op index
    /// \return the pcode op at the indicated index
    pub fn get_op_by_index(&self, i: i32) -> &Rc<PcodeOpRaw> {
        &self.opcache[i as usize] // cast: int4 index, C++ UB when out of range
    }

    /// Execute (the rest of) a single machine instruction.
    ///
    /// This routine executes an entire machine instruction at once, as a
    /// conventional debugger step function would do.  If execution is at the
    /// start of an instruction, the breakpoints are checked and invoked as
    /// needed for the current address.  If this routine is invoked while
    /// execution is in the middle of a machine instruction, execution is
    /// continued until the current instruction completes.
    pub fn execute_instruction(&mut self) -> UnlaceResult<()> {
        if self.instruction_start {
            let breaktable = Rc::clone(&self.breaktable);
            let addr = self.current_address.clone();
            if breaktable.borrow_mut().do_address_break(self, &addr)? {
                return Ok(());
            }
        }
        loop {
            self.execute_current_op()?;
            if self.instruction_start {
                break;
            }
        }
        Ok(())
    }
}

impl Emulate for EmulatePcodeCache {
    fn emulate_core(&self) -> &EmulateCore {
        &self.core
    }

    fn emulate_core_mut(&mut self) -> &mut EmulateCore {
        &mut self.core
    }

    // inherited from C++ EmulateMemory (the delegation is the inheritance
    // edge; module docs)
    fn execute_unary(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_unary(self)
    }

    fn execute_binary(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_binary(self)
    }

    fn execute_load(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_load(self)
    }

    fn execute_store(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_store(self)
    }

    /// Execute branch (including relative branches).
    ///
    /// Since the full instruction is cached, we can do relative branches
    /// properly (C++ `EmulatePcodeCache::executeBranch` override).
    fn execute_branch(&mut self) -> UnlaceResult<()> {
        let current_op_ptr = Rc::clone(
            self.current_op_ptr
                .as_ref()
                .expect("executeBranch: currentOp not set (C++ would dereference null)"),
        );
        let destaddr = current_op_ptr.get_input(0).get_addr();
        if destaddr.is_constant() {
            let mut id = destaddr.get_offset() as u32; // cast: C++ uintm id = getOffset() (truncating)
            id = id.wadd(self.current_op as u32); // cast: (uintm)current_op
            self.current_op = id as i32; // cast: C++ int4 = uintm assignment (wraps)
            if self.current_op as usize == self.opcache.len() {
                // cast: C++ int4 == size_t comparison (int converts)
                self.fallthru_op()?;
            } else if self.current_op < 0 || (self.current_op as usize) >= self.opcache.len() {
                // cast: C++ int4 >= size_t comparison (negative int wraps)
                return Err(UnlaceError::lowlevel("Bad intra-instruction branch"));
            } else {
                self.establish_op();
            }
        } else {
            self.set_execute_address(&destaddr)?;
        }
        Ok(())
    }

    fn execute_cbranch(&mut self) -> UnlaceResult<bool> {
        emulate_memory::execute_cbranch(self)
    }

    fn execute_branchind(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_branchind(self)
    }

    fn execute_call(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_call(self)
    }

    fn execute_callind(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_callind(self)
    }

    /// Execute breakpoint for this user-defined op.
    ///
    /// Look for a breakpoint for the given user-defined op and invoke it.
    /// If it doesn't exist, or doesn't replace the action, an error is
    /// returned (C++ `EmulatePcodeCache::executeCallother` override).
    fn execute_callother(&mut self) -> UnlaceResult<()> {
        let breaktable = Rc::clone(&self.breaktable);
        let current_op_ptr = Rc::clone(
            self.current_op_ptr
                .as_ref()
                .expect("executeCallother: currentOp not set (C++ would dereference null)"),
        );
        if !breaktable
            .borrow_mut()
            .do_pcode_op_break(self, &current_op_ptr)?
        {
            return Err(UnlaceError::lowlevel("Userop not hooked"));
        }
        self.fallthru_op()
    }

    fn execute_multiequal(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_multiequal(self)
    }

    fn execute_indirect(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_indirect(self)
    }

    fn execute_segment_op(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_segment_op(self)
    }

    fn execute_cpool_ref(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_cpool_ref(self)
    }

    fn execute_new(&mut self) -> UnlaceResult<()> {
        emulate_memory::execute_new(self)
    }

    /// Execute fallthru semantics for the pcode cache.
    ///
    /// Update the iterator into the current pcode cache, and if necessary,
    /// generate the pcode for the fallthru instruction and reset the
    /// iterator.
    fn fallthru_op(&mut self) -> UnlaceResult<()> {
        self.instruction_start = false;
        self.current_op += 1;
        if self.current_op as usize >= self.opcache.len() {
            // cast: C++ int4 >= size_t comparison (int converts)
            self.current_address = &self.current_address + i64::from(self.instruction_length);
            let addr = self.current_address.clone();
            self.create_instruction(&addr)?;
        }
        self.establish_op();
        Ok(())
    }

    /// Set current execution address.
    ///
    /// Set the current execution address and cache the pcode translation of
    /// the machine instruction at that address
    /// \param addr is the address where execution should continue
    fn set_execute_address(&mut self, addr: &Address) -> UnlaceResult<()> {
        // Copy -addr- BEFORE calling createInstruction
        // as it calls clear and may delete -addr-
        self.current_address = addr.clone();
        let addr = self.current_address.clone();
        self.create_instruction(&addr)?;
        self.establish_op();
        Ok(())
    }

    /// Get current execution address.
    /// \return the currently executing machine address
    fn get_execute_address(&self) -> Address {
        self.current_address.clone()
    }
}

impl EmulateMemory for EmulatePcodeCache {
    fn get_memory_state(&self) -> &Rc<RefCell<MemoryState>> {
        &self.memstate
    }

    fn current_op_raw(&self) -> Option<&Rc<PcodeOpRaw>> {
        self.current_op_ptr.as_ref()
    }

    fn addr_space_manager(&self) -> &AddrSpaceManager {
        &self.manage
    }
}

// ---------------------------------------------------------------------------
// Shared test support (used by the memstate / emulate / emulateutil tests)
// ---------------------------------------------------------------------------

#[cfg(test)]
pub(crate) mod test_support;

#[cfg(test)]
mod tests;
