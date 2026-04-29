// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B380
// Name:            .print_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B380 jmp     cs:off_4CD9A8
//
// Resolved target: print_argloc
// Target address:  0x4D03C8
// GOT/IAT slot:    0x4CD9A8
// Slot symbol:     off_4CD9A8
// Target type:     <no type info>
// ============================================================

void .print_argloc(/* see target signature */)
{
    // Tail-call to print_argloc via GOT/IAT indirection
    return print_argloc(/* forwarded args */);
}

