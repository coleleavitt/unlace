// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA20
// Name:            .dirtree_mkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA20 jmp     cs:off_CA4F8
//
// Resolved target: dirtree_mkdir
// Target address:  0xD0E40
// GOT/IAT slot:    0xCA4F8
// Slot symbol:     off_CA4F8
// Target type:     <no type info>
// ============================================================

void .dirtree_mkdir(/* see target signature */)
{
    // Tail-call to dirtree_mkdir via GOT/IAT indirection
    return dirtree_mkdir(/* forwarded args */);
}

