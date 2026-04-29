// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82B0
// Name:            .reg_finder_emulate_binary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82B0 jmp     cs:off_2A140
//
// Resolved target: reg_finder_emulate_binary_op
// Target address:  0x2A6B0
// GOT/IAT slot:    0x2A140
// Slot symbol:     off_2A140
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_binary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_binary_op via GOT/IAT indirection
    return reg_finder_emulate_binary_op(/* forwarded args */);
}

