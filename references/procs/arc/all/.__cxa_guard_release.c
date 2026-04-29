// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82F0
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82F0 jmp     cs:off_2A160
//
// Resolved target: __cxa_guard_release
// Target address:  0x2BB70
// GOT/IAT slot:    0x2A160
// Slot symbol:     off_2A160
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

