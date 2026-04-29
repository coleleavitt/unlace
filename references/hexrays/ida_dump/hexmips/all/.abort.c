// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D0 jmp     cs:off_4CD450
//
// Resolved target: abort
// Target address:  0x4CFE48
// GOT/IAT slot:    0x4CD450
// Slot symbol:     off_4CD450
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

