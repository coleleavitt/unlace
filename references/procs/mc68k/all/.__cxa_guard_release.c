// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6280
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6280 jmp     cs:off_1D128
//
// Resolved target: __cxa_guard_release
// Target address:  0x1D618
// GOT/IAT slot:    0x1D128
// Slot symbol:     off_1D128
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

