// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC990
// Name:            .pthread_rwlock_rdlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC990 jmp     cs:off_2C7BCB0
//
// Resolved target: pthread_rwlock_rdlock
// Target address:  0x2D11E48
// GOT/IAT slot:    0x2C7BCB0
// Slot symbol:     off_2C7BCB0
// Target type:     int(pthread_rwlock_t *rwlock)
// ============================================================

/* see target sig */ .pthread_rwlock_rdlock(/* see target signature */)
{
    // Tail-call to pthread_rwlock_rdlock via GOT/IAT indirection
    return pthread_rwlock_rdlock(/* forwarded args */);
}

