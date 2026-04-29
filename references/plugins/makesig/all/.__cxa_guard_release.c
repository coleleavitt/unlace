// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3240
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3240 jmp     cs:off_20108
//
// Resolved target: __cxa_guard_release
// Target address:  0x21A18
// GOT/IAT slot:    0x20108
// Slot symbol:     off_20108
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

