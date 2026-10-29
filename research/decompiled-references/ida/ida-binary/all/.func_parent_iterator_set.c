// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1128D0
// Name:            .func_parent_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1128D0 jmp     cs:func_parent_iterator_set_ptr
//
// Resolved target: func_parent_iterator_set
// Target address:  0x8D4078
// GOT/IAT slot:    0x8A0108
// Slot symbol:     func_parent_iterator_set_ptr
// Target type:     <no type info>
// ============================================================

void .func_parent_iterator_set(/* see target signature */)
{
    // Tail-call to func_parent_iterator_set via GOT/IAT indirection
    return func_parent_iterator_set(/* forwarded args */);
}

