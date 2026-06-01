// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9860
// Name:            .pthread_detach
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9860 jmp     cs:off_2C7A418
//
// Resolved target: pthread_detach
// Target address:  0x2D117F8
// GOT/IAT slot:    0x2C7A418
// Slot symbol:     off_2C7A418
// Target type:     int(pthread_t th)
// ============================================================

/* see target sig */ .pthread_detach(/* see target signature */)
{
    // Tail-call to pthread_detach via GOT/IAT indirection
    return pthread_detach(/* forwarded args */);
}

