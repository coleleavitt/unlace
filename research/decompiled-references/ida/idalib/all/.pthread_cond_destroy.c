// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8020
// Name:            .pthread_cond_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8020 jmp     cs:off_2C797F8
//
// Resolved target: pthread_cond_destroy
// Target address:  0x2D11500
// GOT/IAT slot:    0x2C797F8
// Slot symbol:     off_2C797F8
// Target type:     int(pthread_cond_t *cond)
// ============================================================

/* see target sig */ .pthread_cond_destroy(/* see target signature */)
{
    // Tail-call to pthread_cond_destroy via GOT/IAT indirection
    return pthread_cond_destroy(/* forwarded args */);
}

