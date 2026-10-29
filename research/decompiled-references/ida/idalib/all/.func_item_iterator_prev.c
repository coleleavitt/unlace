// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB3D0
// Name:            .func_item_iterator_prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB3D0 jmp     cs:off_2C7B1D0
//
// Resolved target: func_item_iterator_prev
// Target address:  0x5CC110
// GOT/IAT slot:    0x2C7B1D0
// Slot symbol:     off_2C7B1D0
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_prev(/* see target signature */)
{
    // Tail-call to func_item_iterator_prev via GOT/IAT indirection
    return func_item_iterator_prev(/* forwarded args */);
}

