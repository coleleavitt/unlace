// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB20
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB20 jmp     cs:off_4E9D78
//
// Resolved target: reg_int_op
// Target address:  0x4EC7B8
// GOT/IAT slot:    0x4E9D78
// Slot symbol:     off_4E9D78
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

