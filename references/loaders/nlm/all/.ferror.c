// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2350
// Name:            .ferror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2350 jmp     cs:off_8190
//
// Resolved target: ferror
// Target address:  0x8880
// GOT/IAT slot:    0x8190
// Slot symbol:     off_8190
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .ferror(/* see target signature */)
{
    // Tail-call to ferror via GOT/IAT indirection
    return ferror(/* forwarded args */);
}

