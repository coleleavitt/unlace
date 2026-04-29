// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_6030
//
// Resolved target: __cxa_finalize
// Target address:  0x61B8
// GOT/IAT slot:    0x6030
// Slot symbol:     off_6030
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

