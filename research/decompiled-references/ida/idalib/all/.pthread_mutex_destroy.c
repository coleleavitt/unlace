// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7800
// Name:            .pthread_mutex_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7800 jmp     cs:off_2C793E8
//
// Resolved target: pthread_mutex_destroy
// Target address:  0x2D11420
// GOT/IAT slot:    0x2C793E8
// Slot symbol:     off_2C793E8
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_destroy(/* see target signature */)
{
    // Tail-call to pthread_mutex_destroy via GOT/IAT indirection
    return pthread_mutex_destroy(/* forwarded args */);
}

