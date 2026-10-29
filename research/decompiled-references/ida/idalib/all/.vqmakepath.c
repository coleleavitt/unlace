// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC70
// Name:            .vqmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC70 jmp     cs:off_2C7BE20
//
// Resolved target: vqmakepath
// Target address:  0x83DB00
// GOT/IAT slot:    0x2C7BE20
// Slot symbol:     off_2C7BE20
// Target type:     __int64 __fastcall(char *s)
// ============================================================

/* see target sig */ .vqmakepath(/* see target signature */)
{
    // Tail-call to vqmakepath via GOT/IAT indirection
    return vqmakepath(/* forwarded args */);
}

