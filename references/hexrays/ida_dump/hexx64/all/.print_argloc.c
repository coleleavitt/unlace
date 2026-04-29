// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C440
// Name:            .print_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C440 jmp     cs:off_4EDA08
//
// Resolved target: print_argloc
// Target address:  0x4F1D28
// GOT/IAT slot:    0x4EDA08
// Slot symbol:     off_4EDA08
// Target type:     <no type info>
// ============================================================

void .print_argloc(/* see target signature */)
{
    // Tail-call to print_argloc via GOT/IAT indirection
    return print_argloc(/* forwarded args */);
}

