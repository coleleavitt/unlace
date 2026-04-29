// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65D0
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65D0 jmp     cs:off_8D2D0
//
// Resolved target: __cxa_rethrow
// Target address:  0x8D888
// GOT/IAT slot:    0x8D2D0
// Slot symbol:     off_8D2D0
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

