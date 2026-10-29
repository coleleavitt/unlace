// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA1D0
// Name:            .fwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA1D0 jmp     cs:off_2C7A8D0
//
// Resolved target: fwrite
// Target address:  0x2D11928
// GOT/IAT slot:    0x2C7A8D0
// Slot symbol:     off_2C7A8D0
// Target type:     size_t(const void *ptr, size_t size, size_t n, FILE *s)
// ============================================================

/* see target sig */ .fwrite(/* see target signature */)
{
    // Tail-call to fwrite via GOT/IAT indirection
    return fwrite(/* forwarded args */);
}

