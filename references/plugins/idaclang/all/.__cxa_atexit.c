// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32C0
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32C0 jmp     cs:off_29148
//
// Resolved target: __cxa_atexit
// Target address:  0x294F8
// GOT/IAT slot:    0x29148
// Slot symbol:     off_29148
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

