// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF30
// Name:            .pthread_attr_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF30 jmp     cs:off_2C7AF80
//
// Resolved target: pthread_attr_init
// Target address:  0x2D11AA0
// GOT/IAT slot:    0x2C7AF80
// Slot symbol:     off_2C7AF80
// Target type:     int(pthread_attr_t *attr)
// ============================================================

/* see target sig */ .pthread_attr_init(/* see target signature */)
{
    // Tail-call to pthread_attr_init via GOT/IAT indirection
    return pthread_attr_init(/* forwarded args */);
}

