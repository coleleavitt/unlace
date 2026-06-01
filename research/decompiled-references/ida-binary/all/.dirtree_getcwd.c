// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118040
// Name:            .dirtree_getcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118040 jmp     cs:dirtree_getcwd_ptr
//
// Resolved target: dirtree_getcwd
// Target address:  0x8D7848
// GOT/IAT slot:    0x8A2CC0
// Slot symbol:     dirtree_getcwd_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_getcwd(/* see target signature */)
{
    // Tail-call to dirtree_getcwd via GOT/IAT indirection
    return dirtree_getcwd(/* forwarded args */);
}

