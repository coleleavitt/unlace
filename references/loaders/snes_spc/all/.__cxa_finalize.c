// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_4018
//
// Resolved target: __cxa_finalize
// Target address:  0x40D0
// GOT/IAT slot:    0x4018
// Slot symbol:     off_4018
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

