// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA260
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA260 jmp     cs:off_CA118
//
// Resolved target: __cxa_finalize
// Target address:  0xD0A48
// GOT/IAT slot:    0xCA118
// Slot symbol:     off_CA118
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

