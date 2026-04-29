// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6420
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6420 jmp     cs:off_241F8
//
// Resolved target: __cxa_atexit
// Target address:  0x25FC8
// GOT/IAT slot:    0x241F8
// Slot symbol:     off_241F8
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

