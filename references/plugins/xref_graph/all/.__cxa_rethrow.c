// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17270
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17270 jmp     cs:off_4F920
//
// Resolved target: __cxa_rethrow
// Target address:  0x50E20
// GOT/IAT slot:    0x4F920
// Slot symbol:     off_4F920
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

