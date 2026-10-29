// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB50
// Name:            .pthread_rwlock_wrlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB50 jmp     cs:off_2C7AD90
//
// Resolved target: pthread_rwlock_wrlock
// Target address:  0x2D11A08
// GOT/IAT slot:    0x2C7AD90
// Slot symbol:     off_2C7AD90
// Target type:     int(pthread_rwlock_t *rwlock)
// ============================================================

/* see target sig */ .pthread_rwlock_wrlock(/* see target signature */)
{
    // Tail-call to pthread_rwlock_wrlock via GOT/IAT indirection
    return pthread_rwlock_wrlock(/* forwarded args */);
}

