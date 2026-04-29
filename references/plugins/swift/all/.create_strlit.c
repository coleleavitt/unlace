// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4760
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4760 jmp     cs:off_28398
//
// Resolved target: create_strlit
// Target address:  0x29D50
// GOT/IAT slot:    0x28398
// Slot symbol:     off_28398
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

