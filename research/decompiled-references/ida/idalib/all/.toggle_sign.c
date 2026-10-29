// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8200
// Name:            .toggle_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8200 jmp     cs:off_2C798E8
//
// Resolved target: toggle_sign
// Target address:  0x3D2370
// GOT/IAT slot:    0x2C798E8
// Slot symbol:     off_2C798E8
// Target type:     <no type info>
// ============================================================

void .toggle_sign(/* see target signature */)
{
    // Tail-call to toggle_sign via GOT/IAT indirection
    return toggle_sign(/* forwarded args */);
}

