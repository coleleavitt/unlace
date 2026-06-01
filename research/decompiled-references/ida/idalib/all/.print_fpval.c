// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A84E0
// Name:            .print_fpval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A84E0 jmp     cs:off_2C79A58
//
// Resolved target: print_fpval
// Target address:  0x5A3F00
// GOT/IAT slot:    0x2C79A58
// Slot symbol:     off_2C79A58
// Target type:     <no type info>
// ============================================================

void .print_fpval(/* see target signature */)
{
    // Tail-call to print_fpval via GOT/IAT indirection
    return print_fpval(/* forwarded args */);
}

