// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB00
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB00 jmp     cs:off_4ED568
//
// Resolved target: func_item_iterator_next
// Target address:  0x4F1868
// GOT/IAT slot:    0x4ED568
// Slot symbol:     off_4ED568
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

