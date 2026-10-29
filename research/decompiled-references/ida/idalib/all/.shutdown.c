// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C20
// Name:            .shutdown
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C20 jmp     cs:off_2C79DF8
//
// Resolved target: shutdown
// Target address:  0x2D116A0
// GOT/IAT slot:    0x2C79DF8
// Slot symbol:     off_2C79DF8
// Target type:     int(int fd, int how)
// ============================================================

/* see target sig */ .shutdown(/* see target signature */)
{
    // Tail-call to shutdown via GOT/IAT indirection
    return shutdown(/* forwarded args */);
}

