// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4630
// Name:            .dirtree_mkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4630 jmp     cs:off_28300
//
// Resolved target: dirtree_mkdir
// Target address:  0x29CA0
// GOT/IAT slot:    0x28300
// Slot symbol:     off_28300
// Target type:     <no type info>
// ============================================================

void .dirtree_mkdir(/* see target signature */)
{
    // Tail-call to dirtree_mkdir via GOT/IAT indirection
    return dirtree_mkdir(/* forwarded args */);
}

