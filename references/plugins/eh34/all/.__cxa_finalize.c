// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6190
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6190 jmp     cs:off_8D0B0
//
// Resolved target: __cxa_finalize
// Target address:  0x8D630
// GOT/IAT slot:    0x8D0B0
// Slot symbol:     off_8D0B0
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

