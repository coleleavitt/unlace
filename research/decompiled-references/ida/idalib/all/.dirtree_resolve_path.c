// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A40
// Name:            .dirtree_resolve_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A40 jmp     cs:off_2C7A508
//
// Resolved target: dirtree_resolve_path
// Target address:  0x779ED0
// GOT/IAT slot:    0x2C7A508
// Slot symbol:     off_2C7A508
// Target type:     <no type info>
// ============================================================

void .dirtree_resolve_path(/* see target signature */)
{
    // Tail-call to dirtree_resolve_path via GOT/IAT indirection
    return dirtree_resolve_path(/* forwarded args */);
}

