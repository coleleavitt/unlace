//! Ethereum Virtual Machine (EVM) bytecode → IR lifter.
//!
//! The EVM is stack based and operates on 256-bit words.  The unlace core IR
//! has byte-sized `Varnode`s, so this lifter models EVM stack, memory and
//! storage effects with deterministic unique/register/RAM varnodes and lifts one
//! bytecode instruction at a time.  Immediate PUSH payloads are decoded with
//! correct instruction lengths and preserved in up-to-16-byte constants (large
//! 256-bit immediates are represented by their low 128 bits, matching the
//! largest practical scalar varnode size currently used by the IR).

pub mod solidity;

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

/// Maximum scalar size the current IR varnode model uses for EVM words.
pub const EVM_WORD_BYTES: u8 = 16;
/// Number of low-order immediate bytes retained for a PUSH value.
pub const EVM_IMMEDIATE_BYTES: u8 = 8;

const UNIQUE_BASE: u64 = 0xE000_0000;
const STACK_BASE: u64 = 0x1000;
const REG_PC: u64 = 0x00;
const REG_GAS: u64 = 0x20;
const REG_CALLVALUE: u64 = 0x40;
const REG_CALLDATA_SIZE: u64 = 0x60;
const REG_RETURNDATA_SIZE: u64 = 0x80;
const REG_STORAGE_BASE: u64 = 0x1_0000;

#[inline]
fn stack(slot: u64) -> Varnode {
    Varnode::unique(STACK_BASE + slot * EVM_WORD_BYTES as u64, EVM_WORD_BYTES)
}

#[inline]
fn tmp(slot: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + slot * EVM_WORD_BYTES as u64, size)
}

#[inline]
fn word_const(value: u64) -> Varnode {
    Varnode::constant(value, EVM_WORD_BYTES)
}

#[inline]
fn imm_const(value: u64) -> Varnode {
    Varnode::constant(value, EVM_IMMEDIATE_BYTES)
}

#[inline]
fn small_const(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 8)
}

