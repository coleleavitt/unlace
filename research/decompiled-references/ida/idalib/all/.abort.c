// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC660
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC660 jmp     cs:off_2C7BB18
//
// Resolved target: abort
// Target address:  0x2D11DC8
// GOT/IAT slot:    0x2C7BB18
// Slot symbol:     off_2C7BB18
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

