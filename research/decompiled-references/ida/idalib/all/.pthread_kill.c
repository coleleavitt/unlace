// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A89C0
// Name:            .pthread_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A89C0 jmp     cs:off_2C79CC8
//
// Resolved target: pthread_kill
// Target address:  0x2D11638
// GOT/IAT slot:    0x2C79CC8
// Slot symbol:     off_2C79CC8
// Target type:     int(pthread_t threadid, int signo)
// ============================================================

/* see target sig */ .pthread_kill(/* see target signature */)
{
    // Tail-call to pthread_kill via GOT/IAT indirection
    return pthread_kill(/* forwarded args */);
}

