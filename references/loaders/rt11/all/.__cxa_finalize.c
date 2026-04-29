// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10B0 jmp     cs:off_5040
//
// Resolved target: __cxa_finalize
// Target address:  0x51C0
// GOT/IAT slot:    0x5040
// Slot symbol:     off_5040
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

