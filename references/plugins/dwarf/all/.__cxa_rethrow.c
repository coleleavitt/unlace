// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA70
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA70 jmp     cs:off_CA520
//
// Resolved target: __cxa_rethrow
// Target address:  0xD0E70
// GOT/IAT slot:    0xCA520
// Slot symbol:     off_CA520
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

