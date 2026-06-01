// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADAB0
// Name:            .pthread_rwlock_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADAB0 jmp     cs:off_2C7C540
//
// Resolved target: pthread_rwlock_unlock
// Target address:  0x2D12098
// GOT/IAT slot:    0x2C7C540
// Slot symbol:     off_2C7C540
// Target type:     int(pthread_rwlock_t *rwlock)
// ============================================================

/* see target sig */ .pthread_rwlock_unlock(/* see target signature */)
{
    // Tail-call to pthread_rwlock_unlock via GOT/IAT indirection
    return pthread_rwlock_unlock(/* forwarded args */);
}

