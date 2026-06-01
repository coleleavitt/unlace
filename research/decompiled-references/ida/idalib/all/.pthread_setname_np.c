// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB10
// Name:            .pthread_setname_np
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB10 jmp     cs:off_2C7C570
//
// Resolved target: pthread_setname_np
// Target address:  0x2D120B8
// GOT/IAT slot:    0x2C7C570
// Slot symbol:     off_2C7C570
// Target type:     int(pthread_t target_thread, const char *name)
// ============================================================

/* see target sig */ .pthread_setname_np(/* see target signature */)
{
    // Tail-call to pthread_setname_np via GOT/IAT indirection
    return pthread_setname_np(/* forwarded args */);
}

