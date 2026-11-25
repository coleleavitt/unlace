//! Raw p-code snippet emulation, from `decompiler/cpp/emulateutil.{hh,cc}`.
//!
//! [`EmulateSnippet`] holds a shared loader and address-space manager. Address-space
//! constants use manager indices. Temporary
//! values use a `BTreeMap`; cached operations use `Rc<PcodeOpRaw>` and own their
//! varnodes. [`PcodeEmitCache`] therefore borrows only the operation list.
//!
//! Load-image reads fetch eight bytes, apply the address space's byte order
//! and requested-size adjustment, and propagate unavailable-data errors.
//!
//! Emulation over decompiler IR lives in `unlace-middle`'s
//! `engine/emulatefunction.rs`, which combines the upstream
//! `EmulatePcodeOp` and `EmulateFunction` behavior.

use std::cell::RefCell;
use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_base::address::{Address, calc_mask};
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::{AddrSpace, AddrSpaceManager, spacetype};
use unlace_base::types::Wrap;
use unlace_num::opbehavior::OpBehavior;
use unlace_num::opcodes::{OpCode, get_opname};
use unlace_num::pcoderaw::{PcodeOpRaw, VarnodeData};

use crate::emulate::{Emulate, EmulateCore, PcodeEmitCache};
use crate::loadimage::LoadImage;
use crate::memstate::construct_value;

/// \brief Emulate a \e snippet of PcodeOps out of a functional context
///
/// Emulation is performed on a short sequence (\b snippet) of PcodeOpRaw
/// objects.  Control-flow emulation is limited to this snippet; BRANCH and
/// CBRANCH operations can happen using p-code relative branching.  Executing
/// BRANCHIND, CALL, CALLIND, CALLOTHER, STORE, MULTIEQUAL, INDIRECT,
/// SEGMENTOP, CPOOLOP, and NEW ops is treated as illegal and an error is
/// returned.  Expressions can only use temporary registers or read from the
/// LoadImage.
///
/// The set of PcodeOpRaw objects in the snippet is provided by emitting
/// p-code to the object returned by build_emitter().  This is designed for
/// one-time initialization of this struct, which can be repeatedly used by
/// calling reset_memory() between executions.
pub struct EmulateSnippet {
    /// C++ `Emulate` members
    core: EmulateCore,
    /// The load image of the program being emulated (the slice of the C++
    /// `Architecture *glb` this class reads; module docs)
    loader: Rc<RefCell<dyn LoadImage>>,
    /// The space table (the other slice of `glb`; resolves `<spaceid>`
    /// constants — module docs)
    manage: Rc<AddrSpaceManager>,
    /// Sequence of p-code ops to be executed
    op_list: Vec<Rc<PcodeOpRaw>>,
    /// Values stored in temporary registers
    temp_values: BTreeMap<u64, u64>,
    /// Current p-code op being executed (C++ `PcodeOpRaw *currentOp`)
    current_op: Option<Rc<PcodeOpRaw>>,
    /// Index of current p-code op being executed
    pos: i32,
}

impl EmulateSnippet {
    /// The C++ constructor takes an `Architecture *g`; the port takes only the
    /// two slices of it this class uses (module docs).
    pub fn new(loader: Rc<RefCell<dyn LoadImage>>, manage: Rc<AddrSpaceManager>) -> Self {
        EmulateSnippet {
            core: EmulateCore::new(),
            loader,
            manage,
            op_list: Vec::new(),
            temp_values: BTreeMap::new(),
            current_op: None,
            pos: 0,
        }
    }