#[inline]
fn evm_memory(addr: u64) -> Varnode {
    // The RAM space is used for EVM linear memory.  Dynamic addresses are
    // represented by address-producing temporaries used as LOAD/STORE inputs.
    Varnode::ram(addr, EVM_WORD_BYTES)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EvmOpcode {
    Stop,
    Add,
    Mul,
    Sub,
    Div,
    Sdiv,
    Mod,
    Smod,
    Addmod,
    Mulmod,
    Exp,
    Signextend,
    Lt,
    Gt,
    Slt,
    Sgt,
    Eq,
    Iszero,
    And,
    Or,
    Xor,
    Not,
    Byte,
    Shl,
    Shr,
    Sar,
    Sha3,
    Address,
    Balance,
    Origin,
    Caller,
    Callvalue,
    Calldataload,
    Calldatasize,
    Calldatacopy,
    Codesize,
    Codecopy,
    Gasprice,
    Extcodesize,
    Extcodecopy,
    Returndatasize,
    Returndatacopy,
    Extcodehash,
    Blockhash,
    Coinbase,
    Timestamp,
    Number,
    PrevRandao,
    Gaslimit,
    Chainid,
    Selfbalance,
    Basefee,
    Blobhash,
    Blobbasefee,
    Pop,
    Mload,
    Mstore,
    Mstore8,
    Sload,
    Sstore,
    Jump,
    Jumpi,
    Pc,
    Msize,
    Gas,
    Jumpdest,
    Push(u8),
    Dup(u8),
    Swap(u8),
    Log(u8),
    Create,
    Call,
    Callcode,
    Return,
    Delegatecall,
    Create2,
    Staticcall,
    Revert,
    Invalid,
    Selfdestruct,
    Unknown(u8),
}

impl EvmOpcode {
    pub fn decode(byte: u8) -> Self {
        match byte {
            0x00 => Self::Stop,
            0x01 => Self::Add,
            0x02 => Self::Mul,
            0x03 => Self::Sub,
            0x04 => Self::Div,
            0x05 => Self::Sdiv,
            0x06 => Self::Mod,
            0x07 => Self::Smod,
            0x08 => Self::Addmod,
            0x09 => Self::Mulmod,
            0x0a => Self::Exp,
            0x0b => Self::Signextend,
            0x10 => Self::Lt,
            0x11 => Self::Gt,
            0x12 => Self::Slt,
            0x13 => Self::Sgt,
            0x14 => Self::Eq,
            0x15 => Self::Iszero,
            0x16 => Self::And,
            0x17 => Self::Or,
            0x18 => Self::Xor,
            0x19 => Self::Not,
            0x1a => Self::Byte,
            0x1b => Self::Shl,
            0x1c => Self::Shr,
            0x1d => Self::Sar,
            0x20 => Self::Sha3,
            0x30 => Self::Address,
            0x31 => Self::Balance,
            0x32 => Self::Origin,
            0x33 => Self::Caller,
            0x34 => Self::Callvalue,
            0x35 => Self::Calldataload,
            0x36 => Self::Calldatasize,
            0x37 => Self::Calldatacopy,
            0x38 => Self::Codesize,
            0x39 => Self::Codecopy,
            0x3a => Self::Gasprice,
            0x3b => Self::Extcodesize,
            0x3c => Self::Extcodecopy,
            0x3d => Self::Returndatasize,
            0x3e => Self::Returndatacopy,
            0x3f => Self::Extcodehash,
            0x40 => Self::Blockhash,
            0x41 => Self::Coinbase,
            0x42 => Self::Timestamp,
            0x43 => Self::Number,
            0x44 => Self::PrevRandao,
            0x45 => Self::Gaslimit,
            0x46 => Self::Chainid,
            0x47 => Self::Selfbalance,
            0x48 => Self::Basefee,
            0x49 => Self::Blobhash,
            0x4a => Self::Blobbasefee,
            0x50 => Self::Pop,
            0x51 => Self::Mload,
            0x52 => Self::Mstore,
            0x53 => Self::Mstore8,
            0x54 => Self::Sload,
            0x55 => Self::Sstore,
            0x56 => Self::Jump,
            0x57 => Self::Jumpi,
            0x58 => Self::Pc,
            0x59 => Self::Msize,
            0x5a => Self::Gas,
            0x5b => Self::Jumpdest,
            0x60..=0x7f => Self::Push(byte - 0x5f),
            0x80..=0x8f => Self::Dup(byte - 0x7f),
            0x90..=0x9f => Self::Swap(byte - 0x8f),
            0xa0..=0xa4 => Self::Log(byte - 0xa0),
            0xf0 => Self::Create,
            0xf1 => Self::Call,
            0xf2 => Self::Callcode,
            0xf3 => Self::Return,
            0xf4 => Self::Delegatecall,
            0xf5 => Self::Create2,
            0xfa => Self::Staticcall,
            0xfd => Self::Revert,
            0xfe => Self::Invalid,
            0xff => Self::Selfdestruct,
            other => Self::Unknown(other),
        }
    }
}

/// Ethereum Virtual Machine bytecode lifter.
pub struct EvmLifter {
    register_file: RegisterFile,
}

impl EvmLifter {
    pub fn new() -> Self {
        let regs = vec![
            RegisterDef {
                name: "pc",
                varnode: Varnode::reg(REG_PC, 8),
            },
            RegisterDef {
                name: "gas",
                varnode: Varnode::reg(REG_GAS, EVM_WORD_BYTES),
            },
            RegisterDef {
                name: "callvalue",
                varnode: Varnode::reg(REG_CALLVALUE, EVM_WORD_BYTES),
            },
            RegisterDef {
                name: "calldatasize",
                varnode: Varnode::reg(REG_CALLDATA_SIZE, EVM_WORD_BYTES),
            },
            RegisterDef {
                name: "returndatasize",
                varnode: Varnode::reg(REG_RETURNDATA_SIZE, EVM_WORD_BYTES),
            },
        ];
        Self {
            register_file: RegisterFile { registers: regs },
        }
    }

    fn lift_opcode(&self, opcode: EvmOpcode, bytes: &[u8], addr: u64) -> LiftedInsn {
        let mut ops = Vec::new();
        let len = match opcode {
            EvmOpcode::Push(n) => 1 + usize::from(n).min(bytes.len().saturating_sub(1)),
            _ => 1,
        };

        match opcode {
            EvmOpcode::Stop => {
                ops.push(IrInsn::without_output(IrOp::Return, SmallVec::new(), addr))
            }
            EvmOpcode::Add => self.binop(&mut ops, IrOp::IntAdd, addr),
            EvmOpcode::Mul => self.binop(&mut ops, IrOp::IntMult, addr),
            EvmOpcode::Sub => self.binop(&mut ops, IrOp::IntSub, addr),
            EvmOpcode::Div => self.binop(&mut ops, IrOp::IntDiv, addr),
            EvmOpcode::Sdiv => self.binop(&mut ops, IrOp::IntSdiv, addr),
            EvmOpcode::Mod => self.binop(&mut ops, IrOp::IntRem, addr),
            EvmOpcode::Smod => self.binop(&mut ops, IrOp::IntSrem, addr),
            EvmOpcode::And => self.binop(&mut ops, IrOp::IntAnd, addr),
            EvmOpcode::Or => self.binop(&mut ops, IrOp::IntOr, addr),
            EvmOpcode::Xor => self.binop(&mut ops, IrOp::IntXor, addr),
            EvmOpcode::Shl => self.binop(&mut ops, IrOp::IntLeft, addr),
            EvmOpcode::Shr => self.binop(&mut ops, IrOp::IntRight, addr),
            EvmOpcode::Sar => self.binop(&mut ops, IrOp::IntSright, addr),
            EvmOpcode::Lt => self.binop(&mut ops, IrOp::IntLess, addr),
            EvmOpcode::Gt => self.reversed_compare(&mut ops, IrOp::IntLess, addr),
            EvmOpcode::Slt => self.binop(&mut ops, IrOp::IntSless, addr),
            EvmOpcode::Sgt => self.reversed_compare(&mut ops, IrOp::IntSless, addr),
            EvmOpcode::Eq => self.binop(&mut ops, IrOp::IntEqual, addr),
            EvmOpcode::Iszero => ops.push(IrInsn::with_output(
                IrOp::IntEqual,
                stack(0),
                SmallVec::from_slice(&[stack(0), word_const(0)]),
                addr,
            )),
            EvmOpcode::Not => ops.push(IrInsn::with_output(
                IrOp::IntXor,
                stack(0),
                SmallVec::from_slice(&[stack(0), Varnode::constant(u64::MAX, EVM_WORD_BYTES)]),
                addr,
            )),
            EvmOpcode::Addmod | EvmOpcode::Mulmod => {
                let arithmetic = if matches!(opcode, EvmOpcode::Addmod) {
                    IrOp::IntAdd
                } else {
                    IrOp::IntMult
                };
                ops.push(IrInsn::with_output(
                    arithmetic,
                    tmp(0, EVM_WORD_BYTES),
                    SmallVec::from_slice(&[stack(0), stack(1)]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::IntRem,
                    stack(0),
                    SmallVec::from_slice(&[tmp(0, EVM_WORD_BYTES), stack(2)]),
                    addr,
                ));
            }
            EvmOpcode::Exp => self.binop(&mut ops, IrOp::Callother, addr),
            EvmOpcode::Signextend => ops.push(IrInsn::with_output(
                IrOp::IntSext,
                stack(0),
                SmallVec::from_slice(&[stack(1)]),
                addr,
            )),
            EvmOpcode::Byte => ops.push(IrInsn::with_output(
                IrOp::Subpiece,
                stack(0),
                SmallVec::from_slice(&[stack(1), stack(0)]),
                addr,
            )),
            EvmOpcode::Sha3 => ops.push(IrInsn::with_output(
                IrOp::Callother,
                stack(0),
                SmallVec::from_slice(&[small_const(0x20, 4), stack(0), stack(1)]),
                addr,
            )),

            EvmOpcode::Push(n) => {
                let available = usize::from(n).min(bytes.len().saturating_sub(1));
                let imm = decode_push_low_u64(&bytes[1..1 + available]);
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    stack(0),
                    SmallVec::from_slice(&[imm_const(imm)]),
                    addr,
                ));
            }
            EvmOpcode::Dup(n) => ops.push(IrInsn::with_output(
                IrOp::Copy,
                stack(0),
                SmallVec::from_slice(&[stack(u64::from(n - 1))]),
                addr,
            )),
            EvmOpcode::Swap(n) => {
                let other = stack(u64::from(n));
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    tmp(0, EVM_WORD_BYTES),
                    SmallVec::from_slice(&[stack(0)]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    stack(0),
                    SmallVec::from_slice(&[other]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    other,
                    SmallVec::from_slice(&[tmp(0, EVM_WORD_BYTES)]),
                    addr,
                ));
            }
            EvmOpcode::Pop => ops.push(IrInsn::without_output(
                IrOp::Unimplemented,
                SmallVec::from_slice(&[stack(0)]),
                addr,
            )),

            EvmOpcode::Mload => ops.push(IrInsn::with_output(
                IrOp::Load,
                stack(0),
                SmallVec::from_slice(&[small_const(0, 4), stack(0)]),
                addr,
            )),
            EvmOpcode::Mstore => ops.push(IrInsn::without_output(
                IrOp::Store,
                SmallVec::from_slice(&[small_const(0, 4), stack(0), stack(1)]),
                addr,
            )),
            EvmOpcode::Mstore8 => ops.push(IrInsn::without_output(
                IrOp::Store,
                SmallVec::from_slice(&[
                    small_const(0, 4),
                    stack(0),
                    Varnode::unique(stack(1).offset, 1),
                ]),
                addr,
            )),
            EvmOpcode::Sload => ops.push(IrInsn::with_output(
                IrOp::Load,
                stack(0),
                SmallVec::from_slice(&[
                    small_const(1, 4),
                    Varnode::reg(REG_STORAGE_BASE, EVM_WORD_BYTES),
                ]),
                addr,
            )),
            EvmOpcode::Sstore => ops.push(IrInsn::without_output(
                IrOp::Store,
                SmallVec::from_slice(&[small_const(1, 4), stack(0), stack(1)]),
                addr,
            )),

            EvmOpcode::Jump => ops.push(IrInsn::without_output(
                IrOp::Branchind,
                SmallVec::from_slice(&[stack(0)]),
                addr,
            )),
            EvmOpcode::Jumpi => ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                SmallVec::from_slice(&[stack(0), stack(1)]),
                addr,
            )),
            EvmOpcode::Jumpdest => ops.push(IrInsn::without_output(
                IrOp::Branch,
                SmallVec::from_slice(&[ram_target(addr)]),
                addr,
            )),
            EvmOpcode::Pc => ops.push(IrInsn::with_output(
                IrOp::Copy,
                stack(0),
                SmallVec::from_slice(&[word_const(addr)]),
                addr,
            )),
            EvmOpcode::Msize => ops.push(IrInsn::with_output(
                IrOp::Copy,
                stack(0),
                SmallVec::from_slice(&[evm_memory(0)]),
                addr,
            )),
            EvmOpcode::Gas => ops.push(IrInsn::with_output(
                IrOp::Copy,
                stack(0),
                SmallVec::from_slice(&[Varnode::reg(REG_GAS, EVM_WORD_BYTES)]),
                addr,
            )),

            EvmOpcode::Address
            | EvmOpcode::Origin
            | EvmOpcode::Caller
            | EvmOpcode::Callvalue
            | EvmOpcode::Calldatasize
            | EvmOpcode::Codesize
            | EvmOpcode::Gasprice
            | EvmOpcode::Returndatasize
            | EvmOpcode::Coinbase
            | EvmOpcode::Timestamp
            | EvmOpcode::Number
            | EvmOpcode::PrevRandao
            | EvmOpcode::Gaslimit
            | EvmOpcode::Chainid
            | EvmOpcode::Selfbalance
            | EvmOpcode::Basefee
            | EvmOpcode::Blobbasefee => self.environment_value(&mut ops, opcode, addr),

            EvmOpcode::Calldataload
            | EvmOpcode::Balance
            | EvmOpcode::Extcodesize
            | EvmOpcode::Blockhash
            | EvmOpcode::Extcodehash
            | EvmOpcode::Blobhash => ops.push(IrInsn::with_output(
                IrOp::Callother,
                stack(0),
                SmallVec::from_slice(&[opcode_id(opcode), stack(0)]),
                addr,
            )),

            EvmOpcode::Calldatacopy
            | EvmOpcode::Codecopy
            | EvmOpcode::Extcodecopy
            | EvmOpcode::Returndatacopy => {
                ops.push(IrInsn::without_output(
                    IrOp::Callother,
                    SmallVec::from_slice(&[opcode_id(opcode), stack(0), stack(1), stack(2)]),
                    addr,
                ));
            }
            EvmOpcode::Log(n) => {
                let mut inputs = SmallVec::<[Varnode; 3]>::new();
                inputs.push(opcode_id(opcode));
                inputs.push(stack(0));
                inputs.push(stack(1));
                for i in 0..n {
                    inputs.push(stack(u64::from(2 + i)));
                }
                ops.push(IrInsn::without_output(IrOp::Callother, inputs, addr));
            }
            EvmOpcode::Create
            | EvmOpcode::Create2
            | EvmOpcode::Call
            | EvmOpcode::Callcode
            | EvmOpcode::Delegatecall
            | EvmOpcode::Staticcall => {
                ops.push(IrInsn::with_output(
                    IrOp::Callother,
                    stack(0),
                    SmallVec::from_slice(&[opcode_id(opcode)]),
                    addr,
                ));
            }
            EvmOpcode::Return | EvmOpcode::Revert | EvmOpcode::Selfdestruct => ops.push(
                IrInsn::without_output(IrOp::Return, SmallVec::from_slice(&[stack(0)]), addr),
            ),
            EvmOpcode::Invalid | EvmOpcode::Unknown(_) => {
                trace!(?opcode, "unimplemented EVM opcode");
                ops.push(IrInsn::without_output(
                    IrOp::Unimplemented,
                    SmallVec::new(),
                    addr,
                ));
            }
        }

        LiftedInsn { ir_ops: ops, len }
    }

    fn binop(&self, ops: &mut Vec<IrInsn>, op: IrOp, addr: u64) {
        ops.push(IrInsn::with_output(
            op,
            stack(0),
            SmallVec::from_slice(&[stack(0), stack(1)]),
            addr,
        ));
    }

    fn reversed_compare(&self, ops: &mut Vec<IrInsn>, op: IrOp, addr: u64) {
        ops.push(IrInsn::with_output(
            op,
            stack(0),
            SmallVec::from_slice(&[stack(1), stack(0)]),
            addr,
        ));
    }

    fn environment_value(&self, ops: &mut Vec<IrInsn>, opcode: EvmOpcode, addr: u64) {
        let src = match opcode {
            EvmOpcode::Callvalue => Varnode::reg(REG_CALLVALUE, EVM_WORD_BYTES),
            EvmOpcode::Calldatasize => Varnode::reg(REG_CALLDATA_SIZE, EVM_WORD_BYTES),
            EvmOpcode::Returndatasize => Varnode::reg(REG_RETURNDATA_SIZE, EVM_WORD_BYTES),
            _ => opcode_id(opcode),
        };
        ops.push(IrInsn::with_output(
            IrOp::Copy,
            stack(0),
            SmallVec::from_slice(&[src]),
            addr,
        ));
    }
}

