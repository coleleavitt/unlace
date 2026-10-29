// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A3D0
// Name:            .dirtree_get_entry_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A3D0 jmp     cs:dirtree_get_entry_name_ptr
//
// Resolved target: dirtree_get_entry_name
// Target address:  0x8D8E80
// GOT/IAT slot:    0x8A3E88
// Slot symbol:     dirtree_get_entry_name_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_get_entry_name(/* see target signature */)
{
    // Tail-call to dirtree_get_entry_name via GOT/IAT indirection
    return dirtree_get_entry_name(/* forwarded args */);
}

