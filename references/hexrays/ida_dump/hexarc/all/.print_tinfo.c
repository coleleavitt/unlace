// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A550
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A550 jmp     cs:off_4B9A90
//
// Resolved target: print_tinfo
// Target address:  0x4BC490
// GOT/IAT slot:    0x4B9A90
// Slot symbol:     off_4B9A90
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