    /// \brief Pull a value from the load-image given a specific address
    ///
    /// A contiguous chunk of memory is pulled from the load-image and
    /// returned as a constant value, respecting the endianness of the
    /// address space.
    /// \param spc is the address space to pull the value from
    /// \param off is the starting address offset (from within the space) to
    ///        pull the value from
    /// \param sz is the number of bytes to pull from memory
    /// \return indicated bytes arranged as a constant value
    fn get_load_image_value(&self, spc: &Rc<AddrSpace>, off: u64, sz: i32) -> UnlaceResult<u64> {
        // C++ loadFill((uint1 *)&res, sizeof(uintb), ...): a full 8-byte
        // read regardless of sz; (a DataUnavailError is NOT caught here)
        let mut buf = [0u8; 8];
        self.loader
            .borrow_mut()
            .load_fill(&mut buf, &Address::new(Rc::clone(spc), off))?;
        // host(LE)-order bytes + byte_swap when host and space endianness
        // differ == construct in space order (HOST_ENDIAN pinned to 0;
        // module docs)
        let mut res = construct_value(&buf, 8, spc.is_big_endian());
        // C++ `sz < sizeof(uintb)`: int4 vs size_t comparison (a negative
        // sz would wrap and compare false; in-contract sz >= 1)
        if spc.is_big_endian() && sz < 8 {
            res >>= (8 - sz) * 8; // shift < 64 for sz >= 1
        } else {
            res &= calc_mask(sz);
        }
        Ok(res)
    }

    /// The C++ `currentOp` dereference (null is C++ UB).
    fn current_op(&self) -> &Rc<PcodeOpRaw> {
        self.current_op
            .as_ref()
            .expect("EmulateSnippet: currentOp not set (C++ would dereference null)")
    }

    /// The throw shared by every illegal-in-a-snippet op.
    fn illegal_op_error(&self) -> UnlaceError {
        UnlaceError::lowlevel(format!(
            "Illegal p-code operation in snippet: {}",
            get_opname(self.current_op().get_opcode())
        ))
    }

    /// \brief Reset the emulation snippet
    ///
    /// Reset the memory state, and set the first p-code op as current.
    pub fn reset_memory(&mut self) {
        self.temp_values.clear();
        self.set_current_op(0);
        self.core.emu_halted = false;
    }

