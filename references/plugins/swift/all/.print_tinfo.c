// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4540
// Name:            .print_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4540 jmp     cs:off_28288
//
// Resolved target: print_tinfo
// Target address:  0x29C20
// GOT/IAT slot:    0x28288
// Slot symbol:     off_28288
// Target type:     <no type info>
// ============================================================

void .print_tinfo(/* see target signature */)
{
    // Tail-call to print_tinfo via GOT/IAT indirection
    return print_tinfo(/* forwarded args */);
}

