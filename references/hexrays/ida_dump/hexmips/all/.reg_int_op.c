// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAF0
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAF0 jmp     cs:off_4CDD60
//
// Resolved target: reg_int_op
// Target address:  0x4D07A0
// GOT/IAT slot:    0x4CDD60
// Slot symbol:     off_4CDD60
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

