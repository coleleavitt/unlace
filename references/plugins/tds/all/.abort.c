// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_A098
//
// Resolved target: abort
// Target address:  0xA2C8
// GOT/IAT slot:    0xA098
// Slot symbol:     off_A098
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

