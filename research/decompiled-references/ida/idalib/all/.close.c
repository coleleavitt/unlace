// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAFA0
// Name:            .close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAFA0 jmp     cs:off_2C7AFB8
//
// Resolved target: close
// Target address:  0x2D11AC0
// GOT/IAT slot:    0x2C7AFB8
// Slot symbol:     off_2C7AFB8
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .close(/* see target signature */)
{
    // Tail-call to close via GOT/IAT indirection
    return close(/* forwarded args */);
}

