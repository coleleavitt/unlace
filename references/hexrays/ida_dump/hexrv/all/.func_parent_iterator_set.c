// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B360
// Name:            .func_parent_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B360 jmp     cs:off_4BF998
//
// Resolved target: func_parent_iterator_set
// Target address:  0x4C2E90
// GOT/IAT slot:    0x4BF998
// Slot symbol:     off_4BF998
// Target type:     <no type info>
// ============================================================

void .func_parent_iterator_set(/* see target signature */)
{
    // Tail-call to func_parent_iterator_set via GOT/IAT indirection
    return func_parent_iterator_set(/* forwarded args */);
}

