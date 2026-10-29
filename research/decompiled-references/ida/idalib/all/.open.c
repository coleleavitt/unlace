// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB890
// Name:            .open
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB890 jmp     cs:off_2C7B430
//
// Resolved target: open
// Target address:  0x2D11BF0
// GOT/IAT slot:    0x2C7B430
// Slot symbol:     off_2C7B430
// Target type:     int(const char *file, int oflag, ...)
// ============================================================

/* see target sig */ .open(/* see target signature */)
{
    // Tail-call to open via GOT/IAT indirection
    return open(/* forwarded args */);
}

