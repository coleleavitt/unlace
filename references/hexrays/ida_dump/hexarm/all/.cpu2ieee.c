// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DFB0
// Name:            .cpu2ieee
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DFB0 jmp     cs:off_4E97C0
//
// Resolved target: cpu2ieee
// Target address:  0x4EC1D8
// GOT/IAT slot:    0x4E97C0
// Slot symbol:     off_4E97C0
// Target type:     <no type info>
// ============================================================

void .cpu2ieee(/* see target signature */)
{
    // Tail-call to cpu2ieee via GOT/IAT indirection
    return cpu2ieee(/* forwarded args */);
}

