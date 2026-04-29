// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_B068
//
// Resolved target: __cxa_finalize
// Target address:  0xB300
// GOT/IAT slot:    0xB068
// Slot symbol:     off_B068
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

