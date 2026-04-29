// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31F0
// Name:            .__cxa_guard_abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31F0 jmp     cs:off_290E0
//
// Resolved target: __cxa_guard_abort
// Target address:  0x29490
// GOT/IAT slot:    0x290E0
// Slot symbol:     off_290E0
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_abort(/* see target signature */)
{
    // Tail-call to __cxa_guard_abort via GOT/IAT indirection
    return __cxa_guard_abort(/* forwarded args */);
}

