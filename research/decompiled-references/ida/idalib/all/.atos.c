// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A78B0
// Name:            .atos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A78B0 jmp     cs:off_2C79440
//
// Resolved target: atos
// Target address:  0x50CCA0
// GOT/IAT slot:    0x2C79440
// Slot symbol:     off_2C79440
// Target type:     <no type info>
// ============================================================

void .atos(/* see target signature */)
{
    // Tail-call to atos via GOT/IAT indirection
    return atos(/* forwarded args */);
}

