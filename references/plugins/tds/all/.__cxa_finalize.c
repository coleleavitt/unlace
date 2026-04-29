// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_A058
//
// Resolved target: __cxa_finalize
// Target address:  0xA288
// GOT/IAT slot:    0xA058
// Slot symbol:     off_A058
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

