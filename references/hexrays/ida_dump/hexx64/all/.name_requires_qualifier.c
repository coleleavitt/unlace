// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C6D0
// Name:            .name_requires_qualifier
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C6D0 jmp     cs:off_4EDB50
//
// Resolved target: name_requires_qualifier
// Target address:  0x4F1E80
// GOT/IAT slot:    0x4EDB50
// Slot symbol:     off_4EDB50
// Target type:     <no type info>
// ============================================================

void .name_requires_qualifier(/* see target signature */)
{
    // Tail-call to name_requires_qualifier via GOT/IAT indirection
    return name_requires_qualifier(/* forwarded args */);
}

