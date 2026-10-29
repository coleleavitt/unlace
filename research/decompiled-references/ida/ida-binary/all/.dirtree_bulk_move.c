// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118C40
// Name:            .dirtree_bulk_move
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118C40 jmp     cs:dirtree_bulk_move_ptr
//
// Resolved target: dirtree_bulk_move
// Target address:  0x8D7F68
// GOT/IAT slot:    0x8A32C0
// Slot symbol:     dirtree_bulk_move_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_bulk_move(/* see target signature */)
{
    // Tail-call to dirtree_bulk_move via GOT/IAT indirection
    return dirtree_bulk_move(/* forwarded args */);
}

