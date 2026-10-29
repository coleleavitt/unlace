// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD130
// Name:            .dirtree_traverse
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD130 jmp     cs:off_2C7C080
//
// Resolved target: dirtree_traverse
// Target address:  0x77A490
// GOT/IAT slot:    0x2C7C080
// Slot symbol:     off_2C7C080
// Target type:     <no type info>
// ============================================================

void .dirtree_traverse(/* see target signature */)
{
    // Tail-call to dirtree_traverse via GOT/IAT indirection
    return dirtree_traverse(/* forwarded args */);
}

