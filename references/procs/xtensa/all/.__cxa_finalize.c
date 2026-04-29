// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70B0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70B0 jmp     cs:off_1D040
//
// Resolved target: __cxa_finalize
// Target address:  0x1D370
// GOT/IAT slot:    0x1D040
// Slot symbol:     off_1D040
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

