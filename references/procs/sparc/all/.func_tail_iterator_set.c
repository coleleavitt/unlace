// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x76A0
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x76A0 jmp     cs:off_19338
//
// Resolved target: func_tail_iterator_set
// Target address:  0x19878
// GOT/IAT slot:    0x19338
// Slot symbol:     off_19338
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

