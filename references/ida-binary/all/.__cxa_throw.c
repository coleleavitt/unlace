// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1139B0
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1139B0 jmp     cs:__cxa_throw_ptr
//
// Resolved target: __cxa_throw
// Target address:  0x8D4B68
// GOT/IAT slot:    0x8A0978
// Slot symbol:     __cxa_throw_ptr
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

