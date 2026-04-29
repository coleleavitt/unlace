// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC20
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC20 jmp     cs:off_4DADF8
//
// Resolved target: func_tail_iterator_set
// Target address:  0x4DD818
// GOT/IAT slot:    0x4DADF8
// Slot symbol:     off_4DADF8
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

