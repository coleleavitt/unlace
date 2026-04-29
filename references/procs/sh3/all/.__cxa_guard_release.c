// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5250
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5250 jmp     cs:off_15110
//
// Resolved target: __cxa_guard_release
// Target address:  0x161A0
// GOT/IAT slot:    0x15110
// Slot symbol:     off_15110
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

