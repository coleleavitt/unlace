// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EEB0
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EEB0 jmp     cs:off_4E9F40
//
// Resolved target: create_strlit
// Target address:  0x4EC990
// GOT/IAT slot:    0x4E9F40
// Slot symbol:     off_4E9F40
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

