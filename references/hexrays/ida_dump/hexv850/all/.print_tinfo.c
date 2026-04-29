// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B570
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B570 jmp     cs:off_4C0AA0
//
// Resolved target: print_tinfo
// Target address:  0x4C3A98
// GOT/IAT slot:    0x4C0AA0
// Slot symbol:     off_4C0AA0
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

