// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65E0
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65E0 jmp     cs:off_2D2D8
//
// Resolved target: __cxa_rethrow
// Target address:  0x2D7E8
// GOT/IAT slot:    0x2D2D8
// Slot symbol:     off_2D2D8
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

