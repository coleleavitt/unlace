// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D00
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D00 jmp     cs:reg_int_op_ptr
//
// Resolved target: reg_int_op
// Target address:  0x8D8A18
// GOT/IAT slot:    0x8A3B20
// Slot symbol:     reg_int_op_ptr
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

