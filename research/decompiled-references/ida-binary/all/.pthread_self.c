// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114320
// Name:            .pthread_self
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114320 jmp     cs:pthread_self_ptr
//
// Resolved target: pthread_self
// Target address:  0x8D5160
// GOT/IAT slot:    0x8A0E30
// Slot symbol:     pthread_self_ptr
// Target type:     pthread_t(void)
// ============================================================

/* see target sig */ .pthread_self(/* see target signature */)
{
    // Tail-call to pthread_self via GOT/IAT indirection
    return pthread_self(/* forwarded args */);
}

