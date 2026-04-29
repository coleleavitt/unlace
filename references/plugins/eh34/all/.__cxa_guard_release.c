// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62C0
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62C0 jmp     cs:off_8D148
//
// Resolved target: __cxa_guard_release
// Target address:  0x8D6D8
// GOT/IAT slot:    0x8D148
// Slot symbol:     off_8D148
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

