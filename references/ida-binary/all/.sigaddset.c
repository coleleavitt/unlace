// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1152A0
// Name:            .sigaddset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1152A0 jmp     cs:sigaddset_ptr
//
// Resolved target: sigaddset
// Target address:  0x8D5B98
// GOT/IAT slot:    0x8A15F0
// Slot symbol:     sigaddset_ptr
// Target type:     int(sigset_t *set, int signo)
// ============================================================

/* see target sig */ .sigaddset(/* see target signature */)
{
    // Tail-call to sigaddset via GOT/IAT indirection
    return sigaddset(/* forwarded args */);
}

