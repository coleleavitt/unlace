// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA190
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA190 jmp     cs:off_480C8
//
// Resolved target: __cxa_rethrow
// Target address:  0x48428
// GOT/IAT slot:    0x480C8
// Slot symbol:     off_480C8
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

