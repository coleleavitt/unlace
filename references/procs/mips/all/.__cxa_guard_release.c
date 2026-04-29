// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19460
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19460 jmp     cs:off_75218
//
// Resolved target: __cxa_guard_release
// Target address:  0x75A68
// GOT/IAT slot:    0x75218
// Slot symbol:     off_75218
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

