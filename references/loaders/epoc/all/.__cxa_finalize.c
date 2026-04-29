// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3120
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3120 jmp     cs:off_13078
//
// Resolved target: __cxa_finalize
// Target address:  0x13760
// GOT/IAT slot:    0x13078
// Slot symbol:     off_13078
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

