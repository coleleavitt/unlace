// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A75B0
// Name:            .ioctl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A75B0 jmp     cs:off_2C792C0
//
// Resolved target: ioctl
// Target address:  0x2D113D0
// GOT/IAT slot:    0x2C792C0
// Slot symbol:     off_2C792C0
// Target type:     int(int fd, unsigned __int64 request, ...)
// ============================================================

/* see target sig */ .ioctl(/* see target signature */)
{
    // Tail-call to ioctl via GOT/IAT indirection
    return ioctl(/* forwarded args */);
}

