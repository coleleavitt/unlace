// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111040
// Name:            .pthread_join
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111040 jmp     cs:pthread_join_ptr
//
// Resolved target: pthread_join
// Target address:  0x8D30B0
// GOT/IAT slot:    0x89F4C0
// Slot symbol:     pthread_join_ptr
// Target type:     int(pthread_t th, void **thread_return)
// ============================================================

/* see target sig */ .pthread_join(/* see target signature */)
{
    // Tail-call to pthread_join via GOT/IAT indirection
    return pthread_join(/* forwarded args */);
}

