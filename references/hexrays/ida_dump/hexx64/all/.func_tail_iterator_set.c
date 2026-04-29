// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CD30
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CD30 jmp     cs:off_4EDE80
//
// Resolved target: func_tail_iterator_set
// Target address:  0x4F21C0
// GOT/IAT slot:    0x4EDE80
// Slot symbol:     off_4EDE80
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

