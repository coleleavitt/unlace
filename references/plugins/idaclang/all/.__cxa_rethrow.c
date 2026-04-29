// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33F0
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33F0 jmp     cs:off_291E0
//
// Resolved target: __cxa_rethrow
// Target address:  0x295A0
// GOT/IAT slot:    0x291E0
// Slot symbol:     off_291E0
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

