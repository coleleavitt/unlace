// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D8E0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D8E0 jmp     cs:off_4E9458
//
// Resolved target: abort
// Target address:  0x4EBE50
// GOT/IAT slot:    0x4E9458
// Slot symbol:     off_4E9458
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

