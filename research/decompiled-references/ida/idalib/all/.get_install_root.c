// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD8A0
// Name:            .get_install_root
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD8A0 jmp     cs:off_2C7C438
//
// Resolved target: get_install_root
// Target address:  0x834320
// GOT/IAT slot:    0x2C7C438
// Slot symbol:     off_2C7C438
// Target type:     <no type info>
// ============================================================

void .get_install_root(/* see target signature */)
{
    // Tail-call to get_install_root via GOT/IAT indirection
    return get_install_root(/* forwarded args */);
}

