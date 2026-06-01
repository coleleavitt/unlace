// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9420
// Name:            .sigaction
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9420 jmp     cs:off_2C7A1F8
//
// Resolved target: sigaction
// Target address:  0x2D11750
// GOT/IAT slot:    0x2C7A1F8
// Slot symbol:     off_2C7A1F8
// Target type:     int(int sig, const struct sigaction *act, struct sigaction *oact)
// ============================================================

/* see target sig */ .sigaction(/* see target signature */)
{
    // Tail-call to sigaction via GOT/IAT indirection
    return sigaction(/* forwarded args */);
}

