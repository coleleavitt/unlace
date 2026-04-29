// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E640
// Name:            .name_requires_qualifier
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E640 jmp     cs:off_4E9B08
//
// Resolved target: name_requires_qualifier
// Target address:  0x4EC530
// GOT/IAT slot:    0x4E9B08
// Slot symbol:     off_4E9B08
// Target type:     <no type info>
// ============================================================

void .name_requires_qualifier(/* see target signature */)
{
    // Tail-call to name_requires_qualifier via GOT/IAT indirection
    return name_requires_qualifier(/* forwarded args */);
}

