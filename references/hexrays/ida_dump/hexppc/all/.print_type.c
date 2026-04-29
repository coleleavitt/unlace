// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFF0
// Name:            .print_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFF0 jmp     cs:off_4DA7E0
//
// Resolved target: print_type
// Target address:  0x4DD1D8
// GOT/IAT slot:    0x4DA7E0
// Slot symbol:     off_4DA7E0
// Target type:     <no type info>
// ============================================================

void .print_type(/* see target signature */)
{
    // Tail-call to print_type via GOT/IAT indirection
    return print_type(/* forwarded args */);
}

