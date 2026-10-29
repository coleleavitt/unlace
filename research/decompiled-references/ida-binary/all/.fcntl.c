// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117230
// Name:            .fcntl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117230 jmp     cs:fcntl_ptr
//
// Resolved target: fcntl
// Target address:  0x8D6F48
// GOT/IAT slot:    0x8A25B8
// Slot symbol:     fcntl_ptr
// Target type:     int(int fd, int cmd, ...)
// ============================================================

/* see target sig */ .fcntl(/* see target signature */)
{
    // Tail-call to fcntl via GOT/IAT indirection
    return fcntl(/* forwarded args */);
}

