// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA00
// Name:            .fseeko64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA00 jmp     cs:off_2C7ACE8
//
// Resolved target: fseeko64
// Target address:  0x2D119E0
// GOT/IAT slot:    0x2C7ACE8
// Slot symbol:     off_2C7ACE8
// Target type:     int(FILE *stream, __off64_t off, int whence)
// ============================================================

/* see target sig */ .fseeko64(/* see target signature */)
{
    // Tail-call to fseeko64 via GOT/IAT indirection
    return fseeko64(/* forwarded args */);
}

