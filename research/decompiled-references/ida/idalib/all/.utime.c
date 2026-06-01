// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A91F0
// Name:            .utime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A91F0 jmp     cs:off_2C7A0E0
//
// Resolved target: utime
// Target address:  0x2D11708
// GOT/IAT slot:    0x2C7A0E0
// Slot symbol:     off_2C7A0E0
// Target type:     int(const char *file, const struct utimbuf *file_times)
// ============================================================

/* see target sig */ .utime(/* see target signature */)
{
    // Tail-call to utime via GOT/IAT indirection
    return utime(/* forwarded args */);
}

