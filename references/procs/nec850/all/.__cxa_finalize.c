// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91F0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91F0 jmp     cs:off_2E0E0
//
// Resolved target: __cxa_finalize
// Target address:  0x2E750
// GOT/IAT slot:    0x2E0E0
// Slot symbol:     off_2E0E0
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

