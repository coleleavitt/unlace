// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A950
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A950 jmp     cs:off_4B9C90
//
// Resolved target: __cxa_rethrow
// Target address:  0x4BC6B0
// GOT/IAT slot:    0x4B9C90
// Slot symbol:     off_4B9C90
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

