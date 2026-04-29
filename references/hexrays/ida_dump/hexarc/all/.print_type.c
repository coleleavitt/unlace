// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29FE0
// Name:            .print_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29FE0 jmp     cs:off_4B97D8
//
// Resolved target: print_type
// Target address:  0x4BC1D0
// GOT/IAT slot:    0x4B97D8
// Slot symbol:     off_4B97D8
// Target type:     <no type info>
// ============================================================

void .print_type(/* see target signature */)
{
    // Tail-call to print_type via GOT/IAT indirection
    return print_type(/* forwarded args */);
}

