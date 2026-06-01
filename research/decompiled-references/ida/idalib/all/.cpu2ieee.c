// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8CB0
// Name:            .cpu2ieee
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8CB0 jmp     cs:off_2C79E40
//
// Resolved target: cpu2ieee
// Target address:  0x5A3E50
// GOT/IAT slot:    0x2C79E40
// Slot symbol:     off_2C79E40
// Target type:     <no type info>
// ============================================================

void .cpu2ieee(/* see target signature */)
{
    // Tail-call to cpu2ieee via GOT/IAT indirection
    return cpu2ieee(/* forwarded args */);
}

