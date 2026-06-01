// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E30
// Name:            .save_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E30 jmp     cs:save_dirtree_ptr
//
// Resolved target: save_dirtree
// Target address:  0x8D8AB8
// GOT/IAT slot:    0x8A3BB8
// Slot symbol:     save_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .save_dirtree(/* see target signature */)
{
    // Tail-call to save_dirtree via GOT/IAT indirection
    return save_dirtree(/* forwarded args */);
}

