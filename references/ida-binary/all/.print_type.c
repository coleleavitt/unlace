// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B9D0
// Name:            .print_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B9D0 jmp     cs:print_type_ptr
//
// Resolved target: print_type
// Target address:  0x8D9C50
// GOT/IAT slot:    0x8A4988
// Slot symbol:     print_type_ptr
// Target type:     <no type info>
// ============================================================

void .print_type(/* see target signature */)
{
    // Tail-call to print_type via GOT/IAT indirection
    return print_type(/* forwarded args */);
}

