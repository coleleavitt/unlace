// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E5A0
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E5A0 jmp     cs:off_4E9AB8
//
// Resolved target: print_tinfo
// Target address:  0x4EC4D8
// GOT/IAT slot:    0x4E9AB8
// Slot symbol:     off_4E9AB8
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

