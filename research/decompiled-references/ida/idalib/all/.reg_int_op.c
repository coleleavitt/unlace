// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC790
// Name:            .reg_int_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC790 jmp     cs:off_2C7BBB0
//
// Resolved target: reg_int_op
// Target address:  0x8546C0
// GOT/IAT slot:    0x2C7BBB0
// Slot symbol:     off_2C7BBB0
// Target type:     <no type info>
// ============================================================

void .reg_int_op(/* see target signature */)
{
    // Tail-call to reg_int_op via GOT/IAT indirection
    return reg_int_op(/* forwarded args */);
}

