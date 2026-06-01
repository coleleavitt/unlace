// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7950
// Name:            .dirtree_get_dir_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7950 jmp     cs:off_2C79490
//
// Resolved target: dirtree_get_dir_size
// Target address:  0x779FF0
// GOT/IAT slot:    0x2C79490
// Slot symbol:     off_2C79490
// Target type:     <no type info>
// ============================================================

void .dirtree_get_dir_size(/* see target signature */)
{
    // Tail-call to dirtree_get_dir_size via GOT/IAT indirection
    return dirtree_get_dir_size(/* forwarded args */);
}

