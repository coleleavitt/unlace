// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC30
// Name:            .pthread_cond_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC30 jmp     cs:off_2C7B600
//
// Resolved target: pthread_cond_wait
// Target address:  0x2D11C90
// GOT/IAT slot:    0x2C7B600
// Slot symbol:     off_2C7B600
// Target type:     int(pthread_cond_t *cond, pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_cond_wait(/* see target signature */)
{
    // Tail-call to pthread_cond_wait via GOT/IAT indirection
    return pthread_cond_wait(/* forwarded args */);
}