    /// \brief Provide the caller with an emitter for building the p-code
    /// snippet
    ///
    /// Any p-code produced by the PcodeEmit, when triggered by the caller,
    /// becomes part of the \e snippet that will get emulated by \b this.
    /// (C++ heap-allocates the emitter; the Rust emitter borrows the op
    /// list and is dropped after use.)
    /// \param inst is the \e opcode to \e behavior map the emitter will use
    /// \param uniq_reserve is the starting offset within the \e unique
    ///        address space for any temporary registers
    /// \return the newly constructed emitter
    pub fn build_emitter<'a>(
        &'a mut self,
        inst: &'a [Option<Rc<dyn OpBehavior>>],
        uniq_reserve: u64,
    ) -> PcodeEmitCache<'a> {
        PcodeEmitCache::new(&mut self.op_list, inst, uniq_reserve)
    }

    /// \brief Check for p-code that is deemed illegal for a \e snippet
    ///
    /// This method facilitates enforcement of the formal rules for snippet
    /// code.
    ///   - Branches must use p-code relative addressing.
    ///   - Snippets can only read/write from temporary registers
    ///   - Snippets cannot use BRANCHIND, CALL, CALLIND, CALLOTHER, STORE,
    ///     SEGMENTOP, CPOOLREF, NEW, MULTIEQUAL, or INDIRECT
    ///
    /// \return \b true if the current snippet is legal
    pub fn check_for_legal_code(&self) -> bool {
        for op in &self.op_list {
            let opc = op.get_opcode();
            if opc == OpCode::CPUI_BRANCHIND
                || opc == OpCode::CPUI_CALL
                || opc == OpCode::CPUI_CALLIND
                || opc == OpCode::CPUI_CALLOTHER
                || opc == OpCode::CPUI_STORE
                || opc == OpCode::CPUI_SEGMENTOP
                || opc == OpCode::CPUI_CPOOLREF
                || opc == OpCode::CPUI_NEW
                || opc == OpCode::CPUI_MULTIEQUAL
                || opc == OpCode::CPUI_INDIRECT
            {
                return false;
            }
            if opc == OpCode::CPUI_BRANCH {
                let vn = op.get_input(0);
                let spc = vn
                    .space
                    .as_ref()
                    .expect("checkForLegalCode: varnode with null space (C++ UB)");
                if spc.get_type() != spacetype::IPTR_CONSTANT {
                    // Only relative branching allowed
                    return false;
                }
            }
            if let Some(vn) = op.get_output() {
                let spc = vn
                    .space
                    .as_ref()
                    .expect("checkForLegalCode: varnode with null space (C++ UB)");
                if spc.get_type() != spacetype::IPTR_INTERNAL {
                    return false; // Can only write to temporaries
                }
            }
            let mut j: i32 = 0;
            while j < op.num_input() {
                let vn = op.get_input(j);
                let spc = vn
                    .space
                    .as_ref()
                    .expect("checkForLegalCode: varnode with null space (C++ UB)");
                if spc.get_type() == spacetype::IPTR_PROCESSOR {
                    return false; // Cannot read from normal registers
                }
                j += 1;
            }
        }
        true
    }

    /// \brief Set the current executing p-code op by index
    ///
    /// The i-th p-code op in the snippet sequence is set as the currently
    /// executing op.
    /// \param i is the index
    pub fn set_current_op(&mut self, i: i32) {
        self.pos = i;
        let op = Rc::clone(&self.op_list[i as usize]); // cast: int4 index, C++ UB when out of range
        self.core.current_behave = op.get_behavior().cloned();
        self.current_op = Some(op);
    }

    /// \brief Set a temporary register value in the machine state
    ///
    /// The temporary Varnode's storage offset is used as key into the
    /// machine state map.
    /// \param offset is the temporary storage offset
    /// \param val is the value to put into the machine state
    pub fn set_varnode_value(&mut self, offset: u64, val: u64) {
        self.temp_values.insert(offset, val);
    }

    /// \brief Retrieve the value of a Varnode from the current machine state
    ///
    /// If the Varnode is a temporary register, the storage offset is used to
    /// look up the value from the machine state cache. If the Varnode
    /// represents a RAM location, the value is pulled directly out of the
    /// load-image.  If the value does not exist, a "Read before write" error
    /// is returned.
    /// \param vn is the Varnode to read
    /// \return the retrieved value
    pub fn get_varnode_value(&self, vn: &VarnodeData) -> UnlaceResult<u64> {
        let spc = vn
            .space
            .as_ref()
            .expect("getVarnodeValue: varnode with null space (C++ UB)");
        if spc.get_type() == spacetype::IPTR_CONSTANT {
            return Ok(vn.offset);
        }
        if spc.get_type() == spacetype::IPTR_INTERNAL {
            return match self.temp_values.get(&vn.offset) {
                // We have seen this varnode before
                Some(val) => Ok(*val),
                None => Err(UnlaceError::lowlevel(
                    "Read before write in snippet emulation",
                )),
            };
        }

        self.get_load_image_value(spc, vn.offset, vn.size as i32) // cast: uint4 size as C++ int4
    }

    /// \brief Retrieve a temporary register value directly
    ///
    /// This allows the user to obtain the final value of the snippet
    /// calculation, without having to have the Varnode object in hand.
    /// \param offset is the offset of the temporary register to retrieve
    /// \return the calculated value or 0 if the register was never written
    pub fn get_temp_value(&self, offset: u64) -> u64 {
        match self.temp_values.get(&offset) {
            None => 0,
            Some(val) => *val,
        }
    }
}

impl Emulate for EmulateSnippet {
    fn emulate_core(&self) -> &EmulateCore {
        &self.core
    }

    fn emulate_core_mut(&mut self) -> &mut EmulateCore {
        &mut self.core
    }

    fn execute_unary(&mut self) -> UnlaceResult<()> {
        let op = Rc::clone(self.current_op());
        let behave = Rc::clone(
            self.core
                .current_behave
                .as_ref()
                .expect("EmulateSnippet: currentBehave not set (C++ would dereference null)"),
        );
        let in1 = self.get_varnode_value(op.get_input(0))?;
        let out_vn = op
            .get_output()
            .expect("executeUnary: op without output (C++ UB)");
        let out = behave.evaluate_unary(
            out_vn.size as i32,          // cast: uint4 size as the C++ int4 param
            op.get_input(0).size as i32, // cast: uint4 size as the C++ int4 param
            in1,
        )?;
        self.set_varnode_value(out_vn.offset, out);
        Ok(())
    }

