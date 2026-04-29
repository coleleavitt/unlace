// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9370
// Name:            .reg_finder_emulate_binary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9370 jmp     cs:off_2E1A0
//
// Resolved target: reg_finder_emulate_binary_op
// Target address:  0x2E810
// GOT/IAT slot:    0x2E1A0
// Slot symbol:     off_2E1A0
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_binary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_binary_op via GOT/IAT indirection
    return reg_finder_emulate_binary_op(/* forwarded args */);
}

