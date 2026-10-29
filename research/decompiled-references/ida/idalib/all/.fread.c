// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC60
// Name:            .fread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC60 jmp     cs:off_2C7B618
//
// Resolved target: fread
// Target address:  0x2D11C98
// GOT/IAT slot:    0x2C7B618
// Slot symbol:     off_2C7B618
// Target type:     size_t(void *ptr, size_t size, size_t n, FILE *stream)
// ============================================================

/* see target sig */ .fread(/* see target signature */)
{
    // Tail-call to fread via GOT/IAT indirection
    return fread(/* forwarded args */);
}

