// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4170
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4170 jmp     cs:off_230A0
//
// Resolved target: __cxa_finalize
// Target address:  0x234C0
// GOT/IAT slot:    0x230A0
// Slot symbol:     off_230A0
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

