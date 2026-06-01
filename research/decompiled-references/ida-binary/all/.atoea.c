// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1152F0
// Name:            .atoea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1152F0 jmp     cs:atoea_ptr
//
// Resolved target: atoea
// Target address:  0x8D5BC0
// GOT/IAT slot:    0x8A1618
// Slot symbol:     atoea_ptr
// Target type:     <no type info>
// ============================================================

void .atoea(/* see target signature */)
{
    // Tail-call to atoea via GOT/IAT indirection
    return atoea(/* forwarded args */);
}

