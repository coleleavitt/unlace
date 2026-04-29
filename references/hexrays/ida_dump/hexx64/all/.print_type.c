// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C060
// Name:            .print_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C060 jmp     cs:off_4ED818
//
// Resolved target: print_type
// Target address:  0x4F1B28
// GOT/IAT slot:    0x4ED818
// Slot symbol:     off_4ED818
// Target type:     <no type info>
// ============================================================

void .print_type(/* see target signature */)
{
    // Tail-call to print_type via GOT/IAT indirection
    return print_type(/* forwarded args */);
}

