// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB270
// Name:            .pthread_mutexattr_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB270 jmp     cs:off_2C7B120
//
// Resolved target: pthread_mutexattr_destroy
// Target address:  0x2D11B28
// GOT/IAT slot:    0x2C7B120
// Slot symbol:     off_2C7B120
// Target type:     int(pthread_mutexattr_t *attr)
// ============================================================

/* see target sig */ .pthread_mutexattr_destroy(/* see target signature */)
{
    // Tail-call to pthread_mutexattr_destroy via GOT/IAT indirection
    return pthread_mutexattr_destroy(/* forwarded args */);
}

