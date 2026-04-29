// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B600
// Name:            .name_requires_qualifier
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B600 jmp     cs:off_4DAAE8
//
// Resolved target: name_requires_qualifier
// Target address:  0x4DD4F0
// GOT/IAT slot:    0x4DAAE8
// Slot symbol:     off_4DAAE8
// Target type:     <no type info>
// ============================================================

void .name_requires_qualifier(/* see target signature */)
{
    // Tail-call to name_requires_qualifier via GOT/IAT indirection
    return name_requires_qualifier(/* forwarded args */);
}

