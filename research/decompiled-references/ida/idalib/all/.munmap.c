// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABEA0
// Name:            .munmap
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABEA0 jmp     cs:off_2C7B738
//
// Resolved target: munmap
// Target address:  0x2D11CD8
// GOT/IAT slot:    0x2C7B738
// Slot symbol:     off_2C7B738
// Target type:     int(void *addr, size_t len)
// ============================================================

/* see target sig */ .munmap(/* see target signature */)
{
    // Tail-call to munmap via GOT/IAT indirection
    return munmap(/* forwarded args */);
}

