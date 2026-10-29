// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E40
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E40 jmp     cs:func_tail_iterator_set_ptr
//
// Resolved target: func_tail_iterator_set
// Target address:  0x8D8098
// GOT/IAT slot:    0x8A33C0
// Slot symbol:     func_tail_iterator_set_ptr
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

