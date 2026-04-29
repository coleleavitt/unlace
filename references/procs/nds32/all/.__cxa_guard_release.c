// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8270
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8270 jmp     cs:off_2A120
//
// Resolved target: __cxa_guard_release
// Target address:  0x2A690
// GOT/IAT slot:    0x2A120
// Slot symbol:     off_2A120
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

