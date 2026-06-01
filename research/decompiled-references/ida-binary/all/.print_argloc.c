// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1136F0
// Name:            .print_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1136F0 jmp     cs:print_argloc_ptr
//
// Resolved target: print_argloc
// Target address:  0x8D4990
// GOT/IAT slot:    0x8A0818
// Slot symbol:     print_argloc_ptr
// Target type:     <no type info>
// ============================================================

void .print_argloc(/* see target signature */)
{
    // Tail-call to print_argloc via GOT/IAT indirection
    return print_argloc(/* forwarded args */);
}

