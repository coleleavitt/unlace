// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_8028
//
// Resolved target: __cxa_finalize
// Target address:  0x8208
// GOT/IAT slot:    0x8028
// Slot symbol:     off_8028
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

