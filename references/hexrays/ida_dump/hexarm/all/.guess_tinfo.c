// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D720
// Name:            .guess_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D720 jmp     cs:off_4E9378
//
// Resolved target: guess_tinfo
// Target address:  0x4EBD68
// GOT/IAT slot:    0x4E9378
// Slot symbol:     off_4E9378
// Target type:     <no type info>
// ============================================================

void .guess_tinfo(/* see target signature */)
{
    // Tail-call to guess_tinfo via GOT/IAT indirection
    return guess_tinfo(/* forwarded args */);
}

