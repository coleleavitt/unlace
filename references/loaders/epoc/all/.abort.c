// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3180
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3180 jmp     cs:off_130A8
//
// Resolved target: abort
// Target address:  0x13790
// GOT/IAT slot:    0x130A8
// Slot symbol:     off_130A8
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

