// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8460
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8460 jmp     cs:off_2A218
//
// Resolved target: __cxa_atexit
// Target address:  0x2BC28
// GOT/IAT slot:    0x2A218
// Slot symbol:     off_2A218
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

