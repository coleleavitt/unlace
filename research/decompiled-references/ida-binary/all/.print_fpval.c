// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113040
// Name:            .print_fpval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113040 jmp     cs:print_fpval_ptr
//
// Resolved target: print_fpval
// Target address:  0x8D4550
// GOT/IAT slot:    0x8A04C0
// Slot symbol:     print_fpval_ptr
// Target type:     <no type info>
// ============================================================

void .print_fpval(/* see target signature */)
{
    // Tail-call to print_fpval via GOT/IAT indirection
    return print_fpval(/* forwarded args */);
}

