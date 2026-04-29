// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40D0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40D0 jmp     cs:off_1F050
//
// Resolved target: __cxa_finalize
// Target address:  0x1F300
// GOT/IAT slot:    0x1F050
// Slot symbol:     off_1F050
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

