// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3570
// Name:            .__cxa_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3570 jmp     cs:off_132A0
//
// Resolved target: __cxa_throw
// Target address:  0x13640
// GOT/IAT slot:    0x132A0
// Slot symbol:     off_132A0
// Target type:     void __noreturn(void *, struct type_info *lptinfo, void (*)(void *))
// ============================================================

/* see target sig */ .__cxa_throw(/* see target signature */)
{
    // Tail-call to __cxa_throw via GOT/IAT indirection
    return __cxa_throw(/* forwarded args */);
}

