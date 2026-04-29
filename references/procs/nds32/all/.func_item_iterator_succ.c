// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8540
// Name:            .func_item_iterator_succ
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8540 jmp     cs:off_2A288
//
// Resolved target: func_item_iterator_succ
// Target address:  0x2A7F8
// GOT/IAT slot:    0x2A288
// Slot symbol:     off_2A288
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_succ(/* see target signature */)
{
    // Tail-call to func_item_iterator_succ via GOT/IAT indirection
    return func_item_iterator_succ(/* forwarded args */);
}

