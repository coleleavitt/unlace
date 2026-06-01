// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119AF0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119AF0 jmp     cs:abort_ptr
//
// Resolved target: abort
// Target address:  0x8D88D8
// GOT/IAT slot:    0x8A3A18
// Slot symbol:     abort_ptr
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

