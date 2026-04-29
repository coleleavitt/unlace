// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90A0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90A0 jmp     cs:off_26038
//
// Resolved target: __cxa_finalize
// Target address:  0x26348
// GOT/IAT slot:    0x26038
// Slot symbol:     off_26038
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

