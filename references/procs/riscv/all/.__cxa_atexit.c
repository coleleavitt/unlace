// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA520
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA520 jmp     cs:off_35278
//
// Resolved target: __cxa_atexit
// Target address:  0x358C8
// GOT/IAT slot:    0x35278
// Slot symbol:     off_35278
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

