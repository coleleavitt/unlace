// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAAC0
// Name:            .dirtree_rmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAAC0 jmp     cs:off_CA548
//
// Resolved target: dirtree_rmdir
// Target address:  0xD0E98
// GOT/IAT slot:    0xCA548
// Slot symbol:     off_CA548
// Target type:     <no type info>
// ============================================================

void .dirtree_rmdir(/* see target signature */)
{
    // Tail-call to dirtree_rmdir via GOT/IAT indirection
    return dirtree_rmdir(/* forwarded args */);
}

