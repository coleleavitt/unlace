// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B560
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B560 jmp     cs:off_4BFA98
//
// Resolved target: print_tinfo
// Target address:  0x4C2F90
// GOT/IAT slot:    0x4BFA98
// Slot symbol:     off_4BFA98
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

