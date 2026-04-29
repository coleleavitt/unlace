// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E3A0
// Name:            .func_parent_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E3A0 jmp     cs:off_4E99B8
//
// Resolved target: func_parent_iterator_set
// Target address:  0x4EC3D8
// GOT/IAT slot:    0x4E99B8
// Slot symbol:     off_4E99B8
// Target type:     <no type info>
// ============================================================

void .func_parent_iterator_set(/* see target signature */)
{
    // Tail-call to func_parent_iterator_set via GOT/IAT indirection
    return func_parent_iterator_set(/* forwarded args */);
}

