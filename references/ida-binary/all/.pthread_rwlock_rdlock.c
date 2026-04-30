// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A070
// Name:            .pthread_rwlock_rdlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A070 jmp     cs:pthread_rwlock_rdlock_ptr
//
// Resolved target: pthread_rwlock_rdlock
// Target address:  0x8D8C50
// GOT/IAT slot:    0x8A3CD8
// Slot symbol:     pthread_rwlock_rdlock_ptr
// Target type:     int(pthread_rwlock_t *rwlock)
// ============================================================

/* see target sig */ .pthread_rwlock_rdlock(/* see target signature */)
{
    // Tail-call to pthread_rwlock_rdlock via GOT/IAT indirection
    return pthread_rwlock_rdlock(/* forwarded args */);
}

