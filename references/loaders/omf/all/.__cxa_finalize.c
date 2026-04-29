// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3160
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3160 jmp     cs:off_14098
//
// Resolved target: __cxa_finalize
// Target address:  0x14680
// GOT/IAT slot:    0x14098
// Slot symbol:     off_14098
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

