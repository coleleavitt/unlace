// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D780
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D780 jmp     cs:off_B33A8
//
// Resolved target: print_tinfo
// Target address:  0xB3B48
// GOT/IAT slot:    0xB33A8
// Slot symbol:     off_B33A8
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

