// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C630
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C630 jmp     cs:off_4EDB00
//
// Resolved target: print_tinfo
// Target address:  0x4F1E28
// GOT/IAT slot:    0x4EDB00
// Slot symbol:     off_4EDB00
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

