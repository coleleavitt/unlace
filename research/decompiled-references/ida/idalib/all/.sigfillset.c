// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B70
// Name:            .sigfillset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B70 jmp     cs:off_2C79DA0
//
// Resolved target: sigfillset
// Target address:  0x2D11688
// GOT/IAT slot:    0x2C79DA0
// Slot symbol:     off_2C79DA0
// Target type:     int(sigset_t *set)
// ============================================================

/* see target sig */ .sigfillset(/* see target signature */)
{
    // Tail-call to sigfillset via GOT/IAT indirection
    return sigfillset(/* forwarded args */);
}

