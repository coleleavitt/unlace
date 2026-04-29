// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A360
// Name:            .func_parent_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A360 jmp     cs:off_4B9998
//
// Resolved target: func_parent_iterator_set
// Target address:  0x4BC398
// GOT/IAT slot:    0x4B9998
// Slot symbol:     off_4B9998
// Target type:     <no type info>
// ============================================================

void .func_parent_iterator_set(/* see target signature */)
{
    // Tail-call to func_parent_iterator_set via GOT/IAT indirection
    return func_parent_iterator_set(/* forwarded args */);
}

