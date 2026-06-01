// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACFE0
// Name:            .pthread_mutexattr_settype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACFE0 jmp     cs:off_2C7BFD8
//
// Resolved target: pthread_mutexattr_settype
// Target address:  0x2D11F28
// GOT/IAT slot:    0x2C7BFD8
// Slot symbol:     off_2C7BFD8
// Target type:     int(pthread_mutexattr_t *attr, int kind)
// ============================================================

/* see target sig */ .pthread_mutexattr_settype(/* see target signature */)
{
    // Tail-call to pthread_mutexattr_settype via GOT/IAT indirection
    return pthread_mutexattr_settype(/* forwarded args */);
}

