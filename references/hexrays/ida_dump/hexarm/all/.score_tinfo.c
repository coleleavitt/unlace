// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DDB0
// Name:            .score_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DDB0 jmp     cs:off_4E96C0
//
// Resolved target: score_tinfo
// Target address:  0x4EC0D8
// GOT/IAT slot:    0x4E96C0
// Slot symbol:     off_4E96C0
// Target type:     <no type info>
// ============================================================

void .score_tinfo(/* see target signature */)
{
    // Tail-call to score_tinfo via GOT/IAT indirection
    return score_tinfo(/* forwarded args */);
}

