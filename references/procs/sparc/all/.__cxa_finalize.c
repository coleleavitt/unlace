// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7130
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7130 jmp     cs:off_19080
//
// Resolved target: __cxa_finalize
// Target address:  0x195B0
// GOT/IAT slot:    0x19080
// Slot symbol:     off_19080
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

