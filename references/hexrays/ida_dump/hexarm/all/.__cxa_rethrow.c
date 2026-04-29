// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E9B0
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E9B0 jmp     cs:off_4E9CC0
//
// Resolved target: __cxa_rethrow
// Target address:  0x4EC700
// GOT/IAT slot:    0x4E9CC0
// Slot symbol:     off_4E9CC0
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

