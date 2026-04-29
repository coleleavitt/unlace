// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3200
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3200 jmp     cs:off_290E8
//
// Resolved target: __cxa_guard_release
// Target address:  0x29498
// GOT/IAT slot:    0x290E8
// Slot symbol:     off_290E8
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

