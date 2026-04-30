// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119840
// Name:            .dirtree_mkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119840 jmp     cs:dirtree_mkdir_ptr
//
// Resolved target: dirtree_mkdir
// Target address:  0x8D8738
// GOT/IAT slot:    0x8A38C0
// Slot symbol:     dirtree_mkdir_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_mkdir(/* see target signature */)
{
    // Tail-call to dirtree_mkdir via GOT/IAT indirection
    return dirtree_mkdir(/* forwarded args */);
}

