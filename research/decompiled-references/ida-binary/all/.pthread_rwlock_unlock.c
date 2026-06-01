// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB50
// Name:            .pthread_rwlock_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB50 jmp     cs:pthread_rwlock_unlock_ptr
//
// Resolved target: pthread_rwlock_unlock
// Target address:  0x8D9D30
// GOT/IAT slot:    0x8A4A48
// Slot symbol:     pthread_rwlock_unlock_ptr
// Target type:     int(pthread_rwlock_t *rwlock)
// ============================================================

/* see target sig */ .pthread_rwlock_unlock(/* see target signature */)
{
    // Tail-call to pthread_rwlock_unlock via GOT/IAT indirection
    return pthread_rwlock_unlock(/* forwarded args */);
}

