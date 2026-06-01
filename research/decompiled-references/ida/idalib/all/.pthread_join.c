// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7030
// Name:            .pthread_join
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7030 jmp     cs:off_2C79000
//
// Resolved target: pthread_join
// Target address:  0x2D11328
// GOT/IAT slot:    0x2C79000
// Slot symbol:     off_2C79000
// Target type:     int(pthread_t th, void **thread_return)
// ============================================================

/* see target sig */ .pthread_join(/* see target signature */)
{
    // Tail-call to pthread_join via GOT/IAT indirection
    return pthread_join(/* forwarded args */);
}

