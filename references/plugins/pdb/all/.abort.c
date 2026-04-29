// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D2E0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D2E0 jmp     cs:off_B3158
//
// Resolved target: abort
// Target address:  0xB38E8
// GOT/IAT slot:    0xB3158
// Slot symbol:     off_B3158
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

