// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9950
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9950 jmp     cs:off_89490
//
// Resolved target: create_strlit
// Target address:  0x8C7C0
// GOT/IAT slot:    0x89490
// Slot symbol:     off_89490
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

