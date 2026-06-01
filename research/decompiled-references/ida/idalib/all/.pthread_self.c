// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A91A0
// Name:            .pthread_self
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A91A0 jmp     cs:off_2C7A0B8
//
// Resolved target: pthread_self
// Target address:  0x2D11700
// GOT/IAT slot:    0x2C7A0B8
// Slot symbol:     off_2C7A0B8
// Target type:     pthread_t(void)
// ============================================================

/* see target sig */ .pthread_self(/* see target signature */)
{
    // Tail-call to pthread_self via GOT/IAT indirection
    return pthread_self(/* forwarded args */);
}