impl Default for EvmLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for EvmLifter {
    fn arch(&self) -> ArchId {
        ArchId::Evm
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }
        let opcode = EvmOpcode::decode(bytes[0]);
        Ok(self.lift_opcode(opcode, bytes, addr))
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

fn opcode_id(opcode: EvmOpcode) -> Varnode {
    let id = match opcode {
        EvmOpcode::Unknown(byte) => u64::from(byte),
        EvmOpcode::Push(n) => 0x60 + u64::from(n) - 1,
        EvmOpcode::Dup(n) => 0x80 + u64::from(n) - 1,
        EvmOpcode::Swap(n) => 0x90 + u64::from(n) - 1,
        EvmOpcode::Log(n) => 0xa0 + u64::from(n),
        EvmOpcode::Stop => 0x00,
        EvmOpcode::Add => 0x01,
        EvmOpcode::Mul => 0x02,
        EvmOpcode::Sub => 0x03,
        EvmOpcode::Div => 0x04,
        EvmOpcode::Sdiv => 0x05,
        EvmOpcode::Mod => 0x06,
        EvmOpcode::Smod => 0x07,
        EvmOpcode::Addmod => 0x08,
        EvmOpcode::Mulmod => 0x09,
        EvmOpcode::Exp => 0x0a,
        EvmOpcode::Signextend => 0x0b,
        EvmOpcode::Lt => 0x10,
        EvmOpcode::Gt => 0x11,
        EvmOpcode::Slt => 0x12,
        EvmOpcode::Sgt => 0x13,
        EvmOpcode::Eq => 0x14,
        EvmOpcode::Iszero => 0x15,
        EvmOpcode::And => 0x16,
        EvmOpcode::Or => 0x17,
        EvmOpcode::Xor => 0x18,
        EvmOpcode::Not => 0x19,
        EvmOpcode::Byte => 0x1a,
        EvmOpcode::Shl => 0x1b,
        EvmOpcode::Shr => 0x1c,
        EvmOpcode::Sar => 0x1d,
        EvmOpcode::Sha3 => 0x20,
        EvmOpcode::Address => 0x30,
        EvmOpcode::Balance => 0x31,
        EvmOpcode::Origin => 0x32,
        EvmOpcode::Caller => 0x33,
        EvmOpcode::Callvalue => 0x34,
        EvmOpcode::Calldataload => 0x35,
        EvmOpcode::Calldatasize => 0x36,
        EvmOpcode::Calldatacopy => 0x37,
        EvmOpcode::Codesize => 0x38,
        EvmOpcode::Codecopy => 0x39,
        EvmOpcode::Gasprice => 0x3a,
        EvmOpcode::Extcodesize => 0x3b,
        EvmOpcode::Extcodecopy => 0x3c,
        EvmOpcode::Returndatasize => 0x3d,
        EvmOpcode::Returndatacopy => 0x3e,
        EvmOpcode::Extcodehash => 0x3f,
        EvmOpcode::Blockhash => 0x40,
        EvmOpcode::Coinbase => 0x41,
        EvmOpcode::Timestamp => 0x42,
        EvmOpcode::Number => 0x43,
        EvmOpcode::PrevRandao => 0x44,
        EvmOpcode::Gaslimit => 0x45,
        EvmOpcode::Chainid => 0x46,
        EvmOpcode::Selfbalance => 0x47,
        EvmOpcode::Basefee => 0x48,
        EvmOpcode::Blobhash => 0x49,
        EvmOpcode::Blobbasefee => 0x4a,
        EvmOpcode::Pop => 0x50,
        EvmOpcode::Mload => 0x51,
        EvmOpcode::Mstore => 0x52,
        EvmOpcode::Mstore8 => 0x53,
        EvmOpcode::Sload => 0x54,
        EvmOpcode::Sstore => 0x55,
        EvmOpcode::Jump => 0x56,
        EvmOpcode::Jumpi => 0x57,
        EvmOpcode::Pc => 0x58,
        EvmOpcode::Msize => 0x59,
        EvmOpcode::Gas => 0x5a,
        EvmOpcode::Jumpdest => 0x5b,
        EvmOpcode::Create => 0xf0,
        EvmOpcode::Call => 0xf1,
        EvmOpcode::Callcode => 0xf2,
        EvmOpcode::Return => 0xf3,
        EvmOpcode::Delegatecall => 0xf4,
        EvmOpcode::Create2 => 0xf5,
        EvmOpcode::Staticcall => 0xfa,
        EvmOpcode::Revert => 0xfd,
        EvmOpcode::Invalid => 0xfe,
        EvmOpcode::Selfdestruct => 0xff,
    };
    small_const(id, 4)
}

/// Decode the low 64 bits of a big-endian EVM PUSH immediate.
fn decode_push_low_u64(bytes: &[u8]) -> u64 {
    let start = bytes.len().saturating_sub(8);
    bytes[start..]
        .iter()
        .fold(0u64, |acc, byte| (acc << 8) | u64::from(*byte))
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::SpaceId;

    fn lifter() -> EvmLifter {
        EvmLifter::new()
    }

    #[test]
    fn push1_decodes_immediate_and_length() {
        let lifted = lifter().lift_insn(&[0x60, 0x2a, 0x00], 0x100).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[0].output.unwrap(), stack(0));
        assert_eq!(lifted.ir_ops[0].inputs[0], imm_const(0x2a));
    }

