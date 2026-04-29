// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B40
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B40 jmp     cs:off_4B9588
//
// Resolved target: __cxa_guard_release
// Target address:  0x4BBF78
// GOT/IAT slot:    0x4B9588
// Slot symbol:     off_4B9588
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

