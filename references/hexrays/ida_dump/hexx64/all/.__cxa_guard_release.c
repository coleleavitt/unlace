// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB90
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB90 jmp     cs:off_4ED5B0
//
// Resolved target: __cxa_guard_release
// Target address:  0x4F18B8
// GOT/IAT slot:    0x4ED5B0
// Slot symbol:     off_4ED5B0
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

