// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D210
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D210 jmp     cs:off_B30F0
//
// Resolved target: __cxa_finalize
// Target address:  0xB3878
// GOT/IAT slot:    0xB30F0
// Slot symbol:     off_B30F0
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

