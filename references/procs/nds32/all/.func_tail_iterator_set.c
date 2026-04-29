// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86C0
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86C0 jmp     cs:off_2A348
//
// Resolved target: func_tail_iterator_set
// Target address:  0x2A8C8
// GOT/IAT slot:    0x2A348
// Slot symbol:     off_2A348
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

