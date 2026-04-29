// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6E0
// Name:            .func_item_iterator_succ
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6E0 jmp     cs:off_35358
//
// Resolved target: func_item_iterator_succ
// Target address:  0x359A8
// GOT/IAT slot:    0x35358
// Slot symbol:     off_35358
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_succ(/* see target signature */)
{
    // Tail-call to func_item_iterator_succ via GOT/IAT indirection
    return func_item_iterator_succ(/* forwarded args */);
}

