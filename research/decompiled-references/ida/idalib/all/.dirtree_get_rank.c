// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA5A0
// Name:            .dirtree_get_rank
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA5A0 jmp     cs:off_2C7AAB8
//
// Resolved target: dirtree_get_rank
// Target address:  0x77A1C0
// GOT/IAT slot:    0x2C7AAB8
// Slot symbol:     off_2C7AAB8
// Target type:     <no type info>
// ============================================================

void .dirtree_get_rank(/* see target signature */)
{
    // Tail-call to dirtree_get_rank via GOT/IAT indirection
    return dirtree_get_rank(/* forwarded args */);
}

