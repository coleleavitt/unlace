// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61B0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61B0 jmp     cs:off_2D0C0
//
// Resolved target: __cxa_finalize
// Target address:  0x2D5C0
// GOT/IAT slot:    0x2D0C0
// Slot symbol:     off_2D0C0
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

