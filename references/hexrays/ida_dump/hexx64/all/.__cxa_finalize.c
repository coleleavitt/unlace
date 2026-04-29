// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B680
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B680 jmp     cs:off_4ED328
//
// Resolved target: __cxa_finalize
// Target address:  0x4F1620
// GOT/IAT slot:    0x4ED328
// Slot symbol:     off_4ED328
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

