// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9320
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9320 jmp     cs:off_2E178
//
// Resolved target: __cxa_guard_release
// Target address:  0x2E7E8
// GOT/IAT slot:    0x2E178
// Slot symbol:     off_2E178
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

