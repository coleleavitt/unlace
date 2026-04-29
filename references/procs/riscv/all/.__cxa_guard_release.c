// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA370
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA370 jmp     cs:off_351A0
//
// Resolved target: __cxa_guard_release
// Target address:  0x357F0
// GOT/IAT slot:    0x351A0
// Slot symbol:     off_351A0
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

