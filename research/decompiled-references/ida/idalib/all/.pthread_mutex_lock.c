// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB420
// Name:            .pthread_mutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB420 jmp     cs:off_2C7B1F8
//
// Resolved target: pthread_mutex_lock
// Target address:  0x2D11B50
// GOT/IAT slot:    0x2C7B1F8
// Slot symbol:     off_2C7B1F8
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_lock(/* see target signature */)
{
    // Tail-call to pthread_mutex_lock via GOT/IAT indirection
    return pthread_mutex_lock(/* forwarded args */);
}

