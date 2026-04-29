// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC0
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC0 jmp     cs:off_4B9D48
//
// Resolved target: reg_int_op
// Target address:  0x4BC768
// GOT/IAT slot:    0x4B9D48
// Slot symbol:     off_4B9D48
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

