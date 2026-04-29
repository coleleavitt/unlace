// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5140
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5140 jmp     cs:off_15088
//
// Resolved target: __cxa_finalize
// Target address:  0x16118
// GOT/IAT slot:    0x15088
// Slot symbol:     off_15088
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

