// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDE0
// Name:            .score_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDE0 jmp     cs:off_4ED6D8
//
// Resolved target: score_tinfo
// Target address:  0x4F19E8
// GOT/IAT slot:    0x4ED6D8
// Slot symbol:     off_4ED6D8
// Target type:     <no type info>
// ============================================================

void .score_tinfo(/* see target signature */)
{
    // Tail-call to score_tinfo via GOT/IAT indirection
    return score_tinfo(/* forwarded args */);
}

