// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3150
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3150 jmp     cs:off_13090
//
// Resolved target: __cxa_finalize
// Target address:  0x13408
// GOT/IAT slot:    0x13090
// Slot symbol:     off_13090
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

