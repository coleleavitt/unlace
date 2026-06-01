// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF80
// Name:            .guess_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF80 jmp     cs:off_2C7B7A8
//
// Resolved target: guess_tinfo
// Target address:  0x612F40
// GOT/IAT slot:    0x2C7B7A8
// Slot symbol:     off_2C7B7A8
// Target type:     __int64 __fastcall(int, int)
// ============================================================

/* see target sig */ .guess_tinfo(/* see target signature */)
{
    // Tail-call to guess_tinfo via GOT/IAT indirection
    return guess_tinfo(/* forwarded args */);
}

