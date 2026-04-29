// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CBE0
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CBE0 jmp     cs:off_4EDDD8
//
// Resolved target: reg_int_op
// Target address:  0x4F2118
// GOT/IAT slot:    0x4EDDD8
// Slot symbol:     off_4EDDD8
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

