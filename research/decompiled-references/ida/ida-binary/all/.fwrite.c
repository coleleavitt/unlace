// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115E80
// Name:            .fwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115E80 jmp     cs:fwrite_ptr
//
// Resolved target: fwrite
// Target address:  0x8D62C0
// GOT/IAT slot:    0x8A1BE0
// Slot symbol:     fwrite_ptr
// Target type:     size_t(const void *ptr, size_t size, size_t n, FILE *s)
// ============================================================

/* see target sig */ .fwrite(/* see target signature */)
{
    // Tail-call to fwrite via GOT/IAT indirection
    return fwrite(/* forwarded args */);
}

