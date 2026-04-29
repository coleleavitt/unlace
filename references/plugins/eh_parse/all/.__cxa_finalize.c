// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61E0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61E0 jmp     cs:off_2F0D8
//
// Resolved target: __cxa_finalize
// Target address:  0x2F748
// GOT/IAT slot:    0x2F0D8
// Slot symbol:     off_2F0D8
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

