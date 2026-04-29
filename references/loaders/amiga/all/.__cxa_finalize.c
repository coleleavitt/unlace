// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_5030
//
// Resolved target: __cxa_finalize
// Target address:  0x5168
// GOT/IAT slot:    0x5030
// Slot symbol:     off_5030
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

