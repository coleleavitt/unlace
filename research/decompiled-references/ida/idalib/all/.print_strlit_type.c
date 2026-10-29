// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB10
// Name:            .print_strlit_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB10 jmp     cs:off_2C7BD70
//
// Resolved target: print_strlit_type
// Target address:  0x35A9E0
// GOT/IAT slot:    0x2C7BD70
// Slot symbol:     off_2C7BD70
// Target type:     <no type info>
// ============================================================

void .print_strlit_type(/* see target signature */)
{
    // Tail-call to print_strlit_type via GOT/IAT indirection
    return print_strlit_type(/* forwarded args */);
}

