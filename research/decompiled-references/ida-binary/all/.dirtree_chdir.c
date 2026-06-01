// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115490
// Name:            .dirtree_chdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115490 jmp     cs:dirtree_chdir_ptr
//
// Resolved target: dirtree_chdir
// Target address:  0x8D5CB0
// GOT/IAT slot:    0x8A16E8
// Slot symbol:     dirtree_chdir_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_chdir(/* see target signature */)
{
    // Tail-call to dirtree_chdir via GOT/IAT indirection
    return dirtree_chdir(/* forwarded args */);
}

