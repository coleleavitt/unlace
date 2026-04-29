// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93D0
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93D0 jmp     cs:off_891D0
//
// Resolved target: __cxa_guard_release
// Target address:  0x8C4D0
// GOT/IAT slot:    0x891D0
// Slot symbol:     off_891D0
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

