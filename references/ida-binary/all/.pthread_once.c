// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B10
// Name:            .pthread_once
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B10 jmp     cs:pthread_once_ptr
//
// Resolved target: pthread_once
// Target address:  0x8D41D0
// GOT/IAT slot:    0x8A0228
// Slot symbol:     pthread_once_ptr
// Target type:     int(pthread_once_t *once_control, void (*init_routine)(void))
// ============================================================

/* see target sig */ .pthread_once(/* see target signature */)
{
    // Tail-call to pthread_once via GOT/IAT indirection
    return pthread_once(/* forwarded args */);
}

