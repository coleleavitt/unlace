// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117860
// Name:            .pthread_mutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117860 jmp     cs:pthread_mutex_unlock_ptr
//
// Resolved target: pthread_mutex_unlock
// Target address:  0x8D7338
// GOT/IAT slot:    0x8A28D0
// Slot symbol:     pthread_mutex_unlock_ptr
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_unlock(/* see target signature */)
{
    // Tail-call to pthread_mutex_unlock via GOT/IAT indirection
    return pthread_mutex_unlock(/* forwarded args */);
}

