// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_7038
//
// Resolved target: __cxa_finalize
// Target address:  0x7168
// GOT/IAT slot:    0x7038
// Slot symbol:     off_7038
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

