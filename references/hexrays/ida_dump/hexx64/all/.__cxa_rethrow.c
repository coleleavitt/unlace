// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA60
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA60 jmp     cs:off_4EDD18
//
// Resolved target: __cxa_rethrow
// Target address:  0x4F2058
// GOT/IAT slot:    0x4EDD18
// Slot symbol:     off_4EDD18
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

