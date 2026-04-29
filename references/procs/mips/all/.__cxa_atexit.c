// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19630
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19630 jmp     cs:off_75300
//
// Resolved target: __cxa_atexit
// Target address:  0x75B50
// GOT/IAT slot:    0x75300
// Slot symbol:     off_75300
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

