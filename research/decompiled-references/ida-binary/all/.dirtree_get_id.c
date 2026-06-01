// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E80
// Name:            .dirtree_get_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E80 jmp     cs:dirtree_get_id_ptr
//
// Resolved target: dirtree_get_id
// Target address:  0x8D7730
// GOT/IAT slot:    0x8A2BE0
// Slot symbol:     dirtree_get_id_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_get_id(/* see target signature */)
{
    // Tail-call to dirtree_get_id via GOT/IAT indirection
    return dirtree_get_id(/* forwarded args */);
}

