// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD420
// Name:            .score_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD420 jmp     cs:off_2C7C1F8
//
// Resolved target: score_tinfo
// Target address:  0x60CE10
// GOT/IAT slot:    0x2C7C1F8
// Slot symbol:     off_2C7C1F8
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, int, char, void *ptr, __int64, int, __int64)
// ============================================================

/* see target sig */ .score_tinfo(/* see target signature */)
{
    // Tail-call to score_tinfo via GOT/IAT indirection
    return score_tinfo(/* forwarded args */);
}

