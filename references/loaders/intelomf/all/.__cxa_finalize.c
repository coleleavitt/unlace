// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_5028
//
// Resolved target: __cxa_finalize
// Target address:  0x5270
// GOT/IAT slot:    0x5028
// Slot symbol:     off_5028
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

