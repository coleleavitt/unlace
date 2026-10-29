// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC900
// Name:            .sigprocmask
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC900 jmp     cs:off_2C7BC68
//
// Resolved target: sigprocmask
// Target address:  0x2D11E20
// GOT/IAT slot:    0x2C7BC68
// Slot symbol:     off_2C7BC68
// Target type:     int(int how, const sigset_t *set, sigset_t *oset)
// ============================================================

/* see target sig */ .sigprocmask(/* see target signature */)
{
    // Tail-call to sigprocmask via GOT/IAT indirection
    return sigprocmask(/* forwarded args */);
}

