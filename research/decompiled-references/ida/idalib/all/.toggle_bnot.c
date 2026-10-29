// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB0E0
// Name:            .toggle_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB0E0 jmp     cs:off_2C7B058
//
// Resolved target: toggle_bnot
// Target address:  0x3D2550
// GOT/IAT slot:    0x2C7B058
// Slot symbol:     off_2C7B058
// Target type:     <no type info>
// ============================================================

void .toggle_bnot(/* see target signature */)
{
    // Tail-call to toggle_bnot via GOT/IAT indirection
    return toggle_bnot(/* forwarded args */);
}

