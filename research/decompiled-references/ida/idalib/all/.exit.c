// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC300
// Name:            .exit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC300 jmp     cs:off_2C7B968
//
// Resolved target: exit
// Target address:  0x2D11D60
// GOT/IAT slot:    0x2C7B968
// Slot symbol:     off_2C7B968
// Target type:     void __noreturn(int status)
// ============================================================

/* see target sig */ .exit(/* see target signature */)
{
    // Tail-call to exit via GOT/IAT indirection
    return exit(/* forwarded args */);
}

