// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF90
// Name:            .cpu2ieee
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF90 jmp     cs:off_4BF7B0
//
// Resolved target: cpu2ieee
// Target address:  0x4C2CA0
// GOT/IAT slot:    0x4BF7B0
// Slot symbol:     off_4BF7B0
// Target type:     <no type info>
// ============================================================

void .cpu2ieee(/* see target signature */)
{
    // Tail-call to cpu2ieee via GOT/IAT indirection
    return cpu2ieee(/* forwarded args */);
}

