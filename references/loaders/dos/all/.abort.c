// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_B0C8
//
// Resolved target: abort
// Target address:  0xB560
// GOT/IAT slot:    0xB0C8
// Slot symbol:     off_B0C8
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

