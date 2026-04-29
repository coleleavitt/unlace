// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA420
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA420 jmp     cs:off_CA1F8
//
// Resolved target: __cxa_guard_release
// Target address:  0xD0B28
// GOT/IAT slot:    0xCA1F8
// Slot symbol:     off_CA1F8
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

