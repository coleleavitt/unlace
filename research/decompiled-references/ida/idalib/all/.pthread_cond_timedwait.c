// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC9B0
// Name:            .pthread_cond_timedwait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC9B0 jmp     cs:off_2C7BCC0
//
// Resolved target: pthread_cond_timedwait
// Target address:  0x2D11E50
// GOT/IAT slot:    0x2C7BCC0
// Slot symbol:     off_2C7BCC0
// Target type:     int(pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime)
// ============================================================

/* see target sig */ .pthread_cond_timedwait(/* see target signature */)
{
    // Tail-call to pthread_cond_timedwait via GOT/IAT indirection
    return pthread_cond_timedwait(/* forwarded args */);
}

