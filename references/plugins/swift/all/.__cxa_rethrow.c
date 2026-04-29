// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4640
// Name:            .__cxa_rethrow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4640 jmp     cs:off_28308
//
// Resolved target: __cxa_rethrow
// Target address:  0x29CB0
// GOT/IAT slot:    0x28308
// Slot symbol:     off_28308
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ .__cxa_rethrow(/* see target signature */)
{
    // Tail-call to __cxa_rethrow via GOT/IAT indirection
    return __cxa_rethrow(/* forwarded args */);
}

