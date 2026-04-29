// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D50
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D50 jmp     cs:off_4F690
//
// Resolved target: __cxa_finalize
// Target address:  0x50978
// GOT/IAT slot:    0x4F690
// Slot symbol:     off_4F690
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

