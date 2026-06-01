// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F90
// Name:            .func_parent_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F90 jmp     cs:off_2C797B0
//
// Resolved target: func_parent_iterator_set
// Target address:  0x5CBB00
// GOT/IAT slot:    0x2C797B0
// Slot symbol:     off_2C797B0
// Target type:     <no type info>
// ============================================================

void .func_parent_iterator_set(/* see target signature */)
{
    // Tail-call to func_parent_iterator_set via GOT/IAT indirection
    return func_parent_iterator_set(/* forwarded args */);
}

