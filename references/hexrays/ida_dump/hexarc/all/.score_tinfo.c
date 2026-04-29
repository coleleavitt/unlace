// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29D90
// Name:            .score_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29D90 jmp     cs:off_4B96B0
//
// Resolved target: score_tinfo
// Target address:  0x4BC0A8
// GOT/IAT slot:    0x4B96B0
// Slot symbol:     off_4B96B0
// Target type:     <no type info>
// ============================================================

void .score_tinfo(/* see target signature */)
{
    // Tail-call to score_tinfo via GOT/IAT indirection
    return score_tinfo(/* forwarded args */);
}

