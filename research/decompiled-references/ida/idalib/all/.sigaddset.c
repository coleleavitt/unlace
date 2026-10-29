// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B60
// Name:            .sigaddset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B60 jmp     cs:off_2C7A598
//
// Resolved target: sigaddset
// Target address:  0x2D11850
// GOT/IAT slot:    0x2C7A598
// Slot symbol:     off_2C7A598
// Target type:     int(sigset_t *set, int signo)
// ============================================================

/* see target sig */ .sigaddset(/* see target signature */)
{
    // Tail-call to sigaddset via GOT/IAT indirection
    return sigaddset(/* forwarded args */);
}

