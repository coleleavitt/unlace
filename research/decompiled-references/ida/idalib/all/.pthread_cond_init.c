// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB7E0
// Name:            .pthread_cond_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB7E0 jmp     cs:off_2C7B3D8
//
// Resolved target: pthread_cond_init
// Target address:  0x2D11BD0
// GOT/IAT slot:    0x2C7B3D8
// Slot symbol:     off_2C7B3D8
// Target type:     int(pthread_cond_t *cond, const pthread_condattr_t *cond_attr)
// ============================================================

/* see target sig */ .pthread_cond_init(/* see target signature */)
{
    // Tail-call to pthread_cond_init via GOT/IAT indirection
    return pthread_cond_init(/* forwarded args */);
}

