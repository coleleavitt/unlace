// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9CD0
// Name:            .statvfs64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9CD0 jmp     cs:off_2C7A650
//
// Resolved target: statvfs64
// Target address:  0x2D118A0
// GOT/IAT slot:    0x2C7A650
// Slot symbol:     off_2C7A650
// Target type:     int(const char *file, struct statvfs64 *buf)
// ============================================================

/* see target sig */ .statvfs64(/* see target signature */)
{
    // Tail-call to statvfs64 via GOT/IAT indirection
    return statvfs64(/* forwarded args */);
}

