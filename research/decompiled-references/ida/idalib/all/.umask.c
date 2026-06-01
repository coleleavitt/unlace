// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E70
// Name:            .umask
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E70 jmp     cs:off_2C7A720
//
// Resolved target: umask
// Target address:  0x2D118D0
// GOT/IAT slot:    0x2C7A720
// Slot symbol:     off_2C7A720
// Target type:     __mode_t(__mode_t mask)
// ============================================================

/* see target sig */ .umask(/* see target signature */)
{
    // Tail-call to umask via GOT/IAT indirection
    return umask(/* forwarded args */);
}

