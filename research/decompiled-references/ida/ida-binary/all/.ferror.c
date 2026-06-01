// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C00
// Name:            .ferror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C00 jmp     cs:ferror_ptr
//
// Resolved target: ferror
// Target address:  0x8D8990
// GOT/IAT slot:    0x8A3AA0
// Slot symbol:     ferror_ptr
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .ferror(/* see target signature */)
{
    // Tail-call to ferror via GOT/IAT indirection
    return ferror(/* forwarded args */);
}

