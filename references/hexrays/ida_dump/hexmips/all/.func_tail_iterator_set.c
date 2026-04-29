// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC30
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC30 jmp     cs:off_4CDE00
//
// Resolved target: func_tail_iterator_set
// Target address:  0x4D0840
// GOT/IAT slot:    0x4CDE00
// Slot symbol:     off_4CDE00
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

