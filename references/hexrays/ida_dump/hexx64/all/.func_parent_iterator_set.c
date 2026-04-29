// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C420
// Name:            .func_parent_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C420 jmp     cs:off_4ED9F8
//
// Resolved target: func_parent_iterator_set
// Target address:  0x4F1D18
// GOT/IAT slot:    0x4ED9F8
// Slot symbol:     off_4ED9F8
// Target type:     <no type info>
// ============================================================

void .func_parent_iterator_set(/* see target signature */)
{
    // Tail-call to func_parent_iterator_set via GOT/IAT indirection
    return func_parent_iterator_set(/* forwarded args */);
}

