// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B610
// Name:            .name_requires_qualifier
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B610 jmp     cs:off_4CDAF0
//
// Resolved target: name_requires_qualifier
// Target address:  0x4D0518
// GOT/IAT slot:    0x4CDAF0
// Slot symbol:     off_4CDAF0
// Target type:     <no type info>
// ============================================================

void .name_requires_qualifier(/* see target signature */)
{
    // Tail-call to name_requires_qualifier via GOT/IAT indirection
    return name_requires_qualifier(/* forwarded args */);
}

