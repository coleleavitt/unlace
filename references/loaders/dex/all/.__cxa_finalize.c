// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31C0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31C0 jmp     cs:off_280C8
//
// Resolved target: __cxa_finalize
// Target address:  0x28578
// GOT/IAT slot:    0x280C8
// Slot symbol:     off_280C8
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

