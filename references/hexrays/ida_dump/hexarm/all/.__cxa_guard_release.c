// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB60
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB60 jmp     cs:off_4E9598
//
// Resolved target: __cxa_guard_release
// Target address:  0x4EBFA8
// GOT/IAT slot:    0x4E9598
// Slot symbol:     off_4E9598
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

