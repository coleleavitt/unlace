// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B9A0
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B9A0 jmp     cs:func_item_iterator_next_ptr
//
// Resolved target: func_item_iterator_next
// Target address:  0x8D9C38
// GOT/IAT slot:    0x8A4970
// Slot symbol:     func_item_iterator_next_ptr
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

