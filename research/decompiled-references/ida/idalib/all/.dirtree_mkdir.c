// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC500
// Name:            .dirtree_mkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC500 jmp     cs:off_2C7BA68
//
// Resolved target: dirtree_mkdir
// Target address:  0x77BA40
// GOT/IAT slot:    0x2C7BA68
// Slot symbol:     off_2C7BA68
// Target type:     <no type info>
// ============================================================

void .dirtree_mkdir(/* see target signature */)
{
    // Tail-call to dirtree_mkdir via GOT/IAT indirection
    return dirtree_mkdir(/* forwarded args */);
}

