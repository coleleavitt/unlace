// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4690
// Name:            .dirtree_rmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4690 jmp     cs:off_28330
//
// Resolved target: dirtree_rmdir
// Target address:  0x29CD8
// GOT/IAT slot:    0x28330
// Slot symbol:     off_28330
// Target type:     <no type info>
// ============================================================

void .dirtree_rmdir(/* see target signature */)
{
    // Tail-call to dirtree_rmdir via GOT/IAT indirection
    return dirtree_rmdir(/* forwarded args */);
}

