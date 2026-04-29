// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A380
// Name:            .print_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A380 jmp     cs:off_4B99A8
//
// Resolved target: print_argloc
// Target address:  0x4BC3A8
// GOT/IAT slot:    0x4B99A8
// Slot symbol:     off_4B99A8
// Target type:     <no type info>
// ============================================================

void .print_argloc(/* see target signature */)
{
    // Tail-call to print_argloc via GOT/IAT indirection
    return print_argloc(/* forwarded args */);
}

