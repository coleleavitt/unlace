// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA820
// Name:            .pthread_mutexattr_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA820 jmp     cs:off_2C7ABF8
//
// Resolved target: pthread_mutexattr_init
// Target address:  0x2D119A0
// GOT/IAT slot:    0x2C7ABF8
// Slot symbol:     off_2C7ABF8
// Target type:     int(pthread_mutexattr_t *attr)
// ============================================================

/* see target sig */ .pthread_mutexattr_init(/* see target signature */)
{
    // Tail-call to pthread_mutexattr_init via GOT/IAT indirection
    return pthread_mutexattr_init(/* forwarded args */);
}

