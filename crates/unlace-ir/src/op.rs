//! The 76 IR opcodes defined in the frozen IR spec v1.0.

/// All 76 opcodes of the unlace low-level IR.
///
/// Discriminants `0..=74` follow the stable ordering defined in IR spec SS4.4.
/// New opcodes must be appended at position >= 75 with a spec version bump.
#[derive(
    Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, serde::Serialize, serde::Deserialize,
)]
#[non_exhaustive]
#[repr(u8)]
pub enum IrOp {
    // -- SS3.1 Data Movement (4) --
    Copy = 0,
    Load = 1,
    Store = 2,
    Indirect = 3,

    // -- SS3.2 Integer Arithmetic (11) --
    IntAdd = 4,
    IntSub = 5,
    IntMult = 6,
    IntDiv = 7,
    IntSdiv = 8,
    IntRem = 9,
    IntSrem = 10,
    IntNegate = 11,
    Int2comp = 12,
    IntZext = 13,
    IntSext = 14,

    // -- SS3.3 Integer Comparison (6) --
    IntEqual = 15,
    IntNotequal = 16,
    IntLess = 17,
    IntSless = 18,
    IntLessequal = 19,
    IntSlessequal = 20,

    // -- SS3.4 Integer Carry & Overflow (3) --
    IntCarry = 21,
    IntScarry = 22,
    IntSborrow = 23,

    // -- SS3.5 Bitwise & Shift (6) --
    IntAnd = 24,
    IntOr = 25,
    IntXor = 26,
    IntLeft = 27,
    IntRight = 28,
    IntSright = 29,

    // -- SS3.6 Boolean (4) --
    BoolNegate = 30,
    BoolAnd = 31,
    BoolOr = 32,
    BoolXor = 33,

    // -- SS3.7 Floating-Point Arithmetic (7) --
    FloatAdd = 34,
    FloatSub = 35,
    FloatMult = 36,
    FloatDiv = 37,
    FloatNeg = 38,
    FloatAbs = 39,
    FloatSqrt = 40,

    // -- SS3.8 Floating-Point Rounding & Conversion (8) --
    FloatCeil = 41,
    FloatFloor = 42,
    FloatRound = 43,
    FloatTrunc = 44,
    FloatNan = 45,
    FloatInt2float = 46,
    FloatFloat2float = 47,
    FloatFloat2int = 48,

    // -- SS3.9 Floating-Point Comparison (4) --
    FloatEqual = 49,
    FloatNotequal = 50,
    FloatLess = 51,
    FloatLessequal = 52,

    // -- SS3.10 Control Flow (6) --
    Branch = 53,
    Cbranch = 54,
    Branchind = 55,
    Call = 56,
    Callind = 57,
    Return = 58,

    // -- SS3.11 Bit & Field Manipulation (7) --
    Piece = 59,
    Subpiece = 60,
    Popcount = 61,
    Lzcount = 62,
    Insert = 63,
    Zpull = 64,
    Spull = 65,

    // -- SS3.12 Pointer & Type (3) --
    Ptradd = 66,
    Ptrsub = 67,
    Cast = 68,

    // -- SS3.13 SSA & Pseudo (6) --
    Multiequal = 69,
    Callother = 70,
    Cpoolref = 71,
    New = 72,
    Segmentop = 73,
    Unimplemented = 74,

    // -- SS3.14 Conditional (1) --
    /// `SELECT(cond, true_val, false_val) → dst`
    /// Semantics: `dst = cond ? true_val : false_val`
    Select = 75,

    // -- SS3.15 Vector / SIMD (3) --
    /// `VECTOR_INSERT(vec, elem, index) → new_vec`
    /// Insert a scalar element into a vector register at a given lane index.
    /// Supports ARM NEON `INS`, x86 `PINSRB/W/D/Q`, RISC-V vector insert.
    VectorInsert = 76,
    /// `VECTOR_EXTRACT(vec, index) → scalar`
    /// Extract a scalar element from a vector register at a given lane index.
    /// Supports ARM NEON `UMOV`/`SMOV`, x86 `PEXTRB/W/D/Q`.
    VectorExtract = 77,
    /// `VECTOR_SHUFFLE(vec_a, vec_b, mask) → new_vec`
    /// Permute lanes from two source vectors according to a mask.
    /// Supports x86 `SHUFPS`/`VPERM`, ARM `TBL`/`TBX`.
    VectorShuffle = 78,

