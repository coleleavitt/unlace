// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DAE0
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DAE0 jmp     cs:off_B3558
//
// Resolved target: create_strlit
// Target address:  0xB3D28
// GOT/IAT slot:    0xB3558
// Slot symbol:     off_B3558
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

