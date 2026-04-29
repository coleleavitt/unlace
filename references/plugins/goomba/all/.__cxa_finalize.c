// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4210
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4210 jmp     cs:off_4E0F0
//
// Resolved target: __cxa_finalize
// Target address:  0x4F6F8
// GOT/IAT slot:    0x4E0F0
// Slot symbol:     off_4E0F0
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

