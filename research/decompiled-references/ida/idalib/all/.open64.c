// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A70D0
// Name:            .open64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A70D0 jmp     cs:off_2C79050
//
// Resolved target: open64
// Target address:  0x2D11340
// GOT/IAT slot:    0x2C79050
// Slot symbol:     off_2C79050
// Target type:     int(const char *file, int oflag, ...)
// ============================================================

/* see target sig */ .open64(/* see target signature */)
{
    // Tail-call to open64 via GOT/IAT indirection
    return open64(/* forwarded args */);
}

