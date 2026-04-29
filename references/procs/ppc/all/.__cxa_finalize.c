// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x202F0
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x202F0 jmp     cs:off_95160
//
// Resolved target: __cxa_finalize
// Target address:  0x95B98
// GOT/IAT slot:    0x95160
// Slot symbol:     off_95160
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

