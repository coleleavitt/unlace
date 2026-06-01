// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB880
// Name:            .setvbuf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB880 jmp     cs:off_2C7B428
//
// Resolved target: setvbuf
// Target address:  0x2D11BE8
// GOT/IAT slot:    0x2C7B428
// Slot symbol:     off_2C7B428
// Target type:     int(FILE *stream, char *buf, int modes, size_t n)
// ============================================================

/* see target sig */ .setvbuf(/* see target signature */)
{
    // Tail-call to setvbuf via GOT/IAT indirection
    return setvbuf(/* forwarded args */);
}

