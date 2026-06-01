// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACAE0
// Name:            .pthread_sigmask
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACAE0 jmp     cs:off_2C7BD58
//
// Resolved target: pthread_sigmask
// Target address:  0x2D11E88
// GOT/IAT slot:    0x2C7BD58
// Slot symbol:     off_2C7BD58
// Target type:     int(int how, const __sigset_t *newmask, __sigset_t *oldmask)
// ============================================================

/* see target sig */ .pthread_sigmask(/* see target signature */)
{
    // Tail-call to pthread_sigmask via GOT/IAT indirection
    return pthread_sigmask(/* forwarded args */);
}

