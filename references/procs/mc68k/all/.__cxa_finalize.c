// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6170
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6170 jmp     cs:off_1D0A0
//
// Resolved target: __cxa_finalize
// Target address:  0x1D590
// GOT/IAT slot:    0x1D0A0
// Slot symbol:     off_1D0A0
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

