// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1188B0
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1188B0 jmp     cs:del_items_ptr
//
// Resolved target: del_items
// Target address:  0x8D7D50
// GOT/IAT slot:    0x8A30F8
// Slot symbol:     del_items_ptr
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}

