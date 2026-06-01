// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1159A0
// Name:            .calc_number_of_children
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1159A0 jmp     cs:calc_number_of_children_ptr
//
// Resolved target: calc_number_of_children
// Target address:  0x8D5FD0
// GOT/IAT slot:    0x8A1970
// Slot symbol:     calc_number_of_children_ptr
// Target type:     <no type info>
// ============================================================

void .calc_number_of_children(/* see target signature */)
{
    // Tail-call to calc_number_of_children via GOT/IAT indirection
    return calc_number_of_children(/* forwarded args */);
}

