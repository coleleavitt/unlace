// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A050
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A050 jmp     cs:__cxa_rethrow_ptr
//
// Resolved target: __cxa_rethrow
// Target address:  0x8D8C40
// GOT/IAT slot:    0x8A3CC8
// Slot symbol:     __cxa_rethrow_ptr
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

