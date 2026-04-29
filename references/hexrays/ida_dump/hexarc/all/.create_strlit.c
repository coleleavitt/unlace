// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE50
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE50 jmp     cs:off_4B9F10
//
// Resolved target: create_strlit
// Target address:  0x4BC940
// GOT/IAT slot:    0x4B9F10
// Slot symbol:     off_4B9F10
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

