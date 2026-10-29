// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD2E0
// Name:            .write
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD2E0 jmp     cs:off_2C7C158
//
// Resolved target: write
// Target address:  0x2D11F80
// GOT/IAT slot:    0x2C7C158
// Slot symbol:     off_2C7C158
// Target type:     ssize_t(int fd, const void *buf, size_t n)
// ============================================================

/* see target sig */ .write(/* see target signature */)
{
    // Tail-call to write via GOT/IAT indirection
    return write(/* forwarded args */);
}

