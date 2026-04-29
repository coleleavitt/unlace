// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x205E0
// Name:            .reg_finder_emulate_binary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x205E0 jmp     cs:off_952D8
//
// Resolved target: reg_finder_emulate_binary_op
// Target address:  0x95D10
// GOT/IAT slot:    0x952D8
// Slot symbol:     off_952D8
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_binary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_binary_op via GOT/IAT indirection
    return reg_finder_emulate_binary_op(/* forwarded args */);
}

