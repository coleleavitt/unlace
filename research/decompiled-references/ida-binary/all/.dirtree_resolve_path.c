// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150A0
// Name:            .dirtree_resolve_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150A0 jmp     cs:dirtree_resolve_path_ptr
//
// Resolved target: dirtree_resolve_path
// Target address:  0x8D5A28
// GOT/IAT slot:    0x8A14F0
// Slot symbol:     dirtree_resolve_path_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_resolve_path(/* see target signature */)
{
    // Tail-call to dirtree_resolve_path via GOT/IAT indirection
    return dirtree_resolve_path(/* forwarded args */);
}

