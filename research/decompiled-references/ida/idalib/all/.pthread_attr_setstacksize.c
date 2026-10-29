// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A97A0
// Name:            .pthread_attr_setstacksize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A97A0 jmp     cs:off_2C7A3B8
//
// Resolved target: pthread_attr_setstacksize
// Target address:  0x2D117E0
// GOT/IAT slot:    0x2C7A3B8
// Slot symbol:     off_2C7A3B8
// Target type:     int(pthread_attr_t *attr, size_t stacksize)
// ============================================================

/* see target sig */ .pthread_attr_setstacksize(/* see target signature */)
{
    // Tail-call to pthread_attr_setstacksize via GOT/IAT indirection
    return pthread_attr_setstacksize(/* forwarded args */);
}

