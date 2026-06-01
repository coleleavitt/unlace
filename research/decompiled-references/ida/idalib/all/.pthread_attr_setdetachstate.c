// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9740
// Name:            .pthread_attr_setdetachstate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9740 jmp     cs:off_2C7A388
//
// Resolved target: pthread_attr_setdetachstate
// Target address:  0x2D117C8
// GOT/IAT slot:    0x2C7A388
// Slot symbol:     off_2C7A388
// Target type:     int(pthread_attr_t *attr, int detachstate)
// ============================================================

/* see target sig */ .pthread_attr_setdetachstate(/* see target signature */)
{
    // Tail-call to pthread_attr_setdetachstate via GOT/IAT indirection
    return pthread_attr_setdetachstate(/* forwarded args */);
}

