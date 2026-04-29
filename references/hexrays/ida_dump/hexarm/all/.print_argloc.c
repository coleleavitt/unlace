// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E3C0
// Name:            .print_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E3C0 jmp     cs:off_4E99C8
//
// Resolved target: print_argloc
// Target address:  0x4EC3E8
// GOT/IAT slot:    0x4E99C8
// Slot symbol:     off_4E99C8
// Target type:     <no type info>
// ============================================================

void .print_argloc(/* see target signature */)
{
    // Tail-call to print_argloc via GOT/IAT indirection
    return print_argloc(/* forwarded args */);
}

