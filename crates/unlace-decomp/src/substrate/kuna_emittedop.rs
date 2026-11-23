//! A p-code operation as a SLEIGH emitter hands it over, before it is installed into a
//! function's IR.

/// One emitted operation before it is installed into function IR.
#[derive(Debug, Clone)]
pub struct Operation {
    pub address: unlace_base::address::Address,
    pub opcode: unlace_num::opcodes::OpCode,
    pub output: Option<unlace_num::pcoderaw::VarnodeData>,
    pub inputs: Vec<unlace_num::pcoderaw::VarnodeData>,
}
