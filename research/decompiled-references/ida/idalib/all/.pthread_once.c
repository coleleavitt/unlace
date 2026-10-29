// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8140
// Name:            .pthread_once
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8140 jmp     cs:off_2C79888
//
// Resolved target: pthread_once
// Target address:  0x2D11518
// GOT/IAT slot:    0x2C79888
// Slot symbol:     off_2C79888
// Target type:     int(pthread_once_t *once_control, void (*init_routine)(void))
// ============================================================

/* see target sig */ .pthread_once(/* see target signature */)
{
    // Tail-call to pthread_once via GOT/IAT indirection
    return pthread_once(/* forwarded args */);
}

