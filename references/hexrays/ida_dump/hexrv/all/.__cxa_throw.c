// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE50
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE50 jmp     cs:off_4BFF10
//
// Resolved target: __cxa_throw
// Target address:  0x4C3438
// GOT/IAT slot:    0x4BFF10
// Slot symbol:     off_4BFF10
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

