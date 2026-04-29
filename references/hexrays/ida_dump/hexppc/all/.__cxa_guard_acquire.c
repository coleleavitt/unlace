// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF60
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF60 jmp     cs:off_4DAF98
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x4DD9C8
// GOT/IAT slot:    0x4DAF98
// Slot symbol:     off_4DAF98
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