    #[test]
    fn push32_keeps_low_64_bits_and_full_instruction_length() {
        let mut bytes = vec![0x7f];
        bytes.extend(0u8..32);
        let lifted = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(lifted.len, 33);
        assert_eq!(lifted.ir_ops[0].inputs[0], imm_const(0x1819_1a1b_1c1d_1e1f));
    }

    #[test]
    fn arithmetic_and_comparisons_lift_to_integer_ir() {
        let lifted = lifter().lift_insn(&[0x01], 0).unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[0].inputs.as_slice(), &[stack(0), stack(1)]);

        let lifted = lifter().lift_insn(&[0x11], 0).unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntLess);
        assert_eq!(lifted.ir_ops[0].inputs.as_slice(), &[stack(1), stack(0)]);
    }

    #[test]
    fn memory_storage_and_control_flow_are_modeled() {
        let lifted = lifter().lift_insn(&[0x51], 0x20).unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::Load);
        assert_eq!(lifted.ir_ops[0].output.unwrap(), stack(0));

        let lifted = lifter().lift_insn(&[0x55], 0x22).unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::Store);
        assert_eq!(lifted.ir_ops[0].inputs[0], small_const(1, 4));

        let lifted = lifter().lift_insn(&[0x56], 0x24).unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::Branchind);

        let lifted = lifter().lift_insn(&[0x57], 0x25).unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::Cbranch);
        assert_eq!(lifted.ir_ops[0].inputs.as_slice(), &[stack(0), stack(1)]);
    }

    #[test]
    fn environment_and_register_file_are_available() {
        let l = lifter();
        assert_eq!(l.arch(), ArchId::Evm);
        assert!(l.register_file().registers.iter().any(|r| r.name == "gas"));

        let lifted = l.lift_insn(&[0x34], 0).unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[0].inputs[0].space, SpaceId::Register);
    }
}
