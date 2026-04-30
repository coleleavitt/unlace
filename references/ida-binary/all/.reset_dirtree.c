// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115130
// Name:            .reset_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115130 jmp     cs:reset_dirtree_ptr
//
// Resolved target: reset_dirtree
// Target address:  0x8D5A80
// GOT/IAT slot:    0x8A1538
// Slot symbol:     reset_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .reset_dirtree(/* see target signature */)
{
    // Tail-call to reset_dirtree via GOT/IAT indirection
    return reset_dirtree(/* forwarded args */);
}

