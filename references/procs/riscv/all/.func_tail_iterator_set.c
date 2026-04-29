// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8C0
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8C0 jmp     cs:off_35448
//
// Resolved target: func_tail_iterator_set
// Target address:  0x35AA8
// GOT/IAT slot:    0x35448
// Slot symbol:     off_35448
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

