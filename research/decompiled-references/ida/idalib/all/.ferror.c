// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC700
// Name:            .ferror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC700 jmp     cs:off_2C7BB68
//
// Resolved target: ferror
// Target address:  0x2D11DF8
// GOT/IAT slot:    0x2C7BB68
// Slot symbol:     off_2C7BB68
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .ferror(/* see target signature */)
{
    // Tail-call to ferror via GOT/IAT indirection
    return ferror(/* forwarded args */);
}

