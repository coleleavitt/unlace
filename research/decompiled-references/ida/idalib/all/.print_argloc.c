// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8980
// Name:            .print_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8980 jmp     cs:off_2C79CA8
//
// Resolved target: print_argloc
// Target address:  0x6B05F0
// GOT/IAT slot:    0x2C79CA8
// Slot symbol:     off_2C79CA8
// Target type:     <no type info>
// ============================================================

void .print_argloc(/* see target signature */)
{
    // Tail-call to print_argloc via GOT/IAT indirection
    return print_argloc(/* forwarded args */);
}

