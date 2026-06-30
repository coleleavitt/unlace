//! DWARF expression (DW_OP_*) evaluator.
//!
//! Evaluates the DW_OP opcodes commonly found in DW_AT_location and
//! DW_AT_frame_base attributes. Returns a [`Location`] describing where
//! a variable lives (register, memory, composite, or constant).
//!
//! Supports a useful subset of DWARF 5 expressions; unhandled opcodes
//! produce [`Location::Unknown`].

/// Where a variable lives at runtime.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Location {
    /// In a numbered register.
    Register(u16),
    /// At a known memory address.
    Memory(i64),
    /// Frame-base relative offset (DW_OP_fbreg).
    FrameBase(i64),
    /// CFA (call-frame address) relative offset (DW_OP_call_frame_cfa).
    ///
    /// Mirrors [`Location::FrameBase`]: the value is the offset applied to the
    /// canonical frame address. A bare `DW_OP_call_frame_cfa` yields an offset
    /// of `0`; subsequent arithmetic (e.g. `DW_OP_plus_uconst`) adjusts it.
    Cfa(i64),
    /// A literal constant value.
    Constant(i64),
    /// The literal bytes of the object itself (DW_OP_implicit_value).
    ImplicitValue(Vec<u8>),
    /// The object is found by dereferencing the computed value
    /// (DW_OP_deref / DW_OP_deref_size). The inner location is the address
    /// expression that was on the stack; `size` is the deref width in bytes
    /// (`0` means a pointer-sized / unspecified deref).
    Indirect { base: Box<Location>, size: u8 },
    /// Composite location (multiple pieces) — not yet enumerated.
    Composite,
    /// Could not evaluate.
    Unknown,
}

// DW_OP_* opcode constants (subset).
const DW_OP_ADDR: u8 = 0x03;
const DW_OP_DEREF: u8 = 0x06;
const DW_OP_CONST1U: u8 = 0x08;
const DW_OP_CONST1S: u8 = 0x09;
const DW_OP_CONST2U: u8 = 0x0A;
const DW_OP_CONST2S: u8 = 0x0B;
const DW_OP_CONST4U: u8 = 0x0C;
const DW_OP_CONST4S: u8 = 0x0D;
const DW_OP_CONST8U: u8 = 0x0E;
const DW_OP_CONST8S: u8 = 0x0F;
const DW_OP_LIT0: u8 = 0x30;
const DW_OP_LIT31: u8 = 0x4F;
const DW_OP_REG0: u8 = 0x50;
const DW_OP_REG31: u8 = 0x6F;
const DW_OP_BREG0: u8 = 0x70;
const DW_OP_BREG31: u8 = 0x8F;
const DW_OP_REGX: u8 = 0x90;
const DW_OP_FBREG: u8 = 0x91;
const DW_OP_BREGX: u8 = 0x92;
const DW_OP_PIECE: u8 = 0x93;
const DW_OP_PLUS_UCONST: u8 = 0x23;
const DW_OP_PLUS: u8 = 0x22;
const DW_OP_STACK_VALUE: u8 = 0x9F;
const DW_OP_CONSTU: u8 = 0x10;
const DW_OP_CONSTS: u8 = 0x11;
const DW_OP_DEREF_SIZE: u8 = 0x94;
const DW_OP_IMPLICIT_VALUE: u8 = 0x9E;
const DW_OP_CALL_FRAME_CFA: u8 = 0x9C;

/// Working state during evaluation.
struct EvalState {
    stack: Vec<i64>,
    last_was_register: Option<u16>,
    last_was_fbreg: Option<i64>,
    /// Set once `DW_OP_call_frame_cfa` is seen; later arithmetic adjusts the
    /// stack top, so the final offset is read back from the stack.
    is_cfa: bool,
    /// Deref width recorded by `DW_OP_deref` (0) / `DW_OP_deref_size` (n).
    deref_size: Option<u8>,
    has_piece: bool,
}

impl EvalState {
    fn new() -> Self {
        Self {
            stack: Vec::new(),
            last_was_register: None,
            last_was_fbreg: None,
            is_cfa: false,
            deref_size: None,
            has_piece: false,
        }
    }
}

