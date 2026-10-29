// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8CA0
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8CA0 jmp     cs:off_2C79E38
//
// Resolved target: print_tinfo
// Target address:  0x66BD20
// GOT/IAT slot:    0x2C79E38
// Slot symbol:     off_2C79E38
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

