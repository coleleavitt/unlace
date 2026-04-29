// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CFB0
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CFB0 jmp     cs:off_4EDFC0
//
// Resolved target: create_strlit
// Target address:  0x4F2310
// GOT/IAT slot:    0x4EDFC0
// Slot symbol:     off_4EDFC0
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

