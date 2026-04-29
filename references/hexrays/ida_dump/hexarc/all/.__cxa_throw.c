// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE30
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE30 jmp     cs:off_4B9F00
//
// Resolved target: __cxa_throw
// Target address:  0x4BC930
// GOT/IAT slot:    0x4B9F00
// Slot symbol:     off_4B9F00
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

