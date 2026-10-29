// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E30
// Name:            .add_base_tils
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E30 jmp     cs:off_2C79F00
//
// Resolved target: add_base_tils
// Target address:  0x655A00
// GOT/IAT slot:    0x2C79F00
// Slot symbol:     off_2C79F00
// Target type:     <no type info>
// ============================================================

void .add_base_tils(/* see target signature */)
{
    // Tail-call to add_base_tils via GOT/IAT indirection
    return add_base_tils(/* forwarded args */);
}