    // -- SS3.16 Atomics & Memory Ordering (5) --
    /// `FENCE(ordering)` — memory barrier with no output.
    /// `ordering` is encoded as a constant: 1=Acquire, 2=Release, 3=AcqRel, 4=SeqCst.
    /// Prevents the decompiler from reordering loads/stores across this point.
    Fence = 79,
    /// `ATOMIC_LOAD(space, addr, ordering) → value`
    /// Atomic load with memory ordering semantics.
    AtomicLoad = 80,
    /// `ATOMIC_STORE(space, addr, value, ordering)` — no output.
    /// Atomic store with memory ordering semantics.
    AtomicStore = 81,
    /// `ATOMIC_RMW(space, addr, operand, op_kind, ordering) → old_value`
    /// Atomic read-modify-write. `op_kind` encodes the operation:
    /// 0=Xchg, 1=Add, 2=Sub, 3=And, 4=Or, 5=Xor, 6=Nand, 7=Min, 8=Max.
    AtomicRmw = 82,
    /// `ATOMIC_CAS(space, addr, expected, desired, ordering) → old_value`
    /// Atomic compare-and-swap.
    AtomicCas = 83,
}

/// Total number of opcodes in the frozen v1.0 spec.
pub const IROP_COUNT: usize = 84;

impl IrOp {
    /// Returns the canonical uppercase opcode name (e.g. `"INT_ADD"`).
    pub const fn name(self) -> &'static str {
        match self {
            Self::Copy => "COPY",
            Self::Load => "LOAD",
            Self::Store => "STORE",
            Self::Indirect => "INDIRECT",
            Self::IntAdd => "INT_ADD",
            Self::IntSub => "INT_SUB",
            Self::IntMult => "INT_MULT",
            Self::IntDiv => "INT_DIV",
            Self::IntSdiv => "INT_SDIV",
            Self::IntRem => "INT_REM",
            Self::IntSrem => "INT_SREM",
            Self::IntNegate => "INT_NEGATE",
            Self::Int2comp => "INT_2COMP",
            Self::IntZext => "INT_ZEXT",
            Self::IntSext => "INT_SEXT",
            Self::IntEqual => "INT_EQUAL",
            Self::IntNotequal => "INT_NOTEQUAL",
            Self::IntLess => "INT_LESS",
            Self::IntSless => "INT_SLESS",
            Self::IntLessequal => "INT_LESSEQUAL",
            Self::IntSlessequal => "INT_SLESSEQUAL",
            Self::IntCarry => "INT_CARRY",
            Self::IntScarry => "INT_SCARRY",
            Self::IntSborrow => "INT_SBORROW",
            Self::IntAnd => "INT_AND",
            Self::IntOr => "INT_OR",
            Self::IntXor => "INT_XOR",
            Self::IntLeft => "INT_LEFT",
            Self::IntRight => "INT_RIGHT",
            Self::IntSright => "INT_SRIGHT",
            Self::BoolNegate => "BOOL_NEGATE",
            Self::BoolAnd => "BOOL_AND",
            Self::BoolOr => "BOOL_OR",
            Self::BoolXor => "BOOL_XOR",
            Self::FloatAdd => "FLOAT_ADD",
            Self::FloatSub => "FLOAT_SUB",
            Self::FloatMult => "FLOAT_MULT",
            Self::FloatDiv => "FLOAT_DIV",
            Self::FloatNeg => "FLOAT_NEG",
            Self::FloatAbs => "FLOAT_ABS",
            Self::FloatSqrt => "FLOAT_SQRT",
            Self::FloatCeil => "FLOAT_CEIL",
            Self::FloatFloor => "FLOAT_FLOOR",
            Self::FloatRound => "FLOAT_ROUND",
            Self::FloatTrunc => "FLOAT_TRUNC",
            Self::FloatNan => "FLOAT_NAN",
            Self::FloatInt2float => "FLOAT_INT2FLOAT",
            Self::FloatFloat2float => "FLOAT_FLOAT2FLOAT",
            Self::FloatFloat2int => "FLOAT_FLOAT2INT",
            Self::FloatEqual => "FLOAT_EQUAL",
            Self::FloatNotequal => "FLOAT_NOTEQUAL",
            Self::FloatLess => "FLOAT_LESS",
            Self::FloatLessequal => "FLOAT_LESSEQUAL",
            Self::Branch => "BRANCH",
            Self::Cbranch => "CBRANCH",
            Self::Branchind => "BRANCHIND",
            Self::Call => "CALL",
            Self::Callind => "CALLIND",
            Self::Return => "RETURN",
            Self::Piece => "PIECE",
            Self::Subpiece => "SUBPIECE",
            Self::Popcount => "POPCOUNT",
            Self::Lzcount => "LZCOUNT",
            Self::Insert => "INSERT",
            Self::Zpull => "ZPULL",
            Self::Spull => "SPULL",
            Self::Ptradd => "PTRADD",
            Self::Ptrsub => "PTRSUB",
            Self::Cast => "CAST",
            Self::Multiequal => "MULTIEQUAL",
            Self::Callother => "CALLOTHER",
            Self::Cpoolref => "CPOOLREF",
            Self::New => "NEW",
            Self::Segmentop => "SEGMENTOP",
            Self::Unimplemented => "UNIMPLEMENTED",
            Self::Select => "SELECT",
            Self::VectorInsert => "VECTOR_INSERT",
            Self::VectorExtract => "VECTOR_EXTRACT",
            Self::VectorShuffle => "VECTOR_SHUFFLE",
            Self::Fence => "FENCE",
            Self::AtomicLoad => "ATOMIC_LOAD",
            Self::AtomicStore => "ATOMIC_STORE",
            Self::AtomicRmw => "ATOMIC_RMW",
            Self::AtomicCas => "ATOMIC_CAS",
        }
    }

    /// Returns the type family tag for the *output* of this opcode.
    ///
    /// - `'i'` for integer operations
    /// - `'f'` for float operations
    /// - `'b'` for boolean-producing operations (comparisons, BOOL_*)
    /// - `None` for opcodes with no output (STORE, BRANCH, etc.)
    pub const fn type_family(self) -> Option<char> {
        match self {
            // Boolean-producing (comparisons + BOOL_*)
            Self::IntEqual
            | Self::IntNotequal
            | Self::IntLess
            | Self::IntSless
            | Self::IntLessequal
            | Self::IntSlessequal
            | Self::IntCarry
            | Self::IntScarry
            | Self::IntSborrow
            | Self::BoolNegate
            | Self::BoolAnd
            | Self::BoolOr
            | Self::BoolXor
            | Self::FloatEqual
            | Self::FloatNotequal
            | Self::FloatLess
            | Self::FloatLessequal
            | Self::FloatNan => Some('b'),

            // Float operations
            Self::FloatAdd
            | Self::FloatSub
            | Self::FloatMult
            | Self::FloatDiv
            | Self::FloatNeg
            | Self::FloatAbs
            | Self::FloatSqrt
            | Self::FloatCeil
            | Self::FloatFloor
            | Self::FloatRound
            | Self::FloatTrunc
            | Self::FloatInt2float
            | Self::FloatFloat2float => Some('f'),

            // No output
            Self::Store
            | Self::Branch
            | Self::Cbranch
            | Self::Branchind
            | Self::Return
            | Self::Fence
            | Self::AtomicStore => None,

            // Everything else is integer / generic
            _ => Some('i'),
        }
    }

    /// Returns the type family tag for a given *input* position of this opcode.
    ///
    /// Most inputs share the same tag as the output. Exceptions include
    /// comparisons (integer inputs, boolean output) and conversions.
    pub const fn input_type_family(self, index: usize) -> char {
        match self {
            // Boolean inputs
            Self::BoolNegate | Self::BoolAnd | Self::BoolOr | Self::BoolXor => 'b',

            // Integer comparisons: inputs are integer, output is boolean
            Self::IntEqual
            | Self::IntNotequal
            | Self::IntLess
            | Self::IntSless
            | Self::IntLessequal
            | Self::IntSlessequal
            | Self::IntCarry
            | Self::IntScarry
            | Self::IntSborrow => 'i',

            // Float comparisons: inputs are float, output is boolean
            Self::FloatEqual | Self::FloatNotequal | Self::FloatLess | Self::FloatLessequal => 'f',

            // FLOAT_NAN: input is float, output is boolean
            Self::FloatNan => 'f',

            // FLOAT_INT2FLOAT: input is integer, output is float
            Self::FloatInt2float => 'i',

            // FLOAT_FLOAT2INT: input is float, output is integer
            Self::FloatFloat2int => 'f',

            // FLOAT_FLOAT2FLOAT: input and output are both float
            Self::FloatFloat2float => 'f',

            // CBRANCH: input0 is the target (integer), input1 is condition (boolean)
            Self::Cbranch if index == 1 => 'b',
            Self::Cbranch => 'i',
            
            // SELECT: input0 is condition (boolean), inputs 1,2 are integer
            Self::Select if index == 0 => 'b',
            Self::Select => 'i',

            // Float ops: inputs are float
            Self::FloatAdd
            | Self::FloatSub
            | Self::FloatMult
            | Self::FloatDiv
            | Self::FloatNeg
            | Self::FloatAbs
            | Self::FloatSqrt
            | Self::FloatCeil
            | Self::FloatFloor
            | Self::FloatRound
            | Self::FloatTrunc => 'f',

            // Default: integer
            _ => 'i',
        }
    }
}

impl std::fmt::Display for IrOp {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(self.name())
    }
}
