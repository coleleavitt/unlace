// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE60
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE60 jmp     cs:off_4C0F18
//
// Resolved target: __cxa_throw
// Target address:  0x4C3F40
// GOT/IAT slot:    0x4C0F18
// Slot symbol:     off_4C0F18
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

