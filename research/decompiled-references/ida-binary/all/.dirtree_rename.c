// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117BC0
// Name:            .dirtree_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117BC0 jmp     cs:dirtree_rename_ptr
//
// Resolved target: dirtree_rename
// Target address:  0x8D7548
// GOT/IAT slot:    0x8A2A80
// Slot symbol:     dirtree_rename_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_rename(/* see target signature */)
{
    // Tail-call to dirtree_rename via GOT/IAT indirection
    return dirtree_rename(/* forwarded args */);
}

