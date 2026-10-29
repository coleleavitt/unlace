// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD9C0
// Name:            .print_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD9C0 jmp     cs:off_2C7C4C8
//
// Resolved target: print_type
// Target address:  0x60A2A0
// GOT/IAT slot:    0x2C7C4C8
// Slot symbol:     off_2C7C4C8
// Target type:     <no type info>
// ============================================================

void .print_type(/* see target signature */)
{
    // Tail-call to print_type via GOT/IAT indirection
    return print_type(/* forwarded args */);
}

