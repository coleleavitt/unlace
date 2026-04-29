// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_15028
//
// Resolved target: __cxa_finalize
// Target address:  0x15218
// GOT/IAT slot:    0x15028
// Slot symbol:     off_15028
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

