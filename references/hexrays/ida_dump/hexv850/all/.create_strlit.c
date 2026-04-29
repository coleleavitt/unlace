// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE80
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE80 jmp     cs:off_4C0F28
//
// Resolved target: create_strlit
// Target address:  0x4C3F50
// GOT/IAT slot:    0x4C0F28
// Slot symbol:     off_4C0F28
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

