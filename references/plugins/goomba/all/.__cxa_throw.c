// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4980
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4980 jmp     cs:off_4E4A8
//
// Resolved target: __cxa_throw
// Target address:  0x4FAE0
// GOT/IAT slot:    0x4E4A8
// Slot symbol:     off_4E4A8
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

