// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD7B0
// Name:            .posix_madvise
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD7B0 jmp     cs:off_2C7C3C0
//
// Resolved target: posix_madvise
// Target address:  0x2D12028
// GOT/IAT slot:    0x2C7C3C0
// Slot symbol:     off_2C7C3C0
// Target type:     int(void *addr, size_t len, int advice)
// ============================================================

/* see target sig */ .posix_madvise(/* see target signature */)
{
    // Tail-call to posix_madvise via GOT/IAT indirection
    return posix_madvise(/* forwarded args */);
}

