// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7320
// Name:            .reg_bin_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7320 jmp     cs:off_2C79178
//
// Resolved target: reg_bin_op
// Target address:  0x854930
// GOT/IAT slot:    0x2C79178
// Slot symbol:     off_2C79178
// Target type:     <no type info>
// ============================================================

void .reg_bin_op(/* see target signature */)
{
    // Tail-call to reg_bin_op via GOT/IAT indirection
    return reg_bin_op(/* forwarded args */);
}

