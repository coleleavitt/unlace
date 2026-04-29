// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34A0
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34A0 jmp     cs:off_20238
//
// Resolved target: __cxa_rethrow
// Target address:  0x21B68
// GOT/IAT slot:    0x20238
// Slot symbol:     off_20238
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

