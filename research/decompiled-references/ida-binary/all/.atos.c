// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D20
// Name:            .atos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D20 jmp     cs:atos_ptr
//
// Resolved target: atos
// Target address:  0x8D3900
// GOT/IAT slot:    0x89FB30
// Slot symbol:     atos_ptr
// Target type:     <no type info>
// ============================================================

void .atos(/* see target signature */)
{
    // Tail-call to atos via GOT/IAT indirection
    return atos(/* forwarded args */);
}

