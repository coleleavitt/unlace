// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA620
// Name:            .fwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA620 jmp     cs:off_48310
//
// Resolved target: fwrite
// Target address:  0x485C8
// GOT/IAT slot:    0x48310
// Slot symbol:     off_48310
// Target type:     size_t(const void *ptr, size_t size, size_t n, FILE *s)
// ============================================================

/* see target sig */ .fwrite(/* see target signature */)
{
    // Tail-call to fwrite via GOT/IAT indirection
    return fwrite(/* forwarded args */);
}

