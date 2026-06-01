// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA2F0
// Name:            .dirtree_rmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA2F0 jmp     cs:off_2C7A960
//
// Resolved target: dirtree_rmdir
// Target address:  0x77E640
// GOT/IAT slot:    0x2C7A960
// Slot symbol:     off_2C7A960
// Target type:     <no type info>
// ============================================================

void .dirtree_rmdir(/* see target signature */)
{
    // Tail-call to dirtree_rmdir via GOT/IAT indirection
    return dirtree_rmdir(/* forwarded args */);
}

