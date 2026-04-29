// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20550
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20550 jmp     cs:off_95290
//
// Resolved target: __cxa_guard_release
// Target address:  0x95CC8
// GOT/IAT slot:    0x95290
// Slot symbol:     off_95290
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

