// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_5048
//
// Resolved target: abort
// Target address:  0x51A0
// GOT/IAT slot:    0x5048
// Slot symbol:     off_5048
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

