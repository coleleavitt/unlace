// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB8E0
// Name:            .socket
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB8E0 jmp     cs:off_2C7B458
//
// Resolved target: socket
// Target address:  0x2D11C08
// GOT/IAT slot:    0x2C7B458
// Slot symbol:     off_2C7B458
// Target type:     int(int domain, int type, int protocol)
// ============================================================

/* see target sig */ .socket(/* see target signature */)
{
    // Tail-call to socket via GOT/IAT indirection
    return socket(/* forwarded args */);
}

