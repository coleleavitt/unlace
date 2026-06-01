// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC4D0
// Name:            .pthread_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC4D0 jmp     cs:off_2C7BA50
//
// Resolved target: pthread_create
// Target address:  0x2D11D78
// GOT/IAT slot:    0x2C7BA50
// Slot symbol:     off_2C7BA50
// Target type:     int(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
// ============================================================

/* see target sig */ .pthread_create(/* see target signature */)
{
    // Tail-call to pthread_create via GOT/IAT indirection
    return pthread_create(/* forwarded args */);
}

