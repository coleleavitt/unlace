// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC10
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC10 jmp     cs:off_CA5F0
//
// Resolved target: __cxa_throw
// Target address:  0xD0F50
// GOT/IAT slot:    0xCA5F0
// Slot symbol:     off_CA5F0
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

