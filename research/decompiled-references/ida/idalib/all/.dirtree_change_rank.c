// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD0D0
// Name:            .dirtree_change_rank
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD0D0 jmp     cs:off_2C7C050
//
// Resolved target: dirtree_change_rank
// Target address:  0x77A2C0
// GOT/IAT slot:    0x2C7C050
// Slot symbol:     off_2C7C050
// Target type:     <no type info>
// ============================================================

void .dirtree_change_rank(/* see target signature */)
{
    // Tail-call to dirtree_change_rank via GOT/IAT indirection
    return dirtree_change_rank(/* forwarded args */);
}

