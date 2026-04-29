// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8890
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8890 jmp     cs:off_2A430
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x2BE58
// GOT/IAT slot:    0x2A430
// Slot symbol:     off_2A430
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

