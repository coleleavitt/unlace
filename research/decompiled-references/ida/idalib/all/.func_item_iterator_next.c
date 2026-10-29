// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD990
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD990 jmp     cs:off_2C7C4B0
//
// Resolved target: func_item_iterator_next
// Target address:  0x5CBFA0
// GOT/IAT slot:    0x2C7C4B0
// Slot symbol:     off_2C7C4B0
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

