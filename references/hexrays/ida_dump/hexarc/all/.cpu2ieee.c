// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F80
// Name:            .cpu2ieee
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F80 jmp     cs:off_4B97A8
//
// Resolved target: cpu2ieee
// Target address:  0x4BC1A0
// GOT/IAT slot:    0x4B97A8
// Slot symbol:     off_4B97A8
// Target type:     <no type info>
// ============================================================

void .cpu2ieee(/* see target signature */)
{
    // Tail-call to cpu2ieee via GOT/IAT indirection
    return cpu2ieee(/* forwarded args */);
}