/// Evaluate a DWARF expression byte stream.
pub fn evaluate(bytes: &[u8]) -> Location {
    let mut st = EvalState::new();
    let mut pos = 0;
    while pos < bytes.len() {
        let op = bytes[pos];
        pos += 1;
        match step_opcode(op, bytes, &mut pos, &mut st) {
            StepResult::Continue => {}
            StepResult::Halt(loc) => return loc,
        }
    }
    finalize(&st)
}

enum StepResult {
    Continue,
    Halt(Location),
}

fn step_opcode(op: u8, bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    if (DW_OP_REG0..=DW_OP_REG31).contains(&op) {
        st.last_was_register = Some((op - DW_OP_REG0) as u16);
        return StepResult::Continue;
    }
    if (DW_OP_BREG0..=DW_OP_BREG31).contains(&op) {
        if let Some((off, consumed)) = read_sleb128(&bytes[*pos..]) {
            *pos += consumed;
            st.stack.push(off);
            return StepResult::Continue;
        }
        return StepResult::Halt(Location::Unknown);
    }
    if (DW_OP_LIT0..=DW_OP_LIT31).contains(&op) {
        st.stack.push((op - DW_OP_LIT0) as i64);
        return StepResult::Continue;
    }
    match op {
        DW_OP_REGX => step_regx(bytes, pos, st),
        DW_OP_BREGX => step_bregx(bytes, pos, st),
        DW_OP_FBREG => step_fbreg(bytes, pos, st),
        DW_OP_CONST1U => step_push_byte(bytes, pos, st, false),
        DW_OP_CONST1S => step_push_byte(bytes, pos, st, true),
        DW_OP_CONST2U => step_push_const(bytes, pos, 2, false, st),
        DW_OP_CONST2S => step_push_const(bytes, pos, 2, true, st),
        DW_OP_CONST4U => step_push_const(bytes, pos, 4, false, st),
        DW_OP_CONST4S => step_push_const(bytes, pos, 4, true, st),
        DW_OP_CONST8U => step_push_const(bytes, pos, 8, false, st),
        DW_OP_CONST8S => step_push_const(bytes, pos, 8, true, st),
        // DW_OP_addr pushes an absolute address; finalize resolves the
        // stack top to an absolute Location::Memory.
        DW_OP_ADDR => step_push_const(bytes, pos, 8, false, st),
        DW_OP_CONSTU => step_constu(bytes, pos, st),
        DW_OP_CONSTS => step_consts(bytes, pos, st),
        DW_OP_PLUS => {
            let b = st.stack.pop().unwrap_or(0);
            let a = st.stack.pop().unwrap_or(0);
            st.stack.push(a.wrapping_add(b));
            StepResult::Continue
        }
        DW_OP_PLUS_UCONST => step_plus_uconst(bytes, pos, st),
        DW_OP_DEREF => {
            st.deref_size = Some(0);
            StepResult::Continue
        }
        DW_OP_DEREF_SIZE => {
            if *pos >= bytes.len() {
                return StepResult::Halt(Location::Unknown);
            }
            st.deref_size = Some(bytes[*pos]);
            *pos += 1;
            StepResult::Continue
        }
        DW_OP_CALL_FRAME_CFA => {
            st.is_cfa = true;
            // Establish the CFA as the (offset-0) base for any following
            // arithmetic, mirroring how a register/fbreg seeds the stack.
            st.stack.push(0);
            StepResult::Continue
        }
        DW_OP_IMPLICIT_VALUE => step_implicit_value(bytes, pos),
        DW_OP_STACK_VALUE => StepResult::Halt(Location::Constant(st.stack.pop().unwrap_or(0))),
        DW_OP_PIECE => step_piece(bytes, pos, st),
        _ => StepResult::Halt(Location::Unknown),
    }
}

fn step_regx(bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    match read_uleb128(&bytes[*pos..]) {
        Some((reg, consumed)) => {
            *pos += consumed;
            st.last_was_register = Some(reg as u16);
            StepResult::Continue
        }
        None => StepResult::Halt(Location::Unknown),
    }
}