    fn execute_binary(&mut self) -> UnlaceResult<()> {
        let op = Rc::clone(self.current_op());
        let behave = Rc::clone(
            self.core
                .current_behave
                .as_ref()
                .expect("EmulateSnippet: currentBehave not set (C++ would dereference null)"),
        );
        let in1 = self.get_varnode_value(op.get_input(0))?;
        let in2 = self.get_varnode_value(op.get_input(1))?;
        let out_vn = op
            .get_output()
            .expect("executeBinary: op without output (C++ UB)");
        let out = behave.evaluate_binary(
            out_vn.size as i32,          // cast: uint4 size as the C++ int4 param
            op.get_input(0).size as i32, // cast: uint4 size as the C++ int4 param
            in1,
            in2,
        )?;
        self.set_varnode_value(out_vn.offset, out);
        Ok(())
    }

    fn execute_load(&mut self) -> UnlaceResult<()> {
        // op will be null, use current_op
        let op = Rc::clone(self.current_op());
        let off = self.get_varnode_value(op.get_input(1))?;
        let spc = op
            .get_input(0)
            .get_space_from_const(&self.manage)
            .expect("executeLoad: <spaceid> constant does not resolve (C++ pointer always valid)");
        let off = AddrSpace::address_to_byte(off, spc.get_word_size());
        let sz = op
            .get_output()
            .expect("executeLoad: op without output (C++ UB)")
            .size as i32; // cast: uint4 as int4
        let res = self.get_load_image_value(&spc, off, sz)?;
        let out_offset = op.get_output().expect("just checked").offset;
        self.set_varnode_value(out_offset, res);
        Ok(())
    }

    fn execute_store(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_branch(&mut self) -> UnlaceResult<()> {
        let op = Rc::clone(self.current_op());
        let vn = op.get_input(0);
        let spc = vn
            .space
            .as_ref()
            .expect("executeBranch: varnode with null space (C++ UB)");
        if spc.get_type() != spacetype::IPTR_CONSTANT {
            return Err(UnlaceError::lowlevel(
                "Tried to emulate absolute branch in snippet code",
            ));
        }
        let rel = vn.offset as i32; // cast: C++ (int4)vn->offset (truncating)
        self.pos = self.pos.wadd(rel); // C++ int overflow is UB; wraps deterministically here
        // C++ `(pos < 0)||(pos>opList.size())`: the int4 vs size_t
        // comparison only runs after the explicit pos < 0 check
        if self.pos < 0 || (self.pos as usize) > self.op_list.len() {
            return Err(UnlaceError::lowlevel(
                "Relative branch out of bounds in snippet code",
            ));
        }
        if self.pos as usize == self.op_list.len() {
            // cast: int4 == size_t comparison, pos >= 0 here
            self.core.emu_halted = true;
            return Ok(());
        }
        self.set_current_op(self.pos);
        Ok(())
    }

    fn execute_cbranch(&mut self) -> UnlaceResult<bool> {
        // op will be null, use current_op
        let op = Rc::clone(self.current_op());
        let cond = self.get_varnode_value(op.get_input(1))?;
        // We must take into account the booleanflip bit with pcode from the
        // syntax tree (raw snippet ops have none)
        Ok(cond != 0)
    }

    fn execute_branchind(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_call(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_callind(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_callother(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_multiequal(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_indirect(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_segment_op(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_cpool_ref(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn execute_new(&mut self) -> UnlaceResult<()> {
        Err(self.illegal_op_error())
    }

    fn fallthru_op(&mut self) -> UnlaceResult<()> {
        self.pos += 1;
        if self.pos as usize == self.op_list.len() {
            // cast: C++ int4 == size_t comparison
            self.core.emu_halted = true;
            return Ok(());
        }
        self.set_current_op(self.pos);
        Ok(())
    }

    fn set_execute_address(&mut self, _addr: &Address) -> UnlaceResult<()> {
        self.set_current_op(0);
        Ok(())
    }

    fn get_execute_address(&self) -> Address {
        self.current_op().get_addr().clone()
    }
}

#[cfg(test)]
mod tests;
