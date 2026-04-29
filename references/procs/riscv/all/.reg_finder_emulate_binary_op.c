// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3D0
// Name:            .reg_finder_emulate_binary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3D0 jmp     cs:off_351D0
//
// Resolved target: reg_finder_emulate_binary_op
// Target address:  0x35820
// GOT/IAT slot:    0x351D0
// Slot symbol:     off_351D0
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_binary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_binary_op via GOT/IAT indirection
    return reg_finder_emulate_binary_op(/* forwarded args */);
}

