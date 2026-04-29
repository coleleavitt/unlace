// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_8078
//
// Resolved target: __cxa_finalize
// Target address:  0x82D8
// GOT/IAT slot:    0x8078
// Slot symbol:     off_8078
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

