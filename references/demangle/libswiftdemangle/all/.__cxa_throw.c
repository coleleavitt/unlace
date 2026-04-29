// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA560
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA560 jmp     cs:off_482B0
//
// Resolved target: __cxa_throw
// Target address:  0x48570
// GOT/IAT slot:    0x482B0
// Slot symbol:     off_482B0
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

