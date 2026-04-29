// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3330
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3330 jmp     cs:off_29180
//
// Resolved target: print_tinfo
// Target address:  0x29530
// GOT/IAT slot:    0x29180
// Slot symbol:     off_29180
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

