// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A81B0
// Name:            .pthread_mutex_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A81B0 jmp     cs:off_2C798C0
//
// Resolved target: pthread_mutex_init
// Target address:  0x2D11538
// GOT/IAT slot:    0x2C798C0
// Slot symbol:     off_2C798C0
// Target type:     int(pthread_mutex_t *mutex, const pthread_mutexattr_t *mutexattr)
// ============================================================

/* see target sig */ .pthread_mutex_init(/* see target signature */)
{
    // Tail-call to pthread_mutex_init via GOT/IAT indirection
    return pthread_mutex_init(/* forwarded args */);
}

