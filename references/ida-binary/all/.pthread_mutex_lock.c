// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117DD0
// Name:            .pthread_mutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117DD0 jmp     cs:pthread_mutex_lock_ptr
//
// Resolved target: pthread_mutex_lock
// Target address:  0x8D7698
// GOT/IAT slot:    0x8A2B88
// Slot symbol:     pthread_mutex_lock_ptr
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_lock(/* see target signature */)
{
    // Tail-call to pthread_mutex_lock via GOT/IAT indirection
    return pthread_mutex_lock(/* forwarded args */);
}

