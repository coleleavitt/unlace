// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB0D0
// Name:            .pthread_mutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB0D0 jmp     cs:off_2C7B050
//
// Resolved target: pthread_mutex_unlock
// Target address:  0x2D11AF0
// GOT/IAT slot:    0x2C7B050
// Slot symbol:     off_2C7B050
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_unlock(/* see target signature */)
{
    // Tail-call to pthread_mutex_unlock via GOT/IAT indirection
    return pthread_mutex_unlock(/* forwarded args */);
}

