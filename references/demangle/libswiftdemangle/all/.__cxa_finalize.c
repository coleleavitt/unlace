// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA310
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA310 jmp     cs:off_48188
//
// Resolved target: __cxa_finalize
// Target address:  0x484B8
// GOT/IAT slot:    0x48188
// Slot symbol:     off_48188
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