fn step_bregx(bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    let Some((_reg, c1)) = read_uleb128(&bytes[*pos..]) else {
        return StepResult::Halt(Location::Unknown);
    };
    *pos += c1;
    if let Some((off, c2)) = read_sleb128(&bytes[*pos..]) {
        *pos += c2;
        st.stack.push(off);
    }
    StepResult::Continue
}

fn step_fbreg(bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    match read_sleb128(&bytes[*pos..]) {
        Some((off, consumed)) => {
            *pos += consumed;
            st.last_was_fbreg = Some(off);
            StepResult::Continue
        }
        None => StepResult::Halt(Location::Unknown),
    }
}

fn step_push_byte(bytes: &[u8], pos: &mut usize, st: &mut EvalState, signed: bool) -> StepResult {
    if *pos >= bytes.len() {
        return StepResult::Halt(Location::Unknown);
    }
    let v = if signed {
        bytes[*pos] as i8 as i64
    } else {
        bytes[*pos] as i64
    };
    *pos += 1;
    st.stack.push(v);
    StepResult::Continue
}

fn step_push_const(
    bytes: &[u8],
    pos: &mut usize,
    width: usize,
    signed: bool,
    st: &mut EvalState,
) -> StepResult {
    if *pos + width > bytes.len() {
        return StepResult::Halt(Location::Unknown);
    }
    let v = match (width, signed) {
        (2, false) => u16::from_le_bytes([bytes[*pos], bytes[*pos + 1]]) as i64,
        (2, true) => i16::from_le_bytes([bytes[*pos], bytes[*pos + 1]]) as i64,
        (4, false) => u32::from_le_bytes(bytes[*pos..*pos + 4].try_into().unwrap()) as i64,
        (4, true) => i32::from_le_bytes(bytes[*pos..*pos + 4].try_into().unwrap()) as i64,
        (8, _) => i64::from_le_bytes(bytes[*pos..*pos + 8].try_into().unwrap()),
        _ => return StepResult::Halt(Location::Unknown),
    };
    *pos += width;
    st.stack.push(v);
    StepResult::Continue
}

fn step_plus_uconst(bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    if let Some((c, consumed)) = read_uleb128(&bytes[*pos..]) {
        *pos += consumed;
        let top = st.stack.pop().unwrap_or(0);
        st.stack.push(top.wrapping_add(c as i64));
    }
    StepResult::Continue
}

fn step_constu(bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    match read_uleb128(&bytes[*pos..]) {
        Some((v, consumed)) => {
            *pos += consumed;
            st.stack.push(v as i64);
            StepResult::Continue
        }
        None => StepResult::Halt(Location::Unknown),
    }
}

fn step_consts(bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    match read_sleb128(&bytes[*pos..]) {
        Some((v, consumed)) => {
            *pos += consumed;
            st.stack.push(v);
            StepResult::Continue
        }
        None => StepResult::Halt(Location::Unknown),
    }
}

fn step_implicit_value(bytes: &[u8], pos: &mut usize) -> StepResult {
    // DW_OP_implicit_value: ULEB128 length followed by that many literal bytes.
    let Some((len, consumed)) = read_uleb128(&bytes[*pos..]) else {
        return StepResult::Halt(Location::Unknown);
    };
    *pos += consumed;
    let len = len as usize;
    if *pos + len > bytes.len() {
        return StepResult::Halt(Location::Unknown);
    }
    let value = bytes[*pos..*pos + len].to_vec();
    *pos += len;
    StepResult::Halt(Location::ImplicitValue(value))
}

fn step_piece(bytes: &[u8], pos: &mut usize, st: &mut EvalState) -> StepResult {
    st.has_piece = true;
    if let Some((_size, consumed)) = read_uleb128(&bytes[*pos..]) {
        *pos += consumed;
    }
    StepResult::Continue
}

fn finalize(st: &EvalState) -> Location {
    if st.has_piece {
        return Location::Composite;
    }
    let base = base_location(st);
    if let Some(size) = st.deref_size {
        if base == Location::Unknown {
            return Location::Unknown;
        }
        return Location::Indirect {
            base: Box::new(base),
            size,
        };
    }
    base
}

