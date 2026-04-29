// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D940
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D940 jmp     cs:off_B3488
//
// Resolved target: __cxa_rethrow
// Target address:  0xB3C40
// GOT/IAT slot:    0xB3488
// Slot symbol:     off_B3488
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

