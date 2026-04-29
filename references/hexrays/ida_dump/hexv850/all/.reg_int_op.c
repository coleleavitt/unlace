// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAF0
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAF0 jmp     cs:off_4C0D60
//
// Resolved target: reg_int_op
// Target address:  0x4C3D78
// GOT/IAT slot:    0x4C0D60
// Slot symbol:     off_4C0D60
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

