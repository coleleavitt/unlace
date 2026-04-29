// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5E0
// Name:            .name_requires_qualifier
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5E0 jmp     cs:off_4B9AD8
//
// Resolved target: name_requires_qualifier
// Target address:  0x4BC4E0
// GOT/IAT slot:    0x4B9AD8
// Slot symbol:     off_4B9AD8
// Target type:     <no type info>
// ============================================================

void .name_requires_qualifier(/* see target signature */)
{
    // Tail-call to name_requires_qualifier via GOT/IAT indirection
    return name_requires_qualifier(/* forwarded args */);
}

