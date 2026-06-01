// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9240
// Name:            .pthread_cond_signal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9240 jmp     cs:off_2C7A108
//
// Resolved target: pthread_cond_signal
// Target address:  0x2D11718
// GOT/IAT slot:    0x2C7A108
// Slot symbol:     off_2C7A108
// Target type:     int(pthread_cond_t *cond)
// ============================================================

/* see target sig */ .pthread_cond_signal(/* see target signature */)
{
    // Tail-call to pthread_cond_signal via GOT/IAT indirection
    return pthread_cond_signal(/* forwarded args */);
}

