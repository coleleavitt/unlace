// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6490
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6490 jmp     cs:off_2F230
//
// Resolved target: __cxa_atexit
// Target address:  0x2F8A0
// GOT/IAT slot:    0x2F230
// Slot symbol:     off_2F230
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

