// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A310
// Name:            .print_strlit_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A310 jmp     cs:print_strlit_type_ptr
//
// Resolved target: print_strlit_type
// Target address:  0x8D8DD8
// GOT/IAT slot:    0x8A3E28
// Slot symbol:     print_strlit_type_ptr
// Target type:     <no type info>
// ============================================================

void .print_strlit_type(/* see target signature */)
{
    // Tail-call to print_strlit_type via GOT/IAT indirection
    return print_strlit_type(/* forwarded args */);
}

