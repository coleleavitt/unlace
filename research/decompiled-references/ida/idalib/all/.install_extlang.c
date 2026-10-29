// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD930
// Name:            .install_extlang
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD930 jmp     cs:off_2C7C480
//
// Resolved target: install_extlang
// Target address:  0x78A0F0
// GOT/IAT slot:    0x2C7C480
// Slot symbol:     off_2C7C480
// Target type:     <no type info>
// ============================================================

void .install_extlang(/* see target signature */)
{
    // Tail-call to install_extlang via GOT/IAT indirection
    return install_extlang(/* forwarded args */);
}

