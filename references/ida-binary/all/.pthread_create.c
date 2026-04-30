// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1197D0
// Name:            .pthread_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1197D0 jmp     cs:pthread_create_ptr
//
// Resolved target: pthread_create
// Target address:  0x8D8700
// GOT/IAT slot:    0x8A3888
// Slot symbol:     pthread_create_ptr
// Target type:     int(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
// ============================================================

/* see target sig */ .pthread_create(/* see target signature */)
{
    // Tail-call to pthread_create via GOT/IAT indirection
    return pthread_create(/* forwarded args */);
}

