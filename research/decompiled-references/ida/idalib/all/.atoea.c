// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9BD0
// Name:            .atoea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9BD0 jmp     cs:off_2C7A5D0
//
// Resolved target: atoea
// Target address:  0x39FB60
// GOT/IAT slot:    0x2C7A5D0
// Slot symbol:     off_2C7A5D0
// Target type:     <no type info>
// ============================================================

void .atoea(/* see target signature */)
{
    // Tail-call to atoea via GOT/IAT indirection
    return atoea(/* forwarded args */);
}

