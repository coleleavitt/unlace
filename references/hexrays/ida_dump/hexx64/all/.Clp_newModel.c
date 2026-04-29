// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D2A0
// Name:            .Clp_newModel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D2A0 jmp     cs:off_4EE138
//
// Resolved target: Clp_newModel
// Target address:  0x4F2490
// GOT/IAT slot:    0x4EE138
// Slot symbol:     off_4EE138
// Target type:     <no type info>
// ============================================================

void .Clp_newModel(/* see target signature */)
{
    // Tail-call to Clp_newModel via GOT/IAT indirection
    return Clp_newModel(/* forwarded args */);
}

