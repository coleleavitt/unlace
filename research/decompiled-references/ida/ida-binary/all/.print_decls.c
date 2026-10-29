// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119AC0
// Name:            .print_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119AC0 jmp     cs:print_decls_ptr
//
// Resolved target: print_decls
// Target address:  0x8D88C0
// GOT/IAT slot:    0x8A3A00
// Slot symbol:     print_decls_ptr
// Target type:     <no type info>
// ============================================================

void .print_decls(/* see target signature */)
{
    // Tail-call to print_decls via GOT/IAT indirection
    return print_decls(/* forwarded args */);
}

