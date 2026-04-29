// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B980
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B980 jmp     cs:off_4C0CA8
//
// Resolved target: __cxa_rethrow
// Target address:  0x4C3CC0
// GOT/IAT slot:    0x4C0CA8
// Slot symbol:     off_4C0CA8
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

