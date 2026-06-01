// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ADC0
// Name:            .write
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ADC0 jmp     cs:write_ptr
//
// Resolved target: write
// Target address:  0x8D94D0
// GOT/IAT slot:    0x8A4380
// Slot symbol:     write_ptr
// Target type:     ssize_t(int fd, const void *buf, size_t n)
// ============================================================

/* see target sig */ .write(/* see target signature */)
{
    // Tail-call to write via GOT/IAT indirection
    return write(/* forwarded args */);
}

