// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116030
// Name:            .dirtree_rmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116030 jmp     cs:dirtree_rmdir_ptr
//
// Resolved target: dirtree_rmdir
// Target address:  0x8D6408
// GOT/IAT slot:    0x8A1CB8
// Slot symbol:     dirtree_rmdir_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_rmdir(/* see target signature */)
{
    // Tail-call to dirtree_rmdir via GOT/IAT indirection
    return dirtree_rmdir(/* forwarded args */);
}

