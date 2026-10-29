// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABEE0
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABEE0 jmp     cs:off_2C7B758
//
// Resolved target: func_tail_iterator_set
// Target address:  0x5CB630
// GOT/IAT slot:    0x2C7B758
// Slot symbol:     off_2C7B758
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

