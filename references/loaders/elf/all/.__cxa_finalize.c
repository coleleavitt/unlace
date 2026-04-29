// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9230
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9230 jmp     cs:off_89100
//
// Resolved target: __cxa_finalize
// Target address:  0x8C400
// GOT/IAT slot:    0x89100
// Slot symbol:     off_89100
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

