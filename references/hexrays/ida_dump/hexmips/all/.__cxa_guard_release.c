// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB40
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB40 jmp     cs:off_4CD588
//
// Resolved target: __cxa_guard_release
// Target address:  0x4CFF98
// GOT/IAT slot:    0x4CD588
// Slot symbol:     off_4CD588
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

