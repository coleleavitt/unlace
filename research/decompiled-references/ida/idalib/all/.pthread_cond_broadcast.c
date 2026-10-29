// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A00
// Name:            .pthread_cond_broadcast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A00 jmp     cs:off_2C7A4E8
//
// Resolved target: pthread_cond_broadcast
// Target address:  0x2D11828
// GOT/IAT slot:    0x2C7A4E8
// Slot symbol:     off_2C7A4E8
// Target type:     int(pthread_cond_t *cond)
// ============================================================

/* see target sig */ .pthread_cond_broadcast(/* see target signature */)
{
    // Tail-call to pthread_cond_broadcast via GOT/IAT indirection
    return pthread_cond_broadcast(/* forwarded args */);
}

