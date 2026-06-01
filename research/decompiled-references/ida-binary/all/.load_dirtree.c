// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118B00
// Name:            .load_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118B00 jmp     cs:load_dirtree_ptr
//
// Resolved target: load_dirtree
// Target address:  0x8D7EC0
// GOT/IAT slot:    0x8A3220
// Slot symbol:     load_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .load_dirtree(/* see target signature */)
{
    // Tail-call to load_dirtree via GOT/IAT indirection
    return load_dirtree(/* forwarded args */);
}