/// Resolve the (pre-deref) location implied by the evaluator state.
fn base_location(st: &EvalState) -> Location {
    if let Some(off) = st.last_was_fbreg {
        return Location::FrameBase(off);
    }
    if st.is_cfa {
        // The stack top carries the running offset from the CFA.
        return Location::Cfa(st.stack.last().copied().unwrap_or(0));
    }
    if let Some(reg) = st.last_was_register {
        return Location::Register(reg);
    }
    if let Some(top) = st.stack.last().copied() {
        // DW_OP_addr / arithmetic both resolve to an absolute address.
        return Location::Memory(top);
    }
    Location::Unknown
}

fn read_uleb128(bytes: &[u8]) -> Option<(u64, usize)> {
    let mut result = 0u64;
    let mut shift = 0u32;
    for (i, &b) in bytes.iter().enumerate().take(10) {
        result |= ((b & 0x7F) as u64) << shift;
        if b & 0x80 == 0 {
            return Some((result, i + 1));
        }
        shift += 7;
    }
    None
}

fn read_sleb128(bytes: &[u8]) -> Option<(i64, usize)> {
    let mut result = 0i64;
    let mut shift = 0u32;
    for (i, &b) in bytes.iter().enumerate().take(10) {
        result |= ((b & 0x7F) as i64) << shift;
        shift += 7;
        if b & 0x80 == 0 {
            // Sign-extend if the sign bit of the final 7-bit chunk is set.
            if shift < 64 && (b & 0x40) != 0 {
                result |= -(1i64 << shift);
            }
            return Some((result, i + 1));
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_dwarf_expr_reg5() {
        let bytes = [DW_OP_REG0 + 5];
        assert_eq!(evaluate(&bytes), Location::Register(5));
    }

    #[test]
    fn test_dwarf_expr_fbreg_negative() {
        // DW_OP_fbreg -8 → frame base + (-8)
        let bytes = [DW_OP_FBREG, 0x78]; // SLEB128 of -8 = 0x78
        assert_eq!(evaluate(&bytes), Location::FrameBase(-8));
    }

    #[test]
    fn test_dwarf_expr_lit3() {
        let bytes = [DW_OP_LIT0 + 3];
        // No stack_value, so we treat the stack top as a memory address.
        assert_eq!(evaluate(&bytes), Location::Memory(3));
    }

    #[test]
    fn test_dwarf_expr_const_value() {
        // DW_OP_lit5, DW_OP_stack_value → Constant(5)
        let bytes = [DW_OP_LIT0 + 5, DW_OP_STACK_VALUE];
        assert_eq!(evaluate(&bytes), Location::Constant(5));
    }

    #[test]
    fn test_dwarf_expr_addr() {
        let mut bytes = vec![DW_OP_ADDR];
        bytes.extend_from_slice(&0x12345678i64.to_le_bytes());
        assert_eq!(evaluate(&bytes), Location::Memory(0x12345678));
    }

    #[test]
    fn test_dwarf_expr_piece_composite() {
        let bytes = [
            DW_OP_REG0,
            DW_OP_PIECE,
            0x08,
            DW_OP_REG0 + 1,
            DW_OP_PIECE,
            0x08,
        ];
        assert_eq!(evaluate(&bytes), Location::Composite);
    }

    #[test]
    fn test_dwarf_expr_plus_uconst() {
        // lit10 + uconst 5 → 15
        let bytes = [DW_OP_LIT0 + 10, DW_OP_PLUS_UCONST, 5, DW_OP_STACK_VALUE];
        assert_eq!(evaluate(&bytes), Location::Constant(15));
    }

    #[test]
    fn test_dwarf_expr_unknown_op() {
        let bytes = [0xFE]; // unknown opcode
        assert_eq!(evaluate(&bytes), Location::Unknown);
    }

    #[test]
    fn test_dwarf_expr_const2s_negative() {
        // DW_OP_const2s -3 → push i16(-3) as i64
        let mut bytes = vec![DW_OP_CONST2S];
        bytes.extend_from_slice(&(-3i16).to_le_bytes());
        bytes.push(DW_OP_STACK_VALUE);
        assert_eq!(evaluate(&bytes), Location::Constant(-3));
    }

    #[test]
    fn test_dwarf_expr_const4s_negative() {
        let mut bytes = vec![DW_OP_CONST4S];
        bytes.extend_from_slice(&(-12345i32).to_le_bytes());
        bytes.push(DW_OP_STACK_VALUE);
        assert_eq!(evaluate(&bytes), Location::Constant(-12345));
    }

    #[test]
    fn test_dwarf_expr_const2u_positive() {
        // DW_OP_const2u 0xFFFE → push 0xFFFE (unsigned zero-extend)
        let mut bytes = vec![DW_OP_CONST2U];
        bytes.extend_from_slice(&0xFFFEu16.to_le_bytes());
        bytes.push(DW_OP_STACK_VALUE);
        assert_eq!(evaluate(&bytes), Location::Constant(0xFFFE));
    }

    #[test]
    fn evaluator_decodes_call_frame_cfa() {
        // Bare DW_OP_call_frame_cfa → CFA at offset 0.
        let bytes = [DW_OP_CALL_FRAME_CFA];
        assert_eq!(evaluate(&bytes), Location::Cfa(0));
    }

    #[test]
    fn evaluator_decodes_call_frame_cfa_plus_uconst() {
        // DW_OP_call_frame_cfa, DW_OP_plus_uconst 16 → CFA + 16.
        let bytes = [DW_OP_CALL_FRAME_CFA, DW_OP_PLUS_UCONST, 16];
        assert_eq!(evaluate(&bytes), Location::Cfa(16));
    }

    #[test]
    fn evaluator_decodes_addr_as_memory() {
        // DW_OP_addr <8-byte absolute> → Memory(addr).
        let mut bytes = vec![DW_OP_ADDR];
        bytes.extend_from_slice(&0xdead_beefu64.to_le_bytes());
        assert_eq!(evaluate(&bytes), Location::Memory(0xdead_beef));
    }

    #[test]
    fn evaluator_decodes_implicit_value() {
        // DW_OP_implicit_value, len=4, bytes 0x12 0x34 0x56 0x78.
        let bytes = [DW_OP_IMPLICIT_VALUE, 0x04, 0x12, 0x34, 0x56, 0x78];
        assert_eq!(
            evaluate(&bytes),
            Location::ImplicitValue(vec![0x12, 0x34, 0x56, 0x78])
        );
    }

    #[test]
    fn evaluator_decodes_deref_of_breg() {
        // DW_OP_breg0 +0, DW_OP_deref → Indirect over the register base.
        let bytes = [DW_OP_BREG0, 0x00, DW_OP_DEREF];
        assert_eq!(
            evaluate(&bytes),
            Location::Indirect {
                base: Box::new(Location::Memory(0)),
                size: 0,
            }
        );
    }

    #[test]
    fn evaluator_decodes_deref_size_of_addr() {
        // DW_OP_addr <addr>, DW_OP_deref_size 4 → Indirect(Memory(addr), 4).
        let mut bytes = vec![DW_OP_ADDR];
        bytes.extend_from_slice(&0x1000u64.to_le_bytes());
        bytes.push(DW_OP_DEREF_SIZE);
        bytes.push(0x04);
        assert_eq!(
            evaluate(&bytes),
            Location::Indirect {
                base: Box::new(Location::Memory(0x1000)),
                size: 4,
            }
        );
    }

    #[test]
    fn evaluator_pushes_constu() {
        // DW_OP_constu 624485 (0x98765), DW_OP_stack_value → Constant(624485).
        let bytes = [DW_OP_CONSTU, 0xE5, 0x8E, 0x26, DW_OP_STACK_VALUE];
        assert_eq!(evaluate(&bytes), Location::Constant(624485));
    }

    #[test]
    fn evaluator_pushes_consts_negative() {
        // DW_OP_consts -2 (SLEB128 0x7E), DW_OP_stack_value → Constant(-2).
        let bytes = [DW_OP_CONSTS, 0x7E, DW_OP_STACK_VALUE];
        assert_eq!(evaluate(&bytes), Location::Constant(-2));
    }
}
