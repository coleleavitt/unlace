// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D670
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D670 jmp     cs:off_4E9320
//
// Resolved target: __cxa_finalize
// Target address:  0x4EBD10
// GOT/IAT slot:    0x4E9320
// Slot symbol:     off_4E9320
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

