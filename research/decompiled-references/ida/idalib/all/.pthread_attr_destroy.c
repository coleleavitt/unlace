// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC570
// Name:            .pthread_attr_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC570 jmp     cs:off_2C7BAA0
//
// Resolved target: pthread_attr_destroy
// Target address:  0x2D11DA0
// GOT/IAT slot:    0x2C7BAA0
// Slot symbol:     off_2C7BAA0
// Target type:     int(pthread_attr_t *attr)
// ============================================================

/* see target sig */ .pthread_attr_destroy(/* see target signature */)
{
    // Tail-call to pthread_attr_destroy via GOT/IAT indirection
    return pthread_attr_destroy(/* forwarded args */);
}

