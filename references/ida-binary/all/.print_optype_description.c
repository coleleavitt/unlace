// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114F10
// Name:            .print_optype_description
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114F10 jmp     cs:print_optype_description_ptr
//
// Resolved target: print_optype_description
// Target address:  0x8D5948
// GOT/IAT slot:    0x8A1428
// Slot symbol:     print_optype_description_ptr
// Target type:     <no type info>
// ============================================================

void .print_optype_description(/* see target signature */)
{
    // Tail-call to print_optype_description via GOT/IAT indirection
    return print_optype_description(/* forwarded args */);
}

