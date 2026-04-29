// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DAD0
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DAD0 jmp     cs:off_4E9550
//
// Resolved target: func_item_iterator_next
// Target address:  0x4EBF58
// GOT/IAT slot:    0x4E9550
// Slot symbol:     off_4E9550
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

