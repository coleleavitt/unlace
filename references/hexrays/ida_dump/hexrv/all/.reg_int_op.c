// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAE0
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAE0 jmp     cs:off_4BFD58
//
// Resolved target: reg_int_op
// Target address:  0x4C3270
// GOT/IAT slot:    0x4BFD58
// Slot symbol:     off_4BFD58
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

