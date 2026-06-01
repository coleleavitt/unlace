// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114710
// Name:            .sigaction
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114710 jmp     cs:sigaction_ptr
//
// Resolved target: sigaction
// Target address:  0x8D53D8
// GOT/IAT slot:    0x8A1028
// Slot symbol:     sigaction_ptr
// Target type:     int(int sig, const struct sigaction *act, struct sigaction *oact)
// ============================================================

/* see target sig */ .sigaction(/* see target signature */)
{
    // Tail-call to sigaction via GOT/IAT indirection
    return sigaction(/* forwarded args */);
}

