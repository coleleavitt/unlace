// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4850
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4850 jmp     cs:off_4E410
//
// Resolved target: __cxa_rethrow
// Target address:  0x4FA38
// GOT/IAT slot:    0x4E410
// Slot symbol:     off_4E410
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

