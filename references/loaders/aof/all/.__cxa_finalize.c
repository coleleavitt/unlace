// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_7048
//
// Resolved target: __cxa_finalize
// Target address:  0x7200
// GOT/IAT slot:    0x7048
// Slot symbol:     off_7048
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

