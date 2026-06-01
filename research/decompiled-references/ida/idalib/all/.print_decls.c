// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC640
// Name:            .print_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC640 jmp     cs:off_2C7BB08
//
// Resolved target: print_decls
// Target address:  0x654C50
// GOT/IAT slot:    0x2C7BB08
// Slot symbol:     off_2C7BB08
// Target type:     <no type info>
// ============================================================

void .print_decls(/* see target signature */)
{
    // Tail-call to print_decls via GOT/IAT indirection
    return print_decls(/* forwarded args */);
}

