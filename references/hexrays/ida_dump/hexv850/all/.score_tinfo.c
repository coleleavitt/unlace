// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD90
// Name:            .score_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD90 jmp     cs:off_4C06B0
//
// Resolved target: score_tinfo
// Target address:  0x4C36A0
// GOT/IAT slot:    0x4C06B0
// Slot symbol:     off_4C06B0
// Target type:     <no type info>
// ============================================================

void .score_tinfo(/* see target signature */)
{
    // Tail-call to score_tinfo via GOT/IAT indirection
    return score_tinfo(/* forwarded args */);
}

