// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83B0
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83B0 jmp     cs:off_2A1C0
//
// Resolved target: __cxa_atexit
// Target address:  0x2A730
// GOT/IAT slot:    0x2A1C0
// Slot symbol:     off_2A1C0
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

