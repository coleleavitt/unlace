// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB0
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB0 jmp     cs:off_4DA540
//
// Resolved target: func_item_iterator_next
// Target address:  0x4DCF28
// GOT/IAT slot:    0x4DA540
// Slot symbol:     off_4DA540
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

