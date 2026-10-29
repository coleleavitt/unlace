// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC850
// Name:            .func_item_iterator_succ
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC850 jmp     cs:off_2C7BC10
//
// Resolved target: func_item_iterator_succ
// Target address:  0x5CBE50
// GOT/IAT slot:    0x2C7BC10
// Slot symbol:     off_2C7BC10
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_succ(/* see target signature */)
{
    // Tail-call to func_item_iterator_succ via GOT/IAT indirection
    return func_item_iterator_succ(/* forwarded args */);
}

