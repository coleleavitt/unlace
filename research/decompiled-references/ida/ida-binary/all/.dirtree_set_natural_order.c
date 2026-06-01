// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113520
// Name:            .dirtree_set_natural_order
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113520 jmp     cs:dirtree_set_natural_order_ptr
//
// Resolved target: dirtree_set_natural_order
// Target address:  0x8D4880
// GOT/IAT slot:    0x8A0730
// Slot symbol:     dirtree_set_natural_order_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_set_natural_order(/* see target signature */)
{
    // Tail-call to dirtree_set_natural_order via GOT/IAT indirection
    return dirtree_set_natural_order(/* forwarded args */);
}

