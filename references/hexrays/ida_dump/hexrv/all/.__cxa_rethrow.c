// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B970
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B970 jmp     cs:off_4BFCA0
//
// Resolved target: __cxa_rethrow
// Target address:  0x4C31B8
// GOT/IAT slot:    0x4BFCA0
// Slot symbol:     off_4BFCA0
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

