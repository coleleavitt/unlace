// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62D0
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62D0 jmp     cs:off_24150
//
// Resolved target: __cxa_guard_release
// Target address:  0x25F20
// GOT/IAT slot:    0x24150
// Slot symbol:     off_24150
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

