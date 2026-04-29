// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE70
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE70 jmp     cs:off_4BFF20
//
// Resolved target: create_strlit
// Target address:  0x4C3448
// GOT/IAT slot:    0x4BFF20
// Slot symbol:     off_4BFF20
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

