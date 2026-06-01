// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD810
// Name:            .listen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD810 jmp     cs:off_2C7C3F0
//
// Resolved target: listen
// Target address:  0x2D12030
// GOT/IAT slot:    0x2C7C3F0
// Slot symbol:     off_2C7C3F0
// Target type:     int(int fd, int n)
// ============================================================

/* see target sig */ .listen(/* see target signature */)
{
    // Tail-call to listen via GOT/IAT indirection
    return listen(/* forwarded args */);
}

