// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113B70
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113B70 jmp     cs:print_tinfo_ptr
//
// Resolved target: print_tinfo
// Target address:  0x8D4C78
// GOT/IAT slot:    0x8A0A58
// Slot symbol:     print_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

