// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9230
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9230 jmp     cs:off_26100
//
// Resolved target: __cxa_atexit
// Target address:  0x26410
// GOT/IAT slot:    0x26100
// Slot symbol:     off_26100
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

